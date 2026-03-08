/*
 * XREFs of ??$_Reallocate_for@V_lambda_66f57f934f28d61049862f64df852ff0_@@PEBD@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAAEAV01@_KV_lambda_66f57f934f28d61049862f64df852ff0_@@PEBD@Z @ 0x1801D5CF0
 * Callers:
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x1801D5F40 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180085FF0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800E18AC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?_Calculate_growth@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBA_K_K@Z @ 0x18010CF00 (-_Calculate_growth@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@AEBA_K_K@Z.c)
 *     memcpy_0 @ 0x1801177E8 (memcpy_0.c)
 *     ?_Xlen_string@std@@YAXXZ @ 0x1801CAAD4 (-_Xlen_string@std@@YAXXZ.c)
 */

__int64 __fastcall std::string::_Reallocate_for<_lambda_66f57f934f28d61049862f64df852ff0_,char const *>(
        __int64 a1,
        size_t a2,
        __int64 a3,
        const void *a4)
{
  unsigned __int64 v7; // rbp
  unsigned __int64 v8; // rbx
  _BYTE *v9; // rax
  _BYTE *v10; // r14

  if ( a2 > 0x7FFFFFFFFFFFFFFFLL )
    std::_Xlen_string();
  v7 = *(_QWORD *)(a1 + 24);
  v8 = std::string::_Calculate_growth(a1, a2);
  v9 = (_BYTE *)std::_Allocate<16,std::_Default_allocate_traits,0>(v8 + 1);
  *(_QWORD *)(a1 + 16) = a2;
  *(_QWORD *)(a1 + 24) = v8;
  v10 = v9;
  memcpy_0(v9, a4, a2);
  v10[a2] = 0;
  if ( v7 >= 0x10 )
    std::_Deallocate<16,0>(*(void **)a1, v7 + 1);
  *(_QWORD *)a1 = v10;
  return a1;
}
