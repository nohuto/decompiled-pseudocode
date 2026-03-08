/*
 * XREFs of PopInitDripsWakeAccounting @ 0x140B69E2C
 * Callers:
 *     PoInitSystem @ 0x140B45CAC (PoInitSystem.c)
 * Callees:
 *     PpmConvertTime @ 0x140235D70 (PpmConvertTime.c)
 */

__int64 PopInitDripsWakeAccounting()
{
  __int64 v0; // rbx
  __int64 v1; // rdi
  __int64 v2; // r11
  __int64 v3; // rcx
  unsigned __int128 v4; // rax

  v0 = 0LL;
  v1 = 9LL;
  do
  {
    *(_QWORD *)((char *)&PopDripsWakeIdleAccountingBucketLimitsQpc + v0) = PpmConvertTime(
                                                                             *(_QWORD *)((char *)&PopDripsWakeIdleAccountingBucketLimitsMs
                                                                                       + v0),
                                                                             0x3E8uLL,
                                                                             PopQpcFrequency);
    v0 += 8LL;
    --v1;
  }
  while ( v1 );
  v3 = 11LL;
  qword_140D1FF08 = -1LL;
  do
  {
    v4 = *(unsigned __int64 *)((char *)&PopDripsWakePeriodAccountingBucketLimitsHns + v2)
       * (unsigned __int128)0x346DC5D63886594BuLL;
    v2 += 8LL;
    *(_QWORD *)((char *)&unk_140D20008 + v2) = *((_QWORD *)&v4 + 1) >> 11;
    --v3;
  }
  while ( v3 );
  qword_140D20068 = -1LL;
  return v4;
}
