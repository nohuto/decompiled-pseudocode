/*
 * XREFs of swprintf_s @ 0x1403D6A60
 * Callers:
 *     RtlIpv6AddressToStringExW @ 0x14037DEA0 (RtlIpv6AddressToStringExW.c)
 *     RtlIpv6AddressToStringW @ 0x14037DF80 (RtlIpv6AddressToStringW.c)
 *     RtlIpv4AddressToStringExW @ 0x140381770 (RtlIpv4AddressToStringExW.c)
 *     RtlIpv4AddressToStringW @ 0x140381810 (RtlIpv4AddressToStringW.c)
 *     HalpExtBuildResourceIdString @ 0x1403ACCF8 (HalpExtBuildResourceIdString.c)
 *     RtlEthernetAddressToStringW @ 0x14058C290 (RtlEthernetAddressToStringW.c)
 *     BiSpacesUpdatePhysicalDevicePath @ 0x1405C420C (BiSpacesUpdatePhysicalDevicePath.c)
 *     SeGetTokenDeviceMap @ 0x1405F2340 (SeGetTokenDeviceMap.c)
 *     SiGetBootDeviceName @ 0x1406025D4 (SiGetBootDeviceName.c)
 *     SepCleanupLUIDDeviceMapDirectory @ 0x140603544 (SepCleanupLUIDDeviceMapDirectory.c)
 *     LocalConvertSDToStringSD_Rev1 @ 0x14066A500 (LocalConvertSDToStringSD_Rev1.c)
 *     RtlStringFromGUIDEx @ 0x14066DF18 (RtlStringFromGUIDEx.c)
 *     PnpInitializeNotifyEntry @ 0x140673654 (PnpInitializeNotifyEntry.c)
 *     _PnpSetPropertyWorker @ 0x1407469A0 (_PnpSetPropertyWorker.c)
 *     _CmCreateOrdinalInstanceKey @ 0x1407693E8 (_CmCreateOrdinalInstanceKey.c)
 *     BiUnloadHiveByName @ 0x1407795C4 (BiUnloadHiveByName.c)
 *     SiGetBiosSystemPartition @ 0x14077AD94 (SiGetBiosSystemPartition.c)
 *     BiAddStoreFromFile @ 0x140781F98 (BiAddStoreFromFile.c)
 *     BiGetNtPartitionPath @ 0x140782908 (BiGetNtPartitionPath.c)
 *     CmSetAcpiHwProfile @ 0x1407A5B08 (CmSetAcpiHwProfile.c)
 *     CmpUpdateReorganizeRegistryValues @ 0x1407CF0FC (CmpUpdateReorganizeRegistryValues.c)
 *     CmpRestampVersion @ 0x140867A50 (CmpRestampVersion.c)
 *     CmpAddAcpiAliasEntry @ 0x14087706C (CmpAddAcpiAliasEntry.c)
 *     CmpCloneHwProfile @ 0x1408772E4 (CmpCloneHwProfile.c)
 *     CmpCreateHwProfileFriendlyName @ 0x140877AA0 (CmpCreateHwProfileFriendlyName.c)
 *     CmpMoveBiosAliasTable @ 0x140877D78 (CmpMoveBiosAliasTable.c)
 *     SddlpUuidToString @ 0x140926CB8 (SddlpUuidToString.c)
 *     ExpConvertSignatureName @ 0x14094F930 (ExpConvertSignatureName.c)
 *     ExpCreateOutputSIGNATURE @ 0x14094FF1C (ExpCreateOutputSIGNATURE.c)
 *     ExpFindDiskSignature @ 0x1409503D0 (ExpFindDiskSignature.c)
 *     ExpGetDriveGeometry @ 0x14095082C (ExpGetDriveGeometry.c)
 *     ExpSetBootEntry @ 0x1409512D0 (ExpSetBootEntry.c)
 *     ExpSetDriverEntry @ 0x140951AC4 (ExpSetDriverEntry.c)
 *     ExpTranslateEfiPath @ 0x14095240C (ExpTranslateEfiPath.c)
 *     NtDeleteBootEntry @ 0x1409531C0 (NtDeleteBootEntry.c)
 *     NtDeleteDriverEntry @ 0x140953350 (NtDeleteDriverEntry.c)
 *     BiCreateBootEntry @ 0x140971100 (BiCreateBootEntry.c)
 *     SiFindSystemPartition @ 0x140973848 (SiFindSystemPartition.c)
 *     CreateMiniNtBootKey @ 0x140A8D0B0 (CreateMiniNtBootKey.c)
 * Callees:
 *     vswprintf_s @ 0x1403D6A90 (vswprintf_s.c)
 */

int swprintf_s(wchar_t *Dst, size_t SizeInWords, const wchar_t *Format, ...)
{
  va_list ArgList; // [rsp+58h] [rbp+20h] BYREF

  va_start(ArgList, Format);
  return vswprintf_s(Dst, SizeInWords, Format, ArgList);
}
