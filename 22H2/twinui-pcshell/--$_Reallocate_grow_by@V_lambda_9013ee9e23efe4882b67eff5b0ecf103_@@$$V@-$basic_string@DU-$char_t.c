/*
 * XREFs of ??$_Reallocate_grow_by@V_lambda_9013ee9e23efe4882b67eff5b0ecf103_@@$$V@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAAEAV01@_KV_lambda_9013ee9e23efe4882b67eff5b0ecf103_@@@Z @ 0x1801194D0
 * Callers:
 *     ?_Pretty_message@filesystem_error@filesystem@std@@CA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@3@V?$basic_string_view@DU?$char_traits@D@std@@@3@AEBVpath@23@1@Z @ 0x180126C24 (-_Pretty_message@filesystem_error@filesystem@std@@CA-AV-$basic_string@DU-$char_traits@D@std@@V-$.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180049D94 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18008C494 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     memcpy_0 @ 0x180091307 (memcpy_0.c)
 *     ?_Calculate_growth@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBA_K_K@Z @ 0x180116570 (-_Calculate_growth@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@AEBA_K_K@Z.c)
 *     ?_Xlen@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@CAXXZ @ 0x1801165B0 (-_Xlen@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@CAXXZ.c)
 */

void **__fastcall std::string::_Reallocate_grow_by<_lambda_9013ee9e23efe4882b67eff5b0ecf103_,>(
        void **Src,
        unsigned __int64 a2)
{
  char *v2; // r14
  unsigned __int64 v4; // r15
  char *v5; // rdi
  __int64 v6; // rbx
  _QWORD *v7; // rax
  _QWORD *v8; // rbp
  size_t v9; // r8
  void *v10; // rbx
  void **result; // rax

  v2 = (char *)Src[2];
  if ( 0x7FFFFFFFFFFFFFFFLL - (__int64)v2 < a2 )
    std::wstring::_Xlen();
  v4 = (unsigned __int64)Src[3];
  v5 = &v2[a2];
  v6 = std::string::_Calculate_growth((__int64)Src, (__int64)&v2[a2]);
  v7 = std::_Allocate<16,std::_Default_allocate_traits,0>(v6 + 1);
  Src[2] = v5;
  v8 = v7;
  Src[3] = (void *)v6;
  v9 = (size_t)(v2 + 1);
  if ( v4 < 0x10 )
  {
    memcpy_0(v7, Src, v9);
  }
  else
  {
    v10 = *Src;
    memcpy_0(v7, *Src, v9);
    std::_Deallocate<16,0>(v10, (const struct std::nothrow_t *)(v4 + 1));
  }
  result = Src;
  *Src = v8;
  return result;
}
