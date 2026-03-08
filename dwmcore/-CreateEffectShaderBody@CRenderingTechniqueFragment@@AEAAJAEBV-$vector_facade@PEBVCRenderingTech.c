/*
 * XREFs of ?CreateEffectShaderBody@CRenderingTechniqueFragment@@AEAAJAEBV?$vector_facade@PEBVCRenderingTechniqueFragment@@V?$buffer_impl@PEBVCRenderingTechniqueFragment@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@AEBV?$vector_facade@USurfaceDescription@CRenderingTechniqueFragment@@V?$buffer_impl@USurfaceDescription@CRenderingTechniqueFragment@@$03$00Vliberal_expansion_policy@detail@@@detail@@@3@PEBVCBrushRenderingGraph@@@Z @ 0x18002A51C
 * Callers:
 *     ?CreateShaderBodies@CRenderingTechnique@@QEAAJXZ @ 0x18002AB38 (-CreateShaderBodies@CRenderingTechnique@@QEAAJXZ.c)
 * Callees:
 *     ??0?$extent_type@$0?0@details@gsl@@QEAA@_K@Z @ 0x1800254CC (--0-$extent_type@$0-0@details@gsl@@QEAA@_K@Z.c)
 *     ?MakeShaderLinkingArgument@CRenderingTechniqueFragment@@AEAA?AW4ShaderLinkingArgument@@W42@IAEBV?$vector_facade@PEBVCRenderingTechniqueFragment@@V?$buffer_impl@PEBVCRenderingTechniqueFragment@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@AEBV?$vector_facade@USurfaceDescription@CRenderingTechniqueFragment@@V?$buffer_impl@USurfaceDescription@CRenderingTechniqueFragment@@$03$00Vliberal_expansion_policy@detail@@@detail@@@4@PEBVCBrushRenderingGraph@@@Z @ 0x18002A6E0 (-MakeShaderLinkingArgument@CRenderingTechniqueFragment@@AEAA-AW4ShaderLinkingArgument@@W42@IAEBV.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x180044B4C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1800893D4 (--3@YAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ?terminate@details@gsl@@YAXXZ @ 0x1801AEDB0 (-terminate@details@gsl@@YAXXZ.c)
 */

__int64 __fastcall CRenderingTechniqueFragment::CreateEffectShaderBody(_QWORD *a1, int a2, __int64 a3)
{
  unsigned int v6; // esi
  __int64 v7; // rax
  __int16 ShaderLinkingArgument; // cx
  __int128 v9; // xmm0
  int v10; // eax
  void *v11; // rax
  void *v12; // rcx
  __int64 v13; // rdx
  unsigned __int64 i; // rdi
  unsigned __int16 v15; // cx
  int v16; // edx
  __int64 v17; // rdi
  gsl::details *v18; // rcx
  __int128 v20; // [rsp+30h] [rbp-50h] BYREF
  unsigned __int64 v21[2]; // [rsp+40h] [rbp-40h] BYREF
  __int128 v22; // [rsp+50h] [rbp-30h]
  char v23; // [rsp+60h] [rbp-20h]
  __int64 v24; // [rsp+68h] [rbp-18h]
  int v25; // [rsp+70h] [rbp-10h]
  __int16 v26; // [rsp+74h] [rbp-Ch]

  v6 = 0;
  v7 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a1 + 64LL))(*a1);
  (*(void (__fastcall **)(__int64, unsigned __int64 *, _QWORD))(*(_QWORD *)v7 + 24LL))(
    v7,
    v21,
    *((unsigned int *)a1 + 4));
  ShaderLinkingArgument = v26;
  v9 = v22;
  *((_BYTE *)a1 + 88) = v23;
  a1[12] = v24;
  *(_OWORD *)(a1 + 9) = v9;
  if ( (ShaderLinkingArgument & 0xFF00) == 0x100 )
    ShaderLinkingArgument = CRenderingTechniqueFragment::MakeShaderLinkingArgument(
                              (_DWORD)a1,
                              256,
                              (unsigned __int8)ShaderLinkingArgument,
                              a2,
                              a3);
  *((_WORD *)a1 + 54) = ShaderLinkingArgument;
  v10 = v25;
  if ( (v25 & 0xF) != 0 )
    v10 = v25 - (v25 & 0xF) + 16;
  *((_DWORD *)a1 + 26) = v10;
  v11 = DefaultHeap::Alloc(saturated_mul(v21[0], 2uLL));
  v12 = (void *)a1[14];
  a1[14] = v11;
  if ( v12 )
    operator delete(v12);
  if ( a1[14] )
  {
    v13 = v21[0];
    for ( i = 0LL; i < v21[0]; v13 = v21[0] )
    {
      v15 = *(_WORD *)(v21[1] + 2 * i);
      v16 = v15;
      LOWORD(v16) = v15 & 0xFF00;
      if ( (((v15 & 0xFF00) - 256) & 0xFCFF) == 0 && (_WORD)v16 != 768 )
        v15 = CRenderingTechniqueFragment::MakeShaderLinkingArgument((_DWORD)a1, v16, (unsigned __int8)v15, a2, a3);
      *(_WORD *)(a1[14] + 2 * i++) = v15;
    }
    v17 = a1[14];
    gsl::details::extent_type<-1>::extent_type<-1>((gsl::details *)&v20, v13);
    *((_QWORD *)&v20 + 1) = v17;
    if ( (_QWORD)v20 == -1LL || !v17 && (_QWORD)v20 )
    {
      gsl::details::terminate(v18);
      JUMPOUT(0x18002A6D6LL);
    }
    *(_OWORD *)(a1 + 7) = v20;
  }
  else
  {
    v6 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v12, 0LL, 0, -2147024882, 0x211u, 0LL);
  }
  return v6;
}
