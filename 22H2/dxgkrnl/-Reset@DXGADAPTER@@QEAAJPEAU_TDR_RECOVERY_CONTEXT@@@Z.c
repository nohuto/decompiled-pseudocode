/*
 * XREFs of ?Reset@DXGADAPTER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C02B9C5C
 * Callers:
 *     ?TdrResetFromTimeout@@YAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C030F580 (-TdrResetFromTimeout@@YAJPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0004FC0 (DxgkLogInternalTriageEvent.c)
 *     ?Leave@DXGCRITICALREGION@@QEAAXXZ @ 0x1C0008364 (-Leave@DXGCRITICALREGION@@QEAAXXZ.c)
 *     ?Enter@DXGCRITICALREGION@@QEAAXXZ @ 0x1C0008394 (-Enter@DXGCRITICALREGION@@QEAAXXZ.c)
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x1C000AF80 (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00282B0 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0p_EtwWriteTransfer @ 0x1C0040BC0 (McTemplateK0p_EtwWriteTransfer.c)
 *     McTemplateK0pt_EtwWriteTransfer @ 0x1C0040F6C (McTemplateK0pt_EtwWriteTransfer.c)
 *     ?AcquireCoreResourceExclusiveWithTracking@DXGADAPTER@@AEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@_N@Z @ 0x1C0197A00 (-AcquireCoreResourceExclusiveWithTracking@DXGADAPTER@@AEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@.c)
 *     ?GetFirstProfilerInterface@DXGGLOBAL@@SA?AW4_DXGKETW_PROFILER_TYPE@@XZ @ 0x1C0197A94 (-GetFirstProfilerInterface@DXGGLOBAL@@SA-AW4_DXGKETW_PROFILER_TYPE@@XZ.c)
 *     ?SuspendVidMmWorkerThread@ADAPTER_RENDER@@AEAAXW4_VIDMM_WORKER_THREAD_SUSPEND_REASON@@E@Z @ 0x1C0197CFC (-SuspendVidMmWorkerThread@ADAPTER_RENDER@@AEAAXW4_VIDMM_WORKER_THREAD_SUSPEND_REASON@@E@Z.c)
 *     ?FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z @ 0x1C0197D5C (-FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z.c)
 *     ?PrepareToReset@DXGADAPTER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C02B8D38 (-PrepareToReset@DXGADAPTER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 *     ?Reset@ADAPTER_DISPLAY@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C02BF7D0 (-Reset@ADAPTER_DISPLAY@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 *     ?FlushDeferredDestructions@ADAPTER_RENDER@@AEAAXXZ @ 0x1C02C12FC (-FlushDeferredDestructions@ADAPTER_RENDER@@AEAAXXZ.c)
 *     ?Reset@ADAPTER_RENDER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C02C1C28 (-Reset@ADAPTER_RENDER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 *     ?TdrCollectDbgInfoStage2@@YAXPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C030EBC0 (-TdrCollectDbgInfoStage2@@YAXPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 */

