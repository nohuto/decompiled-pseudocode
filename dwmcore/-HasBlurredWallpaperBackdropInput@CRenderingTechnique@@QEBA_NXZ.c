bool __fastcall CRenderingTechnique::HasBlurredWallpaperBackdropInput(CRenderingTechnique *this)
{
  __int64 v1; // rax
  __int64 v3; // rcx
  __int64 v4; // r8
  bool v5; // bl
  __int64 v7; // [rsp+20h] [rbp-30h] BYREF
  int v8; // [rsp+28h] [rbp-28h]
  __int128 v9; // [rsp+30h] [rbp-20h] BYREF
  __int64 v10; // [rsp+40h] [rbp-10h]

  v1 = *((_QWORD *)this + 1);
  v10 = 0LL;
  v8 = 0;
  v7 = v1;
  v9 = 0LL;
  std::vector<CFragmentIterator::FragmentStackEntry>::emplace_back<CFragmentIterator::FragmentStackEntry>(&v9, &v7);
  CFragmentIterator::FindFirst((CFragmentIterator *)&v9);
  while ( 1 )
  {
    v3 = *((_QWORD *)&v9 + 1);
    v4 = v9;
    if ( !((__int64)(*((_QWORD *)&v9 + 1) - v9) >> 4) )
      break;
    if ( CRenderingTechniqueFragment::HasBlurredWallpaperBackdropInput(
           *(CRenderingTechniqueFragment **)(*((_QWORD *)&v9 + 1) - 16LL),
           *(const struct CBrushRenderingGraph **)this) )
    {
      v3 = *((_QWORD *)&v9 + 1);
      v4 = v9;
      break;
    }
    CFragmentIterator::MoveNext((CFragmentIterator *)&v9);
  }
  v5 = (v3 - v4) >> 4 != 0;
  if ( v4 )
    std::_Deallocate<16,0>(v4, (v10 - v4) & 0xFFFFFFFFFFFFFFF0uLL);
  return v5;
}
