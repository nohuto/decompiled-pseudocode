/*
 * XREFs of PopPowerAggregatorHandleIntentUnsafe @ 0x1407A9984
 * Callers:
 *     PopPowerAggregatorHandleIntent @ 0x1407A991C (PopPowerAggregatorHandleIntent.c)
 *     PopPowerAggregatorForceSessionSwitch @ 0x1409938F4 (PopPowerAggregatorForceSessionSwitch.c)
 *     PopPowerAggregatorNotifySuspendResume @ 0x140993DBC (PopPowerAggregatorNotifySuspendResume.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140429560 (_guard_dispatch_icall.c)
 *     PopPowerAggregatorHandleResumeIntent @ 0x1405983A0 (PopPowerAggregatorHandleResumeIntent.c)
 *     PopPowerAggregatorHandleSuspendIntent @ 0x140598430 (PopPowerAggregatorHandleSuspendIntent.c)
 *     PopPowerAggregatorRecordIntent @ 0x1407A9B64 (PopPowerAggregatorRecordIntent.c)
 *     PopPowerAggregatorHandleActiveIntent @ 0x1407EB340 (PopPowerAggregatorHandleActiveIntent.c)
 *     PopPowerAggregatorHandleSystemTransitionStartIntent @ 0x1407FDF30 (PopPowerAggregatorHandleSystemTransitionStartIntent.c)
 *     PopPowerAggregatorScheduleWorker @ 0x140875FC0 (PopPowerAggregatorScheduleWorker.c)
 *     PopPowerAggregatorHandleSystemTransitionIntent @ 0x140884EF0 (PopPowerAggregatorHandleSystemTransitionIntent.c)
 *     PopPowerAggregatorHandleDirectedDripsIntent @ 0x1409939E0 (PopPowerAggregatorHandleDirectedDripsIntent.c)
 *     PopPowerAggregatorHandleModernStandbyIntent @ 0x140993A10 (PopPowerAggregatorHandleModernStandbyIntent.c)
 *     PopPowerAggregatorHandleSystemTransitionEndIntent @ 0x140993A90 (PopPowerAggregatorHandleSystemTransitionEndIntent.c)
 */

__int64 __fastcall PopPowerAggregatorHandleIntentUnsafe(_QWORD *a1, __int64 a2, unsigned int a3, unsigned int a4)
{
  __int64 v6; // rdi
  int v7; // r14d
  __int64 (__fastcall *v8)(__int64 *, __m128i *, _QWORD, __int64); // rax
  int v9; // ebx
  bool v11; // zf
  __m128i v12; // [rsp+48h] [rbp-9h] BYREF
  _BYTE v13[24]; // [rsp+58h] [rbp+7h]
  _OWORD v14[2]; // [rsp+70h] [rbp+1Fh] BYREF
  __int64 v15; // [rsp+90h] [rbp+3Fh]

  v6 = (int)a1;
  v14[0] = xmmword_140C3AAB0;
  v7 = a2;
  *(_QWORD *)v13 = ++PopPowerAggregatorContext;
  v15 = qword_140C3AAD0;
  v12.m128i_i32[0] = 5;
  v12.m128i_i64[1] = a4;
  v12.m128i_i32[1] = (int)a1;
  *(_OWORD *)&v13[8] = 0LL;
  v14[1] = xmmword_140C3AAC0;
  if ( (unsigned int)((_DWORD)a1 - 1) > 9
    || a3 > 2
    || (a1 = PopPowerAggregatorIntentHandlers,
        (v8 = (__int64 (__fastcall *)(__int64 *, __m128i *, _QWORD, __int64))PopPowerAggregatorIntentHandlers[v6]) == 0LL) )
  {
    v9 = -1073741811;
    goto LABEL_12;
  }
  v9 = v8(&PopPowerAggregatorContext, &v12, (unsigned int)v6, a2);
  if ( v9 >= 0 )
  {
    LODWORD(a1) = _mm_cvtsi128_si32(v12);
    xmmword_140C3AAB0 = (__int128)v12;
    qword_140C3AAD0 = *(_QWORD *)&v13[16];
    xmmword_140C3AAC0 = *(_OWORD *)v13;
    if ( (_DWORD)a1 )
    {
      LODWORD(a1) = (_DWORD)a1 - 1;
      if ( !(_DWORD)a1 )
      {
        if ( (_DWORD)xmmword_140C3AAD8 != 1 )
        {
LABEL_9:
          v9 = 259;
          PopPowerAggregatorScheduleWorker(&PopPowerAggregatorContext);
          goto LABEL_12;
        }
        v11 = *((_QWORD *)&xmmword_140C3AAD8 + 1) == *(_QWORD *)v13;
LABEL_14:
        if ( v11 )
        {
LABEL_11:
          v9 = 0;
          goto LABEL_12;
        }
        goto LABEL_9;
      }
      LODWORD(a1) = (_DWORD)a1 - 1;
      if ( (_DWORD)a1 )
      {
        if ( (_DWORD)a1 == 1 && (_DWORD)xmmword_140C3AAD8 == 5 )
          goto LABEL_11;
        goto LABEL_9;
      }
    }
    v11 = (xmmword_140C3AAD8 & 0xFFFFFFFD) == 0;
    goto LABEL_14;
  }
LABEL_12:
  PopPowerAggregatorRecordIntent((_DWORD)a1, v6, v7, a3, a4, (__int64)v14, (__int64)&v12, v9);
  return (unsigned int)v9;
}
