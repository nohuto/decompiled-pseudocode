/*
 * XREFs of ?_Endwrite@?$basic_filebuf@DU?$char_traits@D@std@@@std@@IEAA_NXZ @ 0x18012627C
 * Callers:
 *     ?close@?$basic_filebuf@DU?$char_traits@D@std@@@std@@QEAAPEAV12@XZ @ 0x180127664 (-close@-$basic_filebuf@DU-$char_traits@D@std@@@std@@QEAAPEAV12@XZ.c)
 *     ?seekoff@?$basic_filebuf@DU?$char_traits@D@std@@@std@@MEAA?AV?$fpos@U_Mbstatet@@@2@_JHH@Z @ 0x180128C00 (-seekoff@-$basic_filebuf@DU-$char_traits@D@std@@@std@@MEAA-AV-$fpos@U_Mbstatet@@@2@_JHH@Z.c)
 *     ?seekpos@?$basic_filebuf@DU?$char_traits@D@std@@@std@@MEAA?AV?$fpos@U_Mbstatet@@@2@V32@H@Z @ 0x180128CF0 (-seekpos@-$basic_filebuf@DU-$char_traits@D@std@@@std@@MEAA-AV-$fpos@U_Mbstatet@@@2@V32@H@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 */

bool __fastcall std::filebuf::_Endwrite(__int64 a1)
{
  int v2; // eax
  int v3; // eax
  __int64 v5; // rdi
  _BYTE *v6; // [rsp+30h] [rbp-38h] BYREF
  _BYTE v7[32]; // [rsp+38h] [rbp-30h] BYREF
  __int64 v8; // [rsp+58h] [rbp-10h] BYREF

  if ( !*(_QWORD *)(a1 + 104) || !*(_BYTE *)(a1 + 113) )
    return 1;
  if ( (*(unsigned int (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 24LL))(a1, 0xFFFFFFFFLL) == -1 )
    return 0;
  v2 = std::codecvt<char,char,_Mbstatet>::unshift(*(_QWORD *)(a1 + 104), a1 + 116, v7, &v8, &v6);
  if ( v2 )
  {
    v3 = v2 - 1;
    if ( v3 )
    {
      if ( v3 == 2 )
      {
        *(_BYTE *)(a1 + 113) = 0;
        return 1;
      }
      return 0;
    }
  }
  else
  {
    *(_BYTE *)(a1 + 113) = 0;
  }
  if ( v6 == v7 )
    return *(_BYTE *)(a1 + 113) == 0;
  v5 = v6 - v7;
  if ( v5 == _o_fwrite(v7, 1LL, v6 - v7, *(_QWORD *)(a1 + 128)) )
    return *(_BYTE *)(a1 + 113) == 0;
  return 0;
}
