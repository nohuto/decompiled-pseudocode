char __fastcall CMILMatrix::Is2DAffineOrNaN(CMILMatrix *this, __int64 a2)
{
  char result; // al

  LOBYTE(a2) = 1;
  result = CMILMatrix::Is2DAffine<1>((__int64)this, a2);
  if ( !result )
    return 0;
  return result;
}
