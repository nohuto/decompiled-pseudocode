/*
 * XREFs of IsNVMeResetComplete @ 0x1C000C0A0
 * Callers:
 *     NVMeHardwareReset @ 0x1C000F26C (NVMeHardwareReset.c)
 *     NvmSubsystemReset @ 0x1C0010BAC (NvmSubsystemReset.c)
 * Callees:
 *     CheckDpcWatchdogTimerExpireSoon @ 0x1C0025AB8 (CheckDpcWatchdogTimerExpireSoon.c)
 */

bool __fastcall IsNVMeResetComplete(__int64 a1)
{
  __int64 v2; // rax
  unsigned int v3; // ebp
  unsigned int i; // esi
  int v5; // ebx

  v2 = *(_QWORD *)(a1 + 184);
  v3 = *(_DWORD *)(a1 + 212) / 0xAu;
  for ( i = 0; ; ++i )
  {
    v5 = *(_DWORD *)(v2 + 28);
    if ( (v5 & 1) == 0 || i >= v3 )
      break;
    if ( (unsigned __int8)CheckDpcWatchdogTimerExpireSoon(a1, 0LL) )
    {
      _InterlockedIncrement((volatile signed __int32 *)(a1 + 4292));
      return (v5 & 1) == 0;
    }
    StorPortStallExecution(10000LL);
    v2 = *(_QWORD *)(a1 + 184);
  }
  return (v5 & 1) == 0;
}
