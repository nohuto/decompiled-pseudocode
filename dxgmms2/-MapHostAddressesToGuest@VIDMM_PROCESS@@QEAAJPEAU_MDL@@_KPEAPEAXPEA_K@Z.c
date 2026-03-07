__int64 __fastcall VIDMM_PROCESS::MapHostAddressesToGuest(
        VIDMM_PROCESS *this,
        struct _MDL *a2,
        unsigned __int64 a3,
        void **a4,
        unsigned __int64 *a5)
{
  __int64 v5; // rbx
  int v8; // eax
  __int64 v9; // rax
  VIDMM_PROCESS *v10; // rcx
  struct _KTHREAD **CpuVisibleBufferAllocator; // rbp
  __int64 v12; // r8
  int v14; // esi
  __int64 v15; // rcx
  int v16; // eax
  __int64 v17; // rax
  struct _RTL_BALANCED_NODE *v18; // r15
  unsigned __int64 v19; // r14
  __int64 v20; // r8
  unsigned __int64 v21; // [rsp+80h] [rbp+8h] BYREF

  v5 = *((_QWORD *)this + 4);
  v8 = *(_DWORD *)(v5 + 424);
  if ( (v8 & 0x100) != 0 )
  {
    v5 = *(_QWORD *)(v5 + 608);
  }
  else if ( (v8 & 0x80u) == 0 )
  {
    return 3221225473LL;
  }
  if ( !v5 )
    return 3221225473LL;
  v9 = *(_QWORD *)(v5 + 64);
  v10 = v9 ? *(VIDMM_PROCESS **)(v9 + 8) : 0LL;
  CpuVisibleBufferAllocator = (struct _KTHREAD **)VIDMM_PROCESS::GetCpuVisibleBufferAllocator(v10);
  if ( !CpuVisibleBufferAllocator )
    return 3221225473LL;
  if ( a3 > a2->ByteCount )
    return 3221225485LL;
  v21 = 0LL;
  v14 = CVirtualAddressAllocator::ReserveVirtualAddressRangeNoAccess(
          CpuVisibleBufferAllocator,
          a3,
          v12,
          0LL,
          0LL,
          0x1000u,
          &v21);
  if ( v14 >= 0 )
  {
    v16 = *(_DWORD *)(v5 + 424);
    if ( (v16 & 0x100) != 0 )
      v17 = *(_QWORD *)(v5 + 608);
    else
      v17 = v5 & -(__int64)((v16 & 0x80u) != 0);
    v18 = (struct _RTL_BALANCED_NODE *)v21;
    v19 = v21 + *(_QWORD *)(*(_QWORD *)(v17 + 608) + 256LL);
    v14 = MapChildMmioSpace(v5);
    if ( v14 >= 0 )
      *a5 = v19;
    else
      CVirtualAddressAllocator::FreeVirtualAddressRange(CpuVisibleBufferAllocator, v18, v20);
  }
  else
  {
    WdLogSingleEntry1(1LL, a3);
    DxgkLogInternalTriageEvent(v15, 0x40000LL);
  }
  return (unsigned int)v14;
}
