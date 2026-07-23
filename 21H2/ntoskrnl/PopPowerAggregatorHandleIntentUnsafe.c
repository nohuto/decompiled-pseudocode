/*
 * XREFs of PopPowerAggregatorHandleIntentUnsafe @ 0x140775FD4
 * Callers:
 *     PopPowerAggregatorNotifySuspendResume @ 0x140775EE8 (PopPowerAggregatorNotifySuspendResume.c)
 *     PopPowerAggregatorForceSessionSwitch @ 0x1408EE374 (PopPowerAggregatorForceSessionSwitch.c)
 *     PopPowerAggregatorHandleIntent @ 0x1408EE468 (PopPowerAggregatorHandleIntent.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     PopPowerAggregatorHandleSystemTransitionStartIntent @ 0x140726640 (PopPowerAggregatorHandleSystemTransitionStartIntent.c)
 *     PopPowerAggregatorRecordIntent @ 0x140776120 (PopPowerAggregatorRecordIntent.c)
 *     PopPowerAggregatorScheduleWorker @ 0x140776550 (PopPowerAggregatorScheduleWorker.c)
 *     PopPowerAggregatorIsAtTargetState @ 0x140776584 (PopPowerAggregatorIsAtTargetState.c)
 *     PopPowerAggregatorHandleSystemTransitionEndIntent @ 0x14077A7E0 (PopPowerAggregatorHandleSystemTransitionEndIntent.c)
 *     PopPowerAggregatorCachePoPolicy @ 0x14078E53C (PopPowerAggregatorCachePoPolicy.c)
 *     PopPowerAggregatorHandleActiveIntent @ 0x1408EE3F0 (PopPowerAggregatorHandleActiveIntent.c)
 *     PopPowerAggregatorHandleDirectedDripsIntent @ 0x1408EE430 (PopPowerAggregatorHandleDirectedDripsIntent.c)
 *     PopPowerAggregatorHandleModernStandbyIntent @ 0x1408EE4C0 (PopPowerAggregatorHandleModernStandbyIntent.c)
 *     PopPowerAggregatorHandleModernStandbyResumeIntent @ 0x1408EE580 (PopPowerAggregatorHandleModernStandbyResumeIntent.c)
 *     PopPowerAggregatorHandleModernStandbySuspendIntent @ 0x1408EE5E0 (PopPowerAggregatorHandleModernStandbySuspendIntent.c)
 */

__int64 __fastcall PopPowerAggregatorHandleIntentUnsafe(_QWORD *a1, unsigned int a2, unsigned int a3)
{
  __int64 v5; // rdi
  __int64 (__fastcall *v6)(__int64 *, __int128 *, _QWORD); // rax
  int v7; // ebx
  __int128 v9; // [rsp+48h] [rbp-9h] BYREF
  __m256 v10; // [rsp+58h] [rbp+7h] BYREF
  __int128 v11; // [rsp+78h] [rbp+27h] BYREF
  __m256 v12; // [rsp+88h] [rbp+37h]

  v11 = xmmword_140C217F8;
  v5 = (int)a1;
  *(_QWORD *)v10.m256_f32 = ++PopPowerAggregatorContext;
  v12 = ymmword_140C21808;
  LODWORD(v9) = 4;
  *((_QWORD *)&v9 + 1) = a3;
  DWORD1(v9) = (_DWORD)a1;
  memset(&v10.m256_f32[2], 0, 24);
  if ( (unsigned int)((_DWORD)a1 - 1) <= 7
    && a2 <= 2
    && (PopPowerAggregatorCachePoPolicy(),
        a1 = PopPowerAggregatorIntentHandlers,
        (v6 = (__int64 (__fastcall *)(__int64 *, __int128 *, _QWORD))PopPowerAggregatorIntentHandlers[v5]) != 0LL) )
  {
    v7 = v6(&PopPowerAggregatorContext, &v9, (unsigned int)v5);
    if ( v7 >= 0 )
    {
      xmmword_140C217F8 = v9;
      ymmword_140C21808 = v10;
      if ( (unsigned __int8)PopPowerAggregatorIsAtTargetState() )
      {
        v7 = 0;
      }
      else
      {
        v7 = 259;
        PopPowerAggregatorScheduleWorker(&PopPowerAggregatorContext);
      }
    }
  }
  else
  {
    v7 = -1073741811;
  }
  PopPowerAggregatorRecordIntent((_DWORD)a1, v5, a2, a3, (__int64)&v11, (__int64)&v9, v7);
  return (unsigned int)v7;
}
