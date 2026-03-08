/*
 * XREFs of ?ReleaseCoreSync@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_LEVEL@@@Z @ 0x1C0180784
 * Callers:
 *     ?DXGADAPTER_ReleaseCoreSync@@YAXPEAVDXGADAPTER@@W4DXGADAPTERCORESYNC_LEVEL@@@Z @ 0x1C0016F30 (-DXGADAPTER_ReleaseCoreSync@@YAXPEAVDXGADAPTER@@W4DXGADAPTERCORESYNC_LEVEL@@@Z.c)
 *     DxgkReleaseAdapterCoreSync @ 0x1C0180708 (DxgkReleaseAdapterCoreSync.c)
 *     ?DxgkCaptureReleaseSynchronization@@YAJPEBU_DEVICE_OBJECT@@@Z @ 0x1C02D92D0 (-DxgkCaptureReleaseSynchronization@@YAJPEBU_DEVICE_OBJECT@@@Z.c)
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0006F40 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0006FA0 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C00095A8 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?UpdateLatencyTolerances@DXGADAPTER@@QEAAXXZ @ 0x1C0009F40 (-UpdateLatencyTolerances@DXGADAPTER@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     ?ScheduleAdapterActivityCheck@DXGADAPTER@@QEAAXXZ @ 0x1C003F9D8 (-ScheduleAdapterActivityCheck@DXGADAPTER@@QEAAXXZ.c)
 *     ?Activate@DXGDEADLOCK_TRACKER@@QEAAXXZ @ 0x1C017D598 (-Activate@DXGDEADLOCK_TRACKER@@QEAAXXZ.c)
 *     ?FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z @ 0x1C0180040 (-FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z.c)
 *     ?ReleaseCoreResource@DXGADAPTER@@AEAAXPEAD@Z @ 0x1C0195A00 (-ReleaseCoreResource@DXGADAPTER@@AEAAXPEAD@Z.c)
 *     ?ReleaseLocksForPowerStateD3transition@DXGADAPTER@@QEAAXXZ @ 0x1C01E0968 (-ReleaseLocksForPowerStateD3transition@DXGADAPTER@@QEAAXXZ.c)
 *     ?RestoreFromPurgeSegments@ADAPTER_RENDER@@AEAAXXZ @ 0x1C01E51C0 (-RestoreFromPurgeSegments@ADAPTER_RENDER@@AEAAXXZ.c)
 */

void __fastcall DXGADAPTER::ReleaseCoreSync(__int64 a1, int a2)
{
  __int64 v3; // rbx
  unsigned int v4; // r14d
  __int64 v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rcx
  struct _KTHREAD *v8; // rdx
  ADAPTER_RENDER *v9; // rcx
  _QWORD *i; // rsi
  __int64 v11; // rax
  _BYTE v12[8]; // [rsp+50h] [rbp-48h] BYREF
  DXGPUSHLOCK *v13; // [rsp+58h] [rbp-40h]
  int v14; // [rsp+60h] [rbp-38h]

  v3 = a2;
  if ( KeGetCurrentThread() != *(struct _KTHREAD **)(a1 + 184)
    && !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(a1 + 168)) )
  {
    WdLogSingleEntry5(0LL, 275LL, 4LL, a1, 0LL, 0LL);
  }
  v4 = 7;
  if ( ((unsigned int)(v3 - 1) <= 2 || (_DWORD)v3 == 5)
    && !_InterlockedCompareExchange((volatile signed __int32 *)(a1 + 4684), 1, 0) )
  {
    WdLogSingleEntry1(9LL, 12393LL);
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(a1 + 4688, 0LL);
    *(_QWORD *)(a1 + 4696) = KeGetCurrentThread();
    for ( i = *(_QWORD **)(a1 + 4712); i != (_QWORD *)(a1 + 4712); i = (_QWORD *)*i )
      DXGDEADLOCK_TRACKER::Activate((DXGDEADLOCK_TRACKER *)(i - 28));
    *(_QWORD *)(a1 + 4696) = 0LL;
    ExReleasePushLockExclusiveEx(a1 + 4688, 0LL);
    KeLeaveCriticalRegion();
  }
  if ( (_DWORD)v3 == 1 )
    goto LABEL_7;
  if ( (_DWORD)v3 == 2 )
    goto LABEL_20;
  if ( (_DWORD)v3 != 3 )
  {
    if ( (_DWORD)v3 != 5 )
    {
      WdLogSingleEntry1(2LL, v3);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Invalid synchronization level 0x%I64x",
        v3,
        0LL,
        0LL,
        0LL,
        0LL);
      goto LABEL_10;
    }
    v9 = *(ADAPTER_RENDER **)(a1 + 2928);
    if ( v9 )
    {
      ADAPTER_RENDER::RestoreFromPurgeSegments(v9);
      v4 = 10;
    }
LABEL_20:
    v7 = *(_QWORD *)(a1 + 2928);
    if ( v7 )
      ADAPTER_RENDER::FlushScheduler(v7, v4, 0xFFFFFFFF, 0);
    if ( *(_DWORD *)(a1 + 160) == 1 )
    {
      DXGADAPTER::ReleaseLocksForPowerStateD3transition((DXGADAPTER *)a1);
      *(_DWORD *)(a1 + 160) = 0;
      *(_DWORD *)(a1 + 3468) = 0;
      DXGADAPTER::UpdateLatencyTolerances((DXGADAPTER *)a1);
      if ( *(_QWORD *)(a1 + 3384) )
        DXGADAPTER::ScheduleAdapterActivityCheck((struct _KTHREAD **)a1, v8);
    }
  }
LABEL_7:
  if ( *(_BYTE *)(a1 + 205) )
    *(_BYTE *)(a1 + 205) = 0;
  DXGADAPTER::ReleaseCoreResource((DXGADAPTER *)a1, 0LL);
LABEL_10:
  v5 = *(_QWORD *)(a1 + 2928);
  if ( v5 )
  {
    v6 = *(_QWORD *)(v5 + 16);
    if ( *(_QWORD *)(v6 + 904) )
    {
      if ( *(int *)(v6 + 2552) >= 4864 )
      {
        KeEnterCriticalRegion();
        ExAcquirePushLockExclusiveEx(v5 + 1168, 0LL);
        *(_QWORD *)(v5 + 1176) = KeGetCurrentThread();
        if ( !*(_BYTE *)(v5 + 1026)
          && (qword_1C013A870 & 0x461C8ED7) != 0
          && (qword_1C013A878 & 0xFFFFFFFFB9E37128uLL) == 0
          && (qword_1C013A870 & 0x4000) != 0 )
        {
          DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK(
            (DXGAUTOPUSHLOCK *)v12,
            (struct _KTHREAD **)(*(_QWORD *)(v5 + 16) + 104LL),
            0);
          DXGPUSHLOCK::AcquireShared(v13);
          v11 = *(_QWORD *)(v5 + 16);
          v14 = 1;
          if ( !*(_DWORD *)(v11 + 160) )
          {
            KeSetTimerEx((PKTIMER)(v5 + 1040), *(LARGE_INTEGER *)(v5 + 1032), 50, (PKDPC)(v5 + 1104));
            *(_BYTE *)(v5 + 1026) = 1;
          }
          DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v12);
        }
        *(_QWORD *)(v5 + 1176) = 0LL;
        ExReleasePushLockExclusiveEx(v5 + 1168, 0LL);
        KeLeaveCriticalRegion();
      }
    }
  }
}
