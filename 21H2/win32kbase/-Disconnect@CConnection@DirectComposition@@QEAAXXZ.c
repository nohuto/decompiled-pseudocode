/*
 * XREFs of ?Disconnect@CConnection@DirectComposition@@QEAAXXZ @ 0x1C009549C
 * Callers:
 *     ?OnDwmRenderThreadExit@CConnection@DirectComposition@@SAXXZ @ 0x1C0095358 (-OnDwmRenderThreadExit@CConnection@DirectComposition@@SAXXZ.c)
 *     ?DestroyHandle@CConnection@DirectComposition@@SAJPEAUHDCOMPOSITIONCONNECTION__@@@Z @ 0x1C00953E0 (-DestroyHandle@CConnection@DirectComposition@@SAJPEAUHDCOMPOSITIONCONNECTION__@@@Z.c)
 *     ?Connect@CConnection@DirectComposition@@QEAAJPEAX@Z @ 0x1C00DD120 (-Connect@CConnection@DirectComposition@@QEAAJPEAX@Z.c)
 * Callees:
 *     ?FreeAllPools@CBatchSharedMemoryPoolSet@DirectComposition@@QEAAXXZ @ 0x1C000C6D8 (-FreeAllPools@CBatchSharedMemoryPoolSet@DirectComposition@@QEAAXXZ.c)
 *     ??_GCEvent@DirectComposition@@QEAAPEAXI@Z @ 0x1C000C9A4 (--_GCEvent@DirectComposition@@QEAAPEAXI@Z.c)
 *     ?SetRetrievingProcess@CBatchSharedMemoryPoolSet@DirectComposition@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C000CF94 (-SetRetrievingProcess@CBatchSharedMemoryPoolSet@DirectComposition@@QEAAXPEAU_EPROCESS@@@Z.c)
 *     ?ReturnToApplication@CBatch@DirectComposition@@QEAAX_N@Z @ 0x1C0080AA4 (-ReturnToApplication@CBatch@DirectComposition@@QEAAX_N@Z.c)
 *     ?Unlock@CChannel@DirectComposition@@QEAAXXZ @ 0x1C00B7F5C (-Unlock@CChannel@DirectComposition@@QEAAXXZ.c)
 *     ?OnConnectionDisconnected@CChannelGroup@DirectComposition@@QEAAXXZ @ 0x1C00B7F94 (-OnConnectionDisconnected@CChannelGroup@DirectComposition@@QEAAXXZ.c)
 *     ?AcquireExclusive@CCriticalSection@DirectComposition@@QEAAXXZ @ 0x1C00B8080 (-AcquireExclusive@CCriticalSection@DirectComposition@@QEAAXXZ.c)
 *     ?GetNewBatches@CConnection@DirectComposition@@QEAAXPEAPEAVCBatch@2@@Z @ 0x1C00C4F80 (-GetNewBatches@CConnection@DirectComposition@@QEAAXPEAPEAVCBatch@2@@Z.c)
 *     ?DiscardAllCompositionFrames@CConnection@DirectComposition@@AEAAXXZ @ 0x1C00C569C (-DiscardAllCompositionFrames@CConnection@DirectComposition@@AEAAXXZ.c)
 */

void __fastcall DirectComposition::CConnection::Disconnect(DirectComposition::CConnection *this)
{
  char v2; // si
  DirectComposition::CBatch *v3; // rcx
  DirectComposition::CBatch *v4; // rbx
  DirectComposition::CBatch *v5; // rcx
  DirectComposition::CBatch *v6; // rbx
  struct DirectComposition::CBatch *v7; // rax
  struct DirectComposition::CBatch *v8; // rbx
  DirectComposition::CBatch *v9; // rcx
  DirectComposition::CBatch *v10; // rbx
  DirectComposition::CEvent *v11; // rcx
  struct DirectComposition::CBatch *v12; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0;
  DirectComposition::CCriticalSection::AcquireExclusive(*(PERESOURCE *)(*((_QWORD *)this + 19) + 32LL));
  DirectComposition::CCriticalSection::AcquireExclusive(*((PERESOURCE *)this + 1));
  if ( *((_DWORD *)this + 37) )
  {
    *((_DWORD *)this + 37) = 0;
    v2 = 1;
  }
  DirectComposition::CConnection::DiscardAllCompositionFrames(this);
  DirectComposition::CBatchSharedMemoryPoolSet::FreeAllPools((DirectComposition::CBatchSharedMemoryPool **)this + 24);
  DirectComposition::CBatchSharedMemoryPoolSet::SetRetrievingProcess(
    (DirectComposition::CConnection *)((char *)this + 192),
    0LL);
  v3 = (DirectComposition::CBatch *)*((_QWORD *)this + 15);
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 16) = 0LL;
  if ( v3 )
  {
    do
    {
      v4 = *(DirectComposition::CBatch **)v3;
      DirectComposition::CBatch::ReturnToApplication(v3, 0);
      v3 = v4;
    }
    while ( v4 );
  }
  v5 = (DirectComposition::CBatch *)*((_QWORD *)this + 14);
  *((_QWORD *)this + 14) = 0LL;
  if ( v5 )
  {
    do
    {
      v6 = *(DirectComposition::CBatch **)v5;
      DirectComposition::CBatch::ReturnToApplication(v5, 0);
      v5 = v6;
    }
    while ( v6 );
  }
  v7 = (struct DirectComposition::CBatch *)*((_QWORD *)this + 17);
  *((_QWORD *)this + 17) = 0LL;
  v12 = v7;
  if ( v7 )
  {
    do
    {
      v8 = *(struct DirectComposition::CBatch **)v7;
      DirectComposition::CBatch::ReturnToApplication(v7, 0);
      v7 = v8;
    }
    while ( v8 );
    v12 = 0LL;
  }
  DirectComposition::CConnection::GetNewBatches(this, &v12);
  v9 = v12;
  if ( v12 )
  {
    do
    {
      v10 = *(DirectComposition::CBatch **)v9;
      DirectComposition::CBatch::ReturnToApplication(v9, 0);
      v9 = v10;
    }
    while ( v10 );
  }
  if ( v2 )
    DirectComposition::CChannelGroup::OnConnectionDisconnected((DirectComposition::CConnection *)((char *)this + 16));
  v11 = (DirectComposition::CEvent *)*((_QWORD *)this + 10);
  if ( v11 )
  {
    DirectComposition::CEvent::`scalar deleting destructor'(v11);
    *((_QWORD *)this + 10) = 0LL;
  }
  ExReleaseResourceLite(*((PERESOURCE *)this + 1));
  KeLeaveCriticalRegion();
  DirectComposition::CChannel::Unlock(*((DirectComposition::CChannel **)this + 19));
}
