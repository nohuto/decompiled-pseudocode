/*
 * XREFs of PopAccumulateNonActivatedCpuTime @ 0x1405973F0
 * Callers:
 *     PopUpdateNonAttributedCpuTimeReference @ 0x140597458 (PopUpdateNonAttributedCpuTimeReference.c)
 *     PopPdcIdleResiliencyCallback @ 0x14099507C (PopPdcIdleResiliencyCallback.c)
 *     PopDripsWatchdogUpdateMetrics @ 0x140999904 (PopDripsWatchdogUpdateMetrics.c)
 * Callees:
 *     PpmParkSnapNodeIdleTime @ 0x14059AF68 (PpmParkSnapNodeIdleTime.c)
 */

__int64 __fastcall PopAccumulateNonActivatedCpuTime(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  char v5; // bl
  __int64 result; // rax
  __int64 v7; // rcx
  __int64 v8; // [rsp+38h] [rbp+10h] BYREF
  __int64 v9; // [rsp+48h] [rbp+20h] BYREF

  v8 = 0LL;
  v9 = 0LL;
  v5 = a1;
  result = PpmParkSnapNodeIdleTime(a1, a2, &v9, &v8);
  v7 = v9;
  if ( !v5 )
  {
    result = v9 - *a2 - v8;
    *a3 += result;
  }
  *a2 = v7 - v8;
  return result;
}
