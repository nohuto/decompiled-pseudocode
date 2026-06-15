/*
 * XREFs of sub_1800F1790 @ 0x1800F1790
 * Callers:
 *     <none>
 * Callees:
 *     sub_180008448 @ 0x180008448 (sub_180008448.c)
 *     sub_1800085F0 @ 0x1800085F0 (sub_1800085F0.c)
 *     sub_18000F690 @ 0x18000F690 (sub_18000F690.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800F1790(__int64 a1)
{
  __int64 *v2; // rax
  __int64 v3; // r8
  __int64 v4; // rdx
  unsigned __int64 v5; // r8
  struct _TP_TIMER *pv[9]; // [rsp+30h] [rbp-48h] BYREF

  v2 = sub_180008448(a1, sub_1800B6240);
  sub_1800085F0(pv, (struct _TP_TIMER *)v2[1], v3, (struct _TP_TIMER *)L"asm_ApplicationSubmixContextDestroy");
  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)qword_18019EE60 + 40LL))(qword_18019EE60, a1);
  sub_18000F690((__int64)pv, v4, v5);
  return 0LL;
}
