/*
 * XREFs of ControllerEnable @ 0x1C000959C
 * Callers:
 *     NVMeControllerInitPart1 @ 0x1C000D7A8 (NVMeControllerInitPart1.c)
 * Callees:
 *     CheckDpcWatchdogTimerExpireSoon @ 0x1C0025AB8 (CheckDpcWatchdogTimerExpireSoon.c)
 */

__int64 __fastcall ControllerEnable(__int64 a1)
{
  unsigned int v2; // r14d
  char v3; // di
  unsigned int i; // ebp
  int v5; // ebx
  signed __int32 v7[10]; // [rsp+0h] [rbp-28h] BYREF

  v2 = *(_DWORD *)(a1 + 212) / 0xAu;
  v3 = 0;
  *(_DWORD *)(*(_QWORD *)(a1 + 184) + 20LL) |= 1u;
  _InterlockedOr(v7, 0);
  for ( i = 0; ; ++i )
  {
    v5 = *(_DWORD *)(*(_QWORD *)(a1 + 184) + 28LL);
    if ( (v5 & 1) != 0 || i >= v2 )
      break;
    if ( (unsigned __int8)CheckDpcWatchdogTimerExpireSoon(a1, 0LL) )
    {
      _InterlockedIncrement((volatile signed __int32 *)(a1 + 4272));
      v3 = 1;
      break;
    }
    StorPortStallExecution(10000LL);
  }
  if ( (v5 & 1) != 0 )
    return 0LL;
  else
    return v3 != 0 ? -1056964596 : -1056964607;
}
