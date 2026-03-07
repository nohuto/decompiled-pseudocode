__int64 __fastcall CBlurRenderingGraphBuilder::Build(CBlurRenderingGraphBuilder *this, unsigned int a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  __int64 v6; // rbx
  __int64 v7; // rax
  __int64 v8; // r15
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v11; // r9
  float v12; // xmm2_4
  _DWORD *i; // rcx
  int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rax
  int ShaderBodies; // eax
  float v19; // xmm3_4
  __int128 v20; // [rsp+20h] [rbp-39h] BYREF
  __int64 v21; // [rsp+30h] [rbp-29h]
  _QWORD v22[7]; // [rsp+40h] [rbp-19h] BYREF
  _QWORD *v23; // [rsp+78h] [rbp+1Fh]
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+5Fh]

  v4 = CBlurRenderingGraphBuilder::BuildPrescale(this);
  v5 = v4;
  if ( v4 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xBD,
      (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\effects\\gaussianblur.cpp",
      (const char *)(unsigned int)v4,
      v20);
    return v5;
  }
  v6 = *(_QWORD *)this;
  v21 = 0LL;
  v20 = 0LL;
  v7 = *(int *)(v6 + 1584);
  v8 = 5 * v7;
  CGaussianKernel::GenerateTaps((unsigned __int64 *)&v20, 0, *(float *)(v6 + 1576), flt_180338FD4[5 * v7]);
  CBlurRenderingGraphBuilder::BuildOnePass(this, a2, &v20, 0LL);
  v9 = *(_QWORD *)(v6 + 520) - *(_QWORD *)(v6 + 512);
  v22[0] = off_1802CB2A8;
  v23 = v22;
  v10 = detail::vector_facade<std::function<long (CExternalEffectGraph::CGraphRenderingContext *)>,detail::buffer_impl<std::function<long (CExternalEffectGraph::CGraphRenderingContext *)>,16,1,detail::liberal_expansion_policy>>::reserve_region(
          v6 + 512,
          v9 >> 6);
  *(_QWORD *)(v10 + 56) = 0LL;
  std::_Func_class<long,CExternalEffectGraph::CGraphRenderingContext *>::_Reset_move(v10, v22);
  std::_Func_class<long,CExternalEffectGraph::CGraphRenderingContext *>::_Tidy(v22);
  v12 = *(float *)(v6 + 1580);
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(v6 + 1576) - v12) & _xmm) > 0.0000011920929 )
  {
    v19 = flt_180338FD4[v8];
    *((_QWORD *)&v20 + 1) = v20;
    CGaussianKernel::GenerateTaps((unsigned __int64 *)&v20, 1, v12, v19);
  }
  else
  {
    for ( i = (_DWORD *)v20; i != *((_DWORD **)&v20 + 1); i += 3 )
    {
      v14 = i[1];
      i[1] = *i;
      *i = v14;
    }
  }
  LOBYTE(v11) = 1;
  CBlurRenderingGraphBuilder::BuildOnePass(this, a2, &v20, v11);
  v15 = *(_QWORD *)(v6 + 520) - *(_QWORD *)(v6 + 512);
  v22[0] = off_1802CB278;
  v23 = v22;
  v16 = detail::vector_facade<std::function<long (CExternalEffectGraph::CGraphRenderingContext *)>,detail::buffer_impl<std::function<long (CExternalEffectGraph::CGraphRenderingContext *)>,16,1,detail::liberal_expansion_policy>>::reserve_region(
          v6 + 512,
          v15 >> 6);
  *(_QWORD *)(v16 + 56) = 0LL;
  std::_Func_class<long,CExternalEffectGraph::CGraphRenderingContext *>::_Reset_move(v16, v22);
  std::_Func_class<long,CExternalEffectGraph::CGraphRenderingContext *>::_Tidy(v22);
  ShaderBodies = CBrushRenderingGraphBuilder::CreateShaderBodies(this);
  v5 = ShaderBodies;
  if ( ShaderBodies < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xE2,
      (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\effects\\gaussianblur.cpp",
      (const char *)(unsigned int)ShaderBodies,
      v20);
    std::vector<KernelTap>::~vector<KernelTap>(&v20);
    return v5;
  }
  if ( (_QWORD)v20 )
    std::_Deallocate<16,0>(v20, 4 * ((v21 - (__int64)v20) >> 2));
  return 0LL;
}
