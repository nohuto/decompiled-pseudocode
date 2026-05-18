/*
 * XREFs of sub_18001EE70 @ 0x18001EE70
 * Callers:
 *     sub_180024B60 @ 0x180024B60 (sub_180024B60.c)
 *     sub_18008CFC4 @ 0x18008CFC4 (sub_18008CFC4.c)
 *     sub_1800A8150 @ 0x1800A8150 (sub_1800A8150.c)
 *     sub_1800F184C @ 0x1800F184C (sub_1800F184C.c)
 *     sub_180107BB0 @ 0x180107BB0 (sub_180107BB0.c)
 *     sub_1801092C4 @ 0x1801092C4 (sub_1801092C4.c)
 * Callees:
 *     sub_18000F8D8 @ 0x18000F8D8 (sub_18000F8D8.c)
 *     sub_1800215B8 @ 0x1800215B8 (sub_1800215B8.c)
 *     sub_1800615B4 @ 0x1800615B4 (sub_1800615B4.c)
 *     sub_180061A34 @ 0x180061A34 (sub_180061A34.c)
 *     sub_180073CFC @ 0x180073CFC (sub_180073CFC.c)
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall sub_18001EE70(_QWORD *a1, _QWORD *a2, unsigned int a3)
{
  __int64 v6; // rax
  __int64 v7; // rcx
  _QWORD *v8; // rdx
  __int64 v9; // rcx
  __int64 v11; // [rsp+28h] [rbp-38h] BYREF
  __int64 v12; // [rsp+30h] [rbp-30h]
  _QWORD *v13; // [rsp+38h] [rbp-28h]
  __int128 v14; // [rsp+40h] [rbp-20h] BYREF

  v13 = a2;
  *(_OWORD *)a2 = 0LL;
  sub_1800215B8(a2);
  v14 = 0LL;
  sub_1800615B4(a1 + 101, &v14);
  v6 = a2[1];
  if ( v6 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v6 + 12));
    v6 = a2[1];
  }
  v7 = *a2;
  v11 = *a2;
  v12 = v6;
  v8 = (_QWORD *)a1[109];
  if ( (_QWORD *)a1[110] == v8 )
  {
    sub_18000F8D8(a1 + 108, v8, &v11);
    v9 = v12;
  }
  else
  {
    *v8 = v7;
    v8[1] = v6;
    v9 = 0LL;
    v12 = 0LL;
    a1[109] += 16LL;
  }
  if ( v9 && _InterlockedExchangeAdd((volatile signed __int32 *)(v9 + 12), 0xFFFFFFFF) == 1 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 8LL))(v12);
  if ( BYTE8(v14) )
    sub_180061A34(v14);
  sub_180073CFC(a1, *a2, a3);
  return a2;
}
