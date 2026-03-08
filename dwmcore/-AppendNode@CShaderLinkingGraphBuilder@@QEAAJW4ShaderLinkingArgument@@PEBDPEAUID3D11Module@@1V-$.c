/*
 * XREFs of ?AppendNode@CShaderLinkingGraphBuilder@@QEAAJW4ShaderLinkingArgument@@PEBDPEAUID3D11Module@@1V?$span@$$CBW4ShaderLinkingArgument@@$0?0@gsl@@@Z @ 0x18002A318
 * Callers:
 *     AppendLights @ 0x18001B738 (AppendLights.c)
 *     LinkLightShader @ 0x18001B9F4 (LinkLightShader.c)
 *     ApplyTexcoordExtendMode @ 0x180027B00 (ApplyTexcoordExtendMode.c)
 *     AppendColorModifications @ 0x180027BE4 (AppendColorModifications.c)
 *     AppendColorConversion @ 0x180027CB8 (AppendColorConversion.c)
 *     ApplyTexcoordTransformations @ 0x180027D08 (ApplyTexcoordTransformations.c)
 *     DecodeInputTexcoord @ 0x180027DA0 (DecodeInputTexcoord.c)
 *     AppendShaderBody @ 0x180028340 (AppendShaderBody.c)
 *     ?LinkShader@@YAJAEBUShaderLinkingBody@@AEBUShaderLinkingConfig@@V?$span@PEBUShaderLinkingBody@@$0?0@gsl@@PEAUVertexShaderDesc@@PEAPEAUID3D10Blob@@@Z @ 0x180028514 (-LinkShader@@YAJAEBUShaderLinkingBody@@AEBUShaderLinkingConfig@@V-$span@PEBUShaderLinkingBody@@$.c)
 *     PopulateSamplerArguments @ 0x180028C2C (PopulateSamplerArguments.c)
 *     PerformSample @ 0x180028DE0 (PerformSample.c)
 *     AppendCustomSamplerShaderBody @ 0x1800FE21C (AppendCustomSamplerShaderBody.c)
 *     ?LinkCompositingShader@@YAJW4D3DShaderProfileVersion@@V?$span@$$CBUPixelFormatInfo@@$0?0@gsl@@W4DXGI_COLOR_SPACE_TYPE@@PEAPEAUID3D10Blob@@@Z @ 0x180207A88 (-LinkCompositingShader@@YAJW4D3DShaderProfileVersion@@V-$span@$$CBUPixelFormatInfo@@$0-0@gsl@@W4.c)
 * Callees:
 *     ?FulfillInputs@CShaderLinkingGraphBuilder@@AEAAJPEAUID3D11LinkingNode@@V?$span@$$CBW4ShaderLinkingArgument@@$0?0@gsl@@@Z @ 0x18002A414 (-FulfillInputs@CShaderLinkingGraphBuilder@@AEAAJPEAUID3D11LinkingNode@@V-$span@$$CBW4ShaderLinki.c)
 *     ??$_Try_emplace@AEBW4ShaderLinkingArgument@@$$V@?$_Hash@V?$_Umap_traits@W4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@V?$_Uhash_compare@W4ShaderLinkingArgument@@U?$hash@W4ShaderLinkingArgument@@@std@@U?$equal_to@W4ShaderLinkingArgument@@@3@@std@@V?$allocator@U?$pair@$$CBW4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@@std@@@5@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@$$CBW4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@@std@@PEAX@std@@_N@1@AEBW4ShaderLinkingArgument@@@Z @ 0x18002A778 (--$_Try_emplace@AEBW4ShaderLinkingArgument@@$$V@-$_Hash@V-$_Umap_traits@W4ShaderLinkingArgument@.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?InternalRelease@?$ComPtr@UID2D1PathGeometry@@@WRL@Microsoft@@IEAAKXZ @ 0x1800E0830 (-InternalRelease@-$ComPtr@UID2D1PathGeometry@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CShaderLinkingGraphBuilder::AppendNode(
        __int64 a1,
        __int16 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int128 *a6)
{
  __int64 v6; // rdi
  __int64 (__fastcall *v10)(__int64, __int64, __int64, __int64, __int64 *); // rbx
  int v11; // eax
  unsigned int v12; // ecx
  unsigned int v13; // edi
  int v14; // eax
  unsigned int v15; // ecx
  __int64 *v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rbx
  __int128 v20; // [rsp+30h] [rbp-20h] BYREF
  _BYTE v21[16]; // [rsp+40h] [rbp-10h] BYREF
  __int64 v22; // [rsp+80h] [rbp+30h] BYREF
  __int16 v23; // [rsp+88h] [rbp+38h] BYREF

  v23 = a2;
  v6 = *(_QWORD *)(a1 + 8);
  v22 = 0LL;
  v10 = *(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, __int64 *))(*(_QWORD *)v6 + 48LL);
  Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease(&v22);
  v11 = v10(v6, a3, a4, a5, &v22);
  v13 = v11;
  if ( v11 == -2147467259 )
  {
    v13 = -2005270526;
    goto LABEL_7;
  }
  if ( v11 < 0 )
  {
LABEL_7:
    MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v13, 0x6Eu, 0LL);
    goto LABEL_5;
  }
  v20 = *a6;
  v14 = CShaderLinkingGraphBuilder::FulfillInputs(a1, v22, &v20);
  v13 = v14;
  if ( v14 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, 0x70u, 0LL);
  }
  else
  {
    v16 = (__int64 *)std::_Hash<std::_Umap_traits<enum ShaderLinkingArgument,CShaderLinkingGraphBuilder::Node,std::_Uhash_compare<enum ShaderLinkingArgument,std::hash<enum ShaderLinkingArgument>,std::equal_to<enum ShaderLinkingArgument>>,std::allocator<std::pair<enum ShaderLinkingArgument const,CShaderLinkingGraphBuilder::Node>>,0>>::_Try_emplace<enum ShaderLinkingArgument const &,>(
                       a1 + 16,
                       v21,
                       &v23);
    v17 = v22;
    v18 = *v16;
    v22 = 0LL;
    *(_QWORD *)&v20 = *(_QWORD *)(v18 + 24);
    *(_QWORD *)(v18 + 24) = v17;
    Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease(&v20);
    *(_WORD *)(v18 + 32) = 255;
  }
LABEL_5:
  Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease(&v22);
  return v13;
}
