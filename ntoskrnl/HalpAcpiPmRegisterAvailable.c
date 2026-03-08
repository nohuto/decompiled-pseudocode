/*
 * XREFs of HalpAcpiPmRegisterAvailable @ 0x1402F9250
 * Callers:
 *     HalpAcpiPostSleep @ 0x140A93580 (HalpAcpiPostSleep.c)
 *     HalpAcpiPreSleep @ 0x140A93820 (HalpAcpiPreSleep.c)
 *     HalpCheckFixedWakeSources @ 0x140A93A7C (HalpCheckFixedWakeSources.c)
 *     HalpDpPostReplace @ 0x140A94408 (HalpDpPostReplace.c)
 *     HalpDpPreReplace @ 0x140A94700 (HalpDpPreReplace.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HalpAcpiPmRegisterAvailable(int a1)
{
  return PmRegisters[48 * a1] == 0 ? 0xC00000BB : 0;
}
