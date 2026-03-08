/*
 * XREFs of ?MapScratchAreaVaRange@VIDMM_PAGING_PROCESS@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@I_KPEAU_VIDMM_GLOBAL_ALLOC@@0I0PEBU_DXGK_ADL@@PEAE0@Z @ 0x1C00F2DFC
 * Callers:
 *     ?GetDriverUpdateAddress@VIDMM_PAGE_TABLE_BASE@@QEAAJPEAVCVirtualAddressAllocator@@PEAIPEA_KPEAPEAX@Z @ 0x1C00920C0 (-GetDriverUpdateAddress@VIDMM_PAGE_TABLE_BASE@@QEAAJPEAVCVirtualAddressAllocator@@PEAIPEA_KPEAPE.c)
 *     ?FillAllocationUsingGpuVa@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_KIPEAVVIDMM_SEGMENT@@PEAT_LARGE_INTEGER@@@Z @ 0x1C00E2EAC (-FillAllocationUsingGpuVa@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_KIPEAVVIDMM_SEGMENT@@PEA.c)
 *     ?MemoryTransferUsingGpuVaWorker@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@1PEAU_MDL@@2131U_DXGK_TRANSFERFLAGS@@1@Z @ 0x1C00E5604 (-MemoryTransferUsingGpuVaWorker@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMEN.c)
 * Callees:
 *     ?CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEBU_DXGK_ADL@@W4VIDMM_FLUSH_TLB_MODE@@PEAPEAUVIDMM_ALLOC@@PEA_N@Z @ 0x1C008E1D0 (-CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEBU_DX.c)
 *     ?MapVirtualAddressRange@CVirtualAddressAllocator@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAX_KW4VIDMM_VAD_OWNER_TYPE@@_K333IU_D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE@@1IPEAPEAUVIDMM_VAD_PENDING_OPERATION@@_N@Z @ 0x1C009EC00 (-MapVirtualAddressRange@CVirtualAddressAllocator@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAX_KW4VIDMM_V.c)
 */

// write access to const memory has been detected, the output may be wrong!
struct VIDMM_MAPPED_VA_RANGE *__fastcall VIDMM_PAGING_PROCESS::MapScratchAreaVaRange(
        VIDMM_PAGING_PROCESS *this,
        unsigned int a2,
        unsigned __int64 a3,
        struct _VIDMM_GLOBAL_ALLOC *a4,
        unsigned __int64 a5,
        unsigned int a6,
        unsigned __int64 a7,
        const struct _DXGK_ADL *a8,
        unsigned __int8 *a9,
        unsigned __int64 a10)
{
  __int64 v11; // rbp
  __int64 v14; // r9
  unsigned int v15; // ecx
  unsigned __int8 v16; // dl
  _QWORD *v17; // rax
  unsigned __int64 v18; // rdx
  unsigned __int64 v19; // r8
  struct _KTHREAD **v20; // r15
  volatile signed __int32 *v21; // rax
  volatile signed __int32 *v22; // rdi

  v11 = a2;
  if ( a6
    && (v14 = a2,
        *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 3712LL)
                              + 8LL
                              * (a6 + *(_DWORD *)(1616LL * a2 + *(_QWORD *)(*((_QWORD *)this + 2) + 40224LL) + 28) - 1))
                  + 376LL) == 0x10000)
    && !(_WORD)a3
    && (v15 = *((_DWORD *)a4 + 8)) != 0
    && !(_WORD)v15 )
  {
    v16 = 1;
  }
  else
  {
    v15 = *((_DWORD *)a4 + 8);
    v16 = 0;
    v14 = v11;
  }
  *a9 = v16;
  v17 = (_QWORD *)*((_QWORD *)this + 2);
  if ( v16 )
  {
    v18 = v17[5120];
    v19 = v17[5121];
  }
  else
  {
    v18 = v17[5118];
    v19 = v17[5119];
  }
  v20 = (struct _KTHREAD **)*((_QWORD *)this + v14 + 4);
  v21 = CVirtualAddressAllocator::MapVirtualAddressRange(
          v20,
          (__int64)a4,
          a5,
          3,
          a3,
          0LL,
          v18,
          v19,
          v15,
          1LL,
          a10,
          v11,
          0LL,
          0);
  v22 = v21;
  if ( v21 )
  {
    *((_DWORD *)v21 + 16) |= 0x2000u;
    *((_QWORD *)v21 + 5) = 0LL;
    a9 = 0LL;
    if ( (int)CVirtualAddressAllocator::CommitVirtualAddressRange(
                (__int64)v20,
                (__int64)v21,
                v11,
                a6,
                a7,
                a8,
                0,
                (DXGK_MULTIPLANE_OVERLAY_PLANE3 **)&a9,
                0LL) < 0 )
    {
      g_DxgMmsBugcheckExportIndex = 1;
      WdLogSingleEntry5(0LL, 270LL, 48LL, this, 0LL, 0LL);
    }
    return (struct VIDMM_MAPPED_VA_RANGE *)v22;
  }
  else
  {
    WdLogSingleEntry0(4LL);
    return 0LL;
  }
}
