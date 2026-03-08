/*
 * XREFs of IoGetConfigurationInformation @ 0x140872E30
 * Callers:
 *     DifIoGetConfigurationInformationWrapper @ 0x1405DD0D0 (DifIoGetConfigurationInformationWrapper.c)
 *     IopCreateArcNamesDisk @ 0x140B54B24 (IopCreateArcNamesDisk.c)
 *     IopCreateArcNamesCd @ 0x140B54C8C (IopCreateArcNamesCd.c)
 *     IopGetBootDiskInformation @ 0x140B907EC (IopGetBootDiskInformation.c)
 *     VhdiInitializeBootDisk @ 0x140B97B20 (VhdiInitializeBootDisk.c)
 *     CimfsInitializeBootDisk @ 0x140B97F70 (CimfsInitializeBootDisk.c)
 * Callees:
 *     <none>
 */

PCONFIGURATION_INFORMATION IoGetConfigurationInformation(void)
{
  return (PCONFIGURATION_INFORMATION)&dword_140D53888;
}
