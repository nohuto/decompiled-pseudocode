unsigned __int64 __fastcall RunningHash(unsigned int *a1, __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 result; // rax
  int v4; // r9d

  for ( result = 0LL; result < a3; *a1 = (1025 * (*a1 + v4)) ^ ((1025 * (*a1 + v4)) >> 6) )
  {
    v4 = *(unsigned __int8 *)(result + a2);
    ++result;
  }
  return result;
}
