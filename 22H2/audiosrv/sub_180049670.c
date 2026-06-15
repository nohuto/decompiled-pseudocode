/*
 * XREFs of sub_180049670 @ 0x180049670
 * Callers:
 *     sub_1800495DC @ 0x1800495DC (sub_1800495DC.c)
 * Callees:
 *     sub_180049728 @ 0x180049728 (sub_180049728.c)
 *     sub_18004BB48 @ 0x18004BB48 (sub_18004BB48.c)
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180049670(__int64 a1, int a2, __int128 *a3, __int64 a4)
{
  int v8; // ebx
  __int64 v10; // rdx
  __int128 v11; // [rsp+20h] [rbp-68h] BYREF
  __int64 v12; // [rsp+30h] [rbp-58h]
  __int128 v13; // [rsp+40h] [rbp-48h] BYREF
  _BYTE v14[24]; // [rsp+50h] [rbp-38h] BYREF
  void *retaddr; // [rsp+88h] [rbp+0h]

  v12 = 0LL;
  v11 = 0LL;
  if ( a2 == 1 )
    return 0LL;
  if ( a4 )
  {
    if ( (unsigned int)sub_18004BB48(a4) )
    {
      v8 = -2004287480;
      v10 = 8054LL;
      goto LABEL_9;
    }
    v12 = a4;
    LOWORD(v11) = 65;
    DWORD2(v11) = *(unsigned __int16 *)(a4 + 16) + 18;
  }
  v13 = *a3;
  v8 = sub_180049728(&v13, a2 == 3, v14);
  if ( v8 < 0 )
  {
    v10 = 8063LL;
  }
  else
  {
    v8 = (*(__int64 (__fastcall **)(_QWORD, _BYTE *, __int128 *))(**(_QWORD **)(a1 + 40) + 48LL))(
           *(_QWORD *)(a1 + 40),
           v14,
           &v11);
    if ( v8 >= 0 )
      return 0LL;
    v10 = 8065LL;
  }
LABEL_9:
  sub_18004BD84(
    retaddr,
    v10,
    "avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
    (unsigned int)v8);
  return (unsigned int)v8;
}
