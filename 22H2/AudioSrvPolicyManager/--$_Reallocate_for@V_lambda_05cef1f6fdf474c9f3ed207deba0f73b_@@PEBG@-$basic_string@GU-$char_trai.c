/*
 * XREFs of ??$_Reallocate_for@V_lambda_05cef1f6fdf474c9f3ed207deba0f73b_@@PEBG@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAAEAV01@_KV_lambda_05cef1f6fdf474c9f3ed207deba0f73b_@@PEBG@Z @ 0x18000ED88
 * Callers:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x18000CD64 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ?RuntimeClassInitialize@CAastPreStartContext@@QEAAJPEAUIAudioStreamInfo@@@Z @ 0x180025140 (-RuntimeClassInitialize@CAastPreStartContext@@QEAAJPEAUIAudioStreamInfo@@@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180009F20 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Xlen@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@CAXXZ @ 0x18000ED68 (-_Xlen@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@CAXXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180039D98 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     memcpy_0 @ 0x18003AE0F (memcpy_0.c)
 */

char **__fastcall std::wstring::_Reallocate_for<_lambda_05cef1f6fdf474c9f3ed207deba0f73b_,unsigned short const *>(
        char **a1,
        unsigned __int64 a2,
        __int64 a3,
        const void *a4)
{
  __int64 v4; // rbx
  unsigned __int64 v8; // rsi
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  SIZE_T v11; // rcx
  _QWORD *v12; // rax
  _QWORD *v13; // rbp
  char *v14; // rcx
  const struct std::nothrow_t *v15; // rdx
  char *v16; // r8
  char *v17; // rcx
  char **result; // rax

  v4 = 0x7FFFFFFFFFFFFFFELL;
  if ( a2 > 0x7FFFFFFFFFFFFFFELL )
    goto LABEL_15;
  v8 = (unsigned __int64)a1[3];
  v9 = a2 | 7;
  if ( (a2 | 7) <= 0x7FFFFFFFFFFFFFFELL )
  {
    v10 = v8 >> 1;
    if ( v8 <= 0x7FFFFFFFFFFFFFFELL - (v8 >> 1) )
    {
      v4 = v9;
      if ( v9 < v10 + v8 )
        v4 = v10 + v8;
    }
  }
  v11 = 2 * (v4 + 1);
  if ( (unsigned __int64)(v4 + 1) > 0x7FFFFFFFFFFFFFFFLL )
    v11 = -1LL;
  v12 = std::_Allocate<16,std::_Default_allocate_traits,0>(v11);
  a1[3] = (char *)v4;
  a1[2] = (char *)a2;
  v13 = v12;
  memcpy_0(v12, a4, 2 * a2);
  *((_WORD *)v13 + a2) = 0;
  if ( v8 >= 8 )
  {
    v14 = *a1;
    v15 = (const struct std::nothrow_t *)(2 * v8 + 2);
    if ( (unsigned __int64)v15 < 0x1000 )
    {
LABEL_12:
      operator delete(v14, v15);
      goto LABEL_13;
    }
    v16 = (char *)*((_QWORD *)v14 - 1);
    v15 = (const struct std::nothrow_t *)(2 * v8 + 41);
    v17 = (char *)(v14 - v16);
    if ( (unsigned __int64)(v17 - 8) <= 0x1F )
    {
      v14 = v16;
      goto LABEL_12;
    }
    _o__invalid_parameter_noinfo_noreturn(v17, v15);
    __debugbreak();
LABEL_15:
    std::wstring::_Xlen();
  }
LABEL_13:
  result = a1;
  *a1 = (char *)v13;
  return result;
}
