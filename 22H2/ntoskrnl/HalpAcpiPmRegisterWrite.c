/*
 * XREFs of HalpAcpiPmRegisterWrite @ 0x14037C1D0
 * Callers:
 *     HaliAcpiSleep @ 0x140385840 (HaliAcpiSleep.c)
 *     HalpPowerWriteResetCommand @ 0x1404BE25C (HalpPowerWriteResetCommand.c)
 *     HalpShutdown @ 0x1404BE3DC (HalpShutdown.c)
 *     HalpCheckWakeupTimeAndAdjust @ 0x1404D27C8 (HalpCheckWakeupTimeAndAdjust.c)
 *     HalpAcpiPostSleep @ 0x140995B1C (HalpAcpiPostSleep.c)
 *     HalpAcpiPreSleep @ 0x140995EEC (HalpAcpiPreSleep.c)
 *     HalpDpPostReplace @ 0x1409A84AC (HalpDpPostReplace.c)
 *     HalpDpPreReplace @ 0x1409A879C (HalpDpPreReplace.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140407C30 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HalpAcpiPmRegisterWrite(int a1, unsigned int a2, __int64 a3, unsigned int a4, _DWORD *a5)
{
  __int64 v5; // rbx

  v5 = 6LL * a1;
  if ( *(_DWORD *)&PmRegisters[48 * a1 + 24] > a4 )
    return 3221225507LL;
  (*(void (__fastcall **)(_QWORD))&PmRegisters[48 * a1 + 40])(*(_QWORD *)&PmRegisters[48 * a1 + 8] + a2);
  if ( a5 )
    *a5 = *(_DWORD *)&PmRegisters[8 * v5 + 24];
  return 0LL;
}
