/*
 * XREFs of PopGetPowerSettingValue @ 0x14032CA60
 * Callers:
 *     PopScanIdleList @ 0x14032C730 (PopScanIdleList.c)
 *     PopCaptureSleepStudyStatistics @ 0x1403C78A0 (PopCaptureSleepStudyStatistics.c)
 *     PopBatteryUpdateAlarms @ 0x140824E30 (PopBatteryUpdateAlarms.c)
 *     PopEsInStandbyEvaluate @ 0x140998460 (PopEsInStandbyEvaluate.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x140230720 (ExAcquireFastMutex.c)
 *     ExReleaseFastMutex @ 0x140230860 (ExReleaseFastMutex.c)
 *     memmove @ 0x140435100 (memmove.c)
 *     PopFindPowerSettingConfiguration @ 0x14078339C (PopFindPowerSettingConfiguration.c)
 */

__int64 __fastcall PopGetPowerSettingValue(
        __int64 a1,
        __int64 a2,
        signed int a3,
        void *a4,
        unsigned int a5,
        unsigned int *a6)
{
  __int64 PowerSettingConfiguration; // rax
  unsigned int v10; // ebx
  __int64 v11; // rcx
  unsigned int v12; // edx

  ExAcquireFastMutex(&PopSettingLock);
  if ( (unsigned int)a3 > 1 )
    a3 = dword_140C3D90C;
  PowerSettingConfiguration = PopFindPowerSettingConfiguration(a1, 0xFFFFFFFFLL);
  v10 = 0;
  if ( PowerSettingConfiguration && (v11 = *(_QWORD *)(PowerSettingConfiguration + 8LL * a3 + 64)) != 0 )
  {
    v12 = *(_DWORD *)(v11 + 4);
    *a6 = v12;
    if ( a5 < v12 )
      v10 = -1073741306;
    else
      memmove(a4, (const void *)(*(_QWORD *)(PowerSettingConfiguration + 8LL * a3 + 64) + 12LL), v12);
  }
  else
  {
    v10 = -1073741811;
  }
  ExReleaseFastMutex(&PopSettingLock);
  return v10;
}
