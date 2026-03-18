/*
 * XREFs of PopQueryRemainingSystemIdleTime @ 0x14080A360
 * Callers:
 *     PopCaptureSleepStudyStatistics @ 0x14039A210 (PopCaptureSleepStudyStatistics.c)
 * Callees:
 *     PopReleaseRwLock @ 0x1402935D0 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x1402D66A8 (PopAcquireRwLockExclusive.c)
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x1402D6B0C (wil_details_FeatureReporting_ReportUsageToService.c)
 */

void __fastcall PopQueryRemainingSystemIdleTime(int *a1, _DWORD *a2)
{
  char *v4; // r8
  __int64 v5; // r10
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // rcx
  int v8; // eax
  int v9; // [rsp+30h] [rbp-18h]

  PopAcquireRwLockExclusive((ULONG_PTR)&PopSystemIdleLock);
  *a1 = 0;
  if ( !PopPlatformAoAc )
    wil_details_FeatureReporting_ReportUsageToService(
      (__int64)&Feature_PowerEventProcessorSystemIdle__private_reporting,
      0x16F54A4u,
      0,
      0,
      (__int64)&Feature_HgsPlusParkingSupportRequired_logged_traits,
      1u,
      v9);
  if ( dword_140C095F4 )
  {
    v4 = (char *)&unk_140C09610;
    v5 = 4LL;
    v6 = MEMORY[0xFFFFF78000000008] / 0x989680uLL;
    do
    {
      if ( !v4[8] )
      {
        v7 = v6 - *(_QWORD *)v4;
        if ( v7 <= (unsigned int)dword_140C095F4 )
        {
          v8 = *a1;
          if ( *a1 <= (unsigned int)(dword_140C095F4 - v7) )
            v8 = dword_140C095F4 - v7;
          *a1 = v8;
        }
      }
      v4 += 56;
      --v5;
    }
    while ( v5 );
    *a2 = PopSystemIdleContext;
  }
  else
  {
    *a1 = -1;
  }
  PopReleaseRwLock((ULONG_PTR)&PopSystemIdleLock);
}
