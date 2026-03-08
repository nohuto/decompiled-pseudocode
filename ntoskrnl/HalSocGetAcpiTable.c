/*
 * XREFs of HalSocGetAcpiTable @ 0x14037601C
 * Callers:
 *     HalpHpetDiscover @ 0x140372BE0 (HalpHpetDiscover.c)
 *     HalpRtcDiscover @ 0x140374398 (HalpRtcDiscover.c)
 *     HalpPicDiscover @ 0x140374634 (HalpPicDiscover.c)
 *     HalpApicDiscover @ 0x140375E78 (HalpApicDiscover.c)
 *     HalpWdatDiscover @ 0x140375F28 (HalpWdatDiscover.c)
 *     HalpPmTimerDiscover @ 0x14037604C (HalpPmTimerDiscover.c)
 *     HalpApicTimerDiscover @ 0x14037614C (HalpApicTimerDiscover.c)
 *     HalpWdatInitialize @ 0x14051CAB0 (HalpWdatInitialize.c)
 *     HalpIommuIvtDiscover @ 0x140B3D380 (HalpIommuIvtDiscover.c)
 *     HalpPciGetHpetInterruptSource @ 0x140B8F930 (HalpPciGetHpetInterruptSource.c)
 * Callees:
 *     HalpAcpiGetTable @ 0x14029C550 (HalpAcpiGetTable.c)
 */

__int64 __fastcall HalSocGetAcpiTable(int a1)
{
  if ( HalpTimerLoaderBlock )
    return HalpAcpiGetTable(HalpTimerLoaderBlock, a1, 0, 0);
  else
    return 0LL;
}
