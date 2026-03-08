/*
 * XREFs of ?PageInPageTableOrDirectory@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGE_TABLE_BASE@@PEAUVIDMM_ALLOC@@_NPEA_NPEAPEAU3@@Z @ 0x1C008A990
 * Callers:
 *     ?CommitPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C008A878 (-CommitPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEAPEAUVIDMM_ALLOC.c)
 *     ?CommitPageTable@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0092EEC (-CommitPageTable@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEAPEAUVIDMM_ALLOC@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001A8E0 (_guard_dispatch_icall_nop.c)
 *     ?PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@_NPEA_NPEAPEAU2@I_K@Z @ 0x1C008B300 (-PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@_NPEA_N.c)
 */

__int64 __fastcall VIDMM_GLOBAL::PageInPageTableOrDirectory(
        VIDMM_GLOBAL *this,
        struct VIDMM_PAGE_TABLE_BASE *a2,
        struct VIDMM_ALLOC *a3,
        char a4,
        bool *a5,
        struct VIDMM_ALLOC **a6)
{
  __int64 v7; // rbp
  int v8; // eax
  unsigned int v9; // edi
  unsigned int v10; // edx

  v7 = **(_QWORD **)a3;
  *(_DWORD *)a2 |= 0x20000u;
  *(_BYTE *)(v7 + 82) = 0;
  v8 = VIDMM_GLOBAL::PageInOneAllocation(this, a3, a4 == 0 ? 7 : 0, 0LL, a5, a6, 0, -1LL);
  v9 = v8;
  if ( *a5 )
  {
    v10 = -1073741267;
  }
  else
  {
    v10 = v8;
    if ( v8 >= 0 && (*(_DWORD *)(*(_QWORD *)(v7 + 120) + 80LL) & 0x1000) != 0 )
    {
      *(_QWORD *)(v7 + 128) = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(*(_QWORD *)(v7 + 88)
                                                                                                  + 8LL)
                                                                                      + 24LL)
                                                                        + 104LL))(
                                *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v7 + 88) + 8LL) + 24LL),
                                *(_QWORD *)(*(_QWORD *)(v7 + 88) + 24LL));
      v10 = v9;
    }
  }
  *(_DWORD *)a2 &= ~0x20000u;
  return v10;
}
