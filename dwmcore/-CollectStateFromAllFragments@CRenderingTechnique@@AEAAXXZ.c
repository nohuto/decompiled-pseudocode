void __fastcall CRenderingTechnique::CollectStateFromAllFragments(CRenderingTechnique *this)
{
  __int64 v2; // [rsp+20h] [rbp-38h] BYREF
  int v3; // [rsp+28h] [rbp-30h]
  __int128 v4; // [rsp+30h] [rbp-28h] BYREF
  __int64 v5; // [rsp+40h] [rbp-18h]

  v2 = *((_QWORD *)this + 1);
  v3 = 0;
  v4 = 0LL;
  v5 = 0LL;
  std::vector<CFragmentIterator::FragmentStackEntry>::emplace_back<CFragmentIterator::FragmentStackEntry>(&v4, &v2);
  CFragmentIterator::FindFirst((CFragmentIterator *)&v4);
  while ( (__int64)(*((_QWORD *)&v4 + 1) - v4) >> 4 )
  {
    CRenderingTechnique::CollectStateFromFragment(
      this,
      *(struct CRenderingTechniqueFragment **)(*((_QWORD *)&v4 + 1) - 16LL));
    CFragmentIterator::MoveNext((CFragmentIterator *)&v4);
  }
  if ( (_QWORD)v4 )
    std::_Deallocate<16,0>(v4, (v5 - v4) & 0xFFFFFFFFFFFFFFF0uLL);
}
