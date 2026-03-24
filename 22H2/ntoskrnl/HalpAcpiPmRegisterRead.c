/*
 * XREFs of HalpAcpiPmRegisterRead @ 0x140398F40
 * Callers:
 *     HaliAcpiSleep @ 0x140385840 (HaliAcpiSleep.c)
 *     HalpCheckPowerButton @ 0x1403EF7B0 (HalpCheckPowerButton.c)
 *     HaliHaltSystem @ 0x1404BE190 (HaliHaltSystem.c)
 *     HalpShutdown @ 0x1404BE3DC (HalpShutdown.c)
 *     HalpAcpiPostSleep @ 0x140995B1C (HalpAcpiPostSleep.c)
 *     HalpAcpiPreSleep @ 0x140995EEC (HalpAcpiPreSleep.c)
 *     HalpCheckFixedWakeSources @ 0x1409960A0 (HalpCheckFixedWakeSources.c)
 *     HalpDpPostReplace @ 0x1409A84AC (HalpDpPostReplace.c)
 *     HalpDpPreReplace @ 0x1409A879C (HalpDpPreReplace.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140407C30 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HalpAcpiPmRegisterRead(int a1, unsigned int a2, __int64 a3, unsigned int a4, _DWORD *a5)
{
  __int64 v5; // rbx

  v5 = 6LL * a1;
  if ( *(_DWORD *)&PmRegisters[48 * a1 + 24] > a4 )
    return 3221225507LL;
  (*(void (__fastcall **)(_QWORD))&PmRegisters[48 * a1 + 32])(*(_QWORD *)&PmRegisters[48 * a1 + 8] + a2);
  if ( a5 )
    *a5 = *(_DWORD *)&PmRegisters[8 * v5 + 24];
  return 0LL;
}
