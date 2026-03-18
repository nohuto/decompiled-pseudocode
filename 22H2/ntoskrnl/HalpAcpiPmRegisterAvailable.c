/*
 * XREFs of HalpAcpiPmRegisterAvailable @ 0x1403642F0
 * Callers:
 *     HalpAcpiPostSleep @ 0x140A966C0 (HalpAcpiPostSleep.c)
 *     HalpAcpiPreSleep @ 0x140A96960 (HalpAcpiPreSleep.c)
 *     HalpCheckFixedWakeSources @ 0x140A96BBC (HalpCheckFixedWakeSources.c)
 *     HalpDpPostReplace @ 0x140A97548 (HalpDpPostReplace.c)
 *     HalpDpPreReplace @ 0x140A97840 (HalpDpPreReplace.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HalpAcpiPmRegisterAvailable(int a1)
{
  return PmRegisters[48 * a1] == 0 ? 0xC00000BB : 0;
}
