void __fastcall std::_Destroy_range<std::allocator<CBrushRenderingGraphBuilder::SubgraphOutput>>(
        __int64 a1,
        __int64 a2)
{
  __int64 v3; // rbx
  void *v4; // rdi

  if ( a1 != a2 )
  {
    v3 = a1;
    do
    {
      v4 = *(void **)(v3 + 8);
      if ( v4 )
      {
        CRenderingTechniqueFragment::~CRenderingTechniqueFragment(*(CRenderingTechniqueFragment **)(v3 + 8));
        operator delete(v4, 0x80uLL);
      }
      v3 += 16LL;
    }
    while ( v3 != a2 );
  }
}
