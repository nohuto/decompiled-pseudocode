const struct CBackdropBrush *__fastcall CRenderingTechnique::GetBackdropBrushNoRef(CRenderingTechnique *this)
{
  const struct CBackdropBrush *BackdropBrushNoRef; // rbx
  __int64 v3; // rcx
  __int64 v5; // [rsp+20h] [rbp-30h] BYREF
  int v6; // [rsp+28h] [rbp-28h]
  __int128 v7; // [rsp+30h] [rbp-20h] BYREF
  __int64 v8; // [rsp+40h] [rbp-10h]

  v5 = *((_QWORD *)this + 1);
  BackdropBrushNoRef = 0LL;
  v8 = 0LL;
  v6 = 0;
  v7 = 0LL;
  std::vector<CFragmentIterator::FragmentStackEntry>::emplace_back<CFragmentIterator::FragmentStackEntry>(&v7, &v5);
  CFragmentIterator::FindFirst((CFragmentIterator *)&v7);
  while ( 1 )
  {
    v3 = v7;
    if ( !((__int64)(*((_QWORD *)&v7 + 1) - v7) >> 4) )
      break;
    BackdropBrushNoRef = CRenderingTechniqueFragment::GetBackdropBrushNoRef(
                           *(CRenderingTechniqueFragment **)(*((_QWORD *)&v7 + 1) - 16LL),
                           *(const struct CBrushRenderingGraph **)this);
    if ( BackdropBrushNoRef )
    {
      v3 = v7;
      break;
    }
    CFragmentIterator::MoveNext((CFragmentIterator *)&v7);
  }
  if ( v3 )
    std::_Deallocate<16,0>(v3, (v8 - v3) & 0xFFFFFFFFFFFFFFF0uLL);
  return BackdropBrushNoRef;
}
