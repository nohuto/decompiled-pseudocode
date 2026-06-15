/*
 * XREFs of sub_1800C48A0 @ 0x1800C48A0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180008448 @ 0x180008448 (sub_180008448.c)
 *     sub_1800085F0 @ 0x1800085F0 (sub_1800085F0.c)
 *     sub_18000F690 @ 0x18000F690 (sub_18000F690.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800C48A0(__int64 a1, unsigned int a2, __int64 a3, __int64 a4, __int64 a5)
{
  _QWORD *v8; // rbx
  __int64 *v9; // rax
  __int64 v10; // r8
  __int64 v11; // rdx
  unsigned __int64 v12; // r8
  struct _TP_TIMER *pv[8]; // [rsp+30h] [rbp-48h] BYREF

  v8 = (_QWORD *)a1;
  v9 = sub_180008448(a1, sub_1800B6240);
  sub_1800085F0(pv, (struct _TP_TIMER *)v9[1], v10, (struct _TP_TIMER *)L"AudioVolumeGetVolumeRange");
  LODWORD(v8) = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, __int64, __int64))(*(_QWORD *)*v8 + 200LL))(
                  *v8,
                  a2,
                  a3,
                  a4,
                  a5);
  sub_18000F690((__int64)pv, v11, v12);
  return (unsigned int)v8;
}
