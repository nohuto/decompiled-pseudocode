void __fastcall CPolygonBuilder::Transform(CPolygonBuilder *this, const struct D2D_MATRIX_3X2_F *a2)
{
  __int64 v2; // r9
  unsigned int v3; // r8d
  __int64 v4; // r10
  float v5; // xmm3_4

  v2 = *((_QWORD *)this + 2);
  v3 = 0;
  if ( (*((_QWORD *)this + 3) - v2) >> 3 )
  {
    v4 = 0LL;
    do
    {
      ++v3;
      v5 = (float)((float)(*(float *)(v2 + 8 * v4) * a2->m12) + (float)(*(float *)(v2 + 8 * v4 + 4) * a2->m22)) + a2->dy;
      *(float *)(v2 + 8 * v4) = (float)((float)(*(float *)(v2 + 8 * v4 + 4) * a2->m21)
                                      + (float)(*(float *)(v2 + 8 * v4) * a2->m11))
                              + a2->dx;
      *(float *)(v2 + 8 * v4 + 4) = v5;
      v2 = *((_QWORD *)this + 2);
      v4 = v3;
    }
    while ( v3 < (unsigned __int64)((*((_QWORD *)this + 3) - v2) >> 3) );
  }
}
