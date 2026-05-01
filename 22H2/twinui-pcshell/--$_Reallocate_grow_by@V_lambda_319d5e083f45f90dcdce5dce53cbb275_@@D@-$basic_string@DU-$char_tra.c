/*
 * XREFs of ??$_Reallocate_grow_by@V_lambda_319d5e083f45f90dcdce5dce53cbb275_@@D@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAAEAV01@_KV_lambda_319d5e083f45f90dcdce5dce53cbb275_@@D@Z @ 0x180119310
 * Callers:
 *     ?push_back@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAXD@Z @ 0x180128A3C (-push_back@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAXD@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180049D94 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18008C494 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     memcpy_0 @ 0x180091307 (memcpy_0.c)
 *     ?_Calculate_growth@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBA_K_K@Z @ 0x180116570 (-_Calculate_growth@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@AEBA_K_K@Z.c)
 *     ?_Xlen@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@CAXXZ @ 0x1801165B0 (-_Xlen@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@CAXXZ.c)
 */

void **__fastcall std::string::_Reallocate_grow_by<_lambda_319d5e083f45f90dcdce5dce53cbb275_,char>(
        void **Src,
        __int64 a2,
        __int64 a3,
        char a4)
{
  size_t v4; // rbp
  unsigned __int64 v7; // r13
  __int64 v8; // rbx
  _QWORD *v9; // rax
  _QWORD *v10; // r14
  void *v11; // rbx
  void **result; // rax

  v4 = (size_t)Src[2];
  if ( v4 == 0x7FFFFFFFFFFFFFFFLL )
    std::wstring::_Xlen();
  v7 = (unsigned __int64)Src[3];
  v8 = std::string::_Calculate_growth((__int64)Src, v4 + 1);
  v9 = std::_Allocate<16,std::_Default_allocate_traits,0>(v8 + 1);
  Src[2] = (void *)(v4 + 1);
  v10 = v9;
  Src[3] = (void *)v8;
  if ( v7 < 0x10 )
  {
    memcpy_0(v9, Src, v4);
    *((_BYTE *)v10 + v4) = a4;
    *((_BYTE *)v10 + v4 + 1) = 0;
  }
  else
  {
    v11 = *Src;
    memcpy_0(v9, *Src, v4);
    *((_BYTE *)v10 + v4) = a4;
    *((_BYTE *)v10 + v4 + 1) = 0;
    std::_Deallocate<16,0>(v11, (const struct std::nothrow_t *)(v7 + 1));
  }
  result = Src;
  *Src = v10;
  return result;
}
