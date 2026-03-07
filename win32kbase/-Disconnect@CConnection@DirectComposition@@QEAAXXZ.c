void __fastcall DirectComposition::CConnection::Disconnect(DirectComposition::CConnection *this)
{
  char v2; // si
  struct _ERESOURCE *v3; // rbx
  struct _ERESOURCE *v4; // rbx
  DirectComposition::CBatch *v5; // rcx
  DirectComposition::CBatch *v6; // rcx
  struct DirectComposition::CBatch *v7; // rax
  unsigned int v8; // edx
  DirectComposition::CBatch *v9; // rax
  DirectComposition::CBatch *v10; // rbx
  DirectComposition::CEvent *v11; // rcx
  __int64 v12; // rdi
  DirectComposition::CBatch *v13; // rbx
  DirectComposition::CBatch *v14; // rbx
  struct DirectComposition::CBatch *v15; // rbx
  struct _ERESOURCE *v16; // rbx
  struct _ERESOURCE *v17; // rbx
  struct _ERESOURCE *v18; // rbx
  struct _ERESOURCE *v19; // rbx
  struct DirectComposition::CBatch *v20; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0;
  v3 = *(struct _ERESOURCE **)(*((_QWORD *)this + 19) + 32LL);
  KeEnterCriticalRegion();
  ExAcquireResourceExclusiveLite(v3, 1u);
  v4 = (struct _ERESOURCE *)*((_QWORD *)this + 1);
  KeEnterCriticalRegion();
  ExAcquireResourceExclusiveLite(v4, 1u);
  if ( *((_DWORD *)this + 37) )
  {
    *((_DWORD *)this + 37) = 0;
    v2 = 1;
  }
  DirectComposition::CConnection::DiscardAllCompositionFrames(this);
  DirectComposition::CBatchSharedMemoryPoolSet::FreeAllPools((DirectComposition::CConnection *)((char *)this + 192));
  DirectComposition::CBatchSharedMemoryPoolSet::SetRetrievingProcess(
    (DirectComposition::CConnection *)((char *)this + 192),
    0LL);
  v5 = (DirectComposition::CBatch *)*((_QWORD *)this + 15);
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 16) = 0LL;
  if ( v5 )
  {
    do
    {
      v13 = *(DirectComposition::CBatch **)v5;
      DirectComposition::CBatch::ReturnToApplication(v5, 0);
      v5 = v13;
    }
    while ( v13 );
  }
  v6 = (DirectComposition::CBatch *)*((_QWORD *)this + 14);
  *((_QWORD *)this + 14) = 0LL;
  if ( v6 )
  {
    do
    {
      v14 = *(DirectComposition::CBatch **)v6;
      DirectComposition::CBatch::ReturnToApplication(v6, 0);
      v6 = v14;
    }
    while ( v14 );
  }
  v7 = (struct DirectComposition::CBatch *)*((_QWORD *)this + 17);
  *((_QWORD *)this + 17) = 0LL;
  v20 = v7;
  if ( v7 )
  {
    do
    {
      v15 = *(struct DirectComposition::CBatch **)v7;
      DirectComposition::CBatch::ReturnToApplication(v7, 0);
      v7 = v15;
    }
    while ( v15 );
    v20 = 0LL;
  }
  DirectComposition::CConnection::GetNewBatches(this, &v20);
  v9 = v20;
  if ( v20 )
  {
    do
    {
      v10 = *(DirectComposition::CBatch **)v9;
      DirectComposition::CBatch::ReturnToApplication(v9, 0);
      v9 = v10;
    }
    while ( v10 );
    v20 = 0LL;
  }
  if ( v2 )
    DirectComposition::CChannelGroup::OnConnectionDisconnected((DirectComposition::CConnection *)((char *)this + 16));
  v11 = (DirectComposition::CEvent *)*((_QWORD *)this + 10);
  if ( v11 )
  {
    DirectComposition::CEvent::`scalar deleting destructor'(v11, v8);
    *((_QWORD *)this + 10) = 0LL;
  }
  ExReleaseResourceLite(*((PERESOURCE *)this + 1));
  KeLeaveCriticalRegion();
  v12 = *((_QWORD *)this + 19);
  ExReleaseResourceLite(*(PERESOURCE *)(v12 + 32));
  KeLeaveCriticalRegion();
  do
  {
    if ( _InterlockedCompareExchange((volatile signed __int32 *)(v12 + 24), 2, 1) == 1 )
    {
      v16 = *(struct _ERESOURCE **)(v12 + 32);
      KeEnterCriticalRegion();
      ExAcquireResourceExclusiveLite(v16, 1u);
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v12 + 48LL))(v12, 0LL);
      v17 = *(struct _ERESOURCE **)(*(_QWORD *)(v12 + 40) + 8LL);
      KeEnterCriticalRegion();
      ExAcquireResourceSharedLite(v17, 1u);
      if ( DirectComposition::CConnection::IsConnected(*(DirectComposition::CConnection **)(v12 + 40)) )
        *(_DWORD *)(v12 + 24) = 4;
      ExReleaseResourceLite(*(PERESOURCE *)(v12 + 32));
      KeLeaveCriticalRegion();
      ExReleaseResourceLite(*(PERESOURCE *)(*(_QWORD *)(v12 + 40) + 8LL));
      KeLeaveCriticalRegion();
    }
    if ( _InterlockedCompareExchange((volatile signed __int32 *)(v12 + 24), 5, 4) == 4 )
    {
      v18 = *(struct _ERESOURCE **)(v12 + 32);
      KeEnterCriticalRegion();
      ExAcquireResourceExclusiveLite(v18, 1u);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 56LL))(v12);
      v19 = *(struct _ERESOURCE **)(*(_QWORD *)(v12 + 40) + 8LL);
      KeEnterCriticalRegion();
      ExAcquireResourceSharedLite(v19, 1u);
      if ( !DirectComposition::CConnection::IsConnected(*(DirectComposition::CConnection **)(v12 + 40)) )
        *(_DWORD *)(v12 + 24) = 1;
      ExReleaseResourceLite(*(PERESOURCE *)(v12 + 32));
      KeLeaveCriticalRegion();
      ExReleaseResourceLite(*(PERESOURCE *)(*(_QWORD *)(v12 + 40) + 8LL));
      KeLeaveCriticalRegion();
    }
  }
  while ( *(_DWORD *)(v12 + 24) == 1 );
}
