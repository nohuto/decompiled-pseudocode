/*
 * XREFs of ?close@?$basic_filebuf@DU?$char_traits@D@std@@@std@@QEAAPEAV12@XZ @ 0x1801277D4
 * Callers:
 *     ??1?$basic_filebuf@DU?$char_traits@D@std@@@std@@UEAA@XZ @ 0x18011AF40 (--1-$basic_filebuf@DU-$char_traits@D@std@@@std@@UEAA@XZ.c)
 * Callees:
 *     ?_Endwrite@?$basic_filebuf@DU?$char_traits@D@std@@@std@@IEAA_NXZ @ 0x1801263EC (-_Endwrite@-$basic_filebuf@DU-$char_traits@D@std@@@std@@IEAA_NXZ.c)
 *     ?_Init@?$basic_filebuf@DU?$char_traits@D@std@@@std@@IEAAXPEAU_iobuf@@W4_Initfl@12@@Z @ 0x1801269E4 (-_Init@-$basic_filebuf@DU-$char_traits@D@std@@@std@@IEAAXPEAU_iobuf@@W4_Initfl@12@@Z.c)
 */

__int64 __fastcall std::filebuf::close(__int64 a1)
{
  __int64 v1; // rsi
  __int64 v3; // rbx

  v1 = 0LL;
  if ( *(_QWORD *)(a1 + 128) )
  {
    v3 = a1 & -(__int64)std::filebuf::_Endwrite(a1);
    if ( fclose(*(FILE **)(a1 + 128)) )
      v3 = 0LL;
    v1 = v3;
  }
  std::filebuf::_Init(a1, 0LL, 2);
  return v1;
}
