/*
 * XREFs of IoGetConfigurationInformation @ 0x140875CF0
 * Callers:
 *     DifIoGetConfigurationInformationWrapper @ 0x1405DF580 (DifIoGetConfigurationInformationWrapper.c)
 *     IopCreateArcNamesDisk @ 0x140B3D164 (IopCreateArcNamesDisk.c)
 *     IopCreateArcNamesCd @ 0x140B3D2CC (IopCreateArcNamesCd.c)
 *     IopGetBootDiskInformation @ 0x140B94A0C (IopGetBootDiskInformation.c)
 *     VhdiInitializeBootDisk @ 0x140B9BD30 (VhdiInitializeBootDisk.c)
 *     CimfsInitializeBootDisk @ 0x140B9C180 (CimfsInitializeBootDisk.c)
 * Callees:
 *     <none>
 */

PCONFIGURATION_INFORMATION IoGetConfigurationInformation(void)
{
  return (PCONFIGURATION_INFORMATION)&dword_140D53888;
}
