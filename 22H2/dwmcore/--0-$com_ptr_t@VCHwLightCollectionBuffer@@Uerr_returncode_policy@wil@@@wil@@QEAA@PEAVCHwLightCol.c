/*
 * XREFs of ??0?$com_ptr_t@VCHwLightCollectionBuffer@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCHwLightCollectionBuffer@@@Z @ 0x1800E5120
 * Callers:
 *     ?Render@CHWDrawListEntry@@UEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@BlendMode@@@Z @ 0x180084C60 (-Render@CHWDrawListEntry@@UEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@BlendMode@@@Z.c)
 *     ?SetLightingCollection@CDrawListEntryBatch@@QEAAJPEAVCHwLightCollectionBuffer@@@Z @ 0x180085B20 (-SetLightingCollection@CDrawListEntryBatch@@QEAAJPEAVCHwLightCollectionBuffer@@@Z.c)
 *     ??0SinkRenderParameters@CCpuClipAntialiasSinkContext@@QEAA@PEAVCCpuClipAntialiasDrawListEntry@@MW4Enum@BlendMode@@PEAVCHwLightCollectionBuffer@@PEAVClipPlaneInfoRef@@_N4@Z @ 0x1800E5084 (--0SinkRenderParameters@CCpuClipAntialiasSinkContext@@QEAA@PEAVCCpuClipAntialiasDrawListEntry@@M.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18011B9E0 (_guard_xfg_dispatch_icall_nop.c)
 */

_QWORD *__fastcall wil::com_ptr_t<CHwLightCollectionBuffer,wil::err_returncode_policy>::com_ptr_t<CHwLightCollectionBuffer,wil::err_returncode_policy>(
        _QWORD *a1,
        void (__fastcall ***a2)(_QWORD))
{
  *a1 = a2;
  if ( a2 )
    (**a2)(a2);
  return a1;
}
