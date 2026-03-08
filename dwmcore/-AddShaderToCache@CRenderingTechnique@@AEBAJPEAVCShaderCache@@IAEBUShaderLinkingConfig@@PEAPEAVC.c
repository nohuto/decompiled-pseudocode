/*
 * XREFs of ?AddShaderToCache@CRenderingTechnique@@AEBAJPEAVCShaderCache@@IAEBUShaderLinkingConfig@@PEAPEAVCLinkedShader@@@Z @ 0x180026734
 * Callers:
 *     ?GetShaders@CRenderingTechnique@@QEAAJPEAVCD3DDevice@@AEBUShaderLinkingConfig@@PEAIPEAPEAUID3D11PixelShader@@@Z @ 0x18002C1D8 (-GetShaders@CRenderingTechnique@@QEAAJPEAVCD3DDevice@@AEBUShaderLinkingConfig@@PEAIPEAPEAUID3D11.c)
 * Callees:
 *     ??0?$extent_type@$0?0@details@gsl@@QEAA@_K@Z @ 0x1800254CC (--0-$extent_type@$0-0@details@gsl@@QEAA@_K@Z.c)
 *     ??$_Emplace_reallocate@PEBUShaderLinkingBody@@@?$vector@PEBUShaderLinkingBody@@V?$allocator@PEBUShaderLinkingBody@@@std@@@std@@QEAAPEAPEBUShaderLinkingBody@@QEAPEBU2@$$QEAPEBU2@@Z @ 0x1800268B8 (--$_Emplace_reallocate@PEBUShaderLinkingBody@@@-$vector@PEBUShaderLinkingBody@@V-$allocator@PEBU.c)
 *     ?CreateLinkedShader@CShaderCache@@QEAAJIAEBUShaderLinkingConfig@@AEBUShaderLinkingBody@@V?$span@PEBUShaderLinkingBody@@$0?0@gsl@@PEAPEAVCLinkedShader@@@Z @ 0x180026C2C (-CreateLinkedShader@CShaderCache@@QEAAJIAEBUShaderLinkingConfig@@AEBUShaderLinkingBody@@V-$span@.c)
 *     ??$emplace_back@UFragmentStackEntry@CFragmentIterator@@@?$vector@UFragmentStackEntry@CFragmentIterator@@V?$allocator@UFragmentStackEntry@CFragmentIterator@@@std@@@std@@QEAA?A_T$$QEAUFragmentStackEntry@CFragmentIterator@@@Z @ 0x18002AFC4 (--$emplace_back@UFragmentStackEntry@CFragmentIterator@@@-$vector@UFragmentStackEntry@CFragmentIt.c)
 *     ?FindFirst@CFragmentIterator@@AEAAXXZ @ 0x18002D230 (-FindFirst@CFragmentIterator@@AEAAXXZ.c)
 *     ?MoveNext@CFragmentIterator@@QEAAXXZ @ 0x18002D3FC (-MoveNext@CFragmentIterator@@QEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800E18AC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?terminate@details@gsl@@YAXXZ @ 0x1801AEDB0 (-terminate@details@gsl@@YAXXZ.c)
 */

__int64 __fastcall CRenderingTechnique::AddShaderToCache(
        CRenderingTechnique *this,
        struct CShaderCache *a2,
        unsigned int a3,
        const struct ShaderLinkingConfig *a4,
        struct CLinkedShader **a5)
{
  __int64 *v5; // rdi
  __int64 *v8; // rbx
  __int64 v9; // rax
  __int64 v10; // rsi
  gsl::details *v11; // rcx
  int LinkedShader; // eax
  unsigned int v13; // ecx
  unsigned int v14; // ebx
  __int64 v16; // [rsp+30h] [rbp-40h] BYREF
  __int64 v17; // [rsp+38h] [rbp-38h]
  __int128 v18; // [rsp+40h] [rbp-30h] BYREF
  __int64 v19; // [rsp+50h] [rbp-20h]
  __int128 v20; // [rsp+58h] [rbp-18h] BYREF
  __int64 *v21; // [rsp+68h] [rbp-8h]
  __int64 v22; // [rsp+A0h] [rbp+30h] BYREF

  v5 = 0LL;
  v16 = *((_QWORD *)this + 1);
  v19 = 0LL;
  LODWORD(v17) = 0;
  v21 = 0LL;
  v20 = 0LL;
  v18 = 0LL;
  std::vector<CFragmentIterator::FragmentStackEntry>::emplace_back<CFragmentIterator::FragmentStackEntry>(&v18, &v16);
  CFragmentIterator::FindFirst((CFragmentIterator *)&v18);
  v8 = (__int64 *)*((_QWORD *)&v20 + 1);
  while ( (__int64)(*((_QWORD *)&v18 + 1) - v18) >> 4 )
  {
    v9 = *(_QWORD *)(*((_QWORD *)&v18 + 1) - 16LL) + 56LL;
    v22 = v9;
    if ( v8 == v5 )
    {
      std::vector<ShaderLinkingBody const *>::_Emplace_reallocate<ShaderLinkingBody const *>(&v20, v8, &v22);
      v5 = v21;
      v8 = (__int64 *)*((_QWORD *)&v20 + 1);
    }
    else
    {
      *v8++ = v9;
      *((_QWORD *)&v20 + 1) = v8;
    }
    CFragmentIterator::MoveNext((CFragmentIterator *)&v18);
  }
  v10 = v20;
  gsl::details::extent_type<-1>::extent_type<-1>((gsl::details *)&v16, ((__int64)((__int64)v8 - v20) >> 3) - 1);
  if ( v16 == -1 || !v10 && v16 )
  {
    gsl::details::terminate(v11);
    JUMPOUT(0x1800268AFLL);
  }
  v17 = v10;
  LinkedShader = CShaderCache::CreateLinkedShader(a2, a3, (__int64)&v16, (__int64)a5);
  v14 = LinkedShader;
  if ( LinkedShader < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, LinkedShader, 0x251u, 0LL);
  if ( (_QWORD)v18 )
  {
    std::_Deallocate<16,0>(v18, (v19 - v18) & 0xFFFFFFFFFFFFFFF0uLL);
    v19 = 0LL;
    v18 = 0LL;
  }
  if ( v10 )
    std::_Deallocate<16,0>(v10, ((unsigned __int64)v5 - v10) & 0xFFFFFFFFFFFFFFF8uLL);
  return v14;
}
