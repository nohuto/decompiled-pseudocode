/*
 * XREFs of ??1CShaderLinkingGraphBuilder@@QEAA@XZ @ 0x180026AFC
 * Callers:
 *     ?LinkShader@@YAJAEBUShaderLinkingBody@@AEBUShaderLinkingConfig@@V?$span@PEBUShaderLinkingBody@@$0?0@gsl@@PEAUVertexShaderDesc@@PEAPEAUID3D10Blob@@@Z @ 0x180028514 (-LinkShader@@YAJAEBUShaderLinkingBody@@AEBUShaderLinkingConfig@@V-$span@PEBUShaderLinkingBody@@$.c)
 *     ?LinkCompositingShader@@YAJW4D3DShaderProfileVersion@@V?$span@$$CBUPixelFormatInfo@@$0?0@gsl@@W4DXGI_COLOR_SPACE_TYPE@@PEAPEAUID3D10Blob@@@Z @ 0x180207A88 (-LinkCompositingShader@@YAJW4D3DShaderProfileVersion@@V-$span@$$CBUPixelFormatInfo@@$0-0@gsl@@W4.c)
 * Callees:
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CBW4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBW4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBW4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x180026BDC (--$_Free_non_head@V-$allocator@U-$_List_node@U-$pair@$$CBW4ShaderLinkingArgument@@UNode@CShaderL.c)
 *     ?InternalRelease@?$ComPtr@UID2D1PathGeometry@@@WRL@Microsoft@@IEAAKXZ @ 0x1800E0830 (-InternalRelease@-$ComPtr@UID2D1PathGeometry@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800E18AC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall CShaderLinkingGraphBuilder::~CShaderLinkingGraphBuilder(CShaderLinkingGraphBuilder *this)
{
  __int64 v2; // rcx

  std::_Deallocate<16,0>(*((_QWORD *)this + 5), (*((_QWORD *)this + 6) - *((_QWORD *)this + 5)) & 0xFFFFFFFFFFFFFFF8uLL);
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  std::_List_node<std::pair<enum ShaderLinkingArgument const,CShaderLinkingGraphBuilder::Node>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<enum ShaderLinkingArgument const,CShaderLinkingGraphBuilder::Node>,void *>>>(
    v2,
    *((_QWORD *)this + 3));
  std::_Deallocate<16,0>(*((_QWORD *)this + 3), 40LL);
  Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease((char *)this + 8);
  Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease(this);
}
