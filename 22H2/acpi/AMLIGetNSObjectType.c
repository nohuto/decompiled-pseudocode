/*
 * XREFs of AMLIGetNSObjectType @ 0x1C00483C8
 * Callers:
 *     ACPIBusAndFilterIrpQueryCapabilities @ 0x1C007D7B0 (ACPIBusAndFilterIrpQueryCapabilities.c)
 *     ACPIBusIrpQueryCompatibleId @ 0x1C007EE94 (ACPIBusIrpQueryCompatibleId.c)
 *     ACPIBusIrpQueryDeviceId @ 0x1C007F584 (ACPIBusIrpQueryDeviceId.c)
 *     ACPIBusIrpQueryHardwareId @ 0x1C007FC4C (ACPIBusIrpQueryHardwareId.c)
 *     EnableDisableRegions @ 0x1C008A58C (EnableDisableRegions.c)
 *     ACPIProcessorDeviceControl @ 0x1C008C580 (ACPIProcessorDeviceControl.c)
 *     ACPIProcessorGetInitialApicId @ 0x1C008C758 (ACPIProcessorGetInitialApicId.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AMLIGetNSObjectType(__int64 a1)
{
  return *(unsigned __int16 *)(*(_QWORD *)a1 + 66LL);
}
