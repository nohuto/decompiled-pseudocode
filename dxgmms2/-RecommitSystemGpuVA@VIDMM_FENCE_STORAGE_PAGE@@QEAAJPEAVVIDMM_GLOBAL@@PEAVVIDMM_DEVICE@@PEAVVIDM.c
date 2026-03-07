__int64 __fastcall VIDMM_FENCE_STORAGE_PAGE::RecommitSystemGpuVA(
        VIDMM_FENCE_STORAGE_PAGE *this,
        struct VIDMM_GLOBAL *a2,
        DXGK_MULTIPLANE_OVERLAY_PLANE3 *a3,
        struct VIDMM_PROCESS *a4,
        unsigned int a5)
{
  int v8; // ebp
  __int64 *v9; // rsi
  __int64 *v10; // r14
  char *v11; // rdi
  __int64 **v12; // rbx
  __int64 *i; // rax
  __int64 *j; // rax
  struct CVirtualAddressAllocator *VirtualAddressAllocator; // rbx
  unsigned __int64 LogicalAddress; // rax
  int v17; // ebx
  __int128 v19; // [rsp+50h] [rbp-38h] BYREF
  DXGK_MULTIPLANE_OVERLAY_PLANE3 *v20; // [rsp+A0h] [rbp+18h] BYREF

  v20 = a3;
  v8 = 1 << a5;
  v9 = 0LL;
  v10 = 0LL;
  v11 = (char *)this + 72;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx((char *)this + 72, 0LL);
  v12 = (__int64 **)((char *)this + 56);
  *((_QWORD *)v11 + 1) = KeGetCurrentThread();
  for ( i = *v12; i != (__int64 *)v12; i = (__int64 *)*i )
  {
    if ( a2 == (struct VIDMM_GLOBAL *)i[6] )
    {
      v9 = i;
      break;
    }
  }
  for ( j = (__int64 *)v9[4]; j != v9 + 4; j = (__int64 *)*j )
  {
    if ( a4 == (struct VIDMM_PROCESS *)*(j - 1) && *((_DWORD *)j + 5) == v8 )
    {
      v10 = j - 5;
      break;
    }
  }
  VirtualAddressAllocator = VIDMM_PROCESS::GetVirtualAddressAllocator(a4, *(_DWORD *)(*((_QWORD *)a2 + 3) + 240LL), a5);
  v19 = 0LL;
  LogicalAddress = SysMmGetLogicalAddress((void *const)v9[8]);
  VidMmiInitializeAdlForMdl((struct _DXGK_ADL *)&v19, (struct _MDL *)v9[7], LogicalAddress);
  v20 = 0LL;
  v17 = CVirtualAddressAllocator::CommitVirtualAddressRange(
          (__int64)VirtualAddressAllocator,
          v10[2],
          a5,
          0,
          0LL,
          (struct _DXGK_ADL *)&v19,
          0,
          &v20,
          0LL);
  if ( v17 >= 0 )
  {
    *((_QWORD *)v11 + 1) = 0LL;
    ExReleasePushLockExclusiveEx(v11, 0LL);
    KeLeaveCriticalRegion();
    return 0LL;
  }
  else
  {
    WdLogSingleEntry0(3LL);
    *((_QWORD *)v11 + 1) = 0LL;
    ExReleasePushLockExclusiveEx(v11, 0LL);
    KeLeaveCriticalRegion();
    return (unsigned int)v17;
  }
}
