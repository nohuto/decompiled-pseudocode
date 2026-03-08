/*
 * XREFs of PopPepDeviceWaitWake @ 0x1402B8FC8
 * Callers:
 *     PopRequestPowerIrp @ 0x1402BA570 (PopRequestPowerIrp.c)
 *     PopRequestCompletion @ 0x1402BB410 (PopRequestCompletion.c)
 * Callees:
 *     PopPepUpdateConstraints @ 0x1402B9328 (PopPepUpdateConstraints.c)
 */

__int64 __fastcall PopPepDeviceWaitWake(__int64 a1, char a2, __int64 a3)
{
  __int64 result; // rax

  if ( a2 )
    result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 128), 0xFFFFFFFF);
  else
    result = (unsigned int)_InterlockedIncrement((volatile signed __int32 *)(a1 + 128));
  if ( (_DWORD)result == 1 )
  {
    LOBYTE(a3) = a2;
    return PopPepUpdateConstraints(a1, 5LL, a3);
  }
  return result;
}
