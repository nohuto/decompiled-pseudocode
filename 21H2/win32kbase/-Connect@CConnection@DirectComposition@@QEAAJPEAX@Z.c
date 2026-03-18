/*
 * XREFs of ?Connect@CConnection@DirectComposition@@QEAAJPEAX@Z @ 0x1C00DD120
 * Callers:
 *     ?Create@CConnection@DirectComposition@@SAJPEAXPEAPEAUHDCOMPOSITIONCONNECTION__@@@Z @ 0x1C00DD2FC (-Create@CConnection@DirectComposition@@SAJPEAXPEAPEAUHDCOMPOSITIONCONNECTION__@@@Z.c)
 * Callees:
 *     ?Create@CEvent@DirectComposition@@SAJPEAXHPEAPEAV12@@Z @ 0x1C000C59C (-Create@CEvent@DirectComposition@@SAJPEAXHPEAPEAV12@@Z.c)
 *     ?SetRetrievingProcess@CBatchSharedMemoryPoolSet@DirectComposition@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C000CF94 (-SetRetrievingProcess@CBatchSharedMemoryPoolSet@DirectComposition@@QEAAXPEAU_EPROCESS@@@Z.c)
 *     ?ReservePools@CBatchSharedMemoryPoolSet@DirectComposition@@QEAAJ_K@Z @ 0x1C000D218 (-ReservePools@CBatchSharedMemoryPoolSet@DirectComposition@@QEAAJ_K@Z.c)
 *     ?Disconnect@CConnection@DirectComposition@@QEAAXXZ @ 0x1C009549C (-Disconnect@CConnection@DirectComposition@@QEAAXXZ.c)
 *     ?OnConnectionReconnected@CChannelGroup@DirectComposition@@QEAAXXZ @ 0x1C00B7E10 (-OnConnectionReconnected@CChannelGroup@DirectComposition@@QEAAXXZ.c)
 *     ?Unlock@CChannel@DirectComposition@@QEAAXXZ @ 0x1C00B7F5C (-Unlock@CChannel@DirectComposition@@QEAAXXZ.c)
 *     ?AcquireExclusive@CCriticalSection@DirectComposition@@QEAAXXZ @ 0x1C00B8080 (-AcquireExclusive@CCriticalSection@DirectComposition@@QEAAXXZ.c)
 *     ?BoostCompositorClock@CSystemChannel@DirectComposition@@QEAAJH@Z @ 0x1C02153B0 (-BoostCompositorClock@CSystemChannel@DirectComposition@@QEAAJH@Z.c)
 *     ?EnableMMCSS@CSystemChannel@DirectComposition@@QEAAJH@Z @ 0x1C02154E8 (-EnableMMCSS@CSystemChannel@DirectComposition@@QEAAJH@Z.c)
 */

__int64 __fastcall DirectComposition::CConnection::Connect(DirectComposition::CConnection *this, void *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  int v8; // ebx
  struct _EPROCESS *CurrentProcess; // rax
  __int64 v11; // rdx

  DirectComposition::CCriticalSection::AcquireExclusive(*(PERESOURCE *)(*((_QWORD *)this + 19) + 32LL));
  DirectComposition::CCriticalSection::AcquireExclusive(*((PERESOURCE *)this + 1));
  if ( *((_DWORD *)this + 37) )
  {
    v8 = -1073741258;
LABEL_3:
    DirectComposition::CConnection::Disconnect(this);
    goto LABEL_4;
  }
  CurrentProcess = (struct _EPROCESS *)PsGetCurrentProcess(v5, v4, v6, v7);
  DirectComposition::CBatchSharedMemoryPoolSet::SetRetrievingProcess(
    (DirectComposition::CConnection *)((char *)this + 192),
    CurrentProcess);
  v8 = DirectComposition::CBatchSharedMemoryPoolSet::ReservePools(
         (DirectComposition::CConnection *)((char *)this + 192),
         1uLL);
  if ( v8 < 0 )
    goto LABEL_3;
  v8 = DirectComposition::CEvent::Create(a2, v11, (struct DirectComposition::CEvent **)this + 10);
  if ( v8 < 0 )
    goto LABEL_3;
  *((_DWORD *)this + 37) = 1;
  *((_DWORD *)this + 36) = 0;
  DirectComposition::CChannelGroup::OnConnectionReconnected((DirectComposition::CConnection *)((char *)this + 16));
  KeSetEvent(*(PRKEVENT *)(*((_QWORD *)this + 10) + 8LL), 1, 0);
  if ( *((_DWORD *)this + 56) )
    DirectComposition::CSystemChannel::EnableMMCSS(*((DirectComposition::CSystemChannel **)this + 19), 1);
  if ( *((_DWORD *)this + 57) )
    DirectComposition::CSystemChannel::BoostCompositorClock(*((DirectComposition::CSystemChannel **)this + 19), 1);
LABEL_4:
  ExReleaseResourceLite(*((PERESOURCE *)this + 1));
  KeLeaveCriticalRegion();
  DirectComposition::CChannel::Unlock(*((DirectComposition::CChannel **)this + 19));
  return (unsigned int)v8;
}
