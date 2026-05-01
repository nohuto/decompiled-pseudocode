/*
 * XREFs of _anonymous_namespace_::TruncateDisplayName @ 0x18014D244
 * Callers:
 *     _anonymous_namespace_::GetPromptText @ 0x18014985C (_anonymous_namespace_--GetPromptText.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180087648 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ??$?0V?$basic_string_view@GU?$char_traits@G@std@@@std@@X@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBV?$basic_string_view@GU?$char_traits@G@std@@@1@AEBV?$allocator@G@1@@Z @ 0x180116D14 (--$-0V-$basic_string_view@GU-$char_traits@G@std@@@std@@X@-$basic_string@GU-$char_traits@G@std@@V.c)
 *     ?push_back@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAXG@Z @ 0x180128BE4 (-push_back@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAXG@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall anonymous_namespace_::TruncateDisplayName(_QWORD *a1, __int64 a2)
{
  const void *v3; // rax
  __int64 v4; // rbx
  const void *v6[2]; // [rsp+20h] [rbp-38h] BYREF
  _QWORD v7[5]; // [rsp+30h] [rbp-28h] BYREF

  v6[0] = a1;
  if ( *(_QWORD *)(a2 + 8) <= 0x19uLL )
  {
    std::wstring::wstring((__int64)a1, (const void **)a2);
  }
  else
  {
    v3 = (const void *)(((unsigned __int16)(*(_WORD *)(*(_QWORD *)a2 + 44LL) + 9216) > 0x3FFu) + 21LL);
    v6[0] = *(const void **)a2;
    v6[1] = v3;
    v4 = std::wstring::wstring((__int64)v7, v6);
    std::wstring::push_back((void **)v4, 8230LL);
    a1[2] = 0LL;
    a1[3] = 0LL;
    *(_OWORD *)a1 = *(_OWORD *)v4;
    *((_OWORD *)a1 + 1) = *(_OWORD *)(v4 + 16);
    *(_QWORD *)(v4 + 16) = 0LL;
    *(_QWORD *)(v4 + 24) = 7LL;
    *(_WORD *)v4 = 0;
    std::wstring::_Tidy_deallocate(v7);
  }
  return a1;
}
