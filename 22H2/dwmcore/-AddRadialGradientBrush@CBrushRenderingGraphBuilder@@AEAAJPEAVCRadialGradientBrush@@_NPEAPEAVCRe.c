/*
 * XREFs of ?AddRadialGradientBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCRadialGradientBrush@@_NPEAPEAVCRenderingTechniqueFragment@@@Z @ 0x18020DB7C
 * Callers:
 *     ?AddBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCBrush@@_NPEAPEAVCRenderingTechniqueFragment@@@Z @ 0x18004AF38 (-AddBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCBrush@@_NPEAPEAVCRenderingTechniqueFragment@@@Z.c)
 * Callees:
 *     ?AddNamedInputToFragment@CBrushRenderingGraphBuilder@@IEAAXPEAVCRenderingTechniqueFragment@@AEBUGraphInputParameters@CBrushRenderingGraph@@@Z @ 0x18004969C (-AddNamedInputToFragment@CBrushRenderingGraphBuilder@@IEAAXPEAVCRenderingTechniqueFragment@@AEBU.c)
 *     ??0CRenderingTechniqueFragment@@QEAA@PEAUIEffectInstance@Composition@UI@Windows@@PEAVCCompiledEffectCache@@IW4Enum@CompiledEffectSubgraphFlags@234@_N@Z @ 0x18004A788 (--0CRenderingTechniqueFragment@@QEAA@PEAUIEffectInstance@Composition@UI@Windows@@PEAVCCompiledEf.c)
 *     ?Release@CDrawListEntry@@UEAAKXZ @ 0x1800522A0 (-Release@CDrawListEntry@@UEAAKXZ.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x18005A210 (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D958 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4030 (_guard_dispatch_icall_nop.c)
 *     ?CreateRadialGradientEffect@CRadialGradientBrush@@QEAAJPEAPEAVCRadialGradientEffect@@@Z @ 0x1801E7830 (-CreateRadialGradientEffect@CRadialGradientBrush@@QEAAJPEAPEAVCRadialGradientEffect@@@Z.c)
 *     ?reset@?$com_ptr_t@VCComputeScribbleFramebuffer@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1801E83B8 (-reset@-$com_ptr_t@VCComputeScribbleFramebuffer@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?GetShaderCache@CRadialGradientEffect@@QEBAPEAVCCompiledEffectCache@@XZ @ 0x180269778 (-GetShaderCache@CRadialGradientEffect@@QEBAPEAVCCompiledEffectCache@@XZ.c)
 */

__int64 __fastcall CBrushRenderingGraphBuilder::AddRadialGradientBrush(
        CBrushRenderingGraphBuilder *this,
        struct CRadialGradientBrush *a2,
        char a3,
        struct CRenderingTechniqueFragment **a4)
{
  int v8; // eax
  __int64 v9; // rcx
  CRadialGradientEffect *v10; // rbx
  unsigned int v11; // edi
  unsigned __int64 v12; // r14
  unsigned __int64 v13; // rcx
  int v14; // r13d
  LPVOID v15; // rax
  __int64 v16; // rcx
  struct CRenderingTechniqueFragment *v17; // rsi
  CDrawListEntry *ShaderCache; // [rsp+30h] [rbp-48h] BYREF
  _QWORD v20[2]; // [rsp+38h] [rbp-40h] BYREF
  int v21; // [rsp+48h] [rbp-30h]

  ShaderCache = 0LL;
  wil::com_ptr_t<CComputeScribbleFramebuffer,wil::err_returncode_policy>::reset(&ShaderCache);
  v8 = CRadialGradientBrush::CreateRadialGradientEffect(a2, &ShaderCache);
  v10 = ShaderCache;
  v11 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0x18Bu, 0LL);
  }
  else
  {
    v12 = (unsigned __int64)ShaderCache + 16;
    v13 = ((unsigned __int64)ShaderCache + 24) & -(__int64)(ShaderCache != 0LL);
    v14 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD))(*(_QWORD *)v13 + 40LL))(v13, 0LL);
    ShaderCache = CRadialGradientEffect::GetShaderCache(v10);
    v15 = DefaultHeap::Alloc(0x80uLL);
    if ( v15 )
      v17 = (struct CRenderingTechniqueFragment *)CRenderingTechniqueFragment::CRenderingTechniqueFragment(
                                                    (__int64)v15,
                                                    v12 & -(__int64)(v10 != 0LL),
                                                    (__int64)ShaderCache,
                                                    0,
                                                    v14,
                                                    a3);
    else
      v17 = 0LL;
    if ( v17 )
    {
      v20[0] = a2;
      v21 = 0;
      v20[1] = v12 & -(__int64)(v10 != 0LL);
      CBrushRenderingGraphBuilder::AddNamedInputToFragment(
        this,
        v17,
        (const struct CBrushRenderingGraph::GraphInputParameters *)v20);
      *a4 = v17;
    }
    else
    {
      v11 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, -2147024882, 0x198u, 0LL);
    }
  }
  if ( v10 )
    CDrawListEntry::Release(v10);
  return v11;
}
