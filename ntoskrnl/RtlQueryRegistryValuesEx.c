/*
 * XREFs of RtlQueryRegistryValuesEx @ 0x14069DF10
 * Callers:
 *     RtlCheckPortableOperatingSystem @ 0x1402FD500 (RtlCheckPortableOperatingSystem.c)
 *     RtlpFindRegTziForCurrentYear @ 0x140388568 (RtlpFindRegTziForCurrentYear.c)
 *     EtwpQueryPartitionRegistryInformation @ 0x140395114 (EtwpQueryPartitionRegistryInformation.c)
 *     EtwpQuerySiloRegistrySettings @ 0x14039537C (EtwpQuerySiloRegistrySettings.c)
 *     EtwpGetCurrentSiloMaxLoggers @ 0x1403AEC3C (EtwpGetCurrentSiloMaxLoggers.c)
 *     RtlpEtcGetDwordFromRegistry @ 0x14040BE44 (RtlpEtcGetDwordFromRegistry.c)
 *     CarReadRegistry @ 0x1405D332C (CarReadRegistry.c)
 *     DifRtlQueryRegistryValuesExWrapper @ 0x1405E95F0 (DifRtlQueryRegistryValuesExWrapper.c)
 *     DifRtlQueryRegistryValuesWrapper @ 0x1405E9740 (DifRtlQueryRegistryValuesWrapper.c)
 *     sub_140606E08 @ 0x140606E08 (sub_140606E08.c)
 *     FsRtlOpenFileSystemRegistryKeyFromFsGuid @ 0x14067C670 (FsRtlOpenFileSystemRegistryKeyFromFsGuid.c)
 *     VhdAutoAttachVirtualDisks @ 0x140B31A9C (VhdAutoAttachVirtualDisks.c)
 *     SmGlobalsStart @ 0x140B428A8 (SmGlobalsStart.c)
 *     CmIsLastKnownGoodBoot @ 0x140B6AF2C (CmIsLastKnownGoodBoot.c)
 *     IopInitCrashDumpDuringSysInit @ 0x140B6E3C0 (IopInitCrashDumpDuringSysInit.c)
 *     EtwpReadConfigParameters @ 0x140B6F720 (EtwpReadConfigParameters.c)
 * Callees:
 *     RtlpQueryRegistryValues @ 0x14069B3C0 (RtlpQueryRegistryValues.c)
 */

__int64 __fastcall RtlQueryRegistryValuesEx(__int64 a1, const WCHAR *a2, _QWORD *a3, __int64 a4)
{
  return RtlpQueryRegistryValues(a1, a2, a3, a4);
}
