/*
 * XREFs of ??$_Destroy_range@V?$allocator@UFragmentInput@CRenderingTechniqueFragment@@@std@@@std@@YAXPEAUFragmentInput@CRenderingTechniqueFragment@@QEAU12@AEAV?$allocator@UFragmentInput@CRenderingTechniqueFragment@@@0@@Z @ 0x18003E5DC
 * Callers:
 *     ??1CRenderingTechniqueFragment@@QEAA@XZ @ 0x180029D08 (--1CRenderingTechniqueFragment@@QEAA@XZ.c)
 *     ?_Change_array@?$vector@UFragmentInput@CRenderingTechniqueFragment@@V?$allocator@UFragmentInput@CRenderingTechniqueFragment@@@std@@@std@@AEAAXQEAUFragmentInput@CRenderingTechniqueFragment@@_K1@Z @ 0x18003FF98 (-_Change_array@-$vector@UFragmentInput@CRenderingTechniqueFragment@@V-$allocator@UFragmentInput@.c)
 *     ??$_Uninitialized_move@PEAUFragmentInput@CRenderingTechniqueFragment@@V?$allocator@UFragmentInput@CRenderingTechniqueFragment@@@std@@@std@@YAPEAUFragmentInput@CRenderingTechniqueFragment@@QEAU12@0PEAU12@AEAV?$allocator@UFragmentInput@CRenderingTechniqueFragment@@@0@@Z @ 0x180040014 (--$_Uninitialized_move@PEAUFragmentInput@CRenderingTechniqueFragment@@V-$allocator@UFragmentInpu.c)
 * Callees:
 *     ??1?$unique_ptr@VCRenderingTechniqueFragment@@U?$default_delete@VCRenderingTechniqueFragment@@@std@@@std@@QEAA@XZ @ 0x18003FEC8 (--1-$unique_ptr@VCRenderingTechniqueFragment@@U-$default_delete@VCRenderingTechniqueFragment@@@s.c)
 */

__int64 __fastcall std::_Destroy_range<std::allocator<CRenderingTechniqueFragment::FragmentInput>>(
        __int64 a1,
        __int64 a2)
{
  __int64 v3; // rbx
  __int64 result; // rax

  if ( a1 != a2 )
  {
    v3 = a1;
    do
    {
      result = std::unique_ptr<CRenderingTechniqueFragment>::~unique_ptr<CRenderingTechniqueFragment>(v3 + 8);
      v3 += 16LL;
    }
    while ( v3 != a2 );
  }
  return result;
}
