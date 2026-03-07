__int64 __fastcall sub_1400629B0(__int64 a1)
{
  __int64 result; // rax

  result = _InterlockedExchange64((volatile __int64 *)(a1 + 392), 0LL);
  _InterlockedExchange64((volatile __int64 *)(a1 + 400), 0LL);
  return result;
}
