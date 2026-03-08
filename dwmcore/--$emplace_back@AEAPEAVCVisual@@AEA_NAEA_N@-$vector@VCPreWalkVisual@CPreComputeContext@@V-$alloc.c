/*
 * XREFs of ??$emplace_back@AEAPEAVCVisual@@AEA_NAEA_N@?$vector@VCPreWalkVisual@CPreComputeContext@@V?$allocator@VCPreWalkVisual@CPreComputeContext@@@std@@@std@@QEAA?A_TAEAPEAVCVisual@@AEA_N1@Z @ 0x18000BB4C
 * Callers:
 *     ?Add@CPreWalkVisual@CPreComputeContext@@SAXPEAVCVisual@@PEBVCVisualTree@@_N2PEAV?$vector@VCPreWalkVisual@CPreComputeContext@@V?$allocator@VCPreWalkVisual@CPreComputeContext@@@std@@@std@@@Z @ 0x18000BABC (-Add@CPreWalkVisual@CPreComputeContext@@SAXPEAVCVisual@@PEBVCVisualTree@@_N2PEAV-$vector@VCPreWa.c)
 * Callees:
 *     ??$_Emplace_reallocate@AEAPEAVCVisual@@AEA_NAEA_N@?$vector@VCPreWalkVisual@CPreComputeContext@@V?$allocator@VCPreWalkVisual@CPreComputeContext@@@std@@@std@@QEAAPEAVCPreWalkVisual@CPreComputeContext@@QEAV23@AEAPEAVCVisual@@AEA_N2@Z @ 0x18000BBA0 (--$_Emplace_reallocate@AEAPEAVCVisual@@AEA_NAEA_N@-$vector@VCPreWalkVisual@CPreComputeContext@@V.c)
 */

__int64 __fastcall std::vector<CPreComputeContext::CPreWalkVisual>::emplace_back<CVisual * &,bool &,bool &>(
        __int64 a1,
        _QWORD *a2,
        char *a3,
        char *a4)
{
  __int64 v5; // rdx
  __int64 result; // rax
  char v7; // r9
  char v8; // r8

  v5 = *(_QWORD *)(a1 + 8);
  if ( v5 == *(_QWORD *)(a1 + 16) )
    return std::vector<CPreComputeContext::CPreWalkVisual>::_Emplace_reallocate<CVisual * &,bool &,bool &>(
             a1,
             v5,
             (_DWORD)a2,
             (_DWORD)a3,
             (__int64)a4);
  v7 = *a4;
  v8 = *a3;
  *(_QWORD *)v5 = *a2;
  *(_BYTE *)(v5 + 8) = v8;
  *(_BYTE *)(v5 + 9) = v7;
  result = *(_QWORD *)(a1 + 8);
  *(_QWORD *)(a1 + 8) = result + 16;
  return result;
}
