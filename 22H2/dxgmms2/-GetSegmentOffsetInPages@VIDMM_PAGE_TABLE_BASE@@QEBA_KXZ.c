/*
 * XREFs of ?GetSegmentOffsetInPages@VIDMM_PAGE_TABLE_BASE@@QEBA_KXZ @ 0x1C0026008
 * Callers:
 *     ?GetDriverUpdateAddress@VIDMM_PAGE_TABLE_BASE@@QEAAJPEAVCVirtualAddressAllocator@@PEAIPEA_KPEAPEAX@Z @ 0x1C00721CC (-GetDriverUpdateAddress@VIDMM_PAGE_TABLE_BASE@@QEAAJPEAVCVirtualAddressAllocator@@PEAIPEA_KPEAPE.c)
 *     ?MapPageTablesToVaSpace@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@@Z @ 0x1C00BC2A0 (-MapPageTablesToVaSpace@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VIDMM_PAGE_TABLE_BASE::GetSegmentOffsetInPages(VIDMM_PAGE_TABLE_BASE *this)
{
  __int64 v1; // rdx

  v1 = *((_QWORD *)this + 2);
  if ( (*(_DWORD *)(*(_QWORD *)(v1 + 128) + 80LL) & 0x1000) != 0 )
    return 0LL;
  else
    return *(__int64 *)(v1 + 136) >> 12;
}
