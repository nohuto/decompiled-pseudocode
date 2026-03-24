/*
 * XREFs of ?ExpandLargePagePte@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUVIDMM_PAGE_TABLE_LEVEL_DESC@@E_KIPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C00BB748
 * Callers:
 *     ?CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K222EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C006FD20 (-CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_V.c)
 * Callees:
 *     ?GetVidMmGlobalAllocFromOwner@@YAPEAU_VIDMM_GLOBAL_ALLOC@@W4VIDMM_VAD_OWNER_TYPE@@PEAX@Z @ 0x1C0001FF4 (-GetVidMmGlobalAllocFromOwner@@YAPEAU_VIDMM_GLOBAL_ALLOC@@W4VIDMM_VAD_OWNER_TYPE@@PEAX@Z.c)
 *     memset @ 0x1C0018D80 (memset.c)
 *     ExFreeToPagedLookasideList @ 0x1C0026078 (ExFreeToPagedLookasideList.c)
 *     ?DestroyPageTable@VIDMM_PAGE_TABLE@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z @ 0x1C0060B54 (-DestroyPageTable@VIDMM_PAGE_TABLE@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z.c)
 *     ?CreatePageTable@@YAPEAVVIDMM_PAGE_TABLE@@PEAVCVirtualAddressAllocator@@IEE@Z @ 0x1C0060D1C (-CreatePageTable@@YAPEAVVIDMM_PAGE_TABLE@@PEAVCVirtualAddressAllocator@@IEE@Z.c)
 *     ?CommitVirtualAddressRange@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K222EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C00723E8 (-CommitVirtualAddressRange@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_ST.c)
 *     ?SetPageTableInPde@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@I@Z @ 0x1C0087F88 (-SetPageTableInPde@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@I@Z.c)
 */

__int64 __fastcall VIDMM_PAGE_DIRECTORY::ExpandLargePagePte(
        VIDMM_PAGE_DIRECTORY *this,
        struct CVirtualAddressAllocator *a2,
        struct VIDMM_GLOBAL **a3,
        char a4,
        unsigned __int64 a5,
        unsigned int a6,
        struct VIDMM_ALLOC **a7)
{
  __int64 v11; // rbx
  __int64 v12; // rdx
  unsigned __int64 v13; // rsi
  __int64 v14; // r11
  int v15; // r9d
  unsigned __int64 v16; // rcx
  __int64 v17; // rax
  unsigned __int8 v18; // bl
  __int64 VidMmGlobalAllocFromOwner; // rax
  char v20; // r9
  unsigned int v21; // r10d
  __int64 v22; // r11
  char v23; // r9
  __int64 v24; // rcx
  struct VIDMM_ALLOC **PageTable; // rbx
  __int64 v26; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  int v30; // esi
  __int64 v31; // rax
  _QWORD v32[10]; // [rsp+50h] [rbp-78h] BYREF

  v11 = *(_QWORD *)(*((_QWORD *)this + 6) + 8LL * a6);
  memset(v32, 0, 0x48uLL);
  v12 = *(_QWORD *)v11;
  v13 = 0LL;
  v14 = *((_QWORD *)this + 5);
  v15 = *(_DWORD *)this >> 6;
  LODWORD(v32[6]) = *(_DWORD *)(v11 + 8);
  v16 = *(_QWORD *)(v14 + 16LL * a6);
  v32[5] = v12;
  v32[0] = v16 & 0xFFFFFFFFFFFFFBFFuLL;
  v17 = *(_QWORD *)(v11 + 16);
  HIDWORD(v32[6]) = (v16 >> 5) & 0x1F;
  v18 = v15 & 1;
  LOBYTE(v32[7]) = v15 & 1;
  v32[2] = v17;
  BYTE1(v32[7]) = a4;
  VidMmGlobalAllocFromOwner = GetVidMmGlobalAllocFromOwner(v32[6], v12);
  if ( VidMmGlobalAllocFromOwner )
    v13 = (*(_QWORD *)(v22 + 16LL * a6 + 8) << 12) - *(_QWORD *)(VidMmGlobalAllocFromOwner + 136);
  v23 = (v20 & 1) != 0 && !a4;
  PageTable = (struct VIDMM_ALLOC **)CreatePageTable(a2, (v21 >> 7) & 0x1F, v18, v23);
  if ( PageTable )
  {
    v30 = VIDMM_PAGE_TABLE::CommitVirtualAddressRange(
            (VIDMM_PAGE_TABLE *)PageTable,
            (struct VIDMM_GLOBAL **)a2,
            (const struct COMMIT_VA_STATE *)v32,
            v13,
            a5,
            a3[5],
            *(_QWORD *)(*((_QWORD *)this + 5) + 16LL * a6 + 8) << 12,
            0,
            a7);
    if ( v30 >= 0 )
    {
      ExFreeToPagedLookasideList(
        (PPAGED_LOOKASIDE_LIST)(*((_QWORD *)a2 + 11) + 40256LL),
        *(PVOID *)(*((_QWORD *)this + 6) + 8LL * a6));
      *(_QWORD *)(*((_QWORD *)this + 6) + 8LL * a6) = 0LL;
      *(_QWORD *)(*((_QWORD *)this + 6) + 8LL * a6) = PageTable;
      *(_QWORD *)(*((_QWORD *)this + 5) + 16LL * a6) &= ~0x400uLL;
      VIDMM_PAGE_DIRECTORY::SetPageTableInPde(this, a2, a6);
      return 0LL;
    }
    else
    {
      v31 = WdLogNewEntry5_WdWarning(v29, v28);
      WdLogEvent5_WdWarning(v31);
      if ( *a7 == PageTable[3] )
        *a7 = (struct VIDMM_ALLOC *)*((_QWORD *)this + 3);
      VIDMM_PAGE_TABLE::DestroyPageTable(PageTable, a2, a5);
      return (unsigned int)v30;
    }
  }
  else
  {
    _InterlockedIncrement(&dword_1C005079C);
    v26 = WdLogNewEntry5_WdLowResource(v24);
    *(_QWORD *)(v26 + 24) = 4807LL;
    WdLogEvent5_WdLowResource(v26);
    return 3221225495LL;
  }
}
