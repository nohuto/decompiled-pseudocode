__int64 __fastcall DirectComposition::CConnection::ReferenceSystemResource(__int64 a1, int a2)
{
  struct _ERESOURCE *v4; // rdi
  _QWORD *v5; // rdx
  unsigned __int64 v6; // rcx
  DirectComposition::CResourceMarshaler *v7; // rcx
  __int64 v8; // rdi
  __int64 result; // rax
  struct _ERESOURCE *v10; // rbx
  struct _ERESOURCE *v11; // rbx
  struct _ERESOURCE *v12; // rbx
  struct _ERESOURCE *v13; // rbx

  v4 = *(struct _ERESOURCE **)(*(_QWORD *)(a1 + 152) + 32LL);
  KeEnterCriticalRegion();
  ExAcquireResourceExclusiveLite(v4, 1u);
  v5 = *(_QWORD **)(a1 + 152);
  v6 = (unsigned int)(a2 - 1);
  if ( a2 && v6 < v5[17] )
    v7 = *(DirectComposition::CResourceMarshaler **)(v5[18] * v6 + v5[14]);
  else
    v7 = 0LL;
  DirectComposition::CResourceMarshaler::AddRef(v7);
  v8 = *(_QWORD *)(a1 + 152);
  ExReleaseResourceLite(*(PERESOURCE *)(v8 + 32));
  KeLeaveCriticalRegion();
  do
  {
    if ( _InterlockedCompareExchange((volatile signed __int32 *)(v8 + 24), 2, 1) == 1 )
    {
      v10 = *(struct _ERESOURCE **)(v8 + 32);
      KeEnterCriticalRegion();
      ExAcquireResourceExclusiveLite(v10, 1u);
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v8 + 48LL))(v8, 0LL);
      v11 = *(struct _ERESOURCE **)(*(_QWORD *)(v8 + 40) + 8LL);
      KeEnterCriticalRegion();
      ExAcquireResourceSharedLite(v11, 1u);
      if ( DirectComposition::CConnection::IsConnected(*(DirectComposition::CConnection **)(v8 + 40)) )
        *(_DWORD *)(v8 + 24) = 4;
      ExReleaseResourceLite(*(PERESOURCE *)(v8 + 32));
      KeLeaveCriticalRegion();
      ExReleaseResourceLite(*(PERESOURCE *)(*(_QWORD *)(v8 + 40) + 8LL));
      KeLeaveCriticalRegion();
    }
    if ( _InterlockedCompareExchange((volatile signed __int32 *)(v8 + 24), 5, 4) == 4 )
    {
      v12 = *(struct _ERESOURCE **)(v8 + 32);
      KeEnterCriticalRegion();
      ExAcquireResourceExclusiveLite(v12, 1u);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 56LL))(v8);
      v13 = *(struct _ERESOURCE **)(*(_QWORD *)(v8 + 40) + 8LL);
      KeEnterCriticalRegion();
      ExAcquireResourceSharedLite(v13, 1u);
      if ( !DirectComposition::CConnection::IsConnected(*(DirectComposition::CConnection **)(v8 + 40)) )
        *(_DWORD *)(v8 + 24) = 1;
      ExReleaseResourceLite(*(PERESOURCE *)(v8 + 32));
      KeLeaveCriticalRegion();
      ExReleaseResourceLite(*(PERESOURCE *)(*(_QWORD *)(v8 + 40) + 8LL));
      KeLeaveCriticalRegion();
    }
    result = *(unsigned int *)(v8 + 24);
  }
  while ( (_DWORD)result == 1 );
  return result;
}
