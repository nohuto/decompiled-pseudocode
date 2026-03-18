/*
 * XREFs of PopPowerAggregatorHandleIntentUnsafe @ 0x1407F22AC
 * Callers:
 *     PopPowerAggregatorHandleIntent @ 0x1407F2244 (PopPowerAggregatorHandleIntent.c)
 *     PopPowerAggregatorNotifySuspendResume @ 0x1407FFBAC (PopPowerAggregatorNotifySuspendResume.c)
 *     PopPowerAggregatorForceSessionSwitch @ 0x140995B08 (PopPowerAggregatorForceSessionSwitch.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     PopPowerAggregatorHandleResumeIntent @ 0x1405D4840 (PopPowerAggregatorHandleResumeIntent.c)
 *     PopPowerAggregatorHandleSuspendIntent @ 0x1405D48D0 (PopPowerAggregatorHandleSuspendIntent.c)
 *     PopPowerAggregatorHandleActiveIntent @ 0x1406EB830 (PopPowerAggregatorHandleActiveIntent.c)
 *     PopPowerAggregatorRecordIntent @ 0x1407F2400 (PopPowerAggregatorRecordIntent.c)
 *     PopPowerAggregatorIsAtTargetState @ 0x1407F27A8 (PopPowerAggregatorIsAtTargetState.c)
 *     PopPowerAggregatorHandleSystemTransitionStartIntent @ 0x1407F5030 (PopPowerAggregatorHandleSystemTransitionStartIntent.c)
 *     PopPowerAggregatorHandleSystemTransitionEndIntent @ 0x1408080F0 (PopPowerAggregatorHandleSystemTransitionEndIntent.c)
 *     PopPowerAggregatorScheduleWorker @ 0x140809508 (PopPowerAggregatorScheduleWorker.c)
 *     PopPowerAggregatorHandleSystemTransitionIntent @ 0x14080BD60 (PopPowerAggregatorHandleSystemTransitionIntent.c)
 *     PopPowerAggregatorHandleDirectedDripsIntent @ 0x140995C10 (PopPowerAggregatorHandleDirectedDripsIntent.c)
 *     PopPowerAggregatorHandleModernStandbyIntent @ 0x140995C40 (PopPowerAggregatorHandleModernStandbyIntent.c)
 */

__int64 __fastcall PopPowerAggregatorHandleIntentUnsafe(_QWORD *a1, __int64 a2, unsigned int a3, unsigned int a4)
{
  __int64 v5; // rdi
  int v7; // r14d
  __int64 (__fastcall *v8)(__int64 *, __int128 *, _QWORD, __int64); // rax
  int v9; // ebx
  __int128 v11; // [rsp+48h] [rbp-9h] BYREF
  _BYTE v12[24]; // [rsp+58h] [rbp+7h]
  _OWORD v13[2]; // [rsp+70h] [rbp+1Fh] BYREF
  __int64 v14; // [rsp+90h] [rbp+3Fh]

  v5 = (int)a1;
  v13[0] = xmmword_140C20BD0;
  v7 = a2;
  *(_QWORD *)v12 = ++PopPowerAggregatorContext;
  v14 = qword_140C20BF0;
  LODWORD(v11) = 5;
  *((_QWORD *)&v11 + 1) = a4;
  DWORD1(v11) = (_DWORD)a1;
  *(_OWORD *)&v12[8] = 0LL;
  v13[1] = xmmword_140C20BE0;
  if ( (unsigned int)((_DWORD)a1 - 1) <= 9
    && a3 <= 2
    && (a1 = PopPowerAggregatorIntentHandlers,
        (v8 = (__int64 (__fastcall *)(__int64 *, __int128 *, _QWORD, __int64))PopPowerAggregatorIntentHandlers[v5]) != 0LL) )
  {
    v9 = v8(&PopPowerAggregatorContext, &v11, (unsigned int)v5, a2);
    if ( v9 >= 0 )
    {
      xmmword_140C20BD0 = v11;
      qword_140C20BF0 = *(_QWORD *)&v12[16];
      xmmword_140C20BE0 = *(_OWORD *)v12;
      if ( (unsigned __int8)PopPowerAggregatorIsAtTargetState() )
      {
        v9 = 0;
      }
      else
      {
        v9 = 259;
        PopPowerAggregatorScheduleWorker(&PopPowerAggregatorContext);
      }
    }
  }
  else
  {
    v9 = -1073741811;
  }
  PopPowerAggregatorRecordIntent((_DWORD)a1, v5, v7, a3, a4, (__int64)v13, (__int64)&v11, v9);
  return (unsigned int)v9;
}
