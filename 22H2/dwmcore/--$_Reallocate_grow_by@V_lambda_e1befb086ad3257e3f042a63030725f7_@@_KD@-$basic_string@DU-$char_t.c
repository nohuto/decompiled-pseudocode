/*
 * XREFs of ??$_Reallocate_grow_by@V_lambda_e1befb086ad3257e3f042a63030725f7_@@_KD@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAAEAV01@_KV_lambda_e1befb086ad3257e3f042a63030725f7_@@_KD@Z @ 0x1801971A4
 * Callers:
 *     ?append@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@_KD@Z @ 0x180198224 (-append@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@_KD@Z.c)
 * Callees:
 *     ?_Calculate_growth@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBA_K_K@Z @ 0x18004AC4C (-_Calculate_growth@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@AEBA_K_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180050D58 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800C8C9C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     memcpy_0 @ 0x1800F400B (memcpy_0.c)
 *     ?_Xlen@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@CAXXZ @ 0x180151A54 (-_Xlen@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@CAXXZ.c)
 */

void **__fastcall std::string::_Reallocate_grow_by<_lambda_e1befb086ad3257e3f042a63030725f7_,unsigned __int64,char>(
        void **Src)
{
  size_t v1; // rbp
  unsigned __int64 v3; // r15
  __int64 v4; // rbx
  _BYTE *v5; // rax
  _BYTE *v6; // r14
  void *v7; // rbx

  v1 = (size_t)Src[2];
  if ( 0x7FFFFFFFFFFFFFFFLL - v1 < 8 )
    std::wstring::_Xlen();
  v3 = (unsigned __int64)Src[3];
  v4 = std::string::_Calculate_growth((__int64)Src, v1 + 8);
  v5 = (_BYTE *)std::_Allocate<16,std::_Default_allocate_traits,0>(v4 + 1);
  Src[2] = (void *)(v1 + 8);
  v6 = v5;
  Src[3] = (void *)v4;
  if ( v3 < 0x10 )
  {
    memcpy_0(v5, Src, v1);
    *(_QWORD *)&v6[v1] = 0LL;
    v6[v1 + 8] = 0;
  }
  else
  {
    v7 = *Src;
    memcpy_0(v5, *Src, v1);
    *(_QWORD *)&v6[v1] = 0LL;
    v6[v1 + 8] = 0;
    std::_Deallocate<16,0>(v7, v3 + 1);
  }
  *Src = v6;
  return Src;
}
