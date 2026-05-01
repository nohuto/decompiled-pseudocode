/*
 * XREFs of ?open@?$basic_filebuf@DU?$char_traits@D@std@@@std@@QEAAPEAV12@PEBGHH@Z @ 0x1801286CC
 * Callers:
 *     ??0?$basic_fstream@DU?$char_traits@D@std@@@std@@QEAA@PEBGHH@Z @ 0x18011A108 (--0-$basic_fstream@DU-$char_traits@D@std@@@std@@QEAA@PEBGHH@Z.c)
 * Callees:
 *     ??$use_facet@V?$codecvt@DDU_Mbstatet@@@std@@@std@@YAAEBV?$codecvt@DDU_Mbstatet@@@0@AEBVlocale@0@@Z @ 0x180119F0C (--$use_facet@V-$codecvt@DDU_Mbstatet@@@std@@@std@@YAAEBV-$codecvt@DDU_Mbstatet@@@0@AEBVlocale@0@.c)
 *     ?_Init@?$basic_filebuf@DU?$char_traits@D@std@@@std@@IEAAXPEAU_iobuf@@W4_Initfl@12@@Z @ 0x180126874 (-_Init@-$basic_filebuf@DU-$char_traits@D@std@@@std@@IEAAXPEAU_iobuf@@W4_Initfl@12@@Z.c)
 *     ?_Initcvt@?$basic_filebuf@DU?$char_traits@D@std@@@std@@IEAAXAEBV?$codecvt@DDU_Mbstatet@@@2@@Z @ 0x18012692C (-_Initcvt@-$basic_filebuf@DU-$char_traits@D@std@@@std@@IEAAXAEBV-$codecvt@DDU_Mbstatet@@@2@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::filebuf::open(__int64 a1, const unsigned __int16 *a2)
{
  struct _iobuf *v3; // rax
  __int64 v4; // rax
  std::codecvt_base *v5; // rax
  void (__fastcall ***v6)(_QWORD, __int64); // rax
  _BYTE v8[8]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v9; // [rsp+28h] [rbp-10h]

  if ( *(_QWORD *)(a1 + 128) )
    return 0LL;
  v3 = std::_Fiopen(a2, 3, 64);
  if ( !v3 )
    return 0LL;
  std::filebuf::_Init(a1, (__int64)v3, 1);
  v4 = std::streambuf::getloc(a1, v8);
  v5 = (std::codecvt_base *)std::use_facet<std::codecvt<char,char,_Mbstatet>>(v4);
  std::filebuf::_Initcvt(a1, v5);
  if ( v9 )
  {
    v6 = (void (__fastcall ***)(_QWORD, __int64))(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
    if ( v6 )
      (**v6)(v6, 1LL);
  }
  return a1;
}
