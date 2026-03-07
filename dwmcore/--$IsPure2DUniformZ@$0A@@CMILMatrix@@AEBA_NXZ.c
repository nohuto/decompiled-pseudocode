bool __fastcall CMILMatrix::IsPure2DUniformZ<0>(__int64 a1)
{
  char v1; // al
  __int64 v2; // r10
  char v3; // r8

  v1 = CMILMatrix::IsAffine<0>(a1, 0);
  v3 = 0;
  if ( v1 && *(float *)(v2 + 32) == 0.0 && *(float *)(v2 + 36) == 0.0 )
  {
    *(_BYTE *)(v2 + 65) = *(_BYTE *)(v2 + 65) & 0xF3 | 4;
    return CMILMatrix::ProducesUniformZ<0>(v2) != 0;
  }
  return v3;
}
