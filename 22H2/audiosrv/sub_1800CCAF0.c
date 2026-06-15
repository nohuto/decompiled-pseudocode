/*
 * XREFs of sub_1800CCAF0 @ 0x1800CCAF0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180008448 @ 0x180008448 (sub_180008448.c)
 *     sub_1800085F0 @ 0x1800085F0 (sub_1800085F0.c)
 *     sub_18000F690 @ 0x18000F690 (sub_18000F690.c)
 *     sub_18005E8F8 @ 0x18005E8F8 (sub_18005E8F8.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800CCAF0(__int64 *a1, unsigned int a2, __int64 a3)
{
  __int64 v3; // rbx
  __int64 *v6; // rax
  __int64 v7; // r8
  int v8; // eax
  __int64 v9; // rdx
  unsigned __int64 v10; // r8
  unsigned int v11; // ebx
  struct _TP_TIMER *pv[8]; // [rsp+30h] [rbp-48h] BYREF

  v3 = *a1;
  v6 = sub_180008448((__int64)a1, sub_1800B6240);
  sub_1800085F0(pv, (struct _TP_TIMER *)v6[1], v7, (struct _TP_TIMER *)L"AudioSessionMeterGetChannelsPeakValues");
  v8 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)v3 + 248LL))(v3, a2, a3);
  v11 = v8;
  if ( v8 < 0 )
    sub_18005E8F8((__int64)"AudioSessionMeterGetChannelsPeakValues", 2394, v8);
  sub_18000F690((__int64)pv, v9, v10);
  return v11;
}
