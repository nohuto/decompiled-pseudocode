/*
 * XREFs of ?Stop@ADAPTER_RENDER@@QEAAXEE@Z @ 0x1C02C20BC
 * Callers:
 *     ?Stop@DXGADAPTER@@QEAAXEE@Z @ 0x1C02BA418 (-Stop@DXGADAPTER@@QEAAXEE@Z.c)
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000AFB0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000B020 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000B330 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?DestroyCoreAllocations@DXGSHAREDRESOURCE@@QEAAXPEAPEAXI@Z @ 0x1C0175ABC (-DestroyCoreAllocations@DXGSHAREDRESOURCE@@QEAAXPEAPEAXI@Z.c)
 *     ?ResumeVidMmWorkerThread@ADAPTER_RENDER@@AEAAXEE@Z @ 0x1C0197C98 (-ResumeVidMmWorkerThread@ADAPTER_RENDER@@AEAAXEE@Z.c)
 *     ?SuspendVidMmWorkerThread@ADAPTER_RENDER@@AEAAXW4_VIDMM_WORKER_THREAD_SUSPEND_REASON@@E@Z @ 0x1C0197CFC (-SuspendVidMmWorkerThread@ADAPTER_RENDER@@AEAAXW4_VIDMM_WORKER_THREAD_SUSPEND_REASON@@E@Z.c)
 *     ?FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z @ 0x1C0197D5C (-FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z.c)
 *     ?DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z @ 0x1C01A5A90 (-DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z.c)
 *     ?Stop@DXGADAPTERSYNCOBJECT@@QEAAXXZ @ 0x1C01E0724 (-Stop@DXGADAPTERSYNCOBJECT@@QEAAXXZ.c)
 *     ?PurgeSegments@ADAPTER_RENDER@@AEAAXU_VIDMM_PURGE_FLAGS@@PEAVDXGPROCESS@@@Z @ 0x1C01EF8E0 (-PurgeSegments@ADAPTER_RENDER@@AEAAXU_VIDMM_PURGE_FLAGS@@PEAVDXGPROCESS@@@Z.c)
 *     ?EnableClockCalibration@ADAPTER_RENDER@@QEAAXE@Z @ 0x1C01F39F0 (-EnableClockCalibration@ADAPTER_RENDER@@QEAAXE@Z.c)
 *     ?FlushDeferredDestructions@ADAPTER_RENDER@@AEAAXXZ @ 0x1C02C12FC (-FlushDeferredDestructions@ADAPTER_RENDER@@AEAAXXZ.c)
 *     ?Stop@DXGDEVICE@@QEAAXE@Z @ 0x1C02ED494 (-Stop@DXGDEVICE@@QEAAXE@Z.c)
 */

void __fastcall ADAPTER_RENDER::Stop(ADAPTER_RENDER *this, char a2, unsigned __int8 a3)
{
  DXGDEVICE *i; // rbx
  DXGDEVICE *j; // rbx
  DXGADAPTERSYNCOBJECT *k; // rbx
  DXGSHAREDRESOURCE **m; // rbx
  PERESOURCE *Global; // rax

  ADAPTER_RENDER::EnableClockCalibration(this, 0);
  *((_BYTE *)this + 1025) = a2;
  if ( !a3 )
  {
    if ( !KeReadStateEvent((PRKEVENT)(*((_QWORD *)this + 2) + 48LL)) )
      WdLogSingleEntry5(0LL, 275LL, 6LL, *((_QWORD *)this + 2), 0LL, 0LL);
    ADAPTER_RENDER::FlushDeferredDestructions((PERESOURCE **)this);
  }
  for ( i = (DXGDEVICE *)*((_QWORD *)this + 18); i != (ADAPTER_RENDER *)((char *)this + 144) && i; i = *(DXGDEVICE **)i )
    DXGDEVICE::Stop(i, a3);
  for ( j = (DXGDEVICE *)*((_QWORD *)this + 20); j != (ADAPTER_RENDER *)((char *)this + 160) && j; j = *(DXGDEVICE **)j )
    DXGDEVICE::Stop(j, a3);
  if ( !a3 )
  {
    DXGFASTMUTEX::Acquire((ADAPTER_RENDER *)((char *)this + 192));
    for ( k = (DXGADAPTERSYNCOBJECT *)*((_QWORD *)this + 30);
          k != (ADAPTER_RENDER *)((char *)this + 240) && k;
          k = *(DXGADAPTERSYNCOBJECT **)k )
    {
      DXGADAPTERSYNCOBJECT::Stop(k);
    }
    DXGFASTMUTEX::Release((struct _KTHREAD **)this + 24);
  }
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx((char *)this + 256, 0LL);
  *((_QWORD *)this + 33) = KeGetCurrentThread();
  for ( m = (DXGSHAREDRESOURCE **)*((_QWORD *)this + 35);
        m != (DXGSHAREDRESOURCE **)((char *)this + 280);
        m = (DXGSHAREDRESOURCE **)*m )
  {
    DXGSHAREDRESOURCE::DestroyCoreAllocations(m[2], 0LL, 0);
    *((_DWORD *)m[2] + 3) |= 0x10u;
    if ( m[4] )
    {
      Global = (PERESOURCE *)DXGGLOBAL::GetGlobal();
      DXGGLOBAL::DestroySyncObject(Global, m[4], 0);
      m[4] = 0LL;
    }
  }
  *((_QWORD *)this + 33) = 0LL;
  ExReleasePushLockExclusiveEx((char *)this + 256, 0LL);
  KeLeaveCriticalRegion();
  if ( !a3 && !*(_BYTE *)(*((_QWORD *)this + 2) + 209LL) )
  {
    ADAPTER_RENDER::FlushScheduler((__int64)this, 5u, 0xFFFFFFFF, 0);
    ADAPTER_RENDER::SuspendVidMmWorkerThread((__int64)this, 1u, 0);
    ADAPTER_RENDER::ResumeVidMmWorkerThread((PERESOURCE **)this, 0, 1);
    ADAPTER_RENDER::PurgeSegments((struct _EX_RUNDOWN_REF *)this, 0, 0LL);
    ADAPTER_RENDER::FlushScheduler((__int64)this, 5u, 0xFFFFFFFF, 0);
  }
}
