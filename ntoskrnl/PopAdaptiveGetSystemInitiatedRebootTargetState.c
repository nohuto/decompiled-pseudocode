/*
 * XREFs of PopAdaptiveGetSystemInitiatedRebootTargetState @ 0x1409988C4
 * Callers:
 *     PopPowerInformationInternal @ 0x14073E108 (PopPowerInformationInternal.c)
 * Callees:
 *     PopAcquireAdaptiveLock @ 0x14073CCB4 (PopAcquireAdaptiveLock.c)
 *     PopReleaseAdaptiveLock @ 0x14073CD60 (PopReleaseAdaptiveLock.c)
 *     PopPowerAggregatorGetCurrentTargetState @ 0x1409908D8 (PopPowerAggregatorGetCurrentTargetState.c)
 */

unsigned __int64 __fastcall PopAdaptiveGetSystemInitiatedRebootTargetState(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  __int64 v3; // rbx
  unsigned __int64 v4; // rbx
  _OWORD v6[2]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v7; // [rsp+40h] [rbp-18h]

  v7 = 0LL;
  memset(v6, 0, sizeof(v6));
  v2 = 0LL;
  PopAcquireAdaptiveLock(1, a2);
  v3 = qword_140D53290;
  if ( (qword_140D53290 & 7) == 0 )
  {
    v3 = 0LL;
    if ( PopAdaptiveBootContext )
      v3 = qword_140D53288;
  }
  PopReleaseAdaptiveLock();
  if ( (v3 & 7) == 0 )
  {
    PopPowerAggregatorGetCurrentTargetState((__int64)v6);
    if ( LODWORD(v6[0]) == 1 )
    {
      v4 = v3 & 0xFFFFFFFFFFFFFFF8uLL | 1;
      if ( PopBsdCurrentCsPhase > 0 )
        v2 = 8LL;
      return v2 | v4 & 0xFFFFFFFFFFFFFFF7uLL;
    }
    else if ( LODWORD(v6[0]) == 4 )
    {
      return (PopFullWake == 0 ? 8 : 0) | (((unsigned __int8)v3 ^ (unsigned __int8)PopAdaptiveSystemPowerStateToBootState[(int)v7]) & 7 ^ (unsigned __int64)v3) & 0xFFFFFFFFFFFFFFF7uLL;
    }
    else
    {
      return v3 & 0xFFFFFFFFFFFFFFF8uLL;
    }
  }
  return v3;
}
