/*
 * XREFs of ?Delete@CSystemResourceReference@CBatch@DirectComposition@@QEAAXPEAVCApplicationChannel@3@@Z @ 0x1C0061878
 * Callers:
 *     ?Clear@CBatch@DirectComposition@@QEAAXXZ @ 0x1C0061350 (-Clear@CBatch@DirectComposition@@QEAAXXZ.c)
 * Callees:
 *     ?IsConnected@CConnection@DirectComposition@@QEAA_NXZ @ 0x1C005B708 (-IsConnected@CConnection@DirectComposition@@QEAA_NXZ.c)
 *     ?ReleaseSystemResource@CSystemChannel@DirectComposition@@QEAAXVResourceHandle@@@Z @ 0x1C0064AB4 (-ReleaseSystemResource@CSystemChannel@DirectComposition@@QEAAXVResourceHandle@@@Z.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C009B7C0 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DirectComposition::CBatch::CSystemResourceReference::Delete(
        DirectComposition::CBatch::CSystemResourceReference *this,
        struct DirectComposition::CApplicationChannel *a2)
{
  unsigned int v2; // ebx
  __int64 v4; // rsi
  struct _ERESOURCE *v5; // rdi
  __int64 v6; // rdi
  struct _ERESOURCE *v7; // rbx
  struct _ERESOURCE *v8; // rbx
  struct _ERESOURCE *v9; // rbx
  struct _ERESOURCE *v10; // rbx

  v2 = *((_DWORD *)this + 2);
  if ( v2 )
  {
    v4 = *((_QWORD *)a2 + 5);
    v5 = *(struct _ERESOURCE **)(*(_QWORD *)(v4 + 152) + 32LL);
    KeEnterCriticalRegion();
    ExAcquireResourceExclusiveLite(v5, 1u);
    DirectComposition::CSystemChannel::ReleaseSystemResource(*(_QWORD *)(v4 + 152), v2);
    v6 = *(_QWORD *)(v4 + 152);
    ExReleaseResourceLite(*(PERESOURCE *)(v6 + 32));
    KeLeaveCriticalRegion();
    do
    {
      if ( _InterlockedCompareExchange((volatile signed __int32 *)(v6 + 24), 2, 1) == 1 )
      {
        v7 = *(struct _ERESOURCE **)(v6 + 32);
        KeEnterCriticalRegion();
        ExAcquireResourceExclusiveLite(v7, 1u);
        (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v6 + 48LL))(v6, 0LL);
        v8 = *(struct _ERESOURCE **)(*(_QWORD *)(v6 + 40) + 8LL);
        KeEnterCriticalRegion();
        ExAcquireResourceSharedLite(v8, 1u);
        if ( DirectComposition::CConnection::IsConnected(*(DirectComposition::CConnection **)(v6 + 40)) )
          *(_DWORD *)(v6 + 24) = 4;
        ExReleaseResourceLite(*(PERESOURCE *)(v6 + 32));
        KeLeaveCriticalRegion();
        ExReleaseResourceLite(*(PERESOURCE *)(*(_QWORD *)(v6 + 40) + 8LL));
        KeLeaveCriticalRegion();
      }
      if ( _InterlockedCompareExchange((volatile signed __int32 *)(v6 + 24), 5, 4) == 4 )
      {
        v9 = *(struct _ERESOURCE **)(v6 + 32);
        KeEnterCriticalRegion();
        ExAcquireResourceExclusiveLite(v9, 1u);
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 56LL))(v6);
        v10 = *(struct _ERESOURCE **)(*(_QWORD *)(v6 + 40) + 8LL);
        KeEnterCriticalRegion();
        ExAcquireResourceSharedLite(v10, 1u);
        if ( !DirectComposition::CConnection::IsConnected(*(DirectComposition::CConnection **)(v6 + 40)) )
          *(_DWORD *)(v6 + 24) = 1;
        ExReleaseResourceLite(*(PERESOURCE *)(v6 + 32));
        KeLeaveCriticalRegion();
        ExReleaseResourceLite(*(PERESOURCE *)(*(_QWORD *)(v6 + 40) + 8LL));
        KeLeaveCriticalRegion();
      }
    }
    while ( *(_DWORD *)(v6 + 24) == 1 );
    *((_DWORD *)this + 2) = 0;
  }
  NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, this);
}
