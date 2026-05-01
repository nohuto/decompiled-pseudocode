/*
 * XREFs of ??0system_error@std@@QEAA@Verror_code@1@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@1@@Z @ 0x18011AD20
 * Callers:
 *     ??0filesystem_error@filesystem@std@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@AEBVpath@12@Verror_code@2@@Z @ 0x18011A9D4 (--0filesystem_error@filesystem@std@@QEAA@AEBV-$basic_string@DU-$char_traits@D@std@@V-$allocator@.c)
 *     ??0filesystem_error@filesystem@std@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@Verror_code@2@@Z @ 0x18011AAF8 (--0filesystem_error@filesystem@std@@QEAA@AEBV-$basic_string@DU-$char_traits@D@std@@_ea_18011AAF8.c)
 * Callees:
 *     ??0_System_error@std@@IEAA@Verror_code@1@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@1@@Z @ 0x18011A7EC (--0_System_error@std@@IEAA@Verror_code@1@AEBV-$basic_string@DU-$char_traits@D@std@@V-$allocator@.c)
 */

std::exception *__fastcall std::system_error::system_error(std::exception *a1, __int128 *a2, __int64 a3)
{
  __int128 v5; // [rsp+20h] [rbp-18h] BYREF

  v5 = *a2;
  std::_System_error::_System_error(a1, &v5, a3);
  *(_QWORD *)a1 = &std::_System_error::`vftable';
  return a1;
}
