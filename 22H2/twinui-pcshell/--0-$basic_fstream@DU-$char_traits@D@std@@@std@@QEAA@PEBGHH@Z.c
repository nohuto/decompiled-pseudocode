/*
 * XREFs of ??0?$basic_fstream@DU?$char_traits@D@std@@@std@@QEAA@PEBGHH@Z @ 0x18011A108
 * Callers:
 *     ??$?0$0A@Vpath@filesystem@std@@@?$basic_fstream@DU?$char_traits@D@std@@@std@@QEAA@AEBVpath@filesystem@1@HH@Z @ 0x180116794 (--$-0$0A@Vpath@filesystem@std@@@-$basic_fstream@DU-$char_traits@D@std@@@std@@QEAA@AEBVpath@files.c)
 * Callees:
 *     ?_Init@?$basic_filebuf@DU?$char_traits@D@std@@@std@@IEAAXPEAU_iobuf@@W4_Initfl@12@@Z @ 0x180126874 (-_Init@-$basic_filebuf@DU-$char_traits@D@std@@@std@@IEAAXPEAU_iobuf@@W4_Initfl@12@@Z.c)
 *     ?open@?$basic_filebuf@DU?$char_traits@D@std@@@std@@QEAAPEAV12@PEBGHH@Z @ 0x1801286CC (-open@-$basic_filebuf@DU-$char_traits@D@std@@@std@@QEAAPEAV12@PEBGHH@Z.c)
 */

// Hidden C++ exception states: #wind=4
_QWORD *__fastcall std::fstream::fstream(_QWORD *a1, __int64 a2)
{
  *a1 = &std::fstream::`vbtable'{for `std::istream'};
  a1[2] = &std::fstream::`vbtable'{for `std::ostream'};
  std::ios::ios(a1 + 23);
  std::iostream::basic_iostream<char>(a1, a1 + 3, 0LL);
  *(_QWORD *)((char *)a1 + *(int *)(*a1 + 4LL)) = &std::fstream::`vftable';
  *(_DWORD *)((char *)a1 + *(int *)(*a1 + 4LL) - 4) = *(_DWORD *)(*a1 + 4LL) - 184;
  std::streambuf::streambuf(a1 + 3);
  a1[3] = &std::filebuf::`vftable';
  std::filebuf::_Init(a1 + 3, 0LL, 0LL);
  if ( !std::filebuf::open(a1 + 3, a2) )
    std::ios::setstate((char *)a1 + *(int *)(*a1 + 4LL), 2LL);
  return a1;
}
