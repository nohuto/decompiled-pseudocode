void __fastcall DirectComposition::CApplicationChannel::UnlockAndUnreference(
        DirectComposition::CApplicationChannel *this)
{
  struct DirectComposition::CrossChannelVisualData *v2; // rsi
  DirectComposition::CConnection **v3; // rsi
  char v4; // al
  struct _ERESOURCE *v5; // rcx
  struct _ERESOURCE *v6; // rdi
  struct _ERESOURCE *v7; // rdi
  struct _ERESOURCE *v8; // rdi
  struct _ERESOURCE *v9; // rdi
  struct _ERESOURCE *v10; // rdi
  struct _ERESOURCE *v11; // rdi
  struct _ERESOURCE *v12; // rdi
  struct _ERESOURCE *v13; // rdi
  struct _ERESOURCE *v14; // rdi

  v2 = (struct DirectComposition::CrossChannelVisualData *)*((_QWORD *)this + 50);
  if ( v2 )
  {
    v4 = *((_BYTE *)this + 240);
    if ( (v4 & 4) == 0 )
    {
      *((_BYTE *)this + 240) = v4 | 4;
      do
      {
        v5 = (struct _ERESOURCE *)*((_QWORD *)this + 4);
        *((_QWORD *)this + 50) = 0LL;
        ExReleaseResourceLite(v5);
        KeLeaveCriticalRegion();
        do
        {
          if ( _InterlockedCompareExchange((volatile signed __int32 *)this + 6, 2, 1) == 1 )
          {
            v6 = (struct _ERESOURCE *)*((_QWORD *)this + 4);
            KeEnterCriticalRegion();
            ExAcquireResourceExclusiveLite(v6, 1u);
            (*(void (__fastcall **)(DirectComposition::CApplicationChannel *, _QWORD))(*(_QWORD *)this + 48LL))(
              this,
              0LL);
            v7 = *(struct _ERESOURCE **)(*((_QWORD *)this + 5) + 8LL);
            KeEnterCriticalRegion();
            ExAcquireResourceSharedLite(v7, 1u);
            if ( DirectComposition::CConnection::IsConnected(*((DirectComposition::CConnection **)this + 5)) )
              *((_DWORD *)this + 6) = 4;
            ExReleaseResourceLite(*((PERESOURCE *)this + 4));
            KeLeaveCriticalRegion();
            ExReleaseResourceLite(*(PERESOURCE *)(*((_QWORD *)this + 5) + 8LL));
            KeLeaveCriticalRegion();
          }
          if ( _InterlockedCompareExchange((volatile signed __int32 *)this + 6, 5, 4) == 4 )
          {
            v8 = (struct _ERESOURCE *)*((_QWORD *)this + 4);
            KeEnterCriticalRegion();
            ExAcquireResourceExclusiveLite(v8, 1u);
            (*(void (__fastcall **)(DirectComposition::CApplicationChannel *))(*(_QWORD *)this + 56LL))(this);
            v9 = *(struct _ERESOURCE **)(*((_QWORD *)this + 5) + 8LL);
            KeEnterCriticalRegion();
            ExAcquireResourceSharedLite(v9, 1u);
            if ( !DirectComposition::CConnection::IsConnected(*((DirectComposition::CConnection **)this + 5)) )
              *((_DWORD *)this + 6) = 1;
            ExReleaseResourceLite(*((PERESOURCE *)this + 4));
            KeLeaveCriticalRegion();
            ExReleaseResourceLite(*(PERESOURCE *)(*((_QWORD *)this + 5) + 8LL));
            KeLeaveCriticalRegion();
          }
        }
        while ( *((_DWORD *)this + 6) == 1 );
        DirectComposition::CApplicationChannel::ReleaseCrossChannelVisuals(
          *((struct DirectComposition::CConnection **)this + 5),
          v2);
        v10 = (struct _ERESOURCE *)*((_QWORD *)this + 4);
        KeEnterCriticalRegion();
        ExAcquireResourceExclusiveLite(v10, 1u);
        v2 = (struct DirectComposition::CrossChannelVisualData *)*((_QWORD *)this + 50);
      }
      while ( v2 );
      *((_BYTE *)this + 240) &= ~4u;
    }
  }
  ExReleaseResourceLite(*((PERESOURCE *)this + 4));
  KeLeaveCriticalRegion();
  v3 = (DirectComposition::CConnection **)((char *)this + 40);
  do
  {
    if ( _InterlockedCompareExchange((volatile signed __int32 *)this + 6, 2, 1) == 1 )
    {
      v11 = (struct _ERESOURCE *)*((_QWORD *)this + 4);
      KeEnterCriticalRegion();
      ExAcquireResourceExclusiveLite(v11, 1u);
      (*(void (__fastcall **)(DirectComposition::CApplicationChannel *, _QWORD))(*(_QWORD *)this + 48LL))(this, 0LL);
      v12 = (struct _ERESOURCE *)*((_QWORD *)*v3 + 1);
      KeEnterCriticalRegion();
      ExAcquireResourceSharedLite(v12, 1u);
      if ( DirectComposition::CConnection::IsConnected(*v3) )
        *((_DWORD *)this + 6) = 4;
      ExReleaseResourceLite(*((PERESOURCE *)this + 4));
      KeLeaveCriticalRegion();
      ExReleaseResourceLite(*((PERESOURCE *)*v3 + 1));
      KeLeaveCriticalRegion();
    }
    else
    {
      v3 = (DirectComposition::CConnection **)((char *)this + 40);
    }
    if ( _InterlockedCompareExchange((volatile signed __int32 *)this + 6, 5, 4) == 4 )
    {
      v13 = (struct _ERESOURCE *)*((_QWORD *)this + 4);
      KeEnterCriticalRegion();
      ExAcquireResourceExclusiveLite(v13, 1u);
      (*(void (__fastcall **)(DirectComposition::CApplicationChannel *))(*(_QWORD *)this + 56LL))(this);
      v14 = (struct _ERESOURCE *)*((_QWORD *)*v3 + 1);
      KeEnterCriticalRegion();
      ExAcquireResourceSharedLite(v14, 1u);
      if ( !DirectComposition::CConnection::IsConnected(*v3) )
        *((_DWORD *)this + 6) = 1;
      ExReleaseResourceLite(*((PERESOURCE *)this + 4));
      KeLeaveCriticalRegion();
      ExReleaseResourceLite(*((PERESOURCE *)*v3 + 1));
      KeLeaveCriticalRegion();
    }
    else
    {
      v3 = (DirectComposition::CConnection **)((char *)this + 40);
    }
  }
  while ( *((_DWORD *)this + 6) == 1 );
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)this + 2, 0xFFFFFFFF) == 1 )
    (*(void (__fastcall **)(DirectComposition::CApplicationChannel *))(*(_QWORD *)this + 24LL))(this);
}
