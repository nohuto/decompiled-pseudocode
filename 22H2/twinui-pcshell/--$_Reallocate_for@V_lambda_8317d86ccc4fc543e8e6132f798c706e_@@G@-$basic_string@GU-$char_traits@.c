/*
 * XREFs of ??$_Reallocate_for@V_lambda_8317d86ccc4fc543e8e6132f798c706e_@@G@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAAEAV01@_KV_lambda_8317d86ccc4fc543e8e6132f798c706e_@@G@Z @ 0x180264CD8
 * Callers:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@_KG@Z @ 0x180264DD4 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@_KG@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180049D94 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Calculate_growth@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEBA_K_K@Z @ 0x180061B58 (-_Calculate_growth@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEBA_K_K@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18008C494 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?_Xlen@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@CAXXZ @ 0x1801165B0 (-_Xlen@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@CAXXZ.c)
 */

__int64 __fastcall std::wstring::_Reallocate_for<_lambda_8317d86ccc4fc543e8e6132f798c706e_,unsigned short>(
        __int64 a1,
        unsigned __int64 a2)
{
  unsigned __int64 v4; // rbp
  __int64 v5; // rdi
  size_t v6; // rcx
  _QWORD *v7; // rax
  _QWORD *v8; // r14
  _WORD *v9; // rdi
  unsigned __int64 i; // rcx
  __int64 result; // rax

  if ( a2 > 0x7FFFFFFFFFFFFFFELL )
    std::wstring::_Xlen();
  v4 = *(_QWORD *)(a1 + 24);
  v5 = std::wstring::_Calculate_growth(a1, a2);
  v6 = 2 * (v5 + 1);
  if ( (unsigned __int64)(v5 + 1) > 0x7FFFFFFFFFFFFFFFLL )
    v6 = -1LL;
  v7 = std::_Allocate<16,std::_Default_allocate_traits,0>(v6);
  *(_QWORD *)(a1 + 16) = a2;
  *(_QWORD *)(a1 + 24) = v5;
  v8 = v7;
  if ( a2 )
  {
    v9 = v7;
    for ( i = a2; i; --i )
      *v9++ = 0;
  }
  *((_WORD *)v7 + a2) = 0;
  if ( v4 >= 8 )
    std::_Deallocate<16,0>(*(void **)a1, (const struct std::nothrow_t *)(2 * v4 + 2));
  result = a1;
  *(_QWORD *)a1 = v8;
  return result;
}