__int64 __fastcall DXGADAPTER::Reset(DXGADAPTER *this, ULONG_PTR BugCheckParameter1)
{
  struct _KTHREAD *CurrentThread; // rsi
  int v5; // edi
  char *v6; // rdi
  __int64 v7; // r8
  __int64 v8; // r8
  struct _KEVENT *v9; // rdi
  __int64 v10; // r8
  BOOLEAN i; // al
  __int64 v12; // r8
  int FirstProfilerInterface; // eax
  __int64 v14; // rcx
  ADAPTER_RENDER *v15; // rcx
  struct _TDR_RECOVERY_CONTEXT *v16; // rdx
  ADAPTER_DISPLAY *v17; // rcx
  __int64 v18; // r8
  __int64 v20; // [rsp+20h] [rbp-88h]
  union _LARGE_INTEGER v21; // [rsp+50h] [rbp-58h] BYREF
  char v22; // [rsp+B0h] [rbp+8h] BYREF
  char v23; // [rsp+B1h] [rbp+9h]
  struct _KTHREAD *v24; // [rsp+B8h] [rbp+10h]
  union _LARGE_INTEGER Interval; // [rsp+C0h] [rbp+18h] BYREF
  union _LARGE_INTEGER v26; // [rsp+C8h] [rbp+20h] BYREF

  if ( !BugCheckParameter1 )
  {
    WdLogSingleEntry1(1LL, 8650LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pTdrContext", 8650LL, 0LL, 0LL, 0LL, 0LL);
  }
  CurrentThread = KeGetCurrentThread();
  v5 = 0;
  v24 = CurrentThread;
  while ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(&qword_1C01410B8, 0LL) )
  {
    Interval.QuadPart = -10000000LL;
    KeDelayExecutionThread(0, 0, &Interval);
    if ( (unsigned int)++v5 >= 0xA )
    {
      WdLogSingleEntry5(0LL, 275LL, 48LL, qword_1C0140400, 0LL, 0LL);
      break;
    }
  }
  if ( !DXGADAPTER::IsDxgmms2(this) )
    KeSetEvent((PRKEVENT)((char *)this + 2896), 0, 0);
  if ( !*((_QWORD *)this + 366) )
  {
    WdLogSingleEntry1(1LL, 8668LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"this->IsRenderAdapter()", 8668LL, 0LL, 0LL, 0LL, 0LL);
  }
  v23 = 0;
  DXGCRITICALREGION::Enter((DXGCRITICALREGION *)&v22);
  if ( !DXGADAPTER::IsDxgmms2(this) )
  {
    while ( 1 )
    {
      KeEnterCriticalRegion();
      if ( (unsigned __int8)ExTryAcquirePushLockExclusiveEx((char *)this + 136, 0LL) )
        break;
      KeLeaveCriticalRegion();
      ADAPTER_RENDER::FlushScheduler(*((_QWORD *)this + 366), 4u, 0xFFFFFFFF, 0);
      v26.QuadPart = -100000LL;
      KeDelayExecutionThread(0, 0, &v26);
    }
    *((_QWORD *)this + 18) = KeGetCurrentThread();
    if ( !KeResetEvent((PRKEVENT)this + 2) )
    {
      WdLogSingleEntry1(1LL, 8795LL);
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"OldCoreAccess != 0", 8795LL, 0LL, 0LL, 0LL, 0LL);
    }
    if ( bTracingEnabled
      && (qword_1C013F870 & 0x1000000) != 0
      && (qword_1C013F870 & 0x2000) == 0
      && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000000000LL) != 0 )
    {
      LODWORD(v20) = 1;
      McTemplateK0pt_EtwWriteTransfer(
        (REGHANDLE *)&DxgkControlGuid_Context,
        &EventPreAcquireAdapterLock,
        v10,
        this,
        v20);
    }
    for ( i = ExAcquireResourceExclusiveLite(*((PERESOURCE *)this + 21), 0);
          !i;
          i = ExAcquireResourceExclusiveLite(*((PERESOURCE *)this + 21), 0) )
    {
      *((_DWORD *)this + 1169) = 2;
      FirstProfilerInterface = DXGGLOBAL::GetFirstProfilerInterface();
      v14 = *((_QWORD *)this + 366);
      *((_DWORD *)this + 1170) = FirstProfilerInterface;
      ADAPTER_RENDER::FlushScheduler(v14, 4u, 0xFFFFFFFF, 0);
      v21.QuadPart = -100000LL;
      KeDelayExecutionThread(0, 0, &v21);
    }
    if ( bTracingEnabled
      && (qword_1C013F870 & 0x1000000) != 0
      && (qword_1C013F870 & 0x2000) == 0
      && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000000000LL) != 0 )
    {
      LODWORD(v20) = 1;
      McTemplateK0pt_EtwWriteTransfer(
        (REGHANDLE *)&DxgkControlGuid_Context,
        &EventPostAcquireAdapterLock,
        v12,
        this,
        v20);
    }
    *((_DWORD *)this + 44) = 2;
    v9 = (struct _KEVENT *)((char *)this + 2896);
    goto LABEL_50;
  }
  *((_QWORD *)this + 367) = CurrentThread;
  if ( CurrentThread == *(struct _KTHREAD **)(BugCheckParameter1 + 2904) )
  {
LABEL_28:
    v9 = (struct _KEVENT *)((char *)this + 2896);
    KeSetEvent((PRKEVENT)((char *)this + 2896), 0, 0);
    (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 366) + 736LL) + 8LL) + 592LL))(
      *(_QWORD *)(*((_QWORD *)this + 366) + 744LL),
      *((_QWORD *)this + 367));
    DXGADAPTER::PrepareToReset(this, (struct _TDR_RECOVERY_CONTEXT *)BugCheckParameter1);
    ADAPTER_RENDER::FlushScheduler(*((_QWORD *)this + 366), 4u, 0xFFFFFFFF, 0);
    ADAPTER_RENDER::FlushDeferredDestructions(*((ADAPTER_RENDER **)this + 366));
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 366) + 760LL) + 8LL) + 1136LL))(*(_QWORD *)(*((_QWORD *)this + 366) + 768LL));
    if ( CurrentThread != *(struct _KTHREAD **)(BugCheckParameter1 + 2904) )
      ADAPTER_RENDER::SuspendVidMmWorkerThread(*((_QWORD *)this + 366), 0, 0);
    ADAPTER_RENDER::FlushScheduler(*((_QWORD *)this + 366), 4u, 0xFFFFFFFF, 0);
