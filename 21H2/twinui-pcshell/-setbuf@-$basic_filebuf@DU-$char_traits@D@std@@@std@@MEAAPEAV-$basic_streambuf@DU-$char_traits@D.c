/*
 * XREFs of ?setbuf@?$basic_filebuf@DU?$char_traits@D@std@@@std@@MEAAPEAV?$basic_streambuf@DU?$char_traits@D@std@@@2@PEAD_J@Z @ 0x180128F00
 * Callers:
 *     <none>
 * Callees:
 *     ?_Init@?$basic_filebuf@DU?$char_traits@D@std@@@std@@IEAAXPEAU_iobuf@@W4_Initfl@12@@Z @ 0x1801269E4 (-_Init@-$basic_filebuf@DU-$char_traits@D@std@@@std@@IEAAXPEAU_iobuf@@W4_Initfl@12@@Z.c)
 */

__int64 __fastcall std::filebuf::setbuf(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rcx
  __int64 v6; // r8

  v5 = *(_QWORD *)(a1 + 128);
  if ( !v5 )
    return 0LL;
  v6 = a2 || a3 ? 0LL : 4LL;
  if ( (unsigned int)_o_setvbuf(v5, a2, v6, a3) )
    return 0LL;
  std::filebuf::_Init(a1, *(_QWORD *)(a1 + 128), 1);
  return a1;
}
