/*
 * XREFs of ACPIDebugGetIrpText @ 0x1C000153C
 * Callers:
 *     ACPIFilterIrpQueryDeviceRelations @ 0x1C007A330 (ACPIFilterIrpQueryDeviceRelations.c)
 *     ACPIDockIrpQueryCapabilities @ 0x1C007AD60 (ACPIDockIrpQueryCapabilities.c)
 *     ACPIDockIrpQueryDeviceRelations @ 0x1C007B010 (ACPIDockIrpQueryDeviceRelations.c)
 *     ACPIDockIrpQueryID @ 0x1C007B410 (ACPIDockIrpQueryID.c)
 *     ACPIDockIrpQueryInterface @ 0x1C007B740 (ACPIDockIrpQueryInterface.c)
 *     ACPIDockIrpQueryPnpDeviceState @ 0x1C007B8F0 (ACPIDockIrpQueryPnpDeviceState.c)
 *     ACPIBusAndFilterIrpEject @ 0x1C007D4D0 (ACPIBusAndFilterIrpEject.c)
 *     ACPIBusAndFilterIrpQueryCapabilities @ 0x1C007D7A0 (ACPIBusAndFilterIrpQueryCapabilities.c)
 *     ACPIBusAndFilterIrpQueryPnpDeviceState @ 0x1C007DF10 (ACPIBusAndFilterIrpQueryPnpDeviceState.c)
 *     ACPIBusAndFilterIrpSetLock @ 0x1C007E280 (ACPIBusAndFilterIrpSetLock.c)
 *     ACPIBusIrpCancelRemoveOrStopDevice @ 0x1C007E350 (ACPIBusIrpCancelRemoveOrStopDevice.c)
 *     ACPIBusIrpDeviceEnumerated @ 0x1C007E480 (ACPIBusIrpDeviceEnumerated.c)
 *     ACPIBusIrpDeviceUsageNotification @ 0x1C007E820 (ACPIBusIrpDeviceUsageNotification.c)
 *     ACPIBusIrpQueryDeviceRelations @ 0x1C007F9F0 (ACPIBusIrpQueryDeviceRelations.c)
 *     ACPIBusIrpQueryId @ 0x1C0080330 (ACPIBusIrpQueryId.c)
 *     ACPIBusIrpQueryRemoveOrStopDevice @ 0x1C0080820 (ACPIBusIrpQueryRemoveOrStopDevice.c)
 *     ACPIBusIrpQueryResourceRequirements @ 0x1C0080980 (ACPIBusIrpQueryResourceRequirements.c)
 *     ACPIBusIrpQueryResources @ 0x1C0080E80 (ACPIBusIrpQueryResources.c)
 *     ACPIBusIrpStartDeviceWorker @ 0x1C0081770 (ACPIBusIrpStartDeviceWorker.c)
 *     ACPIBusIrpStopDevice @ 0x1C0081900 (ACPIBusIrpStopDevice.c)
 *     ACPIFanStartDevice @ 0x1C0085270 (ACPIFanStartDevice.c)
 *     ACPIFilterIrpDeviceEnumeratedCompletion @ 0x1C00857C0 (ACPIFilterIrpDeviceEnumeratedCompletion.c)
 *     ACPIFilterIrpDeviceUsageNotification @ 0x1C0085940 (ACPIFilterIrpDeviceUsageNotification.c)
 *     ACPIFilterIrpFilterResourceRequirements @ 0x1C0085A90 (ACPIFilterIrpFilterResourceRequirements.c)
 *     ACPIFilterIrpQueryIdCompletion @ 0x1C0085F40 (ACPIFilterIrpQueryIdCompletion.c)
 *     ACPIFilterIrpStartDevice @ 0x1C00867A0 (ACPIFilterIrpStartDevice.c)
 *     ACPIFilterIrpStartDeviceWorker @ 0x1C00868F0 (ACPIFilterIrpStartDeviceWorker.c)
 *     ACPIFilterIrpStopDevice @ 0x1C0086CA0 (ACPIFilterIrpStopDevice.c)
 *     ACPIFilterIrpSurpriseRemoval @ 0x1C0086E40 (ACPIFilterIrpSurpriseRemoval.c)
 *     ACPIInternalDeviceQueryDeviceRelations @ 0x1C0087190 (ACPIInternalDeviceQueryDeviceRelations.c)
 *     ACPIRootIrpCancelRemoveOrStopDevice @ 0x1C0093C60 (ACPIRootIrpCancelRemoveOrStopDevice.c)
 *     ACPIRootIrpQueryBusRelations @ 0x1C0093D88 (ACPIRootIrpQueryBusRelations.c)
 *     ACPIRootIrpQueryCapabilities @ 0x1C0093FA0 (ACPIRootIrpQueryCapabilities.c)
 *     ACPIRootIrpQueryDeviceRelations @ 0x1C0094220 (ACPIRootIrpQueryDeviceRelations.c)
 *     ACPIRootIrpQueryInterface @ 0x1C00944D0 (ACPIRootIrpQueryInterface.c)
 *     ACPIRootIrpQueryRemoveOrStopDevice @ 0x1C00946F0 (ACPIRootIrpQueryRemoveOrStopDevice.c)
 *     ACPIRootIrpStopDevice @ 0x1C0094830 (ACPIRootIrpStopDevice.c)
 * Callees:
 *     <none>
 */

char *__fastcall ACPIDebugGetIrpText(__int64 a1, unsigned __int8 a2)
{
  __int64 v2; // rax

  v2 = a2;
  if ( a2 >= 0x1Au )
    v2 = 26LL;
  return (&ACPIDispatchPnpTableNames)[v2];
}
