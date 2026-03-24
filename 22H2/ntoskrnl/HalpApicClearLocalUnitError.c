/*
 * XREFs of HalpApicClearLocalUnitError @ 0x1403A7470
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140407C30 (_guard_dispatch_icall.c)
 */

__int64 HalpApicClearLocalUnitError()
{
  return ((__int64 (__fastcall *)(__int64, _QWORD))HalpApicWrite)(640LL, 0LL);
}
