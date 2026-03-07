char __fastcall CRoundedRectangleGeometryData::IsRoundedCorner(__int64 a1, unsigned int a2)
{
  char v2; // r8
  __int64 v3; // rax

  v2 = 0;
  if ( *(_BYTE *)(a1 + 52) )
    v3 = 16LL;
  else
    v3 = 8LL * a2 + 16;
  if ( *(float *)(v3 + a1) > 0.0 && *(float *)(v3 + a1 + 4) > 0.0 )
    return 1;
  return v2;
}
