__int64 __fastcall sub_140052450(__int64 a1)
{
  __int64 v1; // rdx
  volatile __int64 *v2; // rcx
  __int64 result; // rax

  v1 = 32LL;
  _InterlockedExchange64((volatile __int64 *)(a1 + 936), 0LL);
  v2 = (volatile __int64 *)(a1 + 944);
  do
  {
    result = _InterlockedExchange64(v2++, 0LL);
    --v1;
  }
  while ( v1 );
  return result;
}
