/*
 * XREFs of AMLIGetNSObjectType @ 0x1C0002924
 * Callers:
 *     ACPIBusIrpQueryHardwareId @ 0x1C008F720 (ACPIBusIrpQueryHardwareId.c)
 *     ACPIProcessorGetInitialApicId @ 0x1C00910B8 (ACPIProcessorGetInitialApicId.c)
 *     ACPIBusIrpQueryDeviceId @ 0x1C0096300 (ACPIBusIrpQueryDeviceId.c)
 *     ACPIBusIrpQueryCompatibleId @ 0x1C009670C (ACPIBusIrpQueryCompatibleId.c)
 *     ACPIProcessorDeviceControl @ 0x1C009A990 (ACPIProcessorDeviceControl.c)
 *     EnableDisableRegions @ 0x1C009D934 (EnableDisableRegions.c)
 *     ACPIBusAndFilterIrpQueryCapabilities @ 0x1C009EB30 (ACPIBusAndFilterIrpQueryCapabilities.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AMLIGetNSObjectType(__int64 a1)
{
  return *(unsigned __int16 *)(*(_QWORD *)a1 + 66LL);
}
