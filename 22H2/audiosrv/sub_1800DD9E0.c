/*
 * XREFs of sub_1800DD9E0 @ 0x1800DD9E0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180008448 @ 0x180008448 (sub_180008448.c)
 *     sub_1800085F0 @ 0x1800085F0 (sub_1800085F0.c)
 *     sub_18000F690 @ 0x18000F690 (sub_18000F690.c)
 *     sub_18000F708 @ 0x18000F708 (sub_18000F708.c)
 *     sub_18006A148 @ 0x18006A148 (sub_18006A148.c)
 */

__int64 __fastcall sub_1800DD9E0(__int64 **a1)
{
  __int64 *v2; // rax
  __int64 v3; // r8
  __int64 v4; // rdx
  unsigned __int64 v5; // r8
  __int64 *v6; // rbx
  struct _TP_TIMER *pv[9]; // [rsp+30h] [rbp-48h] BYREF

  v2 = sub_180008448((__int64)a1, sub_1800B6240);
  sub_1800085F0(pv, (struct _TP_TIMER *)v2[1], v3, (struct _TP_TIMER *)L"AudioServerCloseVpoContext");
  v6 = *a1;
  *a1 = 0LL;
  if ( v6 )
  {
    sub_18000F708(v6 + 2);
    sub_18000F708(v6 + 1);
    sub_18000F708(v6);
    sub_18006A148(v6);
  }
  sub_18000F690((__int64)pv, v4, v5);
  return 0LL;
}
