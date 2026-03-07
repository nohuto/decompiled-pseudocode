__int64 __fastcall sub_140064110(volatile __int64 *a1)
{
  __int64 result; // rax

  _InterlockedExchange64(a1 + 49, 0LL);
  _InterlockedExchange64(a1 + 50, 0LL);
  result = _InterlockedExchange64(a1 + 51, 0LL);
  _InterlockedExchange64(a1 + 52, 0LL);
  return result;
}
