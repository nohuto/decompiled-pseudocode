/*
 * XREFs of ??$_Reallocate_for@V_lambda_138c3d7c38c85abb84c7fc7bfe5747b7_@@D@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAAEAV01@_KV_lambda_138c3d7c38c85abb84c7fc7bfe5747b7_@@D@Z @ 0x1801191DC
 * Callers:
 *     ?message@_System_error_category@std@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@H@Z @ 0x180128500 (-message@_System_error_category@std@@UEBA-AV-$basic_string@DU-$char_traits@D@std@@V-$allocator@D.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180049D94 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18008C494 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     memset_0 @ 0x180090958 (memset_0.c)
 *     ?_Calculate_growth@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBA_K_K@Z @ 0x180116570 (-_Calculate_growth@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@AEBA_K_K@Z.c)
 */

__int64 __fastcall std::string::_Reallocate_for<_lambda_138c3d7c38c85abb84c7fc7bfe5747b7_,char>(__int64 a1)
{
  unsigned __int64 v1; // rbp
  __int64 v3; // rbx
  _QWORD *v4; // rax
  _QWORD *v5; // rsi
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 24);
  v3 = std::string::_Calculate_growth(a1, 0x7FFFLL);
  v4 = std::_Allocate<16,std::_Default_allocate_traits,0>(v3 + 1);
  *(_QWORD *)(a1 + 16) = 0x7FFFLL;
  *(_QWORD *)(a1 + 24) = v3;
  v5 = v4;
  memset_0(v4, 0, 0x7FFFuLL);
  *((_BYTE *)v5 + 0x7FFF) = 0;
  if ( v1 >= 0x10 )
    std::_Deallocate<16,0>(*(void **)a1, (const struct std::nothrow_t *)(v1 + 1));
  result = a1;
  *(_QWORD *)a1 = v5;
  return result;
}
