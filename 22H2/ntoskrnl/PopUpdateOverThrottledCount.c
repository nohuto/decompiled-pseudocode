/*
 * XREFs of PopUpdateOverThrottledCount @ 0x1408E7FB4
 * Callers:
 *     PopCheckAndHandleThermalConditions @ 0x1403C4D58 (PopCheckAndHandleThermalConditions.c)
 *     PopThermalZoneRemove @ 0x1408E7DD0 (PopThermalZoneRemove.c)
 * Callees:
 *     ZwUpdateWnfStateData @ 0x1403FD420 (ZwUpdateWnfStateData.c)
 *     PopDiagTraceThermalOverthrottleState @ 0x140573024 (PopDiagTraceThermalOverthrottleState.c)
 *     PopReleasePolicyLock @ 0x140990044 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140990084 (PopAcquirePolicyLock.c)
 */

__int64 __fastcall PopUpdateOverThrottledCount(__int64 a1, unsigned __int8 a2)
{
  __int64 v2; // rcx
  int v4; // ecx
  __int64 v5; // rdx
  __int64 v6; // rcx
  int Buffer; // [rsp+58h] [rbp+10h] BYREF

  v2 = *(_QWORD *)(a1 + 48);
  Buffer = 0;
  PopDiagTraceThermalOverthrottleState(v2, a2);
  PopAcquirePolicyLock(v4);
  if ( a2 )
  {
    if ( ++dword_140C22E88 == 1 )
    {
      Buffer = 1;
LABEL_5:
      ZwUpdateWnfStateData(&WNF_PO_THERMAL_OVERTHROTTLE, &Buffer, 4u, 0LL, 0LL, 0, 0);
    }
  }
  else if ( !--dword_140C22E88 )
  {
    goto LABEL_5;
  }
  return PopReleasePolicyLock(v6, v5);
}
