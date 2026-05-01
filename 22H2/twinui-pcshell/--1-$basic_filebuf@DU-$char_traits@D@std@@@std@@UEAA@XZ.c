/*
 * XREFs of ??1?$basic_filebuf@DU?$char_traits@D@std@@@std@@UEAA@XZ @ 0x18011ADD0
 * Callers:
 *     _std::basic_fstream_char_std::char_traits_char___::basic_fstream_char_std::char_traits_char____::_1_::dtor$2 @ 0x18011A266 (_std--basic_fstream_char_std--char_traits_char___--basic_fstream_char_std--char_tra_ea_18011A266.c)
 *     ??1?$basic_fstream@DU?$char_traits@D@std@@@std@@UEAA@XZ @ 0x18011AE1C (--1-$basic_fstream@DU-$char_traits@D@std@@@std@@UEAA@XZ.c)
 *     ??_E?$basic_filebuf@DU?$char_traits@D@std@@@std@@UEAAPEAXI@Z @ 0x18011BD10 (--_E-$basic_filebuf@DU-$char_traits@D@std@@@std@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?_Reset_back@?$basic_filebuf@DU?$char_traits@D@std@@@std@@AEAAXXZ @ 0x180126EDC (-_Reset_back@-$basic_filebuf@DU-$char_traits@D@std@@@std@@AEAAXXZ.c)
 *     ?close@?$basic_filebuf@DU?$char_traits@D@std@@@std@@QEAAPEAV12@XZ @ 0x180127664 (-close@-$basic_filebuf@DU-$char_traits@D@std@@@std@@QEAAPEAV12@XZ.c)
 */

__int64 __fastcall std::filebuf::~filebuf<char,std::char_traits<char>>(__int64 a1)
{
  *(_QWORD *)a1 = &std::filebuf::`vftable';
  if ( *(_QWORD *)(a1 + 128) )
    std::filebuf::_Reset_back();
  if ( *(_BYTE *)(a1 + 124) )
    std::filebuf::close(a1);
  return std::streambuf::~streambuf<char,std::char_traits<char>>(a1);
}
