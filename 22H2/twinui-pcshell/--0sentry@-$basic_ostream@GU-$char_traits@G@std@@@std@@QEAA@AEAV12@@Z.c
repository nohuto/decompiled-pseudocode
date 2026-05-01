/*
 * XREFs of ??0sentry@?$basic_ostream@GU?$char_traits@G@std@@@std@@QEAA@AEAV12@@Z @ 0x1802BC394
 * Callers:
 *     ??6?$basic_ostream@GU?$char_traits@G@std@@@std@@QEAAAEAV01@G@Z @ 0x180152E4C (--6-$basic_ostream@GU-$char_traits@G@std@@@std@@QEAAAEAV01@G@Z.c)
 *     ??$?6GU?$char_traits@G@std@@@std@@YAAEAV?$basic_ostream@GU?$char_traits@G@std@@@0@AEAV10@PEBG@Z @ 0x1802B8C64 (--$-6GU-$char_traits@G@std@@@std@@YAAEAV-$basic_ostream@GU-$char_traits@G@std@@@0@AEAV10@PEBG@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
_BYTE *__fastcall std::basic_ostream<unsigned short>::sentry::sentry(_BYTE *a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // rax

  *(_QWORD *)a1 = a2;
  if ( std::basic_ios<unsigned short>::rdbuf(a2 + *(int *)(*(_QWORD *)a2 + 4LL)) )
  {
    v4 = std::basic_ios<unsigned short>::rdbuf(*(_QWORD *)a1 + *(int *)(**(_QWORD **)a1 + 4LL));
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
  }
  if ( std::ios_base::good((std::ios_base *)(a2 + *(int *)(*(_QWORD *)a2 + 4LL)))
    && std::basic_ios<unsigned short>::tie(a2 + *(int *)(*(_QWORD *)a2 + 4LL))
    && std::basic_ios<unsigned short>::tie(a2 + *(int *)(*(_QWORD *)a2 + 4LL)) != a2 )
  {
    v5 = std::basic_ios<unsigned short>::tie(a2 + *(int *)(*(_QWORD *)a2 + 4LL));
    std::basic_ostream<unsigned short>::flush(v5);
  }
  a1[8] = std::ios_base::good((std::ios_base *)(a2 + *(int *)(*(_QWORD *)a2 + 4LL)));
  return a1;
}
