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
