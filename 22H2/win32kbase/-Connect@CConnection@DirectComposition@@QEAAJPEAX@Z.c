/*
 * XREFs of ?Connect@CConnection@DirectComposition@@QEAAJPEAX@Z @ 0x1C0086654
 * Callers:
 *     ?Create@CConnection@DirectComposition@@SAJPEAXPEAPEAUHDCOMPOSITIONCONNECTION__@@@Z @ 0x1C00864C8 (-Create@CConnection@DirectComposition@@SAJPEAXPEAPEAUHDCOMPOSITIONCONNECTION__@@@Z.c)
 * Callees:
 *     ?SetRetrievingProcess@CBatchSharedMemoryPoolSet@DirectComposition@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C00232AC (-SetRetrievingProcess@CBatchSharedMemoryPoolSet@DirectComposition@@QEAAXPEAU_EPROCESS@@@Z.c)
 *     ?Create@CEvent@DirectComposition@@SAJPEAXHPEAPEAV12@@Z @ 0x1C00235FC (-Create@CEvent@DirectComposition@@SAJPEAXHPEAPEAV12@@Z.c)
 *     ?ReservePools@CBatchSharedMemoryPoolSet@DirectComposition@@QEAAJ_K@Z @ 0x1C0025818 (-ReservePools@CBatchSharedMemoryPoolSet@DirectComposition@@QEAAJ_K@Z.c)
 *     ?IsConnected@CConnection@DirectComposition@@QEAA_NXZ @ 0x1C0065C58 (-IsConnected@CConnection@DirectComposition@@QEAA_NXZ.c)
 *     ?Disconnect@CConnection@DirectComposition@@QEAAXXZ @ 0x1C0083A3C (-Disconnect@CConnection@DirectComposition@@QEAAXXZ.c)
 *     ?Release@CPushLockCriticalSection@DirectComposition@@QEAAXXZ @ 0x1C0087334 (-Release@CPushLockCriticalSection@DirectComposition@@QEAAXXZ.c)
 *     ?OnConnectionReconnected@CChannelGroup@DirectComposition@@QEAAXXZ @ 0x1C0087368 (-OnConnectionReconnected@CChannelGroup@DirectComposition@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D6980 (_guard_dispatch_icall_nop.c)
 *     ?BoostCompositorClock@CSystemChannel@DirectComposition@@QEAAJ_N@Z @ 0x1C020D0D0 (-BoostCompositorClock@CSystemChannel@DirectComposition@@QEAAJ_N@Z.c)
 *     ?EnableMMCSS@CSystemChannel@DirectComposition@@QEAAJ_N@Z @ 0x1C020D23C (-EnableMMCSS@CSystemChannel@DirectComposition@@QEAAJ_N@Z.c)
 */

__int64 __fastcall DirectComposition::CConnection::Connect(
        DirectComposition::CConnection *this,
        NSInstrumentation::CLeakTrackingAllocator *a2)
{
  struct _ERESOURCE *v4; // rbx
  struct _ERESOURCE *v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  struct _EPROCESS *CurrentProcess; // rax
  unsigned __int64 v10; // rdx
  int v11; // esi
  bool v12; // al
  __int64 v13; // rdi
  struct _ERESOURCE *v15; // rbx
  struct _ERESOURCE *v16; // rbx
  struct _ERESOURCE *v17; // rbx
  struct _ERESOURCE *v18; // rbx

  v4 = *(struct _ERESOURCE **)(*((_QWORD *)this + 19) + 32LL);
  KeEnterCriticalRegion();
  ExAcquireResourceExclusiveLite(v4, 1u);
  v5 = (struct _ERESOURCE *)*((_QWORD *)this + 1);
  KeEnterCriticalRegion();
  ExAcquireResourceExclusiveLite(v5, 1u);
  if ( *((_DWORD *)this + 37) )
  {
    v11 = -1073741258;
LABEL_15:
    DirectComposition::CConnection::Disconnect(this);
    goto LABEL_9;
  }
  CurrentProcess = (struct _EPROCESS *)PsGetCurrentProcess(v7, v6, v8);
  DirectComposition::CBatchSharedMemoryPoolSet::SetRetrievingProcess(
    (DirectComposition::CConnection *)((char *)this + 192),
    CurrentProcess);
  v11 = DirectComposition::CBatchSharedMemoryPoolSet::ReservePools(
          (DirectComposition::CConnection *)((char *)this + 192),
          1uLL);
  if ( v11 < 0 )
    goto LABEL_15;
  v11 = DirectComposition::CEvent::Create(a2, v10, (struct DirectComposition::CEvent **)this + 10);
  if ( v11 < 0 )
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
    v12 = (int)DirectComposition::CSystemChannel::BoostCompositorClock(
                 *((DirectComposition::CSystemChannel **)this + 19),
                 1) >= 0;
  else
    v12 = 0;
  *((_BYTE *)this + 248) = v12;
  DirectComposition::CPushLockCriticalSection::Release((DirectComposition::CConnection *)((char *)this + 224));
LABEL_9:
  ExReleaseResourceLite(*((PERESOURCE *)this + 1));
  KeLeaveCriticalRegion();
  v13 = *((_QWORD *)this + 19);
  ExReleaseResourceLite(*(PERESOURCE *)(v13 + 32));
  KeLeaveCriticalRegion();
  do
  {
    if ( _InterlockedCompareExchange((volatile signed __int32 *)(v13 + 24), 2, 1) == 1 )
    {
      v15 = *(struct _ERESOURCE **)(v13 + 32);
      KeEnterCriticalRegion();
      ExAcquireResourceExclusiveLite(v15, 1u);
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v13 + 48LL))(v13, 0LL);
      v16 = *(struct _ERESOURCE **)(*(_QWORD *)(v13 + 40) + 8LL);
      KeEnterCriticalRegion();
      ExAcquireResourceSharedLite(v16, 1u);
      if ( DirectComposition::CConnection::IsConnected(*(DirectComposition::CConnection **)(v13 + 40)) )
        *(_DWORD *)(v13 + 24) = 4;
      ExReleaseResourceLite(*(PERESOURCE *)(v13 + 32));
      KeLeaveCriticalRegion();
      ExReleaseResourceLite(*(PERESOURCE *)(*(_QWORD *)(v13 + 40) + 8LL));
      KeLeaveCriticalRegion();
    }
    if ( _InterlockedCompareExchange((volatile signed __int32 *)(v13 + 24), 5, 4) == 4 )
    {
      v17 = *(struct _ERESOURCE **)(v13 + 32);
      KeEnterCriticalRegion();
      ExAcquireResourceExclusiveLite(v17, 1u);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 56LL))(v13);
      v18 = *(struct _ERESOURCE **)(*(_QWORD *)(v13 + 40) + 8LL);
      KeEnterCriticalRegion();
      ExAcquireResourceSharedLite(v18, 1u);
      if ( !DirectComposition::CConnection::IsConnected(*(DirectComposition::CConnection **)(v13 + 40)) )
        *(_DWORD *)(v13 + 24) = 1;
      ExReleaseResourceLite(*(PERESOURCE *)(v13 + 32));
      KeLeaveCriticalRegion();
      ExReleaseResourceLite(*(PERESOURCE *)(*(_QWORD *)(v13 + 40) + 8LL));
      KeLeaveCriticalRegion();
    }
  }
  while ( *(_DWORD *)(v13 + 24) == 1 );
  return (unsigned int)v11;
}
