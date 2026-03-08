/*
 * XREFs of ?DestroyPageTable@VIDMM_PAGE_TABLE@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z @ 0x1C009375C
 * Callers:
 *     ?CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K222EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0090840 (-CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_V.c)
 *     ?CreatePageTable@@YAPEAVVIDMM_PAGE_TABLE@@PEAVCVirtualAddressAllocator@@IEE@Z @ 0x1C0092E28 (-CreatePageTable@@YAPEAVVIDMM_PAGE_TABLE@@PEAVCVirtualAddressAllocator@@IEE@Z.c)
 *     ?DestroyPageDirectoryObjects@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@_KE@Z @ 0x1C00958F0 (-DestroyPageDirectoryObjects@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@_KE@Z.c)
 *     ?DestroyDisconnectedPageTables@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@II_K1PEAUVIDMM_ALLOC@@@Z @ 0x1C00B3BF8 (-DestroyDisconnectedPageTables@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@II_K1PEA.c)
 *     ?ExpandLargePagePte@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUVIDMM_PAGE_TABLE_LEVEL_DESC@@E_KIPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C00F21E4 (-ExpandLargePagePte@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUVIDMM_PAGE_TABL.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0001A30 (--3@YAXPEAX@Z.c)
 *     __security_check_cookie @ 0x1C0019940 (__security_check_cookie.c)
 *     ?EvictPageTable@VIDMM_PAGE_TABLE@@QEAAXPEAVCVirtualAddressAllocator@@_KE@Z @ 0x1C00936BC (-EvictPageTable@VIDMM_PAGE_TABLE@@QEAAXPEAVCVirtualAddressAllocator@@_KE@Z.c)
 *     ?DestroyOneAllocation@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@_N@Z @ 0x1C0094640 (-DestroyOneAllocation@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@_N@Z.c)
 *     ?CloseOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAPEAU_VIDMM_LOCAL_ALLOC@@EU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAPEAU_KEVENT@@@Z @ 0x1C00A25B0 (-CloseOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAPEAU_VIDMM_LOCAL_ALLOC@@EU_D3DDDICB_D.c)
 */

void __fastcall VIDMM_PAGE_TABLE::DestroyPageTable(struct VIDMM_ALLOC **this, struct CVirtualAddressAllocator *a2)
{
  VIDMM_GLOBAL *v2; // rdi
  PRKPROCESS *v5; // rcx
  struct _VIDMM_GLOBAL_ALLOC *v6; // r8
  struct VIDMM_ALLOC *v7; // rcx
  struct _KAPC_STATE ApcState; // [rsp+30h] [rbp-48h] BYREF

  v2 = (VIDMM_GLOBAL *)*((_QWORD *)a2 + 11);
  VIDMM_PAGE_TABLE::EvictPageTable(this, a2);
  if ( this[3] )
  {
    v5 = (PRKPROCESS *)*((_QWORD *)a2 + 12);
    memset(&ApcState, 0, sizeof(ApcState));
    KeStackAttachProcess(*v5, &ApcState);
    VIDMM_GLOBAL::CloseOneAllocation(v2, this[3], 0LL, 0, (struct _D3DDDICB_DESTROYALLOCATION2FLAGS)1, 0LL);
    KeUnstackDetachProcess(&ApcState);
    this[3] = 0LL;
  }
  v6 = this[2];
  if ( v6 )
  {
    VIDMM_GLOBAL::DestroyOneAllocation(v2, 0LL, v6, 0);
    this[2] = 0LL;
  }
  v7 = this[4];
  if ( v7 )
  {
    operator delete(v7);
    this[4] = 0LL;
  }
  operator delete(this);
}
