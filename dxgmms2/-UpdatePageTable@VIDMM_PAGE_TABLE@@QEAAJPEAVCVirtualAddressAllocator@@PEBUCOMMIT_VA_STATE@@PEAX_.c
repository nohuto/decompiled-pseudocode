/*
 * XREFs of ?UpdatePageTable@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@PEAX_KW4VIDMM_VAD_OWNER_TYPE@@II3U_DXGK_UPDATEPAGETABLEFLAGS@@@Z @ 0x1C00F3B98
 * Callers:
 *     ?CommitVirtualAddressRange@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K222EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0092740 (-CommitVirtualAddressRange@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_ST.c)
 * Callees:
 *     ?UpdatePageTable@VIDMM_GLOBAL@@QEAAXIPEAVVIDMM_PROCESS@@_KPEAUVIDMM_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@1IIPEAU_DXGK_PTE@@4II1W4_DXGK_PAGETABLEUPDATEMODE@@1U_DXGK_UPDATEPAGETABLEFLAGS@@1@Z @ 0x1C0091950 (-UpdatePageTable@VIDMM_GLOBAL@@QEAAXIPEAVVIDMM_PROCESS@@_KPEAUVIDMM_ALLOC@@PEAU_VIDMM_GLOBAL_ALL.c)
 *     ?GetDriverUpdateAddress@VIDMM_PAGE_TABLE_BASE@@QEAAJPEAVCVirtualAddressAllocator@@PEAIPEA_KPEAPEAX@Z @ 0x1C00920C0 (-GetDriverUpdateAddress@VIDMM_PAGE_TABLE_BASE@@QEAAJPEAVCVirtualAddressAllocator@@PEAIPEA_KPEAPE.c)
 *     ?FreeDriverUpdateAddress@VIDMM_PAGE_TABLE_BASE@@QEAAXPEAVCVirtualAddressAllocator@@I_KPEAX@Z @ 0x1C0092CC0 (-FreeDriverUpdateAddress@VIDMM_PAGE_TABLE_BASE@@QEAAXPEAVCVirtualAddressAllocator@@I_KPEAX@Z.c)
 */

__int64 __fastcall VIDMM_PAGE_TABLE::UpdatePageTable(
        VIDMM_PAGE_TABLE_BASE *a1,
        VIDMM_GLOBAL **a2,
        __int64 a3,
        struct _VIDMM_GLOBAL_ALLOC ***a4,
        unsigned __int64 a5,
        int a6,
        unsigned int a7,
        unsigned int a8,
        unsigned __int64 a9,
        struct _DXGK_UPDATEPAGETABLEFLAGS a10)
{
  VIDMM_GLOBAL *v10; // r15
  struct VIDMM_ALLOC *v16; // rbp
  struct _VIDMM_GLOBAL_ALLOC *v17; // r11
  enum _DXGK_PAGETABLEUPDATEMODE v18; // ecx
  void *v19; // rbx
  __int64 v20; // r8
  unsigned __int64 v21; // [rsp+90h] [rbp-28h] BYREF
  void *v22; // [rsp+98h] [rbp-20h] BYREF
  unsigned int v23; // [rsp+C8h] [rbp+10h] BYREF

  v10 = a2[11];
  v23 = 0;
  v21 = 0LL;
  v22 = 0LL;
  if ( (int)VIDMM_PAGE_TABLE_BASE::GetDriverUpdateAddress(a1, (struct CVirtualAddressAllocator *)a2, &v23, &v21, &v22) >= 0 )
  {
    v16 = 0LL;
    if ( a6 == 1 )
    {
      v16 = (struct VIDMM_ALLOC *)a4;
      v17 = **a4;
    }
    else
    {
      v17 = 0LL;
      if ( a6 == 3 )
        v17 = (struct _VIDMM_GLOBAL_ALLOC *)a4;
    }
    if ( (*((_BYTE *)v10 + 40936) & 0x40) != 0 )
      v18 = DXGK_PAGETABLEUPDATE_CPU_VIRTUAL;
    else
      v18 = (int)(*(_DWORD *)a1 << 16) >> 29;
    v19 = (void *)v21;
    VIDMM_GLOBAL::UpdatePageTable(
      v10,
      *(_DWORD *)a1 & 7,
      a2[12],
      *(_QWORD *)(a3 + 16),
      v16,
      v17,
      a5,
      a7,
      a8,
      (struct _DXGK_PTE *)(*((_QWORD *)a1 + 4) + 16LL * a7),
      0LL,
      (*(_DWORD *)a1 >> 7) & 0x1F,
      v23,
      v21,
      v18,
      a9,
      *(_DWORD *)&a10,
      *(_QWORD *)(a3 + 72));
    VIDMM_PAGE_TABLE_BASE::FreeDriverUpdateAddress(a1, (struct CVirtualAddressAllocator *)a2, v20, v19, v22);
    return 0LL;
  }
  else
  {
    WdLogSingleEntry1(2LL, 4018LL);
    return 3221225473LL;
  }
}
