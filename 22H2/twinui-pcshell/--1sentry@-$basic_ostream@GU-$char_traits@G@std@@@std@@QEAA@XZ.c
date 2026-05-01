/*
 * XREFs of ??1sentry@?$basic_ostream@GU?$char_traits@G@std@@@std@@QEAA@XZ @ 0x1802BCABC
 * Callers:
 *     ??6?$basic_ostream@GU?$char_traits@G@std@@@std@@QEAAAEAV01@G@Z @ 0x180152E4C (--6-$basic_ostream@GU-$char_traits@G@std@@@std@@QEAAAEAV01@G@Z.c)
 *     _std::basic_ostream_unsigned_short_std::char_traits_unsigned_short___::operator___::_1_::dtor$0 @ 0x180153039 (_std--basic_ostream_unsigned_short_std--char_traits_unsigned_short___--operator___--_1_--dtor$0.c)
 *     ??$?6GU?$char_traits@G@std@@@std@@YAAEAV?$basic_ostream@GU?$char_traits@G@std@@@0@AEAV10@PEBG@Z @ 0x1802B8C64 (--$-6GU-$char_traits@G@std@@@std@@YAAEAV-$basic_ostream@GU-$char_traits@G@std@@@0@AEAV10@PEBG@Z.c)
 *     _std::operator___unsigned_short_std::char_traits_unsigned_short____::_1_::dtor$0 @ 0x1802B8E7B (_std--operator___unsigned_short_std--char_traits_unsigned_short____--_1_--dtor$0.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::basic_ostream<unsigned short>::sentry::~sentry(_QWORD *a1)
{
  __int64 result; // rax
  __int64 v3; // rax

  if ( !std::uncaught_exception() )
    std::basic_ostream<unsigned short>::_Osfx(*a1);
  result = std::basic_ios<unsigned short>::rdbuf(*a1 + *(int *)(*(_QWORD *)*a1 + 4LL));
  if ( result )
  {
    v3 = std::basic_ios<unsigned short>::rdbuf(*a1 + *(int *)(*(_QWORD *)*a1 + 4LL));
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  return result;
}
