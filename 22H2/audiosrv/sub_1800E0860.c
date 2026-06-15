/*
 * XREFs of sub_1800E0860 @ 0x1800E0860
 * Callers:
 *     <none>
 * Callees:
 *     sub_180008448 @ 0x180008448 (sub_180008448.c)
 *     sub_1800085F0 @ 0x1800085F0 (sub_1800085F0.c)
 *     sub_18000F690 @ 0x18000F690 (sub_18000F690.c)
 *     sub_1800462E4 @ 0x1800462E4 (sub_1800462E4.c)
 *     sub_18005E8F8 @ 0x18005E8F8 (sub_18005E8F8.c)
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 */

__int64 __fastcall sub_1800E0860(__int64 a1)
{
  __int64 v2; // rcx
  __int64 *v3; // rax
  __int64 v4; // r8
  __int64 v5; // rdx
  unsigned __int64 v6; // r8
  struct _TP_TIMER *pv[7]; // [rsp+30h] [rbp-68h] BYREF
  __int128 v9; // [rsp+68h] [rbp-30h] BYREF
  _BYTE v10[16]; // [rsp+78h] [rbp-20h] BYREF

  sub_1800462E4(&v9, a1);
  v3 = sub_180008448(v2, sub_1800B6240);
  sub_1800085F0(pv, (struct _TP_TIMER *)v3[1], v4, (struct _TP_TIMER *)L"AudioServerSetLastBufferInProgress");
  if ( a1 )
    *(_DWORD *)(a1 + 272) = 1;
  else
    sub_18005E8F8((__int64)"AudioServerSetLastBufferInProgress", 3726, -2147024809);
  sub_18000F690((__int64)pv, v5, v6);
  EtwEventActivityIdControl(4LL, v10);
  return 0LL;
}
