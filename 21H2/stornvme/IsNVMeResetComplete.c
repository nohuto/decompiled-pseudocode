/*
 * XREFs of IsNVMeResetComplete @ 0x1C001854C
 * Callers:
 *     NVMeHardwareReset @ 0x1C00197E8 (NVMeHardwareReset.c)
 *     NvmSubsystemReset @ 0x1C001A000 (NvmSubsystemReset.c)
 * Callees:
 *     CheckDpcWatchdogTimerExpireSoon @ 0x1C000A3FC (CheckDpcWatchdogTimerExpireSoon.c)
 */

bool __fastcall IsNVMeResetComplete(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  unsigned int v5; // ebp
  unsigned int i; // esi
  int v7; // ebx

  v4 = *(_QWORD *)(a1 + 176);
  v5 = *(_DWORD *)(a1 + 204) / 0xAu;
  for ( i = 0; ; ++i )
  {
    v7 = *(_DWORD *)(v4 + 28);
    if ( (v7 & 1) == 0 || i >= v5 )
      break;
    if ( CheckDpcWatchdogTimerExpireSoon(a1, 0LL, a3) )
    {
      _InterlockedIncrement((volatile signed __int32 *)(a1 + 4092));
      return (v7 & 1) == 0;
    }
    StorPortStallExecution(10000LL);
    v4 = *(_QWORD *)(a1 + 176);
  }
  return (v7 & 1) == 0;
}
