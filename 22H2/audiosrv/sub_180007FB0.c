/*
 * XREFs of sub_180007FB0 @ 0x180007FB0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180008448 @ 0x180008448 (sub_180008448.c)
 *     sub_1800085F0 @ 0x1800085F0 (sub_1800085F0.c)
 *     sub_18000F690 @ 0x18000F690 (sub_18000F690.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180007FB0(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  _BYTE pv[64]; // [rsp+30h] [rbp-48h] BYREF

  v3 = *a1;
  sub_180008448(a1, sub_1800B6240);
  sub_1800085F0(pv);
  LODWORD(v3) = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v3 + 224LL))(v3, a2, a3);
  sub_18000F690(pv);
  return (unsigned int)v3;
}
