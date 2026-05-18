/*
 * XREFs of sub_180017744 @ 0x180017744
 * Callers:
 *     sub_180019D80 @ 0x180019D80 (sub_180019D80.c)
 *     sub_180039510 @ 0x180039510 (sub_180039510.c)
 *     sub_180039880 @ 0x180039880 (sub_180039880.c)
 *     sub_18003A5A8 @ 0x18003A5A8 (sub_18003A5A8.c)
 *     sub_18003AE4C @ 0x18003AE4C (sub_18003AE4C.c)
 *     sub_18006313C @ 0x18006313C (sub_18006313C.c)
 *     sub_1800B2DF4 @ 0x1800B2DF4 (sub_1800B2DF4.c)
 *     sub_1800CB68C @ 0x1800CB68C (sub_1800CB68C.c)
 *     sub_1800D77BC @ 0x1800D77BC (sub_1800D77BC.c)
 *     sub_1800FE1B4 @ 0x1800FE1B4 (sub_1800FE1B4.c)
 * Callees:
 *     sub_18000F8D8 @ 0x18000F8D8 (sub_18000F8D8.c)
 *     sub_180018668 @ 0x180018668 (sub_180018668.c)
 *     sub_1800615B4 @ 0x1800615B4 (sub_1800615B4.c)
 *     sub_180061A34 @ 0x180061A34 (sub_180061A34.c)
 *     sub_180073CFC @ 0x180073CFC (sub_180073CFC.c)
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall sub_180017744(_QWORD *a1, _QWORD *a2, unsigned int a3)
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
  sub_180018668(a2);
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
