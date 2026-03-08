/*
 * XREFs of ?GetNumPde@CVirtualAddressAllocator@@QEBAIPEAVVIDMM_PAGE_DIRECTORY@@@Z @ 0x1C0017A58
 * Callers:
 *     ?DestroyPageDirectoryObjects@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@_KE@Z @ 0x1C00958F0 (-DestroyPageDirectoryObjects@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@_KE@Z.c)
 *     ?MapPageTablesToVaSpace@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@@Z @ 0x1C00BA280 (-MapPageTablesToVaSpace@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@@Z.c)
 *     ?GetVirtualAddressOfPageTable@CVirtualAddressAllocator@@QEBA_KI_KE@Z @ 0x1C00F2CF8 (-GetVirtualAddressOfPageTable@CVirtualAddressAllocator@@QEBA_KI_KE@Z.c)
 *     ?ReportState@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@@Z @ 0x1C00F3640 (-ReportState@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CVirtualAddressAllocator::GetNumPde(CVirtualAddressAllocator *this, struct VIDMM_PAGE_DIRECTORY *a2)
{
  int v2; // eax
  __int64 v3; // rdx

  v2 = *(_DWORD *)a2;
  v3 = (*(_DWORD *)a2 >> 7) & 0x1F;
  if ( (v2 & 0x10) != 0 )
    return *(unsigned int *)(32 * v3 + *((_QWORD *)this + 15) + 16);
  else
    return *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 11) + 40224LL) + 48 * ((v2 & 7) + 2LL) + 1616 * v3);
}
