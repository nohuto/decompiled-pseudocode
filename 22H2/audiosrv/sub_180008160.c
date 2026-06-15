/*
 * XREFs of sub_180008160 @ 0x180008160
 * Callers:
 *     <none>
 * Callees:
 *     sub_180008448 @ 0x180008448 (sub_180008448.c)
 *     sub_1800085F0 @ 0x1800085F0 (sub_1800085F0.c)
 *     sub_18000F690 @ 0x18000F690 (sub_18000F690.c)
 *     sub_18005E8F8 @ 0x18005E8F8 (sub_18005E8F8.c)
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180008160(__int64 a1, __int64 a2)
{
  __int128 v4; // xmm0
  __int64 v5; // rcx
  int v6; // eax
  unsigned int v7; // ebx
  _BYTE pv[56]; // [rsp+30h] [rbp-78h] BYREF
  __int128 v10; // [rsp+68h] [rbp-40h]
  __int128 v11; // [rsp+78h] [rbp-30h]
  __int128 v12; // [rsp+88h] [rbp-20h] BYREF

  if ( a1 )
    v4 = *(_OWORD *)(a1 + 280);
  else
    v4 = xmmword_18015B730;
  v10 = v4;
  v11 = v4;
  v12 = v4;
  EtwEventActivityIdControl(4LL, &v12);
  sub_180008448(v5, sub_1800B6240);
  sub_1800085F0(pv);
  v6 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 168LL))(a1, a2);
  v7 = v6;
  if ( v6 < 0 )
    sub_18005E8F8("AudioServerGetChannelCount", 3440LL, (unsigned int)v6);
  sub_18000F690(pv);
  EtwEventActivityIdControl(4LL, &v12);
  return v7;
}
