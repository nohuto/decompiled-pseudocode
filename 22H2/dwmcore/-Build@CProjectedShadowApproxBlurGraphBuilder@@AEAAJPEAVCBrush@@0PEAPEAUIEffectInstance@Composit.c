/*
 * XREFs of ?Build@CProjectedShadowApproxBlurGraphBuilder@@AEAAJPEAVCBrush@@0PEAPEAUIEffectInstance@Composition@UI@Windows@@@Z @ 0x18001D188
 * Callers:
 *     ?Build@CProjectedShadowApproxBlurGraphBuilder@@SAJPEAVCBrush@@0PEAPEAVCBrushRenderingGraph@@PEAPEAUIEffectInstance@Composition@UI@Windows@@@Z @ 0x18001D0C4 (-Build@CProjectedShadowApproxBlurGraphBuilder@@SAJPEAVCBrush@@0PEAPEAVCBrushRenderingGraph@@PEAP.c)
 * Callees:
 *     ?AddApproxBlurBrush@CProjectedShadowApproxBlurGraphBuilder@@AEAAJPEAVCBrush@@0PEAPEAVCRenderingTechniqueFragment@@@Z @ 0x18001D2D0 (-AddApproxBlurBrush@CProjectedShadowApproxBlurGraphBuilder@@AEAAJPEAVCBrush@@0PEAPEAVCRenderingT.c)
 *     ??3@YAXPEAX_K@Z @ 0x1800426C0 (--3@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@UFragmentInput@CRenderingTechniqueFragment@@@std@@@std@@YAXPEAUFragmentInput@CRenderingTechniqueFragment@@0AEAV?$allocator@UFragmentInput@CRenderingTechniqueFragment@@@0@@Z @ 0x180048E98 (--$_Destroy_range@V-$allocator@UFragmentInput@CRenderingTechniqueFragment@@@std@@@std@@YAXPEAUFr.c)
 *     ?EnsureShaderCache@CBrushRenderingGraphBuilder@@IEAAJ_N@Z @ 0x180049D60 (-EnsureShaderCache@CBrushRenderingGraphBuilder@@IEAAJ_N@Z.c)
 *     ??_GCRenderingTechniqueFragment@@QEAAPEAXI@Z @ 0x18004A230 (--_GCRenderingTechniqueFragment@@QEAAPEAXI@Z.c)
 *     ?CreateShaderBodies@CBrushRenderingGraphBuilder@@IEAAJXZ @ 0x18004A8D8 (-CreateShaderBodies@CBrushRenderingGraphBuilder@@IEAAJXZ.c)
 *     ?CheckFragmentSize@CBrushRenderingGraphBuilder@@IEAAJPEAVCRenderingTechniqueFragment@@@Z @ 0x18004B080 (-CheckFragmentSize@CBrushRenderingGraphBuilder@@IEAAJPEAVCRenderingTechniqueFragment@@@Z.c)
 *     ?CreateTechniqueForFragment@CBrushRenderingGraphBuilder@@IEAAJ$$QEAV?$unique_ptr@VCRenderingTechniqueFragment@@U?$default_delete@VCRenderingTechniqueFragment@@@std@@@std@@PEAI@Z @ 0x18004B3B8 (-CreateTechniqueForFragment@CBrushRenderingGraphBuilder@@IEAAJ$$QEAV-$unique_ptr@VCRenderingTech.c)
 *     ?CheckBackdropInputs@CBrushRenderingGraphBuilder@@IEAAXXZ @ 0x18004B4E4 (-CheckBackdropInputs@CBrushRenderingGraphBuilder@@IEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D958 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??3@YAXPEAX@Z @ 0x180094C0C (--3@YAXPEAX@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800C8C9C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?InternalRelease@?$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x1800D42F4 (-InternalRelease@-$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4030 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CProjectedShadowApproxBlurGraphBuilder::Build(
        CProjectedShadowApproxBlurGraphBuilder *this,
        struct CBrush *a2,
        struct CBrush *a3,
        struct Windows::UI::Composition::IEffectInstance **a4)
{
  struct Windows::UI::Composition::IEffectInstance *v5; // r15
  unsigned int v7; // ecx
  int v8; // ebx
  CRenderingTechniqueFragment *v9; // rdi
  int ShaderBodies; // eax
  struct Windows::UI::Composition::IEffectInstance *v11; // rbx
  unsigned int v12; // edx
  void *v14; // rcx
  __int64 v15; // r14
  int v16; // r9d
  unsigned int v17; // [rsp+20h] [rbp-40h]
  __int64 v18; // [rsp+30h] [rbp-30h] BYREF
  CRenderingTechniqueFragment *v19; // [rsp+38h] [rbp-28h] BYREF
  struct Windows::UI::Composition::IEffectInstance *v20; // [rsp+40h] [rbp-20h] BYREF
  CRenderingTechniqueFragment **v21; // [rsp+48h] [rbp-18h]
  struct CRenderingTechniqueFragment *v22; // [rsp+50h] [rbp-10h] BYREF
  char v23; // [rsp+58h] [rbp-8h]

  v23 = 1;
  v20 = 0LL;
  v19 = 0LL;
  v21 = &v19;
  v5 = 0LL;
  v22 = 0LL;
  v8 = CProjectedShadowApproxBlurGraphBuilder::AddApproxBlurBrush(this, a2, a3, &v22);
  if ( v23 )
  {
    v7 = (unsigned int)v22;
    v9 = *v21;
    *v21 = v22;
    if ( v9 )
    {
      v14 = (void *)*((_QWORD *)v9 + 14);
      if ( v14 )
        operator delete(v14);
      v15 = *((_QWORD *)v9 + 4);
      if ( v15 )
      {
        std::_Destroy_range<std::allocator<CRenderingTechniqueFragment::FragmentInput>>(
          *((_QWORD *)v9 + 4),
          *((_QWORD *)v9 + 5));
        std::_Deallocate<16,0>(v15, (*((_QWORD *)v9 + 6) - v15) & 0xFFFFFFFFFFFFFFF0uLL);
        *((_QWORD *)v9 + 4) = 0LL;
        *((_QWORD *)v9 + 5) = 0LL;
        *((_QWORD *)v9 + 6) = 0LL;
      }
      Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease(v9);
      operator delete(v9, 0x80uLL);
    }
  }
  if ( v8 < 0 )
  {
    v16 = v8;
    v17 = 54;
  }
  else
  {
    ShaderBodies = CBrushRenderingGraphBuilder::CheckFragmentSize(this, v19);
    v8 = ShaderBodies;
    if ( ShaderBodies < 0 )
    {
      v17 = 57;
    }
    else
    {
      v11 = *(struct Windows::UI::Composition::IEffectInstance **)v19;
      if ( *(_QWORD *)v19 )
      {
        (**(void (__fastcall ***)(_QWORD))v11)(*(_QWORD *)v19);
        v18 = 0LL;
        v5 = v11;
        v20 = v11;
        Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease(&v18);
      }
      ShaderBodies = CBrushRenderingGraphBuilder::CreateTechniqueForFragment(this, &v19, &v18);
      v8 = ShaderBodies;
      if ( ShaderBodies < 0 )
      {
        v17 = 62;
      }
      else
      {
        ShaderBodies = CBrushRenderingGraphBuilder::EnsureShaderCache(this, 0);
        v8 = ShaderBodies;
        if ( ShaderBodies < 0 )
        {
          v17 = 64;
        }
        else
        {
          ShaderBodies = CBrushRenderingGraphBuilder::CreateShaderBodies(this);
          v8 = ShaderBodies;
          if ( ShaderBodies >= 0 )
          {
            CBrushRenderingGraphBuilder::CheckBackdropInputs(this);
            v20 = 0LL;
            *a4 = v5;
            goto LABEL_11;
          }
          v17 = 65;
        }
      }
    }
    v16 = ShaderBodies;
  }
  MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v16, v17, 0LL);
LABEL_11:
  if ( v19 )
    CRenderingTechniqueFragment::`scalar deleting destructor'(v19, v12);
  Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease(&v20);
  return (unsigned int)v8;
}
