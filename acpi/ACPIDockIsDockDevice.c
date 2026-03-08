/*
 * XREFs of ACPIDockIsDockDevice @ 0x1C0009A34
 * Callers:
 *     ACPIBuildIssueNotifyDeviceEject @ 0x1C000D5F0 (ACPIBuildIssueNotifyDeviceEject.c)
 *     ACPIBuildProcessDevicePhaseEjd @ 0x1C000F290 (ACPIBuildProcessDevicePhaseEjd.c)
 *     ACPIBuildSurpriseRemovedExtension @ 0x1C0013960 (ACPIBuildSurpriseRemovedExtension.c)
 *     ACPIBusIrpQueryPower @ 0x1C0016B50 (ACPIBusIrpQueryPower.c)
 *     ACPIFilterIrpQueryPower @ 0x1C0028770 (ACPIFilterIrpQueryPower.c)
 *     OSNotifyDeviceCheck @ 0x1C0032C80 (OSNotifyDeviceCheck.c)
 *     OSNotifyDeviceEnum @ 0x1C0032E9C (OSNotifyDeviceEnum.c)
 *     ACPIBusAndFilterIrpQueryCapabilities @ 0x1C007D7A0 (ACPIBusAndFilterIrpQueryCapabilities.c)
 *     ACPIBusAndFilterIrpQueryEjectRelations @ 0x1C007DD9C (ACPIBusAndFilterIrpQueryEjectRelations.c)
 * Callees:
 *     AMLIGetNameSpaceObject @ 0x1C00483B8 (AMLIGetNameSpaceObject.c)
 */

bool ACPIDockIsDockDevice()
{
  return (int)AMLIGetNameSpaceObject("_DCK") >= 0;
}
