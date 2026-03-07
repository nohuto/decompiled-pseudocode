bool __fastcall CMILMatrix::IsPure2DUniformZ<1>(__int64 a1)
{
  char v2; // al
  char v3; // r10

  v2 = CMILMatrix::Is2DAffine<1>(a1, 0LL);
  v3 = 0;
  if ( v2 )
    return CMILMatrix::ProducesUniformZ<1>(a1);
  return v3;
}
