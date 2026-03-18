/*
 * XREFs of swprintf_s @ 0x1403DDD60
 * Callers:
 *     HalpExtBuildResourceIdString @ 0x140379468 (HalpExtBuildResourceIdString.c)
 *     RtlIpv6AddressToStringExW @ 0x1403A3540 (RtlIpv6AddressToStringExW.c)
 *     RtlIpv6AddressToStringW @ 0x1403A3620 (RtlIpv6AddressToStringW.c)
 *     RtlEthernetAddressToStringW @ 0x1403B5530 (RtlEthernetAddressToStringW.c)
 *     RtlIpv4AddressToStringExW @ 0x1403BF040 (RtlIpv4AddressToStringExW.c)
 *     RtlIpv4AddressToStringW @ 0x1403BF110 (RtlIpv4AddressToStringW.c)
 *     BiSpacesUpdatePhysicalDevicePath @ 0x140671814 (BiSpacesUpdatePhysicalDevicePath.c)
 *     BcdEnumerateDisks @ 0x140680EC0 (BcdEnumerateDisks.c)
 *     RtlStringFromGUIDEx @ 0x1406852B0 (RtlStringFromGUIDEx.c)
 *     PnpInitializeNotifyEntry @ 0x14068840C (PnpInitializeNotifyEntry.c)
 *     LocalConvertSDToStringSD_Rev1 @ 0x14069CE68 (LocalConvertSDToStringSD_Rev1.c)
 *     SepCleanupLUIDDeviceMapDirectory @ 0x14077DE68 (SepCleanupLUIDDeviceMapDirectory.c)
 *     _PnpSetPropertyWorker @ 0x140798154 (_PnpSetPropertyWorker.c)
 *     SeGetTokenDeviceMap @ 0x1407AFD00 (SeGetTokenDeviceMap.c)
 *     SiGetBootDeviceName @ 0x1407C0094 (SiGetBootDeviceName.c)
 *     BiAddStoreFromFile @ 0x140804BEC (BiAddStoreFromFile.c)
 *     BiGetNtPartitionPath @ 0x140809890 (BiGetNtPartitionPath.c)
 *     CmpRestampVersion @ 0x14080E4E0 (CmpRestampVersion.c)
 *     ExpTranslateEfiPath @ 0x1408402B0 (ExpTranslateEfiPath.c)
 *     CmSetAcpiHwProfile @ 0x14084B574 (CmSetAcpiHwProfile.c)
 *     CmpUpdateReorganizeRegistryValues @ 0x14085DFE4 (CmpUpdateReorganizeRegistryValues.c)
 *     _CmCreateOrdinalInstanceKey @ 0x140880440 (_CmCreateOrdinalInstanceKey.c)
 *     PopPotsLogPowerTransitionReliability @ 0x1409A0AD0 (PopPotsLogPowerTransitionReliability.c)
 *     SddlpUuidToString @ 0x1409D2C08 (SddlpUuidToString.c)
 *     ExpConvertSignatureName @ 0x1409FBD0C (ExpConvertSignatureName.c)
 *     ExpCreateOutputSIGNATURE @ 0x1409FC218 (ExpCreateOutputSIGNATURE.c)
 *     ExpFindDiskSignature @ 0x1409FC6CC (ExpFindDiskSignature.c)
 *     ExpGetDriveGeometry @ 0x1409FCAF0 (ExpGetDriveGeometry.c)
 *     ExpSetBootEntry @ 0x1409FD220 (ExpSetBootEntry.c)
 *     ExpSetDriverEntry @ 0x1409FD9B0 (ExpSetDriverEntry.c)
 *     NtDeleteBootEntry @ 0x1409FE950 (NtDeleteBootEntry.c)
 *     NtDeleteDriverEntry @ 0x1409FEAE0 (NtDeleteDriverEntry.c)
 *     CmpAddAcpiAliasEntry @ 0x140A0FFF0 (CmpAddAcpiAliasEntry.c)
 *     CmpCloneHwProfile @ 0x140A10264 (CmpCloneHwProfile.c)
 *     CmpCreateHwProfileFriendlyName @ 0x140A10A70 (CmpCreateHwProfileFriendlyName.c)
 *     CmpMoveBiosAliasTable @ 0x140A10D4C (CmpMoveBiosAliasTable.c)
 *     BiUnloadHiveByName @ 0x140A5D60C (BiUnloadHiveByName.c)
 *     BiCreateBootEntry @ 0x140A5DA9C (BiCreateBootEntry.c)
 *     SiFindSystemPartition @ 0x140A5F444 (SiFindSystemPartition.c)
 *     SiGetBiosSystemPartition @ 0x140A604C4 (SiGetBiosSystemPartition.c)
 *     PopPotsLogDirtyPowerTransition @ 0x140B36D5C (PopPotsLogDirtyPowerTransition.c)
 *     CreateMiniNtBootKey @ 0x140B91794 (CreateMiniNtBootKey.c)
 * Callees:
 *     vswprintf_s @ 0x1403DDD90 (vswprintf_s.c)
 */

int swprintf_s(wchar_t *Dst, size_t SizeInWords, const wchar_t *Format, ...)
{
  va_list ArgList; // [rsp+58h] [rbp+20h] BYREF

  va_start(ArgList, Format);
  return vswprintf_s(Dst, SizeInWords, Format, ArgList);
}
