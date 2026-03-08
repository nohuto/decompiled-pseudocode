/*
 * XREFs of HalpReenableAcpi @ 0x140A940DC
 * Callers:
 *     HalpPowerEarlyRestore @ 0x14051A160 (HalpPowerEarlyRestore.c)
 *     HaliAcpiSleep @ 0x140525AD0 (HaliAcpiSleep.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HalpReenableAcpi(__int64 a1)
{
  __int64 v1; // rcx

  LOBYTE(a1) = 1;
  (*(void (__fastcall **)(__int64))(PmAcpiDispatchTable + 16))(a1);
  LOBYTE(v1) = 1;
  return (*(__int64 (__fastcall **)(__int64))(PmAcpiDispatchTable + 8))(v1);
}
