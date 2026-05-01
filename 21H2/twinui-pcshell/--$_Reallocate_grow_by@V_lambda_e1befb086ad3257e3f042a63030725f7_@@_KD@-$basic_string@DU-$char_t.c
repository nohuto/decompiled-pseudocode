/*
 * XREFs of ??$_Reallocate_grow_by@V_lambda_e1befb086ad3257e3f042a63030725f7_@@_KD@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAAEAV01@_KV_lambda_e1befb086ad3257e3f042a63030725f7_@@_KD@Z @ 0x1801196F4
 * Callers:
 *     ?append@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@_KD@Z @ 0x1801275A0 (-append@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@_KD@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180049D94 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18008C494 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     memset_0 @ 0x180090978 (memset_0.c)
 *     memcpy_0 @ 0x180091327 (memcpy_0.c)
 *     ?_Calculate_growth@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBA_K_K@Z @ 0x1801166E0 (-_Calculate_growth@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@AEBA_K_K@Z.c)
 *     ?_Xlen@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@CAXXZ @ 0x180116720 (-_Xlen@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@CAXXZ.c)
 */

void **__fastcall std::string::_Reallocate_grow_by<_lambda_e1befb086ad3257e3f042a63030725f7_,unsigned __int64,char>(
        void **Src,
        unsigned __int64 a2,
        __int64 a3,
        size_t a4)
{
  size_t v4; // r14
  unsigned __int64 v7; // r13
  size_t v8; // rdi
  __int64 v9; // rbx
  _QWORD *v10; // rax
  _QWORD *v11; // r15
  char *v12; // rdi
  void *v13; // rbx
  void **result; // rax

  v4 = (size_t)Src[2];
  if ( 0x7FFFFFFFFFFFFFFFLL - v4 < a2 )
    std::wstring::_Xlen();
  v7 = (unsigned __int64)Src[3];
  v8 = v4 + a2;
  v9 = std::string::_Calculate_growth((__int64)Src, v4 + a2);
  v10 = std::_Allocate<16,std::_Default_allocate_traits,0>(v9 + 1);
  Src[2] = (void *)v8;
  v11 = v10;
  Src[3] = (void *)v9;
  v12 = (char *)v10 + v4;
  if ( v7 < 0x10 )
  {
    memcpy_0(v10, Src, v4);
    memset_0(v12, 0, a4);
    v12[a4] = 0;
  }
  else
  {
    v13 = *Src;
    memcpy_0(v10, *Src, v4);
    memset_0(v12, 0, a4);
    v12[a4] = 0;
    std::_Deallocate<16,0>(v13, (const struct std::nothrow_t *)(v7 + 1));
  }
  result = Src;
  *Src = v11;
  return result;
}
