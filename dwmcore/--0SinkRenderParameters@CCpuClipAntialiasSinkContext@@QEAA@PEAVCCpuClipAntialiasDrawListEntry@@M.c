/*
 * XREFs of ??0SinkRenderParameters@CCpuClipAntialiasSinkContext@@QEAA@PEAVCCpuClipAntialiasDrawListEntry@@MW4Enum@BlendMode@@PEAVCHwLightCollectionBuffer@@PEAVClipPlaneInfoRef@@_N4@Z @ 0x1800E44B4
 * Callers:
 *     ??$emplace@PEAVCCpuClipAntialiasDrawListEntry@@MW4Enum@BlendMode@@$$T$$T_N_N@?$vector_facade@USinkRenderParameters@CCpuClipAntialiasSinkContext@@V?$buffer_impl@USinkRenderParameters@CCpuClipAntialiasSinkContext@@$09$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA?AV?$basic_iterator@USinkRenderParameters@CCpuClipAntialiasSinkContext@@@1@V?$basic_iterator@$$CBUSinkRenderParameters@CCpuClipAntialiasSinkContext@@@1@PEAVCCpuClipAntialiasDrawListEntry@@MW4Enum@BlendMode@@$$T3_N4@Z @ 0x1800E43FC (--$emplace@PEAVCCpuClipAntialiasDrawListEntry@@MW4Enum@BlendMode@@$$T$$T_N_N@-$vector_facade@USi.c)
 * Callees:
 *     ??0?$com_ptr_t@VCCpuClipAntialiasDrawListEntry@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCCpuClipAntialiasDrawListEntry@@@Z @ 0x1800E4524 (--0-$com_ptr_t@VCCpuClipAntialiasDrawListEntry@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCCpuC.c)
 *     ??0?$com_ptr_t@VCHwLightCollectionBuffer@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCHwLightCollectionBuffer@@@Z @ 0x1800E4550 (--0-$com_ptr_t@VCHwLightCollectionBuffer@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCHwLightCol.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CCpuClipAntialiasSinkContext::SinkRenderParameters::SinkRenderParameters(
        __int64 a1,
        __int64 a2,
        float a3,
        int a4,
        __int64 a5,
        void (__fastcall ***a6)(_QWORD),
        char a7,
        char a8)
{
  wil::com_ptr_t<CCpuClipAntialiasDrawListEntry,wil::err_returncode_policy>::com_ptr_t<CCpuClipAntialiasDrawListEntry,wil::err_returncode_policy>();
  *(float *)(a1 + 8) = a3;
  *(_DWORD *)(a1 + 12) = a4;
  wil::com_ptr_t<CHwLightCollectionBuffer,wil::err_returncode_policy>::com_ptr_t<CHwLightCollectionBuffer,wil::err_returncode_policy>(
    a1 + 16,
    a5);
  *(_QWORD *)(a1 + 24) = a6;
  if ( a6 )
    (**a6)(a6);
  *(_BYTE *)(a1 + 32) = a7;
  *(_BYTE *)(a1 + 33) = a8;
  return a1;
}
