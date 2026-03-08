/*
 * XREFs of ?EnableMMCSS@CConnection@DirectComposition@@QEAAJH@Z @ 0x1C024950C
 * Callers:
 *     ??1CProcessData@DirectComposition@@AEAA@XZ @ 0x1C006BD88 (--1CProcessData@DirectComposition@@AEAA@XZ.c)
 *     NtDCompositionEnableMMCSS @ 0x1C0248710 (NtDCompositionEnableMMCSS.c)
 * Callees:
 *     ?IsConnected@CConnection@DirectComposition@@QEAA_NXZ @ 0x1C005B708 (-IsConnected@CConnection@DirectComposition@@QEAA_NXZ.c)
 *     ?Release@CPushLockCriticalSection@DirectComposition@@QEAAXXZ @ 0x1C0091D74 (-Release@CPushLockCriticalSection@DirectComposition@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 *     ?EnableMMCSS@CSystemChannel@DirectComposition@@QEAAJ_N@Z @ 0x1C024BCE4 (-EnableMMCSS@CSystemChannel@DirectComposition@@QEAAJ_N@Z.c)
 */

__int64 __fastcall DirectComposition::CConnection::EnableMMCSS(DirectComposition::CConnection *this, int a2)
{
  struct _ERESOURCE *v2; // rbx
  unsigned int v5; // esi
  bool v6; // r14
  int v7; // ecx
  int v8; // eax
  bool v9; // zf
  struct _ERESOURCE *v10; // rbx
  __int64 v11; // rdi
  struct _ERESOURCE *v12; // rbx
  struct _ERESOURCE *v13; // rbx
  struct _ERESOURCE *v14; // rbx
  struct _ERESOURCE *v15; // rbx

  v2 = (struct _ERESOURCE *)*((_QWORD *)this + 1);
  v5 = 0;
  v6 = 0;
  KeEnterCriticalRegion();
  ExAcquireResourceSharedLite(v2, 1u);
  ExAcquirePushLockExclusiveEx((char *)this + 224, 0LL);
  *((_BYTE *)this + 232) = 1;
  v7 = *((_DWORD *)this + 60);
  if ( !a2 )
  {
    if ( !v7 )
    {
      v5 = -1073741823;
      goto LABEL_22;
    }
    v8 = v7 - 1;
    v9 = v7 == 1;
    goto LABEL_7;
  }
  if ( v7 != -1 )
  {
    v8 = v7 + 1;
    v9 = v7 == 0;
LABEL_7:
    v6 = v9;
    *((_DWORD *)this + 60) = v8;
    goto LABEL_8;
  }
  v5 = -1073741823;
LABEL_8:
  if ( v6 && DirectComposition::CConnection::IsConnected(this) )
  {
    v10 = *(struct _ERESOURCE **)(*((_QWORD *)this + 19) + 32LL);
    KeEnterCriticalRegion();
    ExAcquireResourceExclusiveLite(v10, 1u);
    DirectComposition::CSystemChannel::EnableMMCSS(
      *((DirectComposition::CSystemChannel **)this + 19),
      *((_DWORD *)this + 60) != 0);
    v11 = *((_QWORD *)this + 19);
    ExReleaseResourceLite(*(PERESOURCE *)(v11 + 32));
    KeLeaveCriticalRegion();
    do
    {
      if ( _InterlockedCompareExchange((volatile signed __int32 *)(v11 + 24), 2, 1) == 1 )
      {
        v12 = *(struct _ERESOURCE **)(v11 + 32);
        KeEnterCriticalRegion();
        ExAcquireResourceExclusiveLite(v12, 1u);
        (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v11 + 48LL))(v11, 0LL);
        v13 = *(struct _ERESOURCE **)(*(_QWORD *)(v11 + 40) + 8LL);
        KeEnterCriticalRegion();
        ExAcquireResourceSharedLite(v13, 1u);
        if ( DirectComposition::CConnection::IsConnected(*(DirectComposition::CConnection **)(v11 + 40)) )
          *(_DWORD *)(v11 + 24) = 4;
        ExReleaseResourceLite(*(PERESOURCE *)(v11 + 32));
        KeLeaveCriticalRegion();
        ExReleaseResourceLite(*(PERESOURCE *)(*(_QWORD *)(v11 + 40) + 8LL));
        KeLeaveCriticalRegion();
      }
      if ( _InterlockedCompareExchange((volatile signed __int32 *)(v11 + 24), 5, 4) == 4 )
      {
        v14 = *(struct _ERESOURCE **)(v11 + 32);
        KeEnterCriticalRegion();
        ExAcquireResourceExclusiveLite(v14, 1u);
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 56LL))(v11);
        v15 = *(struct _ERESOURCE **)(*(_QWORD *)(v11 + 40) + 8LL);
        KeEnterCriticalRegion();
        ExAcquireResourceSharedLite(v15, 1u);
        if ( !DirectComposition::CConnection::IsConnected(*(DirectComposition::CConnection **)(v11 + 40)) )
          *(_DWORD *)(v11 + 24) = 1;
        ExReleaseResourceLite(*(PERESOURCE *)(v11 + 32));
        KeLeaveCriticalRegion();
        ExReleaseResourceLite(*(PERESOURCE *)(*(_QWORD *)(v11 + 40) + 8LL));
        KeLeaveCriticalRegion();
      }
    }
    while ( *(_DWORD *)(v11 + 24) == 1 );
  }
LABEL_22:
  DirectComposition::CPushLockCriticalSection::Release((DirectComposition::CConnection *)((char *)this + 224));
  ExReleaseResourceLite(*((PERESOURCE *)this + 1));
  KeLeaveCriticalRegion();
  return v5;
}
