/*
 * XREFs of PopUpdateOverThrottledCount @ 0x1408E7F64
 * Callers:
 *     PopCheckAndHandleThermalConditions @ 0x1403C50F8 (PopCheckAndHandleThermalConditions.c)
 *     PopThermalZoneRemove @ 0x1408E7D80 (PopThermalZoneRemove.c)
 * Callees:
 *     ZwUpdateWnfStateData @ 0x1403FDDA0 (ZwUpdateWnfStateData.c)
 *     PopDiagTraceThermalOverthrottleState @ 0x1405730E4 (PopDiagTraceThermalOverthrottleState.c)
 *     PopReleasePolicyLock @ 0x14098F590 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x14098F5D0 (PopAcquirePolicyLock.c)
 */

__int64 __fastcall PopUpdateOverThrottledCount(__int64 a1, unsigned __int8 a2)
{
  __int64 v2; // rcx
  int v4; // ecx
  __int64 v5; // rdx
  __int64 v6; // rcx
  int v8; // [rsp+58h] [rbp+10h] BYREF

  v2 = *(_QWORD *)(a1 + 48);
  v8 = 0;
  PopDiagTraceThermalOverthrottleState(v2, a2);
  PopAcquirePolicyLock(v4);
  if ( a2 )
  {
    if ( ++dword_140C22E28 == 1 )
    {
      v8 = 1;
LABEL_5:
      ZwUpdateWnfStateData((__int64)&WNF_PO_THERMAL_OVERTHROTTLE, (__int64)&v8);
    }
  }
  else if ( !--dword_140C22E28 )
  {
    goto LABEL_5;
  }
  return PopReleasePolicyLock(v6, v5);
}
