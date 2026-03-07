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
  char *v12; // rcx
  int v13; // r12d
  struct CShaderCache *ShaderCache; // r13
  LPVOID v15; // rax
  __int64 v16; // rcx
  struct CRenderingTechniqueFragment *v17; // rax
  struct CRenderingTechniqueFragment *v18; // rsi
  CRadialGradientEffect *v20; // [rsp+30h] [rbp-48h] BYREF
  _QWORD v21[2]; // [rsp+38h] [rbp-40h] BYREF
  int v22; // [rsp+48h] [rbp-30h]

  v20 = 0LL;
  wil::com_ptr_t<CRadialGradientEffect,wil::err_returncode_policy>::reset((volatile signed __int32 **)&v20);
  v8 = CRadialGradientBrush::CreateRadialGradientEffect(a2, &v20);
  v10 = v20;
  v11 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0x19Cu, 0LL);
  }
  else
  {
    if ( v20 )
      v12 = (char *)v20 + 16;
    else
      v12 = 0LL;
    v13 = (*(__int64 (__fastcall **)(char *, _QWORD))(*(_QWORD *)v12 + 40LL))(v12, 0LL);
    ShaderCache = CRadialGradientEffect::GetShaderCache(v10);
    v15 = DefaultHeap::Alloc(0x80uLL);
    if ( v15
      && (v17 = (struct CRenderingTechniqueFragment *)CRenderingTechniqueFragment::CRenderingTechniqueFragment(
                                                        (__int64)v15,
                                                        (__int64)v10,
                                                        (__int64)ShaderCache,
                                                        0,
                                                        v13,
                                                        a3),
          (v18 = v17) != 0LL) )
    {
      v22 = 0;
      v21[0] = a2;
      v21[1] = v10;
      CBrushRenderingGraphBuilder::AddNamedInputToFragment(
        this,
        v17,
        (const struct CBrushRenderingGraph::GraphInputParameters *)v21);
      *a4 = v18;
    }
    else
    {
      v11 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, -2147024882, 0x1A9u, 0LL);
    }
  }
  if ( v10 )
    CMILRefCountBaseT<Windows::UI::Composition::IEffectInstance>::InternalRelease((volatile signed __int32 *)v10);
  return v11;
}
