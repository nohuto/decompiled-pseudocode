/*
 * XREFs of ??$_Uninitialized_move@PEAUFragmentInput@CRenderingTechniqueFragment@@V?$allocator@UFragmentInput@CRenderingTechniqueFragment@@@std@@@std@@YAPEAUFragmentInput@CRenderingTechniqueFragment@@QEAU12@0PEAU12@AEAV?$allocator@UFragmentInput@CRenderingTechniqueFragment@@@0@@Z @ 0x180040014
 * Callers:
 *     ??$_Emplace_reallocate@UFragmentInput@CRenderingTechniqueFragment@@@?$vector@UFragmentInput@CRenderingTechniqueFragment@@V?$allocator@UFragmentInput@CRenderingTechniqueFragment@@@std@@@std@@QEAAPEAUFragmentInput@CRenderingTechniqueFragment@@QEAU23@$$QEAU23@@Z @ 0x18004006C (--$_Emplace_reallocate@UFragmentInput@CRenderingTechniqueFragment@@@-$vector@UFragmentInput@CRen.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@UFragmentInput@CRenderingTechniqueFragment@@@std@@@std@@YAXPEAUFragmentInput@CRenderingTechniqueFragment@@QEAU12@AEAV?$allocator@UFragmentInput@CRenderingTechniqueFragment@@@0@@Z @ 0x18003E5DC (--$_Destroy_range@V-$allocator@UFragmentInput@CRenderingTechniqueFragment@@@std@@@std@@YAXPEAUFr.c)
 */

char *__fastcall std::_Uninitialized_move<CRenderingTechniqueFragment::FragmentInput *>(
        __int64 *a1,
        __int64 *a2,
        char *a3)
{
  __int64 *v5; // r8
  char *v6; // r9
  __int64 v7; // rcx

  if ( a1 != a2 )
  {
    v5 = a1 + 1;
    v6 = (char *)(a3 - (char *)a1);
    do
    {
      *(_QWORD *)a3 = *(v5 - 1);
      a3 += 16;
      v7 = *v5;
      *v5 = 0LL;
      *(__int64 *)((char *)v5 + (_QWORD)v6) = v7;
      v5 += 2;
    }
    while ( v5 - 1 != a2 );
  }
  std::_Destroy_range<std::allocator<CRenderingTechniqueFragment::FragmentInput>>((__int64)a3, (__int64)a3);
  return a3;
}
