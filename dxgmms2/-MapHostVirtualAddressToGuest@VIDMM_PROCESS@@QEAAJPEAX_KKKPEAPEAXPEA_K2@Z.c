__int64 __fastcall VIDMM_PROCESS::MapHostVirtualAddressToGuest(
        VIDMM_PROCESS *this,
        __int64 a2,
        unsigned __int64 a3,
        int a4,
        unsigned int a5,
        void **a6,
        unsigned __int64 *a7,
        void **a8)
{
  struct _KTHREAD **CpuVisibleBufferAllocator; // rsi
  __int64 v13; // r8
  int v15; // edi
  __int64 v16; // rcx
  __int64 v17; // rcx
  int v18; // eax
  __int64 v19; // rax
  struct _RTL_BALANCED_NODE *v20; // r14
  __int64 v21; // rbp
  __int64 v22; // rcx
  __int64 v23; // r8
  unsigned __int64 v24; // [rsp+50h] [rbp-28h] BYREF

  CpuVisibleBufferAllocator = (struct _KTHREAD **)VIDMM_PROCESS::GetCpuVisibleBufferAllocator(this);
  if ( !CpuVisibleBufferAllocator )
    return 3221225495LL;
  v24 = 0LL;
  v15 = CVirtualAddressAllocator::ReserveVirtualAddressRangeNoAccess(
          CpuVisibleBufferAllocator,
          a3,
          v13,
          0LL,
          0LL,
          0x1000u,
          &v24);
  if ( v15 >= 0 )
  {
    v17 = *((_QWORD *)this + 4);
    v18 = *(_DWORD *)(v17 + 424);
    if ( (v18 & 0x100) != 0 )
      v19 = *(_QWORD *)(v17 + 608);
    else
      v19 = v17 & -(__int64)((v18 & 0x80u) != 0);
    v20 = (struct _RTL_BALANCED_NODE *)v24;
    v21 = v24 + *(_QWORD *)(*(_QWORD *)(v19 + 608) + 256LL);
    v15 = MapChildVaSpace(v17, a2, v21, a3, a4, a5, (__int64)a6, (__int64)a8);
    if ( v15 >= 0 )
    {
      *a7 = v21;
    }
    else
    {
      WdLogSingleEntry2(1LL, a3, 2287LL);
      DxgkLogInternalTriageEvent(v22, 0x40000LL);
      CVirtualAddressAllocator::FreeVirtualAddressRange(CpuVisibleBufferAllocator, v20, v23);
    }
  }
  else
  {
    WdLogSingleEntry1(1LL, a3);
    DxgkLogInternalTriageEvent(v16, 0x40000LL);
  }
  return (unsigned int)v15;
}
