/*
 * XREFs of ??$emplace@PEAVCCpuClipAntialiasDrawListEntry@@MW4Enum@BlendMode@@$$T$$T_N_N@?$vector_facade@USinkRenderParameters@CCpuClipAntialiasSinkContext@@V?$buffer_impl@USinkRenderParameters@CCpuClipAntialiasSinkContext@@$09$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA?AV?$basic_iterator@USinkRenderParameters@CCpuClipAntialiasSinkContext@@@1@V?$basic_iterator@$$CBUSinkRenderParameters@CCpuClipAntialiasSinkContext@@@1@PEAVCCpuClipAntialiasDrawListEntry@@MW4Enum@BlendMode@@$$T3_N4@Z @ 0x1800E43FC
 * Callers:
 *     ??$emplace_back@PEAVCCpuClipAntialiasDrawListEntry@@MW4Enum@BlendMode@@$$T$$T_N_N@?$vector_facade@USinkRenderParameters@CCpuClipAntialiasSinkContext@@V?$buffer_impl@USinkRenderParameters@CCpuClipAntialiasSinkContext@@$09$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXPEAVCCpuClipAntialiasDrawListEntry@@MW4Enum@BlendMode@@$$T2_N3@Z @ 0x1800E43B4 (--$emplace_back@PEAVCCpuClipAntialiasDrawListEntry@@MW4Enum@BlendMode@@$$T$$T_N_N@-$vector_facad.c)
 * Callees:
 *     ?reserve_region@?$vector_facade@USinkRenderParameters@CCpuClipAntialiasSinkContext@@V?$buffer_impl@USinkRenderParameters@CCpuClipAntialiasSinkContext@@$09$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAUSinkRenderParameters@CCpuClipAntialiasSinkContext@@_K0@Z @ 0x18007BD98 (-reserve_region@-$vector_facade@USinkRenderParameters@CCpuClipAntialiasSinkContext@@V-$buffer_im.c)
 *     ??0SinkRenderParameters@CCpuClipAntialiasSinkContext@@QEAA@PEAVCCpuClipAntialiasDrawListEntry@@MW4Enum@BlendMode@@PEAVCHwLightCollectionBuffer@@PEAVClipPlaneInfoRef@@_N4@Z @ 0x1800E44B4 (--0SinkRenderParameters@CCpuClipAntialiasSinkContext@@QEAA@PEAVCCpuClipAntialiasDrawListEntry@@M.c)
 */

_QWORD *__fastcall detail::vector_facade<CCpuClipAntialiasSinkContext::SinkRenderParameters,detail::buffer_impl<CCpuClipAntialiasSinkContext::SinkRenderParameters,10,1,detail::liberal_expansion_policy>>::emplace<CCpuClipAntialiasDrawListEntry *,float,enum BlendMode::Enum,std::nullptr_t,std::nullptr_t,bool,bool>(
        __int64 *a1,
        _QWORD *a2,
        _QWORD *a3,
        __int64 a4,
        int a5,
        unsigned int a6,
        __int64 a7,
        __int64 a8,
        char a9,
        char a10)
{
  __int64 v11; // rbx
  CCpuClipAntialiasSinkContext::SinkRenderParameters *v14; // rax
  __int64 v15; // r8
  _QWORD *result; // rax

  v11 = 0xCCCCCCCCCCCCCCCDuLL * ((*a3 - *a1) >> 3);
  v14 = detail::vector_facade<CCpuClipAntialiasSinkContext::SinkRenderParameters,detail::buffer_impl<CCpuClipAntialiasSinkContext::SinkRenderParameters,10,1,detail::liberal_expansion_policy>>::reserve_region(
          a1,
          v11,
          1uLL);
  CCpuClipAntialiasSinkContext::SinkRenderParameters::SinkRenderParameters(v14, a4, v15, a6, a7, a8, a9, a10);
  result = a2;
  *a2 = *a1 + 40 * v11;
  return result;
}
