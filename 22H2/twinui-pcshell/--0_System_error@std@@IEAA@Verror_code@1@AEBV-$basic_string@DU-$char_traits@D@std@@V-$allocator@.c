/*
 * XREFs of ??0_System_error@std@@IEAA@Verror_code@1@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@1@@Z @ 0x18011A7EC
 * Callers:
 *     ??0system_error@std@@QEAA@Verror_code@1@@Z @ 0x18011AC88 (--0system_error@std@@QEAA@Verror_code@1@@Z.c)
 *     ??0system_error@std@@QEAA@Verror_code@1@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@1@@Z @ 0x18011AD20 (--0system_error@std@@QEAA@Verror_code@1@AEBV-$basic_string@DU-$char_traits@D@std@@V-$allocator@D.c)
 * Callees:
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 *     ??1?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@XZ @ 0x180108D2C (--1-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@XZ.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@AEBV01@@Z @ 0x18011A27C (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@AEBV01@@Z.c)
 *     ?_Makestr@_System_error@std@@CA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@Verror_code@2@V32@@Z @ 0x180126A14 (-_Makestr@_System_error@std@@CA-AV-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@2@Verr.c)
 *     ??0exception@std@@QEAA@QEBD@Z @ 0x1803943EC (--0exception@std@@QEAA@QEBD@Z.c)
 */

std::exception *__fastcall std::_System_error::_System_error(std::exception *this, __int128 *a2, __int64 a3)
{
  _QWORD *v5; // rax
  __int64 v6; // rax
  __int128 v7; // xmm0
  std::exception *result; // rax
  __int128 v9; // [rsp+20h] [rbp-68h] BYREF
  _QWORD v10[4]; // [rsp+30h] [rbp-58h] BYREF
  _BYTE v11[32]; // [rsp+50h] [rbp-38h] BYREF

  *(_QWORD *)&v9 = this;
  v5 = std::string::string(v10, a3);
  v9 = *a2;
  v6 = std::_System_error::_Makestr(v11, &v9, v5);
  if ( *(_QWORD *)(v6 + 24) >= 0x10uLL )
    v6 = *(_QWORD *)v6;
  std::exception::exception(this, (const char *const)v6);
  *(_QWORD *)this = &std::runtime_error::`vftable';
  std::string::~string((__int64)v11);
  v7 = *a2;
  *(_QWORD *)this = &std::_System_error::`vftable';
  result = this;
  *(_OWORD *)((char *)this + 24) = v7;
  return result;
}
