/*
 * XREFs of ?CreateMaskShaderBody@CRenderingTechniqueFragment@@AEAAJAEBV?$vector_facade@PEBVCRenderingTechniqueFragment@@V?$buffer_impl@PEBVCRenderingTechniqueFragment@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@AEBV?$vector_facade@USurfaceDescription@CRenderingTechniqueFragment@@V?$buffer_impl@USurfaceDescription@CRenderingTechniqueFragment@@$03$00Vliberal_expansion_policy@detail@@@detail@@@3@PEBVCBrushRenderingGraph@@@Z @ 0x180025BC4
 * Callers:
 *     ?CreateShaderBodies@CRenderingTechnique@@QEAAJXZ @ 0x18002AB38 (-CreateShaderBodies@CRenderingTechnique@@QEAAJXZ.c)
 * Callees:
 *     ??0?$extent_type@$0?0@details@gsl@@QEAA@_K@Z @ 0x1800254CC (--0-$extent_type@$0-0@details@gsl@@QEAA@_K@Z.c)
 *     ?MakeShaderLinkingArgument@CRenderingTechniqueFragment@@AEAA?AW4ShaderLinkingArgument@@W42@IAEBV?$vector_facade@PEBVCRenderingTechniqueFragment@@V?$buffer_impl@PEBVCRenderingTechniqueFragment@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@AEBV?$vector_facade@USurfaceDescription@CRenderingTechniqueFragment@@V?$buffer_impl@USurfaceDescription@CRenderingTechniqueFragment@@$03$00Vliberal_expansion_policy@detail@@@detail@@@4@PEBVCBrushRenderingGraph@@@Z @ 0x18002A6E0 (-MakeShaderLinkingArgument@CRenderingTechniqueFragment@@AEAA-AW4ShaderLinkingArgument@@W42@IAEBV.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x180044B4C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1800893D4 (--3@YAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?terminate@details@gsl@@YAXXZ @ 0x1801AEDB0 (-terminate@details@gsl@@YAXXZ.c)
 */

__int64 __fastcall CRenderingTechniqueFragment::CreateMaskShaderBody(__int64 a1, int a2, __int64 a3)
{
  unsigned int v3; // edi
  void *v7; // rax
  void *v8; // rcx
  __int64 v9; // rsi
  gsl::details *v10; // rcx
  __int128 v12; // [rsp+30h] [rbp-18h] BYREF

  v3 = 0;
  *(_QWORD *)(a1 + 72) = 0LL;
  *(_QWORD *)(a1 + 80) = 0LL;
  *(_DWORD *)(a1 + 104) = 0;
  *(_QWORD *)(a1 + 96) = "AlphaMultiply";
  *(_WORD *)(a1 + 108) = 10;
  *(_BYTE *)(a1 + 88) = 1;
  v7 = DefaultHeap::Alloc(4uLL);
  v8 = *(void **)(a1 + 112);
  *(_QWORD *)(a1 + 112) = v7;
  if ( v8 )
    operator delete(v8);
  v9 = *(_QWORD *)(a1 + 112);
  if ( v9 )
  {
    gsl::details::extent_type<-1>::extent_type<-1>((gsl::details *)&v12, 2LL);
    *((_QWORD *)&v12 + 1) = v9;
    if ( (_QWORD)v12 == -1LL )
    {
      gsl::details::terminate(v10);
      JUMPOUT(0x180025CB9LL);
    }
    *(_OWORD *)(a1 + 56) = v12;
    **(_WORD **)(a1 + 112) = CRenderingTechniqueFragment::MakeShaderLinkingArgument(a1, 512, 0, a2, a3);
    *(_WORD *)(*(_QWORD *)(a1 + 112) + 2LL) = CRenderingTechniqueFragment::MakeShaderLinkingArgument(a1, 512, 1, a2, a3);
  }
  else
  {
    v3 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v8, 0LL, 0, -2147024882, 0x23Eu, 0LL);
  }
  return v3;
}
