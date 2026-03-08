/*
 * XREFs of VidMmReportMultiGlobalAlloc @ 0x1C00C4740
 * Callers:
 *     <none>
 * Callees:
 *     ?VidMmReportGlobalAlloc@@YAXPEAVDXGDEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAVDXGSHAREDRESOURCE@@@Z @ 0x1C00C4460 (-VidMmReportGlobalAlloc@@YAXPEAVDXGDEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAVDXGSHAREDRESOURCE@@@Z.c)
 */

void __fastcall VidMmReportMultiGlobalAlloc(struct DXGDEVICE *a1, __int64 a2, __int64 a3)
{
  VidMmReportGlobalAlloc(a1, *(struct _VIDMM_GLOBAL_ALLOC **)(a2 + 8), a3);
}
