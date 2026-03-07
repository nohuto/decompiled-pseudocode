__int64 __fastcall lGetQuadrant(struct EPOINTFL *a1)
{
  float v1; // xmm1_4
  int v2; // r8d
  unsigned int v3; // r8d

  v1 = *(float *)a1;
  v2 = 0;
  if ( *((float *)a1 + 1) >= 0.0 )
  {
    if ( (v1 < 0.0 || EFLOAT::bIsZero(a1)) && EFLOAT::bIsZero((struct EPOINTFL *)((char *)a1 + 4)) )
      ++v3;
  }
  else
  {
    LOBYTE(v2) = v1 >= 0.0;
    return (unsigned int)(v2 + 2);
  }
  return v3;
}
