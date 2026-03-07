__int64 __fastcall PiUEventEstimateRequiredClientBufferSize(__int64 a1)
{
  unsigned __int64 v1; // rcx
  __int64 result; // rax

  v1 = 4160LL * *(unsigned int *)(a1 + 128);
  result = 0xFFFFFFFFLL;
  if ( v1 <= 0xFFFFFFFF )
    return (unsigned int)v1;
  return result;
}
