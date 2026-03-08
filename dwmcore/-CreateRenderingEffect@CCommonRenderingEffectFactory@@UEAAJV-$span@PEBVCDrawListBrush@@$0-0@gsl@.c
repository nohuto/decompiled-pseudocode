/*
 * XREFs of ?CreateRenderingEffect@CCommonRenderingEffectFactory@@UEAAJV?$span@PEBVCDrawListBrush@@$0?0@gsl@@PEAPEAVCRenderingEffect@@@Z @ 0x180093920
 * Callers:
 *     ?AppendCpuClipAntialiasHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUMeshDesc@Mesh@@PEBUPrimitiveVertexAttributesDesc@@_N2PEA_N@Z @ 0x18007D760 (-AppendCpuClipAntialiasHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUMeshDesc@Mesh@@PEBUPrimitiveV.c)
 *     ?ProcessRenderCommands_OffscreenRenderPass@CCpuClipAntialiasSinkContext@@AEAAJPEAVCDrawingContext@@IPEAV?$list@USinkRenderCommand@CCpuClipAntialiasSinkContext@@V?$allocator@USinkRenderCommand@CCpuClipAntialiasSinkContext@@@std@@@std@@PEBV?$vector_facade@UBounds@CCpuClipAntialiasSink@@V?$buffer_impl@UBounds@CCpuClipAntialiasSink@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@Z @ 0x180091278 (-ProcessRenderCommands_OffscreenRenderPass@CCpuClipAntialiasSinkContext@@AEAAJPEAVCDrawingContex.c)
 * Callees:
 *     ??$CreateRenderingEffectWorker@VCCommonRenderingEffect@@@CCommonRenderingEffectFactory@@SAJV?$span@PEBVCDrawListBrush@@$0?0@gsl@@PEAPEAVCRenderingEffect@@@Z @ 0x1800939E0 (--$CreateRenderingEffectWorker@VCCommonRenderingEffect@@@CCommonRenderingEffectFactory@@SAJV-$sp.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?reset@?$com_ptr_t@VCBrushRenderingGraph@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800E707C (-reset@-$com_ptr_t@VCBrushRenderingGraph@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CCommonRenderingEffectFactory::CreateRenderingEffect(__int64 a1, __int128 *a2, __int64 *a3)
{
  unsigned int v3; // ebx
  int v6; // eax
  unsigned int v7; // ecx
  __int64 v9; // rax
  int v10; // eax
  unsigned int v11; // ecx
  __int128 v12; // [rsp+30h] [rbp-18h] BYREF

  v3 = 0;
  if ( *(_QWORD *)a2 )
  {
    v12 = *a2;
    v6 = CCommonRenderingEffectFactory::CreateRenderingEffectWorker<CCommonRenderingEffect>(&v12, a3);
    v3 = v6;
    if ( v6 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0x46u, 0LL);
  }
  else
  {
    v9 = CCommonRenderingEffectFactory::s_cpSolidColorEffect;
    if ( !CCommonRenderingEffectFactory::s_cpSolidColorEffect )
    {
      wil::com_ptr_t<CBrushRenderingGraph,wil::err_returncode_policy>::reset(&CCommonRenderingEffectFactory::s_cpSolidColorEffect);
      v12 = *a2;
      v10 = CCommonRenderingEffectFactory::CreateRenderingEffectWorker<CCommonRenderingEffect>(
              &v12,
              &CCommonRenderingEffectFactory::s_cpSolidColorEffect);
      v3 = v10;
      if ( v10 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0x4Cu, 0LL);
        return v3;
      }
      v9 = CCommonRenderingEffectFactory::s_cpSolidColorEffect;
    }
    *a3 = v9;
    (**(void (__fastcall ***)(__int64))CCommonRenderingEffectFactory::s_cpSolidColorEffect)(CCommonRenderingEffectFactory::s_cpSolidColorEffect);
  }
  return v3;
}
