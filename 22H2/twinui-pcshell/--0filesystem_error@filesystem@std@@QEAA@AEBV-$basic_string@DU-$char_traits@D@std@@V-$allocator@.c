/*
 * XREFs of ??0filesystem_error@filesystem@std@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@AEBVpath@12@Verror_code@2@@Z @ 0x18011A9D4
 * Callers:
 *     ?_Throw_fs_error@filesystem@std@@YAXPEBDAEBVerror_code@2@AEBVpath@12@@Z @ 0x180126FA0 (-_Throw_fs_error@filesystem@std@@YAXPEBDAEBVerror_code@2@AEBVpath@12@@Z.c)
 *     ?_Throw_fs_error@filesystem@std@@YAXPEBDW4__std_win_error@@AEBVpath@12@@Z @ 0x180127074 (-_Throw_fs_error@filesystem@std@@YAXPEBDW4__std_win_error@@AEBVpath@12@@Z.c)
 * Callees:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBV01@@Z @ 0x180061A7C (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@AEBV01@@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180087648 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 *     ??0system_error@std@@QEAA@Verror_code@1@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@1@@Z @ 0x18011AD20 (--0system_error@std@@QEAA@Verror_code@1@AEBV-$basic_string@DU-$char_traits@D@std@@V-$allocator@D.c)
 *     ?_Pretty_message@filesystem_error@filesystem@std@@CA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@3@V?$basic_string_view@DU?$char_traits@D@std@@@3@AEBVpath@23@1@Z @ 0x180126C24 (-_Pretty_message@filesystem_error@filesystem@std@@CA-AV-$basic_string@DU-$char_traits@D@std@@V-$.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall std::filesystem::filesystem_error::filesystem_error(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int128 *a4)
{
  const char *v5; // rax
  __int64 v6; // rcx
  __int128 v8; // [rsp+20h] [rbp-50h] BYREF
  __int64 v9; // [rsp+30h] [rbp-40h]
  _OWORD v10[2]; // [rsp+40h] [rbp-30h] BYREF

  v9 = a1;
  v8 = *a4;
  std::system_error::system_error(a1, &v8, a2);
  *(_QWORD *)a1 = &std::filesystem::filesystem_error::`vftable';
  std::wstring::wstring(a1 + 40);
  *(_OWORD *)(a1 + 72) = 0LL;
  *(_OWORD *)(a1 + 88) = 0LL;
  *(_QWORD *)(a1 + 88) = 0LL;
  *(_QWORD *)(a1 + 96) = 7LL;
  *(_WORD *)(a1 + 72) = 0;
  v10[0] = 0LL;
  v10[1] = _mm_load_si128((const __m128i *)&_xmm);
  LOWORD(v10[0]) = 0;
  v5 = "Unknown exception";
  if ( *(_QWORD *)(a1 + 8) )
    v5 = *(const char **)(a1 + 8);
  *(_QWORD *)&v8 = v5;
  v6 = -1LL;
  do
    ++v6;
  while ( v5[v6] );
  *((_QWORD *)&v8 + 1) = v6;
  std::filesystem::filesystem_error::_Pretty_message((void *)(a1 + 104));
  std::wstring::_Tidy_deallocate(v10);
  return a1;
}
