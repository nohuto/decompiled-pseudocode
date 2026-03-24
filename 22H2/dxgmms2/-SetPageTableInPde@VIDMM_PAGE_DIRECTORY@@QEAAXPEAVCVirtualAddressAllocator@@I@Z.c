/*
 * XREFs of ?SetPageTableInPde@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@I@Z @ 0x1C0087F88
 * Callers:
 *     ?CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K222EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C006FD20 (-CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_V.c)
 *     ?ExpandLargePagePte@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUVIDMM_PAGE_TABLE_LEVEL_DESC@@E_KIPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C00BB748 (-ExpandLargePagePte@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUVIDMM_PAGE_TABL.c)
 *     ?ExpandZeroPte@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@II_K222PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C00BB97C (-ExpandZeroPte@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@II_.c)
 * Callees:
 *     <none>
 */

void __fastcall VIDMM_PAGE_DIRECTORY::SetPageTableInPde(
        VIDMM_PAGE_DIRECTORY *this,
        struct CVirtualAddressAllocator *a2,
        unsigned int a3)
{
  __int64 v3; // r11
  __int64 v4; // r10
  __int64 v5; // r8
  __int64 v6; // rdx
  unsigned __int64 v7; // rdx

  v3 = a3;
  v4 = 2LL * a3;
  *(_QWORD *)(*((_QWORD *)this + 5) + 8 * v4 + 8) = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 6) + 8LL * a3)
                                                                          + 16LL)
                                                              + 136LL) >> 12;
  *(_QWORD *)(*((_QWORD *)this + 5) + 8 * v4) ^= (*(_DWORD *)(*((_QWORD *)this + 5) + 16LL * a3) ^ (32
                                                                                                  * *(_DWORD *)(32LL * ((*(_DWORD *)this >> 7) & 0x1F) + *((_QWORD *)a2 + 15) + 28))) & 0x3E0;
  *(_QWORD *)(*((_QWORD *)this + 5) + 8 * v4) = *(_QWORD *)(*((_QWORD *)this + 5) + 8 * v4) & 0xFFFFFFFFFFFE07FFuLL | (16LL * (**(_DWORD **)(*((_QWORD *)this + 6) + 8LL * a3) & 0xF80));
  v5 = *((_QWORD *)this + 5);
  v6 = *(_QWORD *)(v5 + 8 * v4);
  if ( (**(_DWORD **)(*((_QWORD *)this + 6) + 8 * v3) & 0x40) != 0 )
    v7 = v6 & 0xFFFFFFFFFFF9FFFFuLL | 0x20000;
  else
    v7 = v6 & 0xFFFFFFFFFFF9FFFFuLL;
  *(_QWORD *)(v5 + 8 * v4) = v7;
}
