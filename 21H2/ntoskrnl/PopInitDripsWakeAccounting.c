/*
 * XREFs of PopInitDripsWakeAccounting @ 0x140B29B34
 * Callers:
 *     PoInitSystem @ 0x140B026CC (PoInitSystem.c)
 * Callees:
 *     PpmConvertTime @ 0x14029394C (PpmConvertTime.c)
 */

__int64 PopInitDripsWakeAccounting()
{
  __int64 v0; // rbx
  __int64 v1; // rdi
  __int64 v2; // rsi
  __int64 v3; // rcx
  unsigned __int128 v4; // rax

  v0 = 0LL;
  v1 = 0LL;
  v2 = 9LL;
  do
  {
    *(_QWORD *)((char *)&PopDripsWakeIdleAccountingBucketLimitsQpc + v1) = PpmConvertTime(
                                                                             *(_QWORD *)((char *)&PopDripsWakeIdleAccountingBucketLimitsMs
                                                                                       + v1),
                                                                             0x3E8uLL,
                                                                             PopQpcFrequency);
    v1 += 8LL;
    --v2;
  }
  while ( v2 );
  v3 = 11LL;
  qword_140D07D28 = -1LL;
  do
  {
    v4 = *(unsigned __int64 *)((char *)&PopDripsWakePeriodAccountingBucketLimitsHns + v0)
       * (unsigned __int128)0x346DC5D63886594BuLL;
    v0 += 8LL;
    *(_QWORD *)((char *)&unk_140D07E28 + v0) = *((_QWORD *)&v4 + 1) >> 11;
    --v3;
  }
  while ( v3 );
  qword_140D07E88 = -1LL;
  return v4;
}
