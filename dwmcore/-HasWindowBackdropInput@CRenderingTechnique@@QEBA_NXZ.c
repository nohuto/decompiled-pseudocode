/*
 * XREFs of ?HasWindowBackdropInput@CRenderingTechnique@@QEBA_NXZ @ 0x18002AF10
 * Callers:
 *     ?CheckBackdropInputs@CBrushRenderingGraphBuilder@@IEAAXXZ @ 0x180029E64 (-CheckBackdropInputs@CBrushRenderingGraphBuilder@@IEAAXXZ.c)
 * Callees:
 *     ??$emplace_back@UFragmentStackEntry@CFragmentIterator@@@?$vector@UFragmentStackEntry@CFragmentIterator@@V?$allocator@UFragmentStackEntry@CFragmentIterator@@@std@@@std@@QEAA?A_T$$QEAUFragmentStackEntry@CFragmentIterator@@@Z @ 0x18002AFC4 (--$emplace_back@UFragmentStackEntry@CFragmentIterator@@@-$vector@UFragmentStackEntry@CFragmentIt.c)
 *     ?FindFirst@CFragmentIterator@@AEAAXXZ @ 0x18002D230 (-FindFirst@CFragmentIterator@@AEAAXXZ.c)
 *     ?MoveNext@CFragmentIterator@@QEAAXXZ @ 0x18002D3FC (-MoveNext@CFragmentIterator@@QEAAXXZ.c)
 *     ?HasWindowBackdropInput@CRenderingTechniqueFragment@@QEBA_NPEBVCBrushRenderingGraph@@@Z @ 0x18002D614 (-HasWindowBackdropInput@CRenderingTechniqueFragment@@QEBA_NPEBVCBrushRenderingGraph@@@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800E18AC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

bool __fastcall CRenderingTechnique::HasWindowBackdropInput(CRenderingTechnique *this)
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
    if ( CRenderingTechniqueFragment::HasWindowBackdropInput(
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
