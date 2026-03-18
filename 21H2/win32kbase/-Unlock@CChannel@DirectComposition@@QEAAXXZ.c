/*
 * XREFs of ?Unlock@CChannel@DirectComposition@@QEAAXXZ @ 0x1C00B7F5C
 * Callers:
 *     ?Disconnect@CConnection@DirectComposition@@QEAAXXZ @ 0x1C009549C (-Disconnect@CConnection@DirectComposition@@QEAAXXZ.c)
 *     ?Connect@CConnection@DirectComposition@@QEAAJPEAX@Z @ 0x1C00DD120 (-Connect@CConnection@DirectComposition@@QEAAJPEAX@Z.c)
 * Callees:
 *     ?IsConnected@CConnection@DirectComposition@@QEAA_NXZ @ 0x1C0013C00 (-IsConnected@CConnection@DirectComposition@@QEAA_NXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DirectComposition::CChannel::Unlock(DirectComposition::CChannel *this)
{
  struct _ERESOURCE *v2; // rbx
  struct _ERESOURCE *v3; // rbx
  struct _ERESOURCE *v4; // rbx
  struct _ERESOURCE *v5; // rbx

  ExReleaseResourceLite(*((PERESOURCE *)this + 4));
  KeLeaveCriticalRegion();
  do
  {
    if ( _InterlockedCompareExchange((volatile signed __int32 *)this + 6, 2, 1) == 1 )
    {
      v2 = (struct _ERESOURCE *)*((_QWORD *)this + 4);
      KeEnterCriticalRegion();
      ExAcquireResourceExclusiveLite(v2, 1u);
      (*(void (__fastcall **)(DirectComposition::CChannel *, _QWORD))(*(_QWORD *)this + 48LL))(this, 0LL);
      v3 = *(struct _ERESOURCE **)(*((_QWORD *)this + 5) + 8LL);
      KeEnterCriticalRegion();
      ExAcquireResourceSharedLite(v3, 1u);
      if ( DirectComposition::CConnection::IsConnected(*((DirectComposition::CConnection **)this + 5)) )
        *((_DWORD *)this + 6) = 4;
      ExReleaseResourceLite(*((PERESOURCE *)this + 4));
      KeLeaveCriticalRegion();
      ExReleaseResourceLite(*(PERESOURCE *)(*((_QWORD *)this + 5) + 8LL));
      KeLeaveCriticalRegion();
    }
    if ( _InterlockedCompareExchange((volatile signed __int32 *)this + 6, 5, 4) == 4 )
    {
      v4 = (struct _ERESOURCE *)*((_QWORD *)this + 4);
      KeEnterCriticalRegion();
      ExAcquireResourceExclusiveLite(v4, 1u);
      (*(void (__fastcall **)(DirectComposition::CChannel *))(*(_QWORD *)this + 56LL))(this);
      v5 = *(struct _ERESOURCE **)(*((_QWORD *)this + 5) + 8LL);
      KeEnterCriticalRegion();
      ExAcquireResourceSharedLite(v5, 1u);
      if ( !DirectComposition::CConnection::IsConnected(*((DirectComposition::CConnection **)this + 5)) )
        *((_DWORD *)this + 6) = 1;
      ExReleaseResourceLite(*((PERESOURCE *)this + 4));
      KeLeaveCriticalRegion();
      ExReleaseResourceLite(*(PERESOURCE *)(*((_QWORD *)this + 5) + 8LL));
      KeLeaveCriticalRegion();
    }
  }
  while ( *((_DWORD *)this + 6) == 1 );
}
