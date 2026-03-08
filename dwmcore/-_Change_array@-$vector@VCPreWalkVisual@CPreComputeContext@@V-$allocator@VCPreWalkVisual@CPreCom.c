/*
 * XREFs of ?_Change_array@?$vector@VCPreWalkVisual@CPreComputeContext@@V?$allocator@VCPreWalkVisual@CPreComputeContext@@@std@@@std@@AEAAXQEAVCPreWalkVisual@CPreComputeContext@@_K1@Z @ 0x18000BCAC
 * Callers:
 *     ??$_Emplace_reallocate@AEAPEAVCVisual@@AEA_NAEA_N@?$vector@VCPreWalkVisual@CPreComputeContext@@V?$allocator@VCPreWalkVisual@CPreComputeContext@@@std@@@std@@QEAAPEAVCPreWalkVisual@CPreComputeContext@@QEAV23@AEAPEAVCVisual@@AEA_N2@Z @ 0x18000BBA0 (--$_Emplace_reallocate@AEAPEAVCVisual@@AEA_NAEA_N@-$vector@VCPreWalkVisual@CPreComputeContext@@V.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800E18AC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

__int64 __fastcall std::vector<CPreComputeContext::CPreWalkVisual>::_Change_array(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v6; // rcx
  __int64 result; // rax

  v6 = *a1;
  if ( v6 )
    result = std::_Deallocate<16,0>(v6, (a1[2] - v6) & 0xFFFFFFFFFFFFFFF0uLL);
  *a1 = a2;
  a1[1] = a2 + 16 * a3;
  a1[2] = a2 + 16 * a4;
  return result;
}
