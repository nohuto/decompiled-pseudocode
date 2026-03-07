char __fastcall DCEHitTestWindow(
        const struct tagRECT *a1,
        const struct _D3DMATRIX *a2,
        struct tagPOINT *a3,
        const struct _SUBPIXELS *a4)
{
  char v6; // di
  float x; // xmm6_4
  float y; // xmm7_4
  int v10; // ebx
  const struct _D3DVERTEX *v11; // rcx
  _OWORD v13[12]; // [rsp+20h] [rbp-118h] BYREF

  v6 = 0;
  x = (float)a3->x;
  y = (float)a3->y;
  BuildVertexList(v13, a1, a2);
  v10 = 0;
  while ( !(unsigned int)DCEPointInTriangle((struct _D3DVERTEX *)&v13[2 * (unsigned int)(3 * v10)], x, y) )
  {
    if ( (unsigned int)++v10 >= 2 )
      return v6;
  }
  return DCEInverseTransform(a1, v11, a4, a3);
}
