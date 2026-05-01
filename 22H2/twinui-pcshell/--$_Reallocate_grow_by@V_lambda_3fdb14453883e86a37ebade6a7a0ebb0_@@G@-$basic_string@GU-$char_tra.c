/*
 * XREFs of ??$_Reallocate_grow_by@V_lambda_3fdb14453883e86a37ebade6a7a0ebb0_@@G@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAAEAV01@_KV_lambda_3fdb14453883e86a37ebade6a7a0ebb0_@@G@Z @ 0x1801193E8
 * Callers:
 *     ?push_back@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAXG@Z @ 0x180128A74 (-push_back@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAXG@Z.c)
 * Callees:
 *     ?_Calculate_growth@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEBA_K_K@Z @ 0x180061B58 (-_Calculate_growth@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEBA_K_K@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18008C494 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     memcpy_0 @ 0x180091307 (memcpy_0.c)
 *     ?_Xlen@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@CAXXZ @ 0x1801165B0 (-_Xlen@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@CAXXZ.c)
 *     ?allocate@?$allocator@G@std@@QEAAPEAG_K@Z @ 0x1801C9298 (-allocate@-$allocator@G@std@@QEAAPEAG_K@Z.c)
 */

void **__fastcall std::wstring::_Reallocate_grow_by<_lambda_3fdb14453883e86a37ebade6a7a0ebb0_,unsigned short>(
        void **Src,
        __int64 a2,
        __int64 a3,
        __int16 a4)
{
  void *v4; // r14
  unsigned __int64 v7; // r12
  __int64 v8; // rbx
  __int64 v9; // rcx
  char *v10; // rax
  __int64 v11; // rdi
  size_t v12; // r8
  char *v13; // rbp
  void *v14; // rbx
  void **result; // rax

  v4 = Src[2];
  if ( v4 == (void *)0x7FFFFFFFFFFFFFFELL )
    std::wstring::_Xlen();
  v7 = (unsigned __int64)Src[3];
  v8 = std::wstring::_Calculate_growth((__int64)Src, (__int64)v4 + 1);
  v10 = (char *)std::allocator<unsigned short>::allocate(v9, v8 + 1);
  Src[2] = (char *)v4 + 1;
  v11 = 2LL * (_QWORD)v4;
  Src[3] = (void *)v8;
  v12 = 2LL * (_QWORD)v4;
  v13 = v10;
  if ( v7 < 8 )
  {
    memcpy_0(v10, Src, v12);
    *(_WORD *)&v13[v11] = a4;
    *(_WORD *)&v13[v11 + 2] = 0;
  }
  else
  {
    v14 = *Src;
    memcpy_0(v10, *Src, v12);
    *(_WORD *)&v13[v11] = a4;
    *(_WORD *)&v13[v11 + 2] = 0;
    std::_Deallocate<16,0>(v14, (const struct std::nothrow_t *)(2 * v7 + 2));
  }
  result = Src;
  *Src = v13;
  return result;
}
