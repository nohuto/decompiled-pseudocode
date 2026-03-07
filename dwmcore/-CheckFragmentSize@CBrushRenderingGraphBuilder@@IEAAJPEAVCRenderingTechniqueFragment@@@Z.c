__int64 __fastcall CBrushRenderingGraphBuilder::CheckFragmentSize(
        struct CBrushRenderingGraph **this,
        struct CRenderingTechniqueFragment *a2)
{
  struct CBrushRenderingGraph *v2; // r14
  unsigned int v5; // edi
  struct CBrushRenderingGraph *v7; // r8
  int v8; // eax
  unsigned int v9; // ecx
  int v10; // [rsp+50h] [rbp+8h] BYREF
  CRenderingTechniqueFragment *v11; // [rsp+60h] [rbp+18h] BYREF

  v2 = *this;
  v5 = 0;
  while ( CRenderingTechniqueFragment::NeedsToBeBrokenUp(a2, *this) )
  {
    v7 = *this;
    v10 = *((_DWORD *)v2 + 42);
    CRenderingTechniqueFragment::RemoveLargestInputFragment(a2, &v11, v7);
    v8 = CBrushRenderingGraphBuilder::CreateTechniqueForFragment(this, (__int64)&v11, &v10);
    v5 = v8;
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0x236u, 0LL);
      if ( v11 )
      {
        CRenderingTechniqueFragment::~CRenderingTechniqueFragment(v11);
        operator delete(v11, 0x80uLL);
      }
      return v5;
    }
    if ( v11 )
    {
      CRenderingTechniqueFragment::~CRenderingTechniqueFragment(v11);
      operator delete(v11, 0x80uLL);
    }
  }
  return v5;
}
