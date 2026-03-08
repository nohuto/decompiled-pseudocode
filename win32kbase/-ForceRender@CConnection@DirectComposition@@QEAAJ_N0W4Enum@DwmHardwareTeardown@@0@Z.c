/*
 * XREFs of ?ForceRender@CConnection@DirectComposition@@QEAAJ_N0W4Enum@DwmHardwareTeardown@@0@Z @ 0x1C00D67AC
 * Callers:
 *     DCompositionForceRender @ 0x1C00D6720 (DCompositionForceRender.c)
 *     DCompositionDDAChange @ 0x1C0247CA0 (DCompositionDDAChange.c)
 * Callees:
 *     ?IsConnected@CConnection@DirectComposition@@QEAA_NXZ @ 0x1C005B708 (-IsConnected@CConnection@DirectComposition@@QEAA_NXZ.c)
 *     ?ForceRender@CSystemChannel@DirectComposition@@QEAAJ_N0W4Enum@DwmHardwareTeardown@@0@Z @ 0x1C00D6894 (-ForceRender@CSystemChannel@DirectComposition@@QEAAJ_N0W4Enum@DwmHardwareTeardown@@0@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DirectComposition::CConnection::ForceRender(__int64 a1, char a2, char a3, unsigned int a4, char a5)
{
  struct _ERESOURCE *v9; // rbx
  __int64 v10; // r8
  __int64 v11; // rdx
  unsigned int v12; // eax
  __int64 v13; // rdi
  unsigned int v14; // esi
  struct _ERESOURCE *v16; // rbx
  struct _ERESOURCE *v17; // rbx
  struct _ERESOURCE *v18; // rbx
  struct _ERESOURCE *v19; // rbx

  v9 = *(struct _ERESOURCE **)(*(_QWORD *)(a1 + 152) + 32LL);
  KeEnterCriticalRegion();
  ExAcquireResourceExclusiveLite(v9, 1u);
  LOBYTE(v10) = a3;
  LOBYTE(v11) = a2;
  v12 = DirectComposition::CSystemChannel::ForceRender(*(_QWORD *)(a1 + 152), v11, v10, a4, a5);
  v13 = *(_QWORD *)(a1 + 152);
  v14 = v12;
  ExReleaseResourceLite(*(PERESOURCE *)(v13 + 32));
  KeLeaveCriticalRegion();
  do
  {
    if ( _InterlockedCompareExchange((volatile signed __int32 *)(v13 + 24), 2, 1) == 1 )
    {
      v16 = *(struct _ERESOURCE **)(v13 + 32);
      KeEnterCriticalRegion();
      ExAcquireResourceExclusiveLite(v16, 1u);
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v13 + 48LL))(v13, 0LL);
      v17 = *(struct _ERESOURCE **)(*(_QWORD *)(v13 + 40) + 8LL);
      KeEnterCriticalRegion();
      ExAcquireResourceSharedLite(v17, 1u);
      if ( DirectComposition::CConnection::IsConnected(*(DirectComposition::CConnection **)(v13 + 40)) )
        *(_DWORD *)(v13 + 24) = 4;
      ExReleaseResourceLite(*(PERESOURCE *)(v13 + 32));
      KeLeaveCriticalRegion();
      ExReleaseResourceLite(*(PERESOURCE *)(*(_QWORD *)(v13 + 40) + 8LL));
      KeLeaveCriticalRegion();
    }
    if ( _InterlockedCompareExchange((volatile signed __int32 *)(v13 + 24), 5, 4) == 4 )
    {
      v18 = *(struct _ERESOURCE **)(v13 + 32);
      KeEnterCriticalRegion();
      ExAcquireResourceExclusiveLite(v18, 1u);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 56LL))(v13);
      v19 = *(struct _ERESOURCE **)(*(_QWORD *)(v13 + 40) + 8LL);
      KeEnterCriticalRegion();
      ExAcquireResourceSharedLite(v19, 1u);
      if ( !DirectComposition::CConnection::IsConnected(*(DirectComposition::CConnection **)(v13 + 40)) )
        *(_DWORD *)(v13 + 24) = 1;
      ExReleaseResourceLite(*(PERESOURCE *)(v13 + 32));
      KeLeaveCriticalRegion();
      ExReleaseResourceLite(*(PERESOURCE *)(*(_QWORD *)(v13 + 40) + 8LL));
      KeLeaveCriticalRegion();
    }
  }
  while ( *(_DWORD *)(v13 + 24) == 1 );
  return v14;
}
