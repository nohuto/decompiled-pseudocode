/*
 * XREFs of swprintf_s @ 0x1403D8840
 * Callers:
 *     HalpExtBuildResourceIdString @ 0x140374218 (HalpExtBuildResourceIdString.c)
 *     RtlIpv6AddressToStringExW @ 0x14039EF80 (RtlIpv6AddressToStringExW.c)
 *     RtlIpv6AddressToStringW @ 0x14039F060 (RtlIpv6AddressToStringW.c)
 *     RtlEthernetAddressToStringW @ 0x1403B08A0 (RtlEthernetAddressToStringW.c)
 *     RtlIpv4AddressToStringExW @ 0x1403B9710 (RtlIpv4AddressToStringExW.c)
 *     RtlIpv4AddressToStringW @ 0x1403B97E0 (RtlIpv4AddressToStringW.c)
 *     BiSpacesUpdatePhysicalDevicePath @ 0x14066F1C4 (BiSpacesUpdatePhysicalDevicePath.c)
 *     _PnpSetPropertyWorker @ 0x140687D54 (_PnpSetPropertyWorker.c)
 *     PnpInitializeNotifyEntry @ 0x1406F543C (PnpInitializeNotifyEntry.c)
 *     RtlStringFromGUIDEx @ 0x140733E90 (RtlStringFromGUIDEx.c)
 *     LocalConvertSDToStringSD_Rev1 @ 0x14074F708 (LocalConvertSDToStringSD_Rev1.c)
 *     SeGetTokenDeviceMap @ 0x14075D880 (SeGetTokenDeviceMap.c)
 *     SiGetBootDeviceName @ 0x14076E464 (SiGetBootDeviceName.c)
 *     SepCleanupLUIDDeviceMapDirectory @ 0x1407DCB7C (SepCleanupLUIDDeviceMapDirectory.c)
 *     CmSetAcpiHwProfile @ 0x140813CE0 (CmSetAcpiHwProfile.c)
 *     CmpRestampVersion @ 0x1408161B0 (CmpRestampVersion.c)
 *     BiAddStoreFromFile @ 0x14082BDE4 (BiAddStoreFromFile.c)
 *     BiGetNtPartitionPath @ 0x140830938 (BiGetNtPartitionPath.c)
 *     ExpTranslateEfiPath @ 0x14083EF60 (ExpTranslateEfiPath.c)
 *     CmpUpdateReorganizeRegistryValues @ 0x14085A0F4 (CmpUpdateReorganizeRegistryValues.c)
 *     _CmCreateOrdinalInstanceKey @ 0x14087B610 (_CmCreateOrdinalInstanceKey.c)
 *     PopPotsLogPowerTransitionReliability @ 0x14099DA40 (PopPotsLogPowerTransitionReliability.c)
 *     SddlpUuidToString @ 0x1409CFD68 (SddlpUuidToString.c)
 *     ExpConvertSignatureName @ 0x1409F8E7C (ExpConvertSignatureName.c)
 *     ExpCreateOutputSIGNATURE @ 0x1409F9388 (ExpCreateOutputSIGNATURE.c)
 *     ExpFindDiskSignature @ 0x1409F983C (ExpFindDiskSignature.c)
 *     ExpGetDriveGeometry @ 0x1409F9C60 (ExpGetDriveGeometry.c)
 *     ExpSetBootEntry @ 0x1409FA390 (ExpSetBootEntry.c)
 *     ExpSetDriverEntry @ 0x1409FAB20 (ExpSetDriverEntry.c)
 *     NtDeleteBootEntry @ 0x1409FBA50 (NtDeleteBootEntry.c)
 *     NtDeleteDriverEntry @ 0x1409FBBE0 (NtDeleteDriverEntry.c)
 *     CmpAddAcpiAliasEntry @ 0x140A0D2E0 (CmpAddAcpiAliasEntry.c)
 *     CmpCloneHwProfile @ 0x140A0D554 (CmpCloneHwProfile.c)
 *     CmpCreateHwProfileFriendlyName @ 0x140A0DD5C (CmpCreateHwProfileFriendlyName.c)
 *     CmpMoveBiosAliasTable @ 0x140A0E038 (CmpMoveBiosAliasTable.c)
 *     BiUnloadHiveByName @ 0x140A5A134 (BiUnloadHiveByName.c)
 *     BiCreateBootEntry @ 0x140A5AD88 (BiCreateBootEntry.c)
 *     SiFindSystemPartition @ 0x140A5C744 (SiFindSystemPartition.c)
 *     SiGetBiosSystemPartition @ 0x140A5D7C4 (SiGetBiosSystemPartition.c)
 *     PopPotsLogDirtyPowerTransition @ 0x140B32DDC (PopPotsLogDirtyPowerTransition.c)
 *     CreateMiniNtBootKey @ 0x140B8D580 (CreateMiniNtBootKey.c)
 * Callees:
 *     vswprintf_s @ 0x1403D8870 (vswprintf_s.c)
 */

int swprintf_s(wchar_t *Dst, size_t SizeInWords, const wchar_t *Format, ...)
{
  va_list ArgList; // [rsp+58h] [rbp+20h] BYREF

  va_start(ArgList, Format);
  return vswprintf_s(Dst, SizeInWords, Format, ArgList);
}
