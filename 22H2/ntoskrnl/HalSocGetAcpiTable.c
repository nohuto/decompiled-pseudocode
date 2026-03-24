/*
 * XREFs of HalSocGetAcpiTable @ 0x1403B32D4
 * Callers:
 *     HalpIommuRegisterBuiltinPlugins @ 0x1403B0648 (HalpIommuRegisterBuiltinPlugins.c)
 *     HalpPmTimerDiscover @ 0x1403B17DC (HalpPmTimerDiscover.c)
 *     HalpSfiTimerDiscover @ 0x1403B18DC (HalpSfiTimerDiscover.c)
 *     HalpRtcDiscover @ 0x1403B1968 (HalpRtcDiscover.c)
 *     HalpApicTimerDiscover @ 0x1403B1AAC (HalpApicTimerDiscover.c)
 *     HalpApicDiscover @ 0x1403B1D50 (HalpApicDiscover.c)
 *     HalpPicDiscover @ 0x1403B2100 (HalpPicDiscover.c)
 *     HalpHpetDiscover @ 0x1403B25CC (HalpHpetDiscover.c)
 *     HalpWdatDiscover @ 0x1403B3240 (HalpWdatDiscover.c)
 *     HalpWdatInitialize @ 0x1404D4CE0 (HalpWdatInitialize.c)
 *     HalpPciGetHpetInterruptSource @ 0x140A8E120 (HalpPciGetHpetInterruptSource.c)
 * Callees:
 *     HalpAcpiGetTable @ 0x1402E77D0 (HalpAcpiGetTable.c)
 */

__int64 __fastcall HalSocGetAcpiTable(int a1)
{
  if ( HalpTimerLoaderBlock )
    return HalpAcpiGetTable(HalpTimerLoaderBlock, a1, 0, 0);
  else
    return 0LL;
}
