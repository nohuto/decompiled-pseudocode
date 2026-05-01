/*
 * XREFs of ??0filesystem_error@filesystem@std@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@Verror_code@2@@Z @ 0x18011AAF8
 * Callers:
 *     ?_Throw_fs_error@filesystem@std@@YAXPEBDW4__std_win_error@@@Z @ 0x180127008 (-_Throw_fs_error@filesystem@std@@YAXPEBDW4__std_win_error@@@Z.c)
 * Callees:
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x18011A32C (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     ??0system_error@std@@QEAA@Verror_code@1@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@1@@Z @ 0x18011AD20 (--0system_error@std@@QEAA@Verror_code@1@AEBV-$basic_string@DU-$char_traits@D@std@@V-$allocator@D.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall std::filesystem::filesystem_error::filesystem_error(__int64 a1, __int64 a2, __int128 *a3)
{
  __int128 v5; // [rsp+20h] [rbp-18h] BYREF

  v5 = *a3;
  std::system_error::system_error(a1, &v5, a2);
  *(_QWORD *)a1 = &std::filesystem::filesystem_error::`vftable';
  *(_QWORD *)(a1 + 56) = 0LL;
  *(_QWORD *)(a1 + 64) = 7LL;
  *(_WORD *)(a1 + 40) = 0;
  *(_QWORD *)(a1 + 88) = 0LL;
  *(_QWORD *)(a1 + 96) = 7LL;
  *(_WORD *)(a1 + 72) = 0;
  std::string::string((_QWORD *)(a1 + 104));
  return a1;
}
