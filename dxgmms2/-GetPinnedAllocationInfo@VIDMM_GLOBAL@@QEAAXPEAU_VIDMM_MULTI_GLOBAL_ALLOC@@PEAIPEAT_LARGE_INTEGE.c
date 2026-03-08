/*
 * XREFs of ?GetPinnedAllocationInfo@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_MULTI_GLOBAL_ALLOC@@PEAIPEAT_LARGE_INTEGER@@PEA_K@Z @ 0x1C0086634
 * Callers:
 *     VidMmGetPinnedAllocationInfo @ 0x1C0001260 (VidMmGetPinnedAllocationInfo.c)
 * Callees:
 *     ?DriverId@VIDMM_SEGMENT@@QEAAKXZ @ 0x1C0001414 (-DriverId@VIDMM_SEGMENT@@QEAAKXZ.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall VIDMM_GLOBAL::GetPinnedAllocationInfo(
        VIDMM_GLOBAL *this,
        struct _VIDMM_MULTI_GLOBAL_ALLOC *a2,
        unsigned int *a3,
        union _LARGE_INTEGER *a4,
        unsigned __int64 *a5)
{
  if ( !*(_DWORD *)(*((_QWORD *)a2 + 67) + 12LL) && (**((_DWORD **)a2 + 67) & 0x40000000) == 0 )
  {
    g_DxgMmsBugcheckExportIndex = 1;
    WdLogSingleEntry5(0LL, 270LL, 10LL, a2, 0LL, 0LL);
  }
  *a3 = VIDMM_SEGMENT::DriverId(*((VIDMM_SEGMENT **)a2 + 15));
  a4->QuadPart = *((_QWORD *)a2 + 16) + *(_QWORD *)(*((_QWORD *)a2 + 15) + 24LL);
  if ( a5 )
    *a5 = *((_QWORD *)a2 + 16);
}