LABEL_50:
    ADAPTER_RENDER::FlushScheduler(*((_QWORD *)this + 366), 4u, 0xFFFFFFFF, 0);
    TdrCollectDbgInfoStage2((struct _TDR_RECOVERY_CONTEXT *)BugCheckParameter1);
    v15 = (ADAPTER_RENDER *)*((_QWORD *)this + 366);
    *((_BYTE *)this + 2870) = 0;
    if ( (int)ADAPTER_RENDER::Reset(v15, BugCheckParameter1) < 0 )
    {
      WdLogSingleEntry1(1LL, 8839LL);
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"NT_SUCCESS(Status)", 8839LL, 0LL, 0LL, 0LL, 0LL);
    }
    v17 = (ADAPTER_DISPLAY *)*((_QWORD *)this + 365);
    if ( v17 && (int)ADAPTER_DISPLAY::Reset(v17, v16) < 0 )
    {
      WdLogSingleEntry1(1LL, 8847LL);
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"NT_SUCCESS(Status)", 8847LL, 0LL, 0LL, 0LL, 0LL);
    }
    *((_QWORD *)this + 367) = 0LL;
    KeResetEvent(v9);
    v6 = (char *)this + 136;
    goto LABEL_56;
  }
  v6 = (char *)this + 136;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx((char *)this + 136, 0LL);
  *((_QWORD *)this + 18) = KeGetCurrentThread();
  if ( *((_DWORD *)this + 50) != 1 )
  {
    *((_QWORD *)this + 18) = 0LL;
    ExReleasePushLockExclusiveEx((char *)this + 136, 0LL);
    KeLeaveCriticalRegion();
    goto LABEL_64;
  }
  if ( !KeResetEvent((PRKEVENT)this + 2) )
  {
    WdLogSingleEntry1(1LL, 8703LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"OldCoreAccess != 0", 8703LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( bTracingEnabled
    && (qword_1C013F870 & 0x1000000) != 0
    && (qword_1C013F870 & 0x2000) == 0
    && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000000000LL) != 0 )
  {
    LODWORD(v20) = 1;
    McTemplateK0pt_EtwWriteTransfer((REGHANDLE *)&DxgkControlGuid_Context, &EventPreAcquireAdapterLock, v7, this, v20);
  }
  DXGADAPTER::AcquireCoreResourceExclusiveWithTracking((__int64)this, 2, 0);
  if ( bTracingEnabled
    && (qword_1C013F870 & 0x1000000) != 0
    && (qword_1C013F870 & 0x2000) == 0
    && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000000000LL) != 0 )
  {
    LODWORD(v20) = 1;
    McTemplateK0pt_EtwWriteTransfer((REGHANDLE *)&DxgkControlGuid_Context, &EventPostAcquireAdapterLock, v8, this, v20);
  }
  *((_DWORD *)this + 44) = 2;
  if ( !*(_QWORD *)(BugCheckParameter1 + 2904) )
  {
    CurrentThread = v24;
    goto LABEL_28;
  }
LABEL_56:
  if ( !DXGADAPTER::IsDxgmms2(this) || *(struct _KTHREAD **)(BugCheckParameter1 + 2904) != v24 )
  {
    *((_QWORD *)v6 + 1) = 0LL;
    ExReleasePushLockExclusiveEx(v6, 0LL);
    KeLeaveCriticalRegion();
    if ( bTracingEnabled
      && (qword_1C013F870 & 0x1000000) != 0
      && (qword_1C013F870 & 0x2000) == 0
      && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000000000LL) != 0 )
    {
      McTemplateK0p_EtwWriteTransfer((REGHANDLE *)&DxgkControlGuid_Context, &EventReleaseAdapterLock, v18, this);
    }
    ExReleaseResourceLite(*((PERESOURCE *)this + 21));
    KeSetEvent((PRKEVENT)this + 2, 0, 0);
  }
LABEL_64:
  if ( v23 )
    DXGCRITICALREGION::Leave((DXGCRITICALREGION *)&v22);
  ExReleasePushLockSharedEx(&qword_1C01410B8, 0LL);
  return 0LL;
}
