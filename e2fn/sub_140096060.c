__int64 __fastcall sub_140096060(volatile __int64 *a1)
{
  __int64 result; // rax

  _InterlockedExchange64(a1 + 97, 0LL);
  _InterlockedExchange64(a1 + 98, 0LL);
  _InterlockedExchange64(a1 + 99, 0LL);
  _InterlockedExchange64(a1 + 100, 0LL);
  _InterlockedExchange64(a1 + 101, 0LL);
  _InterlockedExchange64(a1 + 102, 0LL);
  _InterlockedExchange64(a1 + 103, 0LL);
  _InterlockedExchange64(a1 + 104, 0LL);
  _InterlockedExchange64(a1 + 105, 0LL);
  result = _InterlockedExchange64(a1 + 106, 0LL);
  _InterlockedExchange64(a1 + 108, 0LL);
  return result;
}
