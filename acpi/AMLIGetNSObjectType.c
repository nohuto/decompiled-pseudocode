/*
 * XREFs of AMLIGetNSObjectType @ 0x1C00483A8
 * Callers:
 *     ACPIBusAndFilterIrpQueryCapabilities @ 0x1C007D7A0 (ACPIBusAndFilterIrpQueryCapabilities.c)
 *     ACPIBusIrpQueryCompatibleId @ 0x1C007EE84 (ACPIBusIrpQueryCompatibleId.c)
 *     ACPIBusIrpQueryDeviceId @ 0x1C007F574 (ACPIBusIrpQueryDeviceId.c)
 *     ACPIBusIrpQueryHardwareId @ 0x1C007FC3C (ACPIBusIrpQueryHardwareId.c)
 *     EnableDisableRegions @ 0x1C008A57C (EnableDisableRegions.c)
 *     ACPIProcessorDeviceControl @ 0x1C008C570 (ACPIProcessorDeviceControl.c)
 *     ACPIProcessorGetInitialApicId @ 0x1C008C748 (ACPIProcessorGetInitialApicId.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AMLIGetNSObjectType(__int64 a1)
{
  return *(unsigned __int16 *)(*(_QWORD *)a1 + 66LL);
}
