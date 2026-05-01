/*
 * XREFs of ?_Init@?$basic_filebuf@DU?$char_traits@D@std@@@std@@IEAAXPEAU_iobuf@@W4_Initfl@12@@Z @ 0x180126874
 * Callers:
 *     ??0?$basic_fstream@DU?$char_traits@D@std@@@std@@QEAA@PEBGHH@Z @ 0x18011A108 (--0-$basic_fstream@DU-$char_traits@D@std@@@std@@QEAA@PEBGHH@Z.c)
 *     ?close@?$basic_filebuf@DU?$char_traits@D@std@@@std@@QEAAPEAV12@XZ @ 0x180127664 (-close@-$basic_filebuf@DU-$char_traits@D@std@@@std@@QEAAPEAV12@XZ.c)
 *     ?open@?$basic_filebuf@DU?$char_traits@D@std@@@std@@QEAAPEAV12@PEBGHH@Z @ 0x1801286CC (-open@-$basic_filebuf@DU-$char_traits@D@std@@@std@@QEAAPEAV12@PEBGHH@Z.c)
 *     ?setbuf@?$basic_filebuf@DU?$char_traits@D@std@@@std@@MEAAPEAV?$basic_streambuf@DU?$char_traits@D@std@@@2@PEAD_J@Z @ 0x180128D90 (-setbuf@-$basic_filebuf@DU-$char_traits@D@std@@@std@@MEAAPEAV-$basic_streambuf@DU-$char_traits@D.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::filebuf::_Init(__int64 a1, __int64 a2, int a3)
{
  __int64 result; // rax
  __int64 v6; // [rsp+50h] [rbp+8h] BYREF
  __int64 v7; // [rsp+58h] [rbp+10h] BYREF
  __int64 v8; // [rsp+68h] [rbp+20h] BYREF

  *(_BYTE *)(a1 + 113) = 0;
  *(_BYTE *)(a1 + 124) = a3 == 1;
  std::streambuf::_Init();
  if ( a2 )
  {
    v8 = 0LL;
    v7 = 0LL;
    v6 = 0LL;
    _o__get_stream_buffer_pointers(a2, &v8, &v7, &v6);
    std::streambuf::_Init(a1);
  }
  result = `std::filebuf::_Init'::`2'::_Stinit;
  *(_QWORD *)(a1 + 104) = 0LL;
  *(_QWORD *)(a1 + 116) = result;
  *(_QWORD *)(a1 + 128) = a2;
  return result;
}
