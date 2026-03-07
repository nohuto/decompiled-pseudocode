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
