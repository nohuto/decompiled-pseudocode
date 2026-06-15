/*
 * XREFs of sub_1800C46B0 @ 0x1800C46B0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180008448 @ 0x180008448 (sub_180008448.c)
 *     sub_1800085F0 @ 0x1800085F0 (sub_1800085F0.c)
 *     sub_18000F690 @ 0x18000F690 (sub_18000F690.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800C46B0(__int64 a1, unsigned int a2, __int64 a3)
{
  _QWORD *v5; // rbx
  __int64 *v6; // rax
  __int64 v7; // r8
  __int64 v8; // rdx
  unsigned __int64 v9; // r8
  struct _TP_TIMER *pv[8]; // [rsp+30h] [rbp-48h] BYREF

  v5 = (_QWORD *)a1;
  v6 = sub_180008448(a1, sub_1800B6240);
  sub_1800085F0(pv, (struct _TP_TIMER *)v6[1], v7, (struct _TP_TIMER *)L"AudioVolumeGetChannelVolumeLevel");
  LODWORD(v5) = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(*(_QWORD *)*v5 + 104LL))(*v5, a2, a3);
  sub_18000F690((__int64)pv, v8, v9);
  return (unsigned int)v5;
}
