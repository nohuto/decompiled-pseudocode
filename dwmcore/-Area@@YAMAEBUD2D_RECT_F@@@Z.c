float __fastcall Area(const struct D2D_RECT_F *a1)
{
  float *v1; // rcx

  if ( IsWellOrdered(a1) )
    return (float)(v1[3] - v1[1]) * (float)(v1[2] - *v1);
  else
    return 0.0;
}
