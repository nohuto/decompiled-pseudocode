__int64 __fastcall CBrushRenderingGraphBuilder::EnsureShaderCache(CBrushRenderingGraphBuilder *this, char a2)
{
  __int64 v2; // rsi
  unsigned int v3; // edi
  __int64 v6; // r14
  bool v7; // al
  struct CShaderCache *UniqueShaderCache; // rax
  __int64 v9; // r11
  struct CShaderCache *v10; // r10
  _QWORD *v12; // rax
  _QWORD *v13; // rcx

  v2 = *(_QWORD *)this;
  v3 = 0;
  v6 = *(_QWORD *)(*(_QWORD *)this + 144LL);
  if ( a2 )
    v7 = *((_DWORD *)this + 2) <= 2u;
  else
    v7 = *((_DWORD *)this + 2) == 1;
  if ( v7 )
  {
    UniqueShaderCache = CRenderingTechniqueFragment::GetUniqueShaderCache(*(CRenderingTechniqueFragment **)(*(_QWORD *)(v6 + 8LL * (unsigned int)(*(_DWORD *)(*(_QWORD *)this + 168LL) - 1)) + 8LL));
    v10 = UniqueShaderCache;
    if ( a2 )
    {
      if ( UniqueShaderCache )
      {
        if ( !*(_QWORD *)(v9 + 8) )
          *(_DWORD *)(v2 + 192) = *(_QWORD *)(*(_QWORD *)(v9 + 32) + 8LL) != 0LL ? 128 : 64;
        goto LABEL_6;
      }
      v10 = CRenderingTechniqueFragment::GetUniqueShaderCache(*(CRenderingTechniqueFragment **)(*(_QWORD *)v6 + 8LL));
    }
    if ( v10 )
    {
LABEL_6:
      *(_QWORD *)(*(_QWORD *)this + 184LL) = v10;
      *(_BYTE *)(*(_QWORD *)this + 199LL) = 0;
      return v3;
    }
  }
  v12 = DefaultHeap::Alloc(0x20uLL);
  v13 = v12;
  if ( v12 )
  {
    *v12 = 0LL;
    v12[1] = 0LL;
    *((_DWORD *)v12 + 4) = 0;
    v12[3] = v12;
  }
  else
  {
    v13 = 0LL;
  }
  *(_QWORD *)(*(_QWORD *)this + 184LL) = v13;
  if ( *(_QWORD *)(*(_QWORD *)this + 184LL) )
  {
    *(_BYTE *)(*(_QWORD *)this + 199LL) = 1;
  }
  else
  {
    v3 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v13, 0LL, 0, -2147024882, 0x2ADu, 0LL);
  }
  return v3;
}
