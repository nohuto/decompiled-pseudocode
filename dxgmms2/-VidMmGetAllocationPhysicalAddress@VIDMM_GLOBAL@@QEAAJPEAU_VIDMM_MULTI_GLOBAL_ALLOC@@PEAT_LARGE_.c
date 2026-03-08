/*
 * XREFs of ?VidMmGetAllocationPhysicalAddress@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_MULTI_GLOBAL_ALLOC@@PEAT_LARGE_INTEGER@@@Z @ 0x1C00EA3E8
 * Callers:
 *     ?VidMmGetAllocationPhysicalAddress@@YAJPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_GLOBAL_ALLOC@@PEAT_LARGE_INTEGER@@@Z @ 0x1C002CBE0 (-VidMmGetAllocationPhysicalAddress@@YAJPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_GLOBAL_ALLOC@@PEAT_LAR.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VIDMM_GLOBAL::VidMmGetAllocationPhysicalAddress(
        VIDMM_GLOBAL *this,
        struct _VIDMM_MULTI_GLOBAL_ALLOC *a2,
        union _LARGE_INTEGER *a3)
{
  union _LARGE_INTEGER *v3; // rax

  v3 = (union _LARGE_INTEGER *)*((_QWORD *)a2 + 65);
  if ( v3 && v3[6].QuadPart )
  {
    *a3 = v3[8];
    return 0LL;
  }
  else
  {
    WdLogSingleEntry1(2LL, 21468LL);
    return 3221225485LL;
  }
}
