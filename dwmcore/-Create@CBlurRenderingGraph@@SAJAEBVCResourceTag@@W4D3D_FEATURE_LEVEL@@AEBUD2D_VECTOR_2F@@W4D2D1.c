__int64 __fastcall CBlurRenderingGraph::Create(
        const struct CResourceTag *a1,
        enum D3D_FEATURE_LEVEL a2,
        const struct D2D_VECTOR_2F *a3,
        enum D2D1_GAUSSIANBLUR_OPTIMIZATION a4,
        struct CBlurRenderingGraph **a5)
{
  CBlurRenderingGraph *v9; // rax
  __int64 v10; // rcx
  struct CBlurRenderingGraph *v11; // rdi
  int v12; // eax
  __int64 v13; // rcx
  unsigned int v14; // ebx
  struct CBlurRenderingGraph *v16; // [rsp+30h] [rbp-28h] BYREF
  __int64 v17; // [rsp+38h] [rbp-20h] BYREF
  int v18; // [rsp+40h] [rbp-18h]

  v9 = (CBlurRenderingGraph *)DefaultHeap::Alloc(0x640uLL);
  if ( v9 )
    v9 = CBlurRenderingGraph::CBlurRenderingGraph(v9, a1, a3, a4);
  wil::com_ptr_t<CBlurRenderingGraph,wil::err_returncode_policy>::com_ptr_t<CBlurRenderingGraph,wil::err_returncode_policy>(
    &v16,
    (void (__fastcall ***)(_QWORD))v9);
  v11 = v16;
  if ( v16 )
  {
    v18 = 0;
    v17 = (__int64)v16;
    v12 = CBlurRenderingGraphBuilder::Build((CBlurRenderingGraphBuilder *)&v17, a2);
    v14 = v12;
    if ( v12 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0x74u, 0LL);
    }
    else
    {
      v16 = 0LL;
      *a5 = v11;
    }
  }
  else
  {
    v14 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, -2147024882, 0x70u, 0LL);
  }
  wil::com_ptr_t<CExternalEffectGraph,wil::err_returncode_policy>::~com_ptr_t<CExternalEffectGraph,wil::err_returncode_policy>((__int64 *)&v16);
  return v14;
}
