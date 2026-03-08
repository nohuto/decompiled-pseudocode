/*
 * XREFs of ?IsSystemResourceOfType@CConnection@DirectComposition@@QEAA_NVResourceHandle@@W4MIL_RESOURCE_TYPE@@@Z @ 0x1C005F090
 * Callers:
 *     NtDCompositionReferenceSharedResourceOnDwmChannel @ 0x1C006A0C0 (NtDCompositionReferenceSharedResourceOnDwmChannel.c)
 * Callees:
 *     ?IsConnected@CConnection@DirectComposition@@QEAA_NXZ @ 0x1C005B708 (-IsConnected@CConnection@DirectComposition@@QEAA_NXZ.c)
 *     ?IsDerivedResourceType@CResourceMarshaler@DirectComposition@@SA_NW4MIL_RESOURCE_TYPE@@0@Z @ 0x1C00A17F4 (-IsDerivedResourceType@CResourceMarshaler@DirectComposition@@SA_NW4MIL_RESOURCE_TYPE@@0@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 */

char __fastcall DirectComposition::CConnection::IsSystemResourceOfType(__int64 a1, int a2, unsigned int a3)
{
  struct _ERESOURCE *v6; // rdi
  __int64 v7; // rdi
  unsigned __int64 v8; // rdx
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v11; // rsi
  __int64 v12; // rcx
  char v13; // r12
  PERESOURCE *v14; // r15
  volatile signed __int32 *v15; // r14
  DirectComposition::CConnection **v16; // rbp
  struct _ERESOURCE *v18; // rbx
  struct _ERESOURCE *v19; // rbx
  struct _ERESOURCE *v20; // rbx
  struct _ERESOURCE *v21; // rbx

  v6 = *(struct _ERESOURCE **)(*(_QWORD *)(a1 + 152) + 32LL);
  KeEnterCriticalRegion();
  ExAcquireResourceExclusiveLite(v6, 1u);
  v7 = *(_QWORD *)(a1 + 152);
  v8 = (unsigned int)(a2 - 1);
  if ( !a2 || v8 >= *(_QWORD *)(v7 + 136) )
  {
    v11 = *(_QWORD *)(a1 + 152);
LABEL_12:
    v13 = 0;
    goto LABEL_6;
  }
  _mm_lfence();
  v9 = *(_QWORD *)(v7 + 144) * v8;
  v10 = *(_QWORD *)(v7 + 112);
  v11 = *(_QWORD *)(a1 + 152);
  v7 = v11;
  v12 = *(_QWORD *)(v9 + v10);
  if ( !v12
    || !(unsigned __int8)DirectComposition::CResourceMarshaler::IsDerivedResourceType(*(unsigned int *)(v12 + 36), a3) )
  {
    goto LABEL_12;
  }
  v13 = 1;
LABEL_6:
  v14 = (PERESOURCE *)(v7 + 32);
  ExReleaseResourceLite(*(PERESOURCE *)(v7 + 32));
  KeLeaveCriticalRegion();
  v15 = (volatile signed __int32 *)(v7 + 24);
  do
  {
    if ( _InterlockedCompareExchange(v15, 2, 1) == 1 )
    {
      v18 = *v14;
      KeEnterCriticalRegion();
      ExAcquireResourceExclusiveLite(v18, 1u);
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v7 + 48LL))(v7, 0LL);
      v16 = (DirectComposition::CConnection **)(v7 + 40);
      v19 = *(struct _ERESOURCE **)(*(_QWORD *)(v7 + 40) + 8LL);
      KeEnterCriticalRegion();
      ExAcquireResourceSharedLite(v19, 1u);
      if ( DirectComposition::CConnection::IsConnected(*(DirectComposition::CConnection **)(v7 + 40)) )
        *v15 = 4;
      ExReleaseResourceLite(*v14);
      KeLeaveCriticalRegion();
      ExReleaseResourceLite(*((PERESOURCE *)*v16 + 1));
      KeLeaveCriticalRegion();
    }
    else
    {
      v16 = (DirectComposition::CConnection **)(v11 + 40);
    }
    if ( _InterlockedCompareExchange(v15, 5, 4) == 4 )
    {
      v20 = *v14;
      KeEnterCriticalRegion();
      ExAcquireResourceExclusiveLite(v20, 1u);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 56LL))(v7);
      v21 = (struct _ERESOURCE *)*((_QWORD *)*v16 + 1);
      KeEnterCriticalRegion();
      ExAcquireResourceSharedLite(v21, 1u);
      if ( !DirectComposition::CConnection::IsConnected(*v16) )
        *v15 = 1;
      ExReleaseResourceLite(*v14);
      KeLeaveCriticalRegion();
      ExReleaseResourceLite(*((PERESOURCE *)*v16 + 1));
      KeLeaveCriticalRegion();
    }
  }
  while ( *v15 == 1 );
  return v13;
}
