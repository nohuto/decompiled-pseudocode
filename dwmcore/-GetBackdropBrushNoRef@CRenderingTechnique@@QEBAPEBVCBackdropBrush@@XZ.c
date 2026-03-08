/*
 * XREFs of ?GetBackdropBrushNoRef@CRenderingTechnique@@QEBAPEBVCBackdropBrush@@XZ @ 0x18002AA88
 * Callers:
 *     ?CheckBackdropInputs@CBrushRenderingGraphBuilder@@IEAAXXZ @ 0x180029E64 (-CheckBackdropInputs@CBrushRenderingGraphBuilder@@IEAAXXZ.c)
 * Callees:
 *     ??$emplace_back@UFragmentStackEntry@CFragmentIterator@@@?$vector@UFragmentStackEntry@CFragmentIterator@@V?$allocator@UFragmentStackEntry@CFragmentIterator@@@std@@@std@@QEAA?A_T$$QEAUFragmentStackEntry@CFragmentIterator@@@Z @ 0x18002AFC4 (--$emplace_back@UFragmentStackEntry@CFragmentIterator@@@-$vector@UFragmentStackEntry@CFragmentIt.c)
 *     ?FindFirst@CFragmentIterator@@AEAAXXZ @ 0x18002D230 (-FindFirst@CFragmentIterator@@AEAAXXZ.c)
 *     ?MoveNext@CFragmentIterator@@QEAAXXZ @ 0x18002D3FC (-MoveNext@CFragmentIterator@@QEAAXXZ.c)
 *     ?GetBackdropBrushNoRef@CRenderingTechniqueFragment@@QEBAPEBVCBackdropBrush@@PEBVCBrushRenderingGraph@@@Z @ 0x18002D55C (-GetBackdropBrushNoRef@CRenderingTechniqueFragment@@QEBAPEBVCBackdropBrush@@PEBVCBrushRenderingG.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800E18AC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

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
