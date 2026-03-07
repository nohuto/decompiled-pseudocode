// write access to const memory has been detected, the output may be wrong!
void __fastcall VIDMM_DEVICE::~VIDMM_DEVICE(VIDMM_DEVICE *this)
{
  unsigned int i; // ebx
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v5; // rdi
  __int64 v6; // rax
  VIDMM_GLOBAL *v7; // rcx
  _QWORD *v8; // rcx
  _QWORD *j; // rax
  __int64 v10; // rbx
  VIDMM_DEVICE **v11; // rdx
  VIDMM_DEVICE **v12; // rax
  char *v13; // rcx
  unsigned int k; // edi
  __int64 v15; // rbx
  char *v16; // rax
  unsigned int m; // ebx
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rdi
  __int64 v21; // rax
  VIDMM_DEVICE_PAGING_QUEUE *v22; // rcx
  VIDMM_DEVICE_PAGING_QUEUE *v23; // rcx
  VIDMM_DEVICE_PAGING_QUEUE *v24; // rcx
  __int64 v25; // rdi
  __int64 v26; // rcx
  VIDMM_DEVICE *v27; // rbx
  __int64 v28; // rbx
  char v29[8]; // [rsp+30h] [rbp-48h] BYREF
  DXGPUSHLOCK *v30; // [rsp+38h] [rbp-40h]
  int v31; // [rsp+40h] [rbp-38h]
  char v32[8]; // [rsp+48h] [rbp-30h] BYREF
  DXGPUSHLOCK *v33; // [rsp+50h] [rbp-28h]
  int v34; // [rsp+58h] [rbp-20h]

  for ( i = 0; i < *((_DWORD *)this + 17); ++i )
  {
    v3 = *((_QWORD *)this + 10);
    if ( v3 )
      VIDMM_PAGING_QUEUE::Flush((VIDMM_PAGING_QUEUE *)(v3 + 176LL * i));
    v4 = *((_QWORD *)this + 11);
    v5 = 176LL * i;
    if ( v4 )
      VIDMM_PAGING_QUEUE::Flush((VIDMM_PAGING_QUEUE *)(v5 + v4));
    v6 = *((_QWORD *)this + 12);
    if ( v6 )
      VIDMM_PAGING_QUEUE::Flush((VIDMM_PAGING_QUEUE *)(v6 + v5));
  }
  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v29, (struct _KTHREAD **)(*(_QWORD *)this + 44512LL), 0);
  DXGPUSHLOCK::AcquireExclusive(v30);
  v31 = 2;
  if ( *((_QWORD *)this + 24) )
    VIDMM_GLOBAL::RemoveFromPenaltyBoxByListEntry(v7, (struct _LIST_ENTRY *)this + 12);
  v8 = (_QWORD *)(*(_QWORD *)this + 44560LL);
  for ( j = (_QWORD *)*v8; j != v8; j = (_QWORD *)*j )
  {
    if ( this == (VIDMM_DEVICE *)j[7] )
      j[7] = 0LL;
  }
  KeSetEvent(*(PRKEVENT *)(**(_QWORD **)this + 176LL), 0, 0);
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v29);
  v10 = **(_QWORD **)this;
  if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v10 + 8) )
  {
    v25 = v10 + 144;
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(v10 + 144, 0LL);
    *(_QWORD *)(v10 + 152) = KeGetCurrentThread();
    v26 = v10 + 144;
    v27 = *(VIDMM_DEVICE **)(v10 + 16);
    *(_QWORD *)(v25 + 8) = 0LL;
    ExReleasePushLockExclusiveEx(v26, 0LL);
    KeLeaveCriticalRegion();
    if ( this == v27 )
    {
      v28 = **(_QWORD **)this;
      KeEnterCriticalRegion();
      ExAcquirePushLockExclusiveEx(v28 + 56, 0LL);
      *(_QWORD *)(v28 + 64) = 0LL;
      ExReleasePushLockExclusiveEx(v28 + 56, 0LL);
      KeLeaveCriticalRegion();
    }
  }
  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v32, (struct _KTHREAD **)(*(_QWORD *)this + 44512LL), 0);
  DXGPUSHLOCK::AcquireExclusive(v33);
  v34 = 2;
  v11 = (VIDMM_DEVICE **)*((_QWORD *)this + 26);
  if ( v11[1] != (VIDMM_DEVICE *)((char *)this + 208)
    || (v12 = (VIDMM_DEVICE **)*((_QWORD *)this + 27), *v12 != (VIDMM_DEVICE *)((char *)this + 208)) )
  {
    __fastfail(3u);
  }
  *v12 = (VIDMM_DEVICE *)v11;
  v11[1] = (VIDMM_DEVICE *)v12;
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v32);
  v13 = (char *)*((_QWORD *)this + 5);
  if ( v13 )
  {
    for ( k = 0; k < *((_DWORD *)this + 16); ++k )
    {
      v15 = 56LL * k;
      v16 = &v13[v15 + 32];
      if ( *(char **)v16 != v16 && (*(_DWORD *)(**(_QWORD **)(*(_QWORD *)v16 - 56LL) + 68LL) & 0x10000000) != 0 )
        WdLogSingleEntry5(0LL, 275LL, 43LL, *((_QWORD *)this + 3), *(_QWORD *)(*(_QWORD *)this + 24LL), 0LL);
      if ( *(_QWORD *)(v15 + *((_QWORD *)this + 5) + 32LL) != v15 + *((_QWORD *)this + 5) + 32LL && g_IsInternalRelease )
      {
        g_DxgMmsBugcheckExportIndex = 1;
        WdLogSingleEntry5(0LL, 270LL, 9LL, 0LL, 0LL, 0LL);
      }
      if ( *(_DWORD *)(v15 + *((_QWORD *)this + 5)) && g_IsInternalRelease )
      {
        g_DxgMmsBugcheckExportIndex = 1;
        WdLogSingleEntry5(0LL, 270LL, 9LL, 0LL, 0LL, 0LL);
      }
      if ( *(_QWORD *)(*((_QWORD *)this + 5) + v15 + 8) && g_IsInternalRelease )
      {
        g_DxgMmsBugcheckExportIndex = 1;
        WdLogSingleEntry5(0LL, 270LL, 9LL, 0LL, 0LL, 0LL);
      }
      if ( *(_QWORD *)(*((_QWORD *)this + 5) + v15 + 16) && g_IsInternalRelease )
      {
        g_DxgMmsBugcheckExportIndex = 1;
        WdLogSingleEntry5(0LL, 270LL, 9LL, 0LL, 0LL, 0LL);
      }
      v13 = (char *)*((_QWORD *)this + 5);
      if ( *(_QWORD *)&v13[v15 + 24] && g_IsInternalRelease )
      {
        g_DxgMmsBugcheckExportIndex = 1;
        WdLogSingleEntry5(0LL, 270LL, 9LL, 0LL, 0LL, 0LL);
        v13 = (char *)*((_QWORD *)this + 5);
      }
    }
    operator delete(v13);
  }
  for ( m = 0; m < *((_DWORD *)this + 17); ++m )
  {
    v18 = *((_QWORD *)this + 10);
    if ( v18 )
      VIDMM_DEVICE_PAGING_QUEUE::DestroyState((VIDMM_DEVICE_PAGING_QUEUE *)(v18 + 176LL * m));
    v19 = *((_QWORD *)this + 11);
    v20 = 176LL * m;
    if ( v19 )
      VIDMM_DEVICE_PAGING_QUEUE::DestroyState((VIDMM_DEVICE_PAGING_QUEUE *)(v20 + v19));
    v21 = *((_QWORD *)this + 12);
    if ( v21 )
      VIDMM_DEVICE_PAGING_QUEUE::DestroyState((VIDMM_DEVICE_PAGING_QUEUE *)(v21 + v20));
  }
  v22 = (VIDMM_DEVICE_PAGING_QUEUE *)*((_QWORD *)this + 10);
  if ( v22 )
    VIDMM_DEVICE_PAGING_QUEUE::`vector deleting destructor'(v22);
  v23 = (VIDMM_DEVICE_PAGING_QUEUE *)*((_QWORD *)this + 11);
  *((_QWORD *)this + 10) = 0LL;
  if ( v23 )
    VIDMM_DEVICE_PAGING_QUEUE::`vector deleting destructor'(v23);
  v24 = (VIDMM_DEVICE_PAGING_QUEUE *)*((_QWORD *)this + 12);
  *((_QWORD *)this + 11) = 0LL;
  if ( v24 )
    VIDMM_DEVICE_PAGING_QUEUE::`vector deleting destructor'(v24);
  *((_QWORD *)this + 12) = 0LL;
  if ( (*((_BYTE *)this + 58) & 1) != 0 )
    VIDMM_PROCESS::CloseAdapter(*((VIDMM_PROCESS **)this + 1), *(struct VIDMM_GLOBAL **)this);
}
