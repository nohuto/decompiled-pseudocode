/*
 * XREFs of ??0system_error@std@@QEAA@Verror_code@1@@Z @ 0x18011AC88
 * Callers:
 *     ?_Check_convert_result@filesystem@std@@YAHU__std_fs_convert_result@@@Z @ 0x180125F60 (-_Check_convert_result@filesystem@std@@YAHU__std_fs_convert_result@@@Z.c)
 *     ?_Xsystem_error_invalid_argument@filesystem@std@@YAXXZ @ 0x180127158 (-_Xsystem_error_invalid_argument@filesystem@std@@YAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 *     ??1?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@XZ @ 0x180108D2C (--1-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@XZ.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x18011A32C (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     ??0_System_error@std@@IEAA@Verror_code@1@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@1@@Z @ 0x18011A7EC (--0_System_error@std@@IEAA@Verror_code@1@AEBV-$basic_string@DU-$char_traits@D@std@@V-$allocator@.c)
 */

// Hidden C++ exception states: #wind=1
std::exception *__fastcall std::system_error::system_error(std::exception *a1, __int128 *a2)
{
  __int128 v5; // [rsp+20h] [rbp-48h] BYREF
  _QWORD v6[4]; // [rsp+30h] [rbp-38h] BYREF

  *(_QWORD *)&v5 = a1;
  std::string::string(v6);
  v5 = *a2;
  std::_System_error::_System_error(a1, &v5, (__int64)v6);
  std::string::~string((__int64)v6);
  *(_QWORD *)a1 = &std::_System_error::`vftable';
  return a1;
}
