/*
 * XREFs of HalpAcpiPmRegisterAvailable @ 0x14037C490
 * Callers:
 *     HalpAcpiPostSleep @ 0x140995B1C (HalpAcpiPostSleep.c)
 *     HalpAcpiPreSleep @ 0x140995EEC (HalpAcpiPreSleep.c)
 *     HalpCheckFixedWakeSources @ 0x1409960A0 (HalpCheckFixedWakeSources.c)
 *     HalpDpPostReplace @ 0x1409A84AC (HalpDpPostReplace.c)
 *     HalpDpPreReplace @ 0x1409A879C (HalpDpPreReplace.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HalpAcpiPmRegisterAvailable(int a1)
{
  return PmRegisters[48 * a1] == 0 ? 0xC00000BB : 0;
}
