#pragma once
#include "stdafx.h"
#include "Vector.h"

struct Vertex
{
public:
	Vertex() {}
	Vector3 position;
	ULONG color;
};
struct Triangle2D
{
public:
	Vector3 vertices[3];

	bool IsInTriangle() { return false; }

	void DrawTriangle2D(const Vector3 &v1, const Vector3 &v2, const Vector3 &v3);
};