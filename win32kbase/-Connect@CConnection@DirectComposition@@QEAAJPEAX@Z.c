__int64 __fastcall DirectComposition::CConnection::Connect(
        DirectComposition::CConnection *this,
        NSInstrumentation::CLeakTrackingAllocator *a2)
{
  struct _ERESOURCE *v4; // rbx
  struct _ERESOURCE *v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  struct _EPROCESS *CurrentProcess; // rax
  unsigned __int64 v11; // rdx
  int v12; // esi
  bool v13; // al
  __int64 v14; // rdi
  struct _ERESOURCE *v16; // rbx
  struct _ERESOURCE *v17; // rbx
  struct _ERESOURCE *v18; // rbx
  struct _ERESOURCE *v19; // rbx

  v4 = *(struct _ERESOURCE **)(*((_QWORD *)this + 19) + 32LL);
  KeEnterCriticalRegion();
  ExAcquireResourceExclusiveLite(v4, 1u);
  v5 = (struct _ERESOURCE *)*((_QWORD *)this + 1);
  KeEnterCriticalRegion();
  ExAcquireResourceExclusiveLite(v5, 1u);
  if ( *((_DWORD *)this + 37) )
  {
    v12 = -1073741258;
LABEL_15:
    DirectComposition::CConnection::Disconnect(this);
    goto LABEL_9;
  }
  CurrentProcess = (struct _EPROCESS *)PsGetCurrentProcess(v7, v6, v8, v9);
  DirectComposition::CBatchSharedMemoryPoolSet::SetRetrievingProcess(
    (DirectComposition::CConnection *)((char *)this + 192),
    CurrentProcess);
  v12 = DirectComposition::CBatchSharedMemoryPoolSet::ReservePools(
          (DirectComposition::CConnection *)((char *)this + 192),
          1uLL);
  if ( v12 < 0 )
    goto LABEL_15;
  v12 = DirectComposition::CEvent::Create(a2, v11, (struct DirectComposition::CEvent **)this + 10);
  if ( v12 < 0 )
    goto LABEL_15;
  *((_DWORD *)this + 37) = 1;
  *((_DWORD *)this + 36) = 0;
  DirectComposition::CChannelGroup::OnConnectionReconnected((DirectComposition::CConnection *)((char *)this + 16));
  KeSetEvent(*(PRKEVENT *)(*((_QWORD *)this + 10) + 8LL), 1, 0);
  ExAcquirePushLockSharedEx((char *)this + 224, 0LL);
  *((_BYTE *)this + 232) = 0;
  if ( *((_DWORD *)this + 60) )
    DirectComposition::CSystemChannel::EnableMMCSS(*((DirectComposition::CSystemChannel **)this + 19), 1);
  if ( *((_DWORD *)this + 61) )
    v13 = (int)DirectComposition::CSystemChannel::BoostCompositorClock(
                 *((DirectComposition::CSystemChannel **)this + 19),
                 1) >= 0;
  else
    v13 = 0;
  *((_BYTE *)this + 248) = v13;
  DirectComposition::CPushLockCriticalSection::Release((DirectComposition::CConnection *)((char *)this + 224));
LABEL_9:
  ExReleaseResourceLite(*((PERESOURCE *)this + 1));
  KeLeaveCriticalRegion();
  v14 = *((_QWORD *)this + 19);
  ExReleaseResourceLite(*(PERESOURCE *)(v14 + 32));
  KeLeaveCriticalRegion();
  do
  {
    if ( _InterlockedCompareExchange((volatile signed __int32 *)(v14 + 24), 2, 1) == 1 )
    {
      v16 = *(struct _ERESOURCE **)(v14 + 32);
      KeEnterCriticalRegion();
      ExAcquireResourceExclusiveLite(v16, 1u);
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v14 + 48LL))(v14, 0LL);
      v17 = *(struct _ERESOURCE **)(*(_QWORD *)(v14 + 40) + 8LL);
      KeEnterCriticalRegion();
      ExAcquireResourceSharedLite(v17, 1u);
      if ( DirectComposition::CConnection::IsConnected(*(DirectComposition::CConnection **)(v14 + 40)) )
        *(_DWORD *)(v14 + 24) = 4;
      ExReleaseResourceLite(*(PERESOURCE *)(v14 + 32));
      KeLeaveCriticalRegion();
      ExReleaseResourceLite(*(PERESOURCE *)(*(_QWORD *)(v14 + 40) + 8LL));
      KeLeaveCriticalRegion();
    }
    if ( _InterlockedCompareExchange((volatile signed __int32 *)(v14 + 24), 5, 4) == 4 )
    {
      v18 = *(struct _ERESOURCE **)(v14 + 32);
      KeEnterCriticalRegion();
      ExAcquireResourceExclusiveLite(v18, 1u);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 56LL))(v14);
      v19 = *(struct _ERESOURCE **)(*(_QWORD *)(v14 + 40) + 8LL);
      KeEnterCriticalRegion();
      ExAcquireResourceSharedLite(v19, 1u);
      if ( !DirectComposition::CConnection::IsConnected(*(DirectComposition::CConnection **)(v14 + 40)) )
        *(_DWORD *)(v14 + 24) = 1;
      ExReleaseResourceLite(*(PERESOURCE *)(v14 + 32));
      KeLeaveCriticalRegion();
      ExReleaseResourceLite(*(PERESOURCE *)(*(_QWORD *)(v14 + 40) + 8LL));
      KeLeaveCriticalRegion();
    }
  }
  while ( *(_DWORD *)(v14 + 24) == 1 );
  return (unsigned int)v12;
}
