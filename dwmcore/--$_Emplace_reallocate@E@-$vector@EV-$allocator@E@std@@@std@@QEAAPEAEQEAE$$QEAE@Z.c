/*
 * XREFs of ??$_Emplace_reallocate@E@?$vector@EV?$allocator@E@std@@@std@@QEAAPEAEQEAE$$QEAE@Z @ 0x18010CCDC
 * Callers:
 *     _anonymous_namespace_::SendFramesReport @ 0x18010B170 (_anonymous_namespace_--SendFramesReport.c)
 *     _anonymous_namespace_::PackedStringArrayBuilder::Append @ 0x18010BCB4 (_anonymous_namespace_--PackedStringArrayBuilder--Append.c)
 *     ?EncodeStringsList@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV?$set@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@2@@Z @ 0x18010BE9C (-EncodeStringsList@@YA-AV-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@AEBV-$set@.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180085FF0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Change_array@?$vector@EV?$allocator@E@std@@@std@@AEAAXQEAE_K1@Z @ 0x1800AB8A0 (-_Change_array@-$vector@EV-$allocator@E@std@@@std@@AEAAXQEAE_K1@Z.c)
 *     ?_Calculate_growth@?$vector@DV?$allocator@D@std@@@std@@AEBA_K_K@Z @ 0x18010CE64 (-_Calculate_growth@-$vector@DV-$allocator@D@std@@@std@@AEBA_K_K@Z.c)
 *     memmove_0 @ 0x1801177F4 (memmove_0.c)
 *     ?_Xlength@?$vector@V?$unique_ptr@UICheckMPOCache@@U?$default_delete@UICheckMPOCache@@@std@@@std@@V?$allocator@V?$unique_ptr@UICheckMPOCache@@U?$default_delete@UICheckMPOCache@@@std@@@std@@@2@@std@@CAXXZ @ 0x1801AF7D8 (-_Xlength@-$vector@V-$unique_ptr@UICheckMPOCache@@U-$default_delete@UICheckMPOCache@@@std@@@std@.c)
 */

char *__fastcall std::vector<unsigned char>::_Emplace_reallocate<unsigned char>(__int64 *a1, const void *a2, char *a3)
{
  __int64 v3; // rbp
  __int64 v6; // rax
  __int64 v8; // r15
  __int64 v9; // r12
  char *v10; // rdi
  char *v11; // r14
  void *v12; // rcx
  __int64 v13; // r8
  const void *v14; // rdx
  size_t v15; // r8

  v3 = *a1;
  v6 = a1[1] - *a1;
  if ( v6 == 0x7FFFFFFFFFFFFFFFLL )
    std::vector<std::unique_ptr<ICheckMPOCache>>::_Xlength();
  v8 = v6 + 1;
  v9 = std::vector<char>::_Calculate_growth(a1, v6 + 1);
  v10 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(v9);
  v11 = &v10[(_QWORD)a2 - v3];
  *v11 = *a3;
  v12 = v10;
  v13 = a1[1];
  v14 = (const void *)*a1;
  if ( a2 == (const void *)v13 )
  {
    v15 = v13 - (_QWORD)v14;
  }
  else
  {
    memmove_0(v10, v14, (size_t)a2 - *a1);
    v12 = v11 + 1;
    v15 = a1[1] - (_QWORD)a2;
    v14 = a2;
  }
  memmove_0(v12, v14, v15);
  std::vector<unsigned char>::_Change_array(a1, (__int64)v10, v8, v9);
  return &v10[(_QWORD)a2 - v3];
}
