/*
 * XREFs of sub_1800DA380 @ 0x1800DA380
 * Callers:
 *     <none>
 * Callees:
 *     sub_180008448 @ 0x180008448 (sub_180008448.c)
 *     sub_1800085F0 @ 0x1800085F0 (sub_1800085F0.c)
 *     sub_18000F690 @ 0x18000F690 (sub_18000F690.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800DA380(__int64 a1)
{
  __int64 *v1; // rax
  __int64 v2; // r8
  unsigned int v3; // ebx
  __int64 v4; // rdx
  unsigned __int64 v5; // r8
  struct _TP_TIMER *pv[9]; // [rsp+30h] [rbp-48h] BYREF

  v1 = sub_180008448(a1, sub_1800B6240);
  sub_1800085F0(pv, (struct _TP_TIMER *)v1[1], v2, (struct _TP_TIMER *)L"PolicyConfigValidateSpatialAudioSettings");
  v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)qword_18019EED0 + 200LL))(qword_18019EED0);
  sub_18000F690((__int64)pv, v4, v5);
  return v3;
}
