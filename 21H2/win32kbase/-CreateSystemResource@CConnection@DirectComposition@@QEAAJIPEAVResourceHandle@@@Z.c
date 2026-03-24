/*
 * XREFs of ?CreateSystemResource@CConnection@DirectComposition@@QEAAJIPEAVResourceHandle@@@Z @ 0x1C005C9EC
 * Callers:
 *     ?CreateSystemVisualForCrossChannelVisualChild@CApplicationChannel@DirectComposition@@QEAAJIPEAVResourceHandle@@@Z @ 0x1C00027B4 (-CreateSystemVisualForCrossChannelVisualChild@CApplicationChannel@DirectComposition@@QEAAJIPEAVR.c)
 *     ?ObjectInit@ResourceObject@DirectComposition@@KAJPEAUCompositionObject@@PEAXPEAPEAVICompositionObject@@@Z @ 0x1C005C160 (-ObjectInit@ResourceObject@DirectComposition@@KAJPEAUCompositionObject@@PEAXPEAPEAVICompositionO.c)
 * Callees:
 *     ?CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x1C00285B4 (-CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2.c)
 *     ?IsConnected@CConnection@DirectComposition@@QEAA_NXZ @ 0x1C0059A80 (-IsConnected@CConnection@DirectComposition@@QEAA_NXZ.c)
 *     ?Commit@CApplicationChannel@DirectComposition@@QEAAJPEA_N_NPEBUSynchronizationObject@2@@Z @ 0x1C005D8B4 (-Commit@CApplicationChannel@DirectComposition@@QEAAJPEA_N_NPEBUSynchronizationObject@2@@Z.c)
 *     ?ReleaseSystemResource@CSystemChannel@DirectComposition@@QEAAXVResourceHandle@@@Z @ 0x1C005F78C (-ReleaseSystemResource@CSystemChannel@DirectComposition@@QEAAXVResourceHandle@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00CF710 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DirectComposition::CConnection::CreateSystemResource(
        DirectComposition::CConnection *this,
        unsigned int a2,
        struct ResourceHandle *a3)
{
  struct _ERESOURCE *v6; // rbx
  DirectComposition::CApplicationChannel *v7; // rcx
  int v8; // esi
  unsigned int v9; // ebx
  __int64 v10; // rdi
  struct _ERESOURCE *v12; // rbx
  struct _ERESOURCE *v13; // rbx
  struct _ERESOURCE *v14; // rbx
  struct _ERESOURCE *v15; // rbx
  struct DirectComposition::CResourceMarshaler *v16; // [rsp+40h] [rbp+8h] BYREF

  v6 = *(struct _ERESOURCE **)(*((_QWORD *)this + 19) + 32LL);
  KeEnterCriticalRegion();
  ExAcquireResourceExclusiveLite(v6, 1u);
  v7 = (DirectComposition::CApplicationChannel *)*((_QWORD *)this + 19);
  v16 = 0LL;
  v8 = DirectComposition::CApplicationChannel::CreateInternalResource(v7, a2, &v16);
  if ( v8 >= 0 )
  {
    v9 = *((_DWORD *)v16 + 6);
    v8 = DirectComposition::CApplicationChannel::Commit(
           *((DirectComposition::CApplicationChannel **)this + 19),
           0LL,
           0,
           0LL);
    if ( v8 < 0 )
      DirectComposition::CSystemChannel::ReleaseSystemResource(*((_QWORD *)this + 19), v9);
    else
      *(_DWORD *)a3 = v9;
  }
  v10 = *((_QWORD *)this + 19);
  ExReleaseResourceLite(*(PERESOURCE *)(v10 + 32));
  KeLeaveCriticalRegion();
  do
  {
    if ( _InterlockedCompareExchange((volatile signed __int32 *)(v10 + 24), 2, 1) == 1 )
    {
      v12 = *(struct _ERESOURCE **)(v10 + 32);
      KeEnterCriticalRegion();
      ExAcquireResourceExclusiveLite(v12, 1u);
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v10 + 48LL))(v10, 0LL);
      v13 = *(struct _ERESOURCE **)(*(_QWORD *)(v10 + 40) + 8LL);
      KeEnterCriticalRegion();
      ExAcquireResourceSharedLite(v13, 1u);
      if ( DirectComposition::CConnection::IsConnected(*(DirectComposition::CConnection **)(v10 + 40)) )
        *(_DWORD *)(v10 + 24) = 4;
      ExReleaseResourceLite(*(PERESOURCE *)(v10 + 32));
      KeLeaveCriticalRegion();
      ExReleaseResourceLite(*(PERESOURCE *)(*(_QWORD *)(v10 + 40) + 8LL));
      KeLeaveCriticalRegion();
    }
    if ( _InterlockedCompareExchange((volatile signed __int32 *)(v10 + 24), 5, 4) == 4 )
    {
      v14 = *(struct _ERESOURCE **)(v10 + 32);
      KeEnterCriticalRegion();
      ExAcquireResourceExclusiveLite(v14, 1u);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 56LL))(v10);
      v15 = *(struct _ERESOURCE **)(*(_QWORD *)(v10 + 40) + 8LL);
      KeEnterCriticalRegion();
      ExAcquireResourceSharedLite(v15, 1u);
      if ( !DirectComposition::CConnection::IsConnected(*(DirectComposition::CConnection **)(v10 + 40)) )
        *(_DWORD *)(v10 + 24) = 1;
      ExReleaseResourceLite(*(PERESOURCE *)(v10 + 32));
      KeLeaveCriticalRegion();
      ExReleaseResourceLite(*(PERESOURCE *)(*(_QWORD *)(v10 + 40) + 8LL));
      KeLeaveCriticalRegion();
    }
  }
  while ( *(_DWORD *)(v10 + 24) == 1 );
  return (unsigned int)v8;
}
