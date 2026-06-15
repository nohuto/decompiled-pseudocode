/*
 * XREFs of sub_1800CCB80 @ 0x1800CCB80
 * Callers:
 *     <none>
 * Callees:
 *     sub_180008448 @ 0x180008448 (sub_180008448.c)
 *     sub_1800085F0 @ 0x1800085F0 (sub_1800085F0.c)
 *     sub_18000F690 @ 0x18000F690 (sub_18000F690.c)
 *     sub_18005E8F8 @ 0x18005E8F8 (sub_18005E8F8.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800CCB80(__int64 *a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 *v4; // rax
  __int64 v5; // r8
  int v6; // eax
  __int64 v7; // rdx
  unsigned __int64 v8; // r8
  unsigned int v9; // ebx
  struct _TP_TIMER *pv[9]; // [rsp+30h] [rbp-48h] BYREF

  v2 = *a1;
  v4 = sub_180008448((__int64)a1, sub_1800B6240);
  sub_1800085F0(pv, (struct _TP_TIMER *)v4[1], v5, (struct _TP_TIMER *)L"AudioSessionMeterGetMeteringChannelCount");
  v6 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v2 + 240LL))(v2, a2);
  v9 = v6;
  if ( v6 < 0 )
    sub_18005E8F8((__int64)"AudioSessionMeterGetMeteringChannelCount", 2364, v6);
  sub_18000F690((__int64)pv, v7, v8);
  return v9;
}
