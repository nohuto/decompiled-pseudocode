/*
 * XREFs of DxDdProcessCallout @ 0x1C00994B0
 * Callers:
 *     GdiProcessCallout @ 0x1C014D030 (GdiProcessCallout.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00CF710 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DxDdProcessCallout(__int64 a1, char a2, __int64 a3)
{
  LOBYTE(a3) = a2;
  return ((__int64 (__fastcall *)(__int64, void *, __int64))qword_1C0251898)(a1, &gDxgkWin32kEngInterface, a3);
}
