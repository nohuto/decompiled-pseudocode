/*
 * XREFs of HalpAcpiPmRegisterWrite @ 0x1402F76E0
 * Callers:
 *     HalpPowerWriteResetCommand @ 0x140504AEC (HalpPowerWriteResetCommand.c)
 *     HalpShutdown @ 0x140504C74 (HalpShutdown.c)
 *     HalpCheckWakeupTimeAndAdjust @ 0x140519F14 (HalpCheckWakeupTimeAndAdjust.c)
 *     HaliAcpiSleep @ 0x140525AD0 (HaliAcpiSleep.c)
 *     HalpAcpiPostSleep @ 0x140A93580 (HalpAcpiPostSleep.c)
 *     HalpAcpiPreSleep @ 0x140A93820 (HalpAcpiPreSleep.c)
 *     HalpDpPostReplace @ 0x140A94408 (HalpDpPostReplace.c)
 *     HalpDpPreReplace @ 0x140A94700 (HalpDpPreReplace.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
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
