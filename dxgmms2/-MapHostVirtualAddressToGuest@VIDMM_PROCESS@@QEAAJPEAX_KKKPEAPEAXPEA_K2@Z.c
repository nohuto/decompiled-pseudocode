/*
 * XREFs of ?MapHostVirtualAddressToGuest@VIDMM_PROCESS@@QEAAJPEAX_KKKPEAPEAXPEA_K2@Z @ 0x1C00EF538
 * Callers:
 *     ?CommitGlobalBackingStore@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00A1F50 (-CommitGlobalBackingStore@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?Allocate@VIDMM_RECYCLE_BLOCK@@QEAAJ_KE@Z @ 0x1C00A970C (-Allocate@VIDMM_RECYCLE_BLOCK@@QEAAJ_KE@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C00199EC (DxgkLogInternalTriageEvent.c)
 *     MapChildVaSpace @ 0x1C002D014 (MapChildVaSpace.c)
 *     ?ReserveVirtualAddressRangeNoAccess@CVirtualAddressAllocator@@QEAAJ_K000IPEA_K@Z @ 0x1C00A6558 (-ReserveVirtualAddressRangeNoAccess@CVirtualAddressAllocator@@QEAAJ_K000IPEA_K@Z.c)
 *     ?FreeVirtualAddressRange@CVirtualAddressAllocator@@QEAAJ_K@Z @ 0x1C00C3074 (-FreeVirtualAddressRange@CVirtualAddressAllocator@@QEAAJ_K@Z.c)
 *     ?GetCpuVisibleBufferAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@XZ @ 0x1C00EF14C (-GetCpuVisibleBufferAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@XZ.c)
 */

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
