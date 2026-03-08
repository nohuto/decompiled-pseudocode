/*
 * XREFs of ?GetSegmentAddressMdl@VIDMM_PAGE_TABLE_BASE@@QEAAPEAU_MDL@@XZ @ 0x1C0019220
 * Callers:
 *     ?GetDriverUpdateAddress@VIDMM_PAGE_TABLE_BASE@@QEAAJPEAVCVirtualAddressAllocator@@PEAIPEA_KPEAPEAX@Z @ 0x1C00920C0 (-GetDriverUpdateAddress@VIDMM_PAGE_TABLE_BASE@@QEAAJPEAVCVirtualAddressAllocator@@PEAIPEA_KPEAPE.c)
 *     ?MapPageTablesToVaSpace@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@@Z @ 0x1C00BA280 (-MapPageTablesToVaSpace@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@@Z.c)
 * Callees:
 *     ?IsResident@VIDMM_PAGE_TABLE_BASE@@QEBAEXZ @ 0x1C0001A10 (-IsResident@VIDMM_PAGE_TABLE_BASE@@QEBAEXZ.c)
 *     ?VidMmGetFullMDL@@YAPEAU_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C0098CB8 (-VidMmGetFullMDL@@YAPEAU_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@@Z.c)
 */

struct _MDL *__fastcall VIDMM_PAGE_TABLE_BASE::GetSegmentAddressMdl(VIDMM_PAGE_TABLE_BASE *this)
{
  __int64 v1; // rcx
  struct _VIDMM_GLOBAL_ALLOC *v2; // rcx

  if ( VIDMM_PAGE_TABLE_BASE::IsResident(this)
    && (v2 = *(struct _VIDMM_GLOBAL_ALLOC **)(v1 + 16), (*(_DWORD *)(*((_QWORD *)v2 + 15) + 80LL) & 0x1000) != 0) )
  {
    return VidMmGetFullMDL(v2, 0LL);
  }
  else
  {
    return 0LL;
  }
}
