__int64 __fastcall DirectComposition::CConnection::BoostCompositorClock(DirectComposition::CConnection *this, int a2)
{
  struct _ERESOURCE *v2; // rbx
  unsigned int v5; // ebp
  int v6; // eax
  char v7; // di
  struct _ERESOURCE *v8; // rbx
  __int64 v9; // rdi
  struct _ERESOURCE *v10; // rbx
  struct _ERESOURCE *v11; // rbx
  struct _ERESOURCE *v12; // rbx
  struct _ERESOURCE *v13; // rbx

  v2 = (struct _ERESOURCE *)*((_QWORD *)this + 1);
  v5 = 0;
  KeEnterCriticalRegion();
  ExAcquireResourceSharedLite(v2, 1u);
  ExAcquirePushLockExclusiveEx((char *)this + 224, 0LL);
  *((_BYTE *)this + 232) = 1;
  v6 = *((_DWORD *)this + 61);
  if ( a2 )
  {
    if ( v6 != -1 )
    {
      ++v6;
LABEL_6:
      *((_DWORD *)this + 61) = v6;
      goto LABEL_8;
    }
  }
  else if ( v6 )
  {
    --v6;
    goto LABEL_6;
  }
  v5 = -1073741823;
LABEL_8:
  v7 = v6 != 0;
  if ( (*((_DWORD *)this + 84) || !v6)
    && *((_BYTE *)this + 248) != v7
    && DirectComposition::CConnection::IsConnected(this) )
  {
    v8 = *(struct _ERESOURCE **)(*((_QWORD *)this + 19) + 32LL);
    KeEnterCriticalRegion();
    ExAcquireResourceExclusiveLite(v8, 1u);
    if ( (int)DirectComposition::CSystemChannel::BoostCompositorClock(
                *((DirectComposition::CSystemChannel **)this + 19),
                v7) >= 0 )
      *((_BYTE *)this + 248) = v7;
    v9 = *((_QWORD *)this + 19);
    ExReleaseResourceLite(*(PERESOURCE *)(v9 + 32));
    KeLeaveCriticalRegion();
    do
    {
      if ( _InterlockedCompareExchange((volatile signed __int32 *)(v9 + 24), 2, 1) == 1 )
      {
        v10 = *(struct _ERESOURCE **)(v9 + 32);
        KeEnterCriticalRegion();
        ExAcquireResourceExclusiveLite(v10, 1u);
        (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v9 + 48LL))(v9, 0LL);
        v11 = *(struct _ERESOURCE **)(*(_QWORD *)(v9 + 40) + 8LL);
        KeEnterCriticalRegion();
        ExAcquireResourceSharedLite(v11, 1u);
        if ( DirectComposition::CConnection::IsConnected(*(DirectComposition::CConnection **)(v9 + 40)) )
          *(_DWORD *)(v9 + 24) = 4;
        ExReleaseResourceLite(*(PERESOURCE *)(v9 + 32));
        KeLeaveCriticalRegion();
        ExReleaseResourceLite(*(PERESOURCE *)(*(_QWORD *)(v9 + 40) + 8LL));
        KeLeaveCriticalRegion();
      }
      if ( _InterlockedCompareExchange((volatile signed __int32 *)(v9 + 24), 5, 4) == 4 )
      {
        v12 = *(struct _ERESOURCE **)(v9 + 32);
        KeEnterCriticalRegion();
        ExAcquireResourceExclusiveLite(v12, 1u);
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 56LL))(v9);
        v13 = *(struct _ERESOURCE **)(*(_QWORD *)(v9 + 40) + 8LL);
        KeEnterCriticalRegion();
        ExAcquireResourceSharedLite(v13, 1u);
        if ( !DirectComposition::CConnection::IsConnected(*(DirectComposition::CConnection **)(v9 + 40)) )
          *(_DWORD *)(v9 + 24) = 1;
        ExReleaseResourceLite(*(PERESOURCE *)(v9 + 32));
        KeLeaveCriticalRegion();
        ExReleaseResourceLite(*(PERESOURCE *)(*(_QWORD *)(v9 + 40) + 8LL));
        KeLeaveCriticalRegion();
      }
    }
    while ( *(_DWORD *)(v9 + 24) == 1 );
  }
  DirectComposition::CPushLockCriticalSection::Release((DirectComposition::CConnection *)((char *)this + 224));
  ExReleaseResourceLite(*((PERESOURCE *)this + 1));
  KeLeaveCriticalRegion();
  return v5;
}
