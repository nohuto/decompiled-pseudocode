/*
 * XREFs of ??$_Reallocate_grow_by@V_lambda_f3a66ab6a0570788f31503db83886f49_@@_KPEBD_K@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAAEAV01@_KV_lambda_f3a66ab6a0570788f31503db83886f49_@@_KPEBD2@Z @ 0x18019726C
 * Callers:
 *     ?insert@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@_KQEBD0@Z @ 0x1801987D4 (-insert@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@_KQEBD0@Z.c)
 * Callees:
 *     ?_Calculate_growth@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBA_K_K@Z @ 0x18004AC4C (-_Calculate_growth@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@AEBA_K_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180050D58 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800C8C9C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     memcpy_0 @ 0x1800F400B (memcpy_0.c)
 *     ?_Xlen@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@CAXXZ @ 0x180151A54 (-_Xlen@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@CAXXZ.c)
 */

void **__fastcall std::string::_Reallocate_grow_by<_lambda_f3a66ab6a0570788f31503db83886f49_,unsigned __int64,char const *,unsigned __int64>(
        void **Src,
        unsigned __int64 a2,
        __int64 a3,
        __int64 a4,
        void *Srca,
        size_t Size)
{
  char *v6; // r15
  unsigned __int64 v8; // rbp
  char *v9; // rdi
  __int64 v10; // rbx
  char *v11; // rax
  char *v12; // r14
  char *v13; // rdi
  void *v14; // rbx

  v6 = (char *)Src[2];
  if ( 0x7FFFFFFFFFFFFFFFLL - (__int64)v6 < a2 )
    std::wstring::_Xlen();
  v8 = (unsigned __int64)Src[3];
  v9 = &v6[a2];
  v10 = std::string::_Calculate_growth((__int64)Src, (__int64)&v6[a2]);
  v11 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(v10 + 1);
  v12 = v11;
  Src[2] = v9;
  Src[3] = (void *)v10;
  v13 = &v11[Size];
  if ( v8 < 0x10 )
  {
    memcpy_0(v11, Srca, Size);
    memcpy_0(v13, Src, (size_t)(v6 + 1));
  }
  else
  {
    v14 = *Src;
    memcpy_0(v11, Srca, Size);
    memcpy_0(v13, v14, (size_t)(v6 + 1));
    std::_Deallocate<16,0>(v14, v8 + 1);
  }
  *Src = v12;
  return Src;
}
