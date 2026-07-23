/*
 * XREFs of PspCheckConditionalWakeCharge @ 0x1405FD214
 * Callers:
 *     PspChargeProcessWakeCounter @ 0x1406D6270 (PspChargeProcessWakeCounter.c)
 * Callees:
 *     PspIsProcessInJob @ 0x1405FD380 (PspIsProcessInJob.c)
 */

char __fastcall PspCheckConditionalWakeCharge(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r10
  __int64 v5; // r9
  __int64 v6; // rdx
  _QWORD *v7; // r11

  v3 = a1;
  if ( !*(_QWORD *)(a1 + 1296) || *(_QWORD *)(*(_QWORD *)(a1 + 1296) + 1080LL) != *(_QWORD *)(a2 + 1080) )
    return 1;
  v5 = (unsigned int)(1 << a3);
  while ( (unsigned int)PspIsProcessInJob(v3, a2, a3, v5) != 292 || ((unsigned int)v5 & *(_DWORD *)(v6 + 952)) == 0 )
  {
    if ( v6 == *v7 )
      return 1;
    a2 = *(_QWORD *)(v6 + 1072);
  }
  return 0;
}
