/*
 * XREFs of sub_18011A3A4 @ 0x18011A3A4
 * Callers:
 *     sub_180049150 @ 0x180049150 (sub_180049150.c)
 * Callees:
 *     sub_18004BB48 @ 0x18004BB48 (sub_18004BB48.c)
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_18012DF30 @ 0x18012DF30 (sub_18012DF30.c)
 */

__int64 __fastcall sub_18011A3A4(__int64 a1, int a2, __int128 *a3, __int64 a4)
{
  int v8; // ebx
  int v9; // edx
  __int128 v11; // [rsp+20h] [rbp-68h] BYREF
  __int64 v12; // [rsp+30h] [rbp-58h]
  __int128 v13; // [rsp+40h] [rbp-48h] BYREF
  _BYTE v14[24]; // [rsp+50h] [rbp-38h] BYREF
  _UNKNOWN *retaddr; // [rsp+88h] [rbp+0h]

  v12 = 0LL;
  v11 = 0LL;
  if ( a4 )
  {
    if ( (unsigned int)sub_18004BB48(a4) )
    {
      v8 = -2004287480;
      v9 = 8022;
LABEL_4:
      sub_18004BD84(
        (int)retaddr,
        v9,
        (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
        v8);
      return (unsigned int)v8;
    }
    v12 = a4;
    LOWORD(v11) = 65;
    DWORD2(v11) = *(unsigned __int16 *)(a4 + 16) + 18;
  }
  v13 = *a3;
  v8 = sub_18012DF30(&v13, a2 == 3, v14);
  if ( v8 < 0 )
  {
    v9 = 8031;
    goto LABEL_4;
  }
  v8 = (*(__int64 (__fastcall **)(_QWORD, _BYTE *, __int128 *))(**(_QWORD **)(a1 + 40) + 48LL))(
         *(_QWORD *)(a1 + 40),
         v14,
         &v11);
  if ( v8 < 0 )
  {
    v9 = 8033;
    goto LABEL_4;
  }
  return 0LL;
}
