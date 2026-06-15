/*
 * XREFs of sub_18012352C @ 0x18012352C
 * Callers:
 *     sub_180123190 @ 0x180123190 (sub_180123190.c)
 * Callees:
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18012352C(__int64 *a1, _DWORD *a2)
{
  __int64 v4; // rax
  int v5; // eax
  unsigned int v6; // edi
  __int64 v7; // rax
  PROPVARIANT pvar[2]; // [rsp+20h] [rbp-30h] BYREF
  __int64 v9; // [rsp+30h] [rbp-20h]
  __int64 v10; // [rsp+38h] [rbp-18h]
  __int64 v11; // [rsp+40h] [rbp-10h]
  _UNKNOWN *retaddr; // [rsp+68h] [rbp+18h]

  v11 = -1LL;
  v10 = 0LL;
  if ( a2 )
  {
    *a2 = 0;
    v9 = 0LL;
    v4 = *a1;
    *(_OWORD *)pvar = 0LL;
    v5 = (*(__int64 (__fastcall **)(__int64 *, __int128 *, PROPVARIANT *))(v4 + 40))(a1, &xmmword_18016D4D8, pvar);
    v6 = v5;
    if ( v5 >= 0 )
    {
      if ( LOWORD(pvar[0]) == 72 )
      {
        v7 = *(_QWORD *)pvar[1] - v10;
        if ( *(_QWORD *)pvar[1] == v10 )
          v7 = *((_QWORD *)pvar[1] + 1) - v11;
        if ( !v7 )
          *a2 = 1;
      }
      PropVariantClear(pvar);
      return 0LL;
    }
    else
    {
      sub_18004BD84((int)retaddr, 164, (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\effectpolicy.cpp", v5);
      return v6;
    }
  }
  else
  {
    sub_18004BD84(
      (int)retaddr,
      159,
      (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\effectpolicy.cpp",
      -2147467261);
    return 2147500035LL;
  }
}
