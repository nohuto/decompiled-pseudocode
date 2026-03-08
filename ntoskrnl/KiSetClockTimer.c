/*
 * XREFs of KiSetClockTimer @ 0x14022AC78
 * Callers:
 *     PpmIdleExecuteTransition @ 0x14022D7D0 (PpmIdleExecuteTransition.c)
 *     KeResumeClockTimerFromIdle @ 0x14022E860 (KeResumeClockTimerFromIdle.c)
 *     KiUpdateRunTime @ 0x14022ECE0 (KiUpdateRunTime.c)
 *     KiTransitionSchedulingGroupGeneration @ 0x1402AB0D4 (KiTransitionSchedulingGroupGeneration.c)
 *     KePrepareNonClockOwnerForIdle @ 0x1402D4634 (KePrepareNonClockOwnerForIdle.c)
 *     KiSetClockIntervalOneShot @ 0x1402D93BC (KiSetClockIntervalOneShot.c)
 *     KiSetClockTimerKTimerDeadlines @ 0x1402DF1B0 (KiSetClockTimerKTimerDeadlines.c)
 *     KeUpdatePendingQosRequest @ 0x140458E7C (KeUpdatePendingQosRequest.c)
 *     KiResumeClockTimer @ 0x14056D878 (KiResumeClockTimer.c)
 * Callees:
 *     RtlGetInterruptTimePrecise @ 0x14022C9C0 (RtlGetInterruptTimePrecise.c)
 *     KiSetNextClockTickDueTime @ 0x14022FD10 (KiSetNextClockTickDueTime.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140243F90 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     KiShouldRearmClockTimer @ 0x1402D96B0 (KiShouldRearmClockTimer.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 */

__int64 __fastcall KiSetClockTimer(__int64 a1, __int64 a2, int a3, int a4, char a5, char a6)
{
  __int64 v7; // rsi
  __int64 result; // rax
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r14
  char v14; // bl
  __int64 v15; // rcx
  char v16; // [rsp+30h] [rbp-D0h] BYREF
  char v17; // [rsp+31h] [rbp-CFh] BYREF
  int v18; // [rsp+34h] [rbp-CCh] BYREF
  int v19; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v20; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v21; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v22; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v23; // [rsp+58h] [rbp-A8h] BYREF
  char v24[32]; // [rsp+60h] [rbp-A0h] BYREF
  __int64 *v25; // [rsp+80h] [rbp-80h]
  __int64 v26; // [rsp+88h] [rbp-78h]
  __int64 *v27; // [rsp+90h] [rbp-70h]
  __int64 v28; // [rsp+98h] [rbp-68h]
  __int64 *v29; // [rsp+A0h] [rbp-60h]
  __int64 v30; // [rsp+A8h] [rbp-58h]
  __int64 *v31; // [rsp+B0h] [rbp-50h]
  __int64 v32; // [rsp+B8h] [rbp-48h]
  int *v33; // [rsp+C0h] [rbp-40h]
  __int64 v34; // [rsp+C8h] [rbp-38h]
  int *v35; // [rsp+D0h] [rbp-30h]
  __int64 v36; // [rsp+D8h] [rbp-28h]
  char *v37; // [rsp+E0h] [rbp-20h]
  __int64 v38; // [rsp+E8h] [rbp-18h]
  char *v39; // [rsp+F0h] [rbp-10h]
  __int64 v40; // [rsp+F8h] [rbp-8h]

  v18 = a4;
  v7 = 2LL * a4;
  result = RtlGetInterruptTimePrecise(&v20);
  v12 = 0LL;
  v13 = result - a2;
  if ( a2 > 0 )
    v13 = a2;
  if ( (unsigned int)dword_140C02F28 > 5 )
  {
    v20 = result;
    v25 = &v21;
    v21 = a2;
    v26 = 8LL;
    v22 = v13 - result;
    v28 = 8LL;
    v27 = &v22;
    v23 = v13;
    v29 = &v23;
    v31 = &v20;
    v33 = &v19;
    v35 = &v18;
    v37 = &v16;
    v39 = &v17;
    v30 = 8LL;
    v32 = 8LL;
    v19 = a3;
    v34 = 4LL;
    v36 = 4LL;
    v16 = a5;
    v38 = 1LL;
    v17 = a6;
    v40 = 1LL;
    result = tlgWriteTransfer_EtwWriteTransfer(&dword_140C02F28, &byte_14002D297, 0LL, 0LL, 10, v24);
  }
  *(_QWORD *)(a1 + 8 * v7 + 36376) = v13;
  v14 = (*(_BYTE *)(a1 + 8 * v7 + 36388) ^ (2 * a5)) & 2;
  *(_DWORD *)(a1 + 8 * v7 + 36384) = a3;
  *(_BYTE *)(a1 + 8 * v7 + 36388) = *(_BYTE *)(a1 + 8 * v7 + 36388) ^ v14 | 1;
  if ( a6 )
  {
    LOBYTE(v11) = 1;
    result = KiShouldRearmClockTimer(a1, v11, v12);
    if ( (_BYTE)result )
    {
      LOBYTE(v15) = 1;
      *(_DWORD *)(a1 + 36368) = 2;
      return KiSetNextClockTickDueTime(v15);
    }
  }
  return result;
}
