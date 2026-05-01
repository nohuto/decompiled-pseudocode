/*
 * XREFs of ??0?$basic_ostringstream@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@H@Z @ 0x180152860
 * Callers:
 *     GetPidlsFromTaskbarLayout @ 0x18015601C (GetPidlsFromTaskbarLayout.c)
 * Callees:
 *     ??0?$basic_stringbuf@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@H@Z @ 0x1802BBEB4 (--0-$basic_stringbuf@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@H@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall std::basic_ostringstream<unsigned short>::basic_ostringstream<unsigned short>(__int64 a1)
{
  *(_QWORD *)a1 = &std::basic_ostringstream<unsigned short>::`vbtable';
  std::basic_ios<unsigned short>::basic_ios<unsigned short>(a1 + 136);
  std::basic_ostream<unsigned short>::basic_ostream<unsigned short>(a1, a1 + 8, 0LL, 0LL);
  *(_QWORD *)(*(int *)(*(_QWORD *)a1 + 4LL) + a1) = &std::basic_ostringstream<unsigned short>::`vftable';
  *(_DWORD *)(*(int *)(*(_QWORD *)a1 + 4LL) + a1 - 4) = *(_DWORD *)(*(_QWORD *)a1 + 4LL) - 136;
  std::basic_stringbuf<unsigned short>::basic_stringbuf<unsigned short>(a1 + 8, 2LL);
  return a1;
}
