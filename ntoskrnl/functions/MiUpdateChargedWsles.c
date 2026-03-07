volatile signed __int64 *__fastcall MiUpdateChargedWsles(__int64 a1)
{
  volatile signed __int64 *result; // rax
  unsigned __int64 v2; // rdx

  result = (volatile signed __int64 *)MiGetSharedVm(a1);
  _InterlockedExchangeAdd64(result + 6, v2);
  return result;
}
