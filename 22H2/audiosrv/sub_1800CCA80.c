/*
 * XREFs of sub_1800CCA80 @ 0x1800CCA80
 * Callers:
 *     <none>
 * Callees:
 *     sub_180008448 @ 0x180008448 (sub_180008448.c)
 *     sub_1800085F0 @ 0x1800085F0 (sub_1800085F0.c)
 *     sub_18000F690 @ 0x18000F690 (sub_18000F690.c)
 *     sub_18005E8F8 @ 0x18005E8F8 (sub_18005E8F8.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800CCA80(__int64 *a1)
{
  __int64 v1; // rbx
  __int64 *v2; // rax
  __int64 v3; // r8
  int v4; // eax
  __int64 v5; // rdx
  unsigned __int64 v6; // r8
  unsigned int v7; // ebx
  struct _TP_TIMER *pv[9]; // [rsp+30h] [rbp-48h] BYREF

  v1 = *a1;
  v2 = sub_180008448((__int64)a1, sub_1800B6240);
  sub_1800085F0(pv, (struct _TP_TIMER *)v2[1], v3, (struct _TP_TIMER *)L"AudioSessionIsSystemSoundsSession");
  v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 168LL))(v1);
  v7 = v4;
  if ( v4 < 0 )
    sub_18005E8F8((__int64)"AudioSessionIsSystemSoundsSession", 1758, v4);
  sub_18000F690((__int64)pv, v5, v6);
  return v7;
}
