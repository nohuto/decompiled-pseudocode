/*
 * XREFs of PopIdleWakeNotifyModernStandbyExit @ 0x14057BC50
 * Callers:
 *     PopCaptureSleepStudyStatistics @ 0x140570798 (PopCaptureSleepStudyStatistics.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140212140 (KxReleaseSpinLock.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x14027E1A4 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x1402864F4 (_tlgKeywordOn.c)
 *     RtlGetInterruptTimePrecise @ 0x1402CF060 (RtlGetInterruptTimePrecise.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140362F80 (KeAcquireSpinLockRaiseToDpc.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x140414300 (memset.c)
 *     PopIdleWakeStopActiveIntervalAccounting @ 0x14057C054 (PopIdleWakeStopActiveIntervalAccounting.c)
 *     PopIdleWakeConvertIntervalBucketsTo @ 0x1408F42A4 (PopIdleWakeConvertIntervalBucketsTo.c)
 *     PopIdleWakeSourceAccountingToDiagnostic @ 0x1408F4740 (PopIdleWakeSourceAccountingToDiagnostic.c)
 *     PopIdleWakeTraceWakeSourceDiagnostic @ 0x1408F4AC0 (PopIdleWakeTraceWakeSourceDiagnostic.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

void PopIdleWakeNotifyModernStandbyExit()
{
  __int64 v0; // r15
  KIRQL v1; // al
  char *v2; // rbx
  unsigned __int64 v3; // rdi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v7; // eax
  bool v8; // zf
  char *v9; // rsi
  __int64 v10; // r14
  unsigned int i; // edi
  __int16 v12; // [rsp+38h] [rbp-D0h] BYREF
  __int16 v13; // [rsp+3Ch] [rbp-CCh] BYREF
  LARGE_INTEGER PerformanceCounter; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v15; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v16; // [rsp+50h] [rbp-B8h] BYREF
  PVOID v17[84]; // [rsp+58h] [rbp-B0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v18; // [rsp+2F8h] [rbp+1F0h] BYREF
  __int64 *v19; // [rsp+318h] [rbp+210h]
  int v20; // [rsp+320h] [rbp+218h]
  int v21; // [rsp+324h] [rbp+21Ch]
  __int16 *v22; // [rsp+328h] [rbp+220h]
  int v23; // [rsp+330h] [rbp+228h]
  int v24; // [rsp+334h] [rbp+22Ch]
  char *v25; // [rsp+338h] [rbp+230h]
  int v26; // [rsp+340h] [rbp+238h]
  int v27; // [rsp+344h] [rbp+23Ch]
  __int16 *v28; // [rsp+348h] [rbp+240h]
  int v29; // [rsp+350h] [rbp+248h]
  int v30; // [rsp+354h] [rbp+24Ch]
  _BYTE *v31; // [rsp+358h] [rbp+250h]
  int v32; // [rsp+360h] [rbp+258h]
  int v33; // [rsp+364h] [rbp+25Ch]
  __int64 *v34; // [rsp+368h] [rbp+260h]
  int v35; // [rsp+370h] [rbp+268h]
  int v36; // [rsp+374h] [rbp+26Ch]
  _BYTE v37[48]; // [rsp+378h] [rbp+270h] BYREF

  v0 = PopWnfCsEnterScenarioId;
  PerformanceCounter.QuadPart = 0LL;
  memset(v17, 0, sizeof(v17));
  v1 = KeAcquireSpinLockRaiseToDpc(&PopIdleWakeContextLock);
  v2 = (char *)PopIdleWakeContext;
  PopIdleWakeContext = 0LL;
  v3 = v1;
  KxReleaseSpinLock(&PopIdleWakeContextLock);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v3 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v7 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v3 + 1));
        v8 = (v7 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v7;
        if ( v8 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(v3);
  if ( v2 )
  {
    RtlGetInterruptTimePrecise(&PerformanceCounter);
    PopIdleWakeStopActiveIntervalAccounting(v2);
    PopIdleWakeConvertIntervalBucketsTo(6LL, v2 + 232, v37, 1000LL);
    if ( (unsigned int)dword_140C02228 > 5 && tlgKeywordOn((__int64)&dword_140C02228, 0x400000000000LL) )
    {
      v21 = 0;
      v24 = 0;
      v27 = 0;
      v30 = 0;
      v33 = 0;
      v36 = 0;
      v19 = &v15;
      v22 = &v12;
      v25 = v2 + 208;
      v28 = &v13;
      v31 = v37;
      v34 = &v16;
      v20 = 8;
      v35 = 8;
      v15 = v0;
      v12 = 6;
      v23 = 2;
      v26 = 24;
      v13 = 6;
      v29 = 2;
      v32 = 48;
      v16 = 0x1000000LL;
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_140C02228,
        (unsigned __int8 *)byte_140029D1D,
        0LL,
        0LL,
        8u,
        &v18);
    }
    v9 = v2 + 280;
    v10 = 25LL;
    do
    {
      if ( *((_DWORD *)v9 + 78) )
      {
        memset(v17, 0, sizeof(v17));
        if ( (int)PopIdleWakeSourceAccountingToDiagnostic(v9, v17) >= 0 )
          PopIdleWakeTraceWakeSourceDiagnostic(v0, v17);
        if ( LOBYTE(v17[48]) )
          ExFreePoolWithTag(v17[50], 0x67696450u);
        if ( LODWORD(v17[0]) == 5 )
        {
          for ( i = 0; i < LODWORD(v17[51]); ++i )
            ExFreePoolWithTag(v17[2 * i + 53], 0x67696450u);
        }
      }
      v9 += 696;
      --v10;
    }
    while ( v10 );
    ExFreePoolWithTag(v2, 0x67696450u);
  }
}
