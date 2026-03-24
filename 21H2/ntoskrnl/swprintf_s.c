/*
 * XREFs of swprintf_s @ 0x1403D68F0
 * Callers:
 *     RtlIpv6AddressToStringExW @ 0x14037E350 (RtlIpv6AddressToStringExW.c)
 *     RtlIpv6AddressToStringW @ 0x14037E430 (RtlIpv6AddressToStringW.c)
 *     RtlIpv4AddressToStringExW @ 0x140381C20 (RtlIpv4AddressToStringExW.c)
 *     RtlIpv4AddressToStringW @ 0x140381CC0 (RtlIpv4AddressToStringW.c)
 *     HalpExtBuildResourceIdString @ 0x1403ABF68 (HalpExtBuildResourceIdString.c)
 *     RtlEthernetAddressToStringW @ 0x14058C060 (RtlEthernetAddressToStringW.c)
 *     BiSpacesUpdatePhysicalDevicePath @ 0x1405C3FDC (BiSpacesUpdatePhysicalDevicePath.c)
 *     LocalConvertSDToStringSD_Rev1 @ 0x140676E30 (LocalConvertSDToStringSD_Rev1.c)
 *     RtlStringFromGUIDEx @ 0x14067A7D8 (RtlStringFromGUIDEx.c)
 *     SeGetTokenDeviceMap @ 0x140692CBC (SeGetTokenDeviceMap.c)
 *     SiGetBootDeviceName @ 0x1406A49A4 (SiGetBootDeviceName.c)
 *     SepCleanupLUIDDeviceMapDirectory @ 0x1406A5914 (SepCleanupLUIDDeviceMapDirectory.c)
 *     PnpInitializeNotifyEntry @ 0x1406C4D64 (PnpInitializeNotifyEntry.c)
 *     _PnpSetPropertyWorker @ 0x1407467E0 (_PnpSetPropertyWorker.c)
 *     _CmCreateOrdinalInstanceKey @ 0x140769228 (_CmCreateOrdinalInstanceKey.c)
 *     BiUnloadHiveByName @ 0x140779404 (BiUnloadHiveByName.c)
 *     SiGetBiosSystemPartition @ 0x14077ABD4 (SiGetBiosSystemPartition.c)
 *     BiAddStoreFromFile @ 0x140781DD8 (BiAddStoreFromFile.c)
 *     BiGetNtPartitionPath @ 0x140782748 (BiGetNtPartitionPath.c)
 *     CmSetAcpiHwProfile @ 0x1407A5908 (CmSetAcpiHwProfile.c)
 *     CmpUpdateReorganizeRegistryValues @ 0x1407CEF8C (CmpUpdateReorganizeRegistryValues.c)
 *     CmpRestampVersion @ 0x1408678F0 (CmpRestampVersion.c)
 *     CmpAddAcpiAliasEntry @ 0x140876F0C (CmpAddAcpiAliasEntry.c)
 *     CmpCloneHwProfile @ 0x140877184 (CmpCloneHwProfile.c)
 *     CmpCreateHwProfileFriendlyName @ 0x140877940 (CmpCreateHwProfileFriendlyName.c)
 *     CmpMoveBiosAliasTable @ 0x140877C18 (CmpMoveBiosAliasTable.c)
 *     SddlpUuidToString @ 0x140926B58 (SddlpUuidToString.c)
 *     ExpConvertSignatureName @ 0x14094F760 (ExpConvertSignatureName.c)
 *     ExpCreateOutputSIGNATURE @ 0x14094FD4C (ExpCreateOutputSIGNATURE.c)
 *     ExpFindDiskSignature @ 0x140950200 (ExpFindDiskSignature.c)
 *     ExpGetDriveGeometry @ 0x14095065C (ExpGetDriveGeometry.c)
 *     ExpSetBootEntry @ 0x140951100 (ExpSetBootEntry.c)
 *     ExpSetDriverEntry @ 0x1409518F4 (ExpSetDriverEntry.c)
 *     ExpTranslateEfiPath @ 0x14095223C (ExpTranslateEfiPath.c)
 *     NtDeleteBootEntry @ 0x140952FF0 (NtDeleteBootEntry.c)
 *     NtDeleteDriverEntry @ 0x140953180 (NtDeleteDriverEntry.c)
 *     BiCreateBootEntry @ 0x140970F20 (BiCreateBootEntry.c)
 *     SiFindSystemPartition @ 0x140973668 (SiFindSystemPartition.c)
 *     CreateMiniNtBootKey @ 0x140A8C0B0 (CreateMiniNtBootKey.c)
 * Callees:
 *     vswprintf_s @ 0x1403D6920 (vswprintf_s.c)
 */

int swprintf_s(wchar_t *Dst, size_t SizeInWords, const wchar_t *Format, ...)
{
  va_list ArgList; // [rsp+58h] [rbp+20h] BYREF

  va_start(ArgList, Format);
  return vswprintf_s(Dst, SizeInWords, Format, ArgList);
}
