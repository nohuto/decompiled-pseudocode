/*
 * XREFs of swprintf_s @ 0x1403D61F0
 * Callers:
 *     RtlIpv6AddressToStringExW @ 0x14037DCC0 (RtlIpv6AddressToStringExW.c)
 *     RtlIpv6AddressToStringW @ 0x14037DDA0 (RtlIpv6AddressToStringW.c)
 *     RtlIpv4AddressToStringExW @ 0x140381560 (RtlIpv4AddressToStringExW.c)
 *     RtlIpv4AddressToStringW @ 0x140381600 (RtlIpv4AddressToStringW.c)
 *     HalpExtBuildResourceIdString @ 0x1403B30F8 (HalpExtBuildResourceIdString.c)
 *     RtlEthernetAddressToStringW @ 0x14058BFA0 (RtlEthernetAddressToStringW.c)
 *     BiSpacesUpdatePhysicalDevicePath @ 0x1405C3F1C (BiSpacesUpdatePhysicalDevicePath.c)
 *     SeGetTokenDeviceMap @ 0x1406770FC (SeGetTokenDeviceMap.c)
 *     SiGetBootDeviceName @ 0x140687A74 (SiGetBootDeviceName.c)
 *     PnpInitializeNotifyEntry @ 0x14069C4B4 (PnpInitializeNotifyEntry.c)
 *     LocalConvertSDToStringSD_Rev1 @ 0x1406EFC20 (LocalConvertSDToStringSD_Rev1.c)
 *     RtlStringFromGUIDEx @ 0x1406F35C8 (RtlStringFromGUIDEx.c)
 *     SepCleanupLUIDDeviceMapDirectory @ 0x1406F79AC (SepCleanupLUIDDeviceMapDirectory.c)
 *     _PnpSetPropertyWorker @ 0x140742C80 (_PnpSetPropertyWorker.c)
 *     _CmCreateOrdinalInstanceKey @ 0x140768848 (_CmCreateOrdinalInstanceKey.c)
 *     BiUnloadHiveByName @ 0x140779304 (BiUnloadHiveByName.c)
 *     SiGetBiosSystemPartition @ 0x14077AAD4 (SiGetBiosSystemPartition.c)
 *     BiAddStoreFromFile @ 0x140781CD8 (BiAddStoreFromFile.c)
 *     BiGetNtPartitionPath @ 0x140782648 (BiGetNtPartitionPath.c)
 *     CmSetAcpiHwProfile @ 0x1407A5D38 (CmSetAcpiHwProfile.c)
 *     CmpUpdateReorganizeRegistryValues @ 0x1407CEEAC (CmpUpdateReorganizeRegistryValues.c)
 *     CmpRestampVersion @ 0x140867940 (CmpRestampVersion.c)
 *     CmpAddAcpiAliasEntry @ 0x140876F5C (CmpAddAcpiAliasEntry.c)
 *     CmpCloneHwProfile @ 0x1408771D4 (CmpCloneHwProfile.c)
 *     CmpCreateHwProfileFriendlyName @ 0x140877990 (CmpCreateHwProfileFriendlyName.c)
 *     CmpMoveBiosAliasTable @ 0x140877C68 (CmpMoveBiosAliasTable.c)
 *     SddlpUuidToString @ 0x140926BA8 (SddlpUuidToString.c)
 *     ExpConvertSignatureName @ 0x14094F7B0 (ExpConvertSignatureName.c)
 *     ExpCreateOutputSIGNATURE @ 0x14094FD9C (ExpCreateOutputSIGNATURE.c)
 *     ExpFindDiskSignature @ 0x140950250 (ExpFindDiskSignature.c)
 *     ExpGetDriveGeometry @ 0x1409506AC (ExpGetDriveGeometry.c)
 *     ExpSetBootEntry @ 0x140951150 (ExpSetBootEntry.c)
 *     ExpSetDriverEntry @ 0x140951944 (ExpSetDriverEntry.c)
 *     ExpTranslateEfiPath @ 0x14095228C (ExpTranslateEfiPath.c)
 *     NtDeleteBootEntry @ 0x140953040 (NtDeleteBootEntry.c)
 *     NtDeleteDriverEntry @ 0x1409531D0 (NtDeleteDriverEntry.c)
 *     BiCreateBootEntry @ 0x140970F70 (BiCreateBootEntry.c)
 *     SiFindSystemPartition @ 0x1409736B8 (SiFindSystemPartition.c)
 *     CreateMiniNtBootKey @ 0x140A8C0B0 (CreateMiniNtBootKey.c)
 * Callees:
 *     vswprintf_s @ 0x1403D6220 (vswprintf_s.c)
 */

int swprintf_s(wchar_t *Dst, size_t SizeInWords, const wchar_t *Format, ...)
{
  va_list ArgList; // [rsp+58h] [rbp+20h] BYREF

  va_start(ArgList, Format);
  return vswprintf_s(Dst, SizeInWords, Format, ArgList);
}
