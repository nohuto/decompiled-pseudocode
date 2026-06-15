/*
 * XREFs of sub_1800E1280 @ 0x1800E1280
 * Callers:
 *     <none>
 * Callees:
 *     sub_180008448 @ 0x180008448 (sub_180008448.c)
 *     sub_1800085F0 @ 0x1800085F0 (sub_1800085F0.c)
 *     sub_18000F690 @ 0x18000F690 (sub_18000F690.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800E1280(__int64 a1, unsigned int a2)
{
  __int64 *v3; // rax
  __int64 v4; // r8
  unsigned int v5; // ebx
  __int64 v6; // rdx
  unsigned __int64 v7; // r8
  struct _TP_TIMER *pv[9]; // [rsp+30h] [rbp-48h] BYREF

  v3 = sub_180008448(a1, sub_1800B6240);
  sub_1800085F0(pv, (struct _TP_TIMER *)v3[1], v4, (struct _TP_TIMER *)L"AudioServerTelephonyControlStartSession");
  v5 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)qword_18019E600 + 24LL))(qword_18019E600, a2);
  sub_18000F690((__int64)pv, v6, v7);
  return v5;
}
