/*
 * XREFs of ??$_Emplace_reallocate@AEBQEAUDepthGraphNode@@@?$vector@PEAUDepthGraphNode@@V?$allocator@PEAUDepthGraphNode@@@std@@@std@@QEAAPEAPEAUDepthGraphNode@@QEAPEAU2@AEBQEAU2@@Z @ 0x1802691BC
 * Callers:
 *     ?SortVisuals@CDepthSortingLayer@@QEAA_NPEAV?$vector@PEAVCVisual@@V?$allocator@PEAVCVisual@@@std@@@std@@AEBV?$vector@VCVisualDepthGeometry@@V?$allocator@VCVisualDepthGeometry@@@std@@@3@@Z @ 0x180269718 (-SortVisuals@CDepthSortingLayer@@QEAA_NPEAV-$vector@PEAVCVisual@@V-$allocator@PEAVCVisual@@@std@.c)
 * Callees:
 *     ?_Calculate_growth@?$vector@VCMilPoint2F@@V?$allocator@VCMilPoint2F@@@std@@@std@@AEBA_K_K@Z @ 0x18001E160 (-_Calculate_growth@-$vector@VCMilPoint2F@@V-$allocator@VCMilPoint2F@@@std@@@std@@AEBA_K_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180085FF0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$07@std@@YA_K_K@Z @ 0x1800B9880 (--$_Get_size_of_n@$07@std@@YA_K_K@Z.c)
 *     memmove_0 @ 0x1801177F4 (memmove_0.c)
 *     ?_Change_array@?$vector@PEAUDepthGraphNode@@V?$allocator@PEAUDepthGraphNode@@@std@@@std@@AEAAXQEAPEAUDepthGraphNode@@_K1@Z @ 0x180269B44 (-_Change_array@-$vector@PEAUDepthGraphNode@@V-$allocator@PEAUDepthGraphNode@@@std@@@std@@AEAAXQE.c)
 */

char *__fastcall std::vector<DepthGraphNode *>::_Emplace_reallocate<DepthGraphNode * const &>(
        _QWORD *a1,
        _BYTE *a2,
        _QWORD *a3)
{
  _BYTE *v3; // rbp
  __int64 v6; // rax
  __int64 v8; // r15
  unsigned __int64 v9; // r12
  SIZE_T size_of; // rax
  char *v11; // rsi
  char *v12; // r14
  void *v13; // rcx
  _BYTE *v14; // r8
  _BYTE *v15; // rdx
  size_t v16; // r8

  v3 = (_BYTE *)*a1;
  v6 = (__int64)(a1[1] - *a1) >> 3;
  if ( v6 == 0x1FFFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector too long");
  v8 = v6 + 1;
  v9 = std::vector<CMilPoint2F>::_Calculate_growth(a1, v6 + 1);
  size_of = std::_Get_size_of_n<8>(v9);
  v11 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v12 = &v11[8 * ((a2 - v3) >> 3)];
  *(_QWORD *)v12 = *a3;
  v13 = v11;
  v14 = (_BYTE *)a1[1];
  v15 = (_BYTE *)*a1;
  if ( a2 == v14 )
  {
    v16 = v14 - v15;
  }
  else
  {
    memmove_0(v11, v15, (size_t)&a2[-*a1]);
    v13 = v12 + 8;
    v16 = a1[1] - (_QWORD)a2;
    v15 = a2;
  }
  memmove_0(v13, v15, v16);
  std::vector<DepthGraphNode *>::_Change_array(a1, v11, v8, v9);
  return &v11[8 * ((a2 - v3) >> 3)];
}
