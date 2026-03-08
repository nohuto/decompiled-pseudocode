/*
 * XREFs of ZwCreateSection @ 0x140412C50
 * Callers:
 *     CmSiCreateSectionForFile @ 0x1402B2BD4 (CmSiCreateSectionForFile.c)
 *     LdrpMapResourceFile @ 0x1403A2E68 (LdrpMapResourceFile.c)
 *     RtlFileMapMapView @ 0x1403ABF40 (RtlFileMapMapView.c)
 *     DifZwCreateSectionWrapper @ 0x1405EC930 (DifZwCreateSectionWrapper.c)
 *     NtGetNlsSectionPtr @ 0x14069E7D0 (NtGetNlsSectionPtr.c)
 *     ExpGetGlobalLocaleSection @ 0x140780BAC (ExpGetGlobalLocaleSection.c)
 *     PiInitializeDDB @ 0x14079CD80 (PiInitializeDDB.c)
 *     KsepSdbMapToMemory @ 0x14079D24C (KsepSdbMapToMemory.c)
 *     CmFcpManagerCreateSection @ 0x140818398 (CmFcpManagerCreateSection.c)
 *     SepRmLsaConnectRequest @ 0x1408254BC (SepRmLsaConnectRequest.c)
 *     ExInitializeLeapSecondData @ 0x140850BB0 (ExInitializeLeapSecondData.c)
 *     IopIsNotNativeDriverImage @ 0x1409420DC (IopIsNotNativeDriverImage.c)
 *     ExpQueryCodeIntegrityCertificateInfo @ 0x1409F3A80 (ExpQueryCodeIntegrityCertificateInfo.c)
 *     ExpQueryElamCertInfo @ 0x1409F3CC0 (ExpQueryElamCertInfo.c)
 *     SLUpdateLicenseDataInternal @ 0x1409F78B4 (SLUpdateLicenseDataInternal.c)
 *     CMFReadCompressedSegment @ 0x1409FF980 (CMFReadCompressedSegment.c)
 *     CMFSystemThreadRoutine @ 0x1409FFE80 (CMFSystemThreadRoutine.c)
 *     ApiSetpLoadSchemaImage @ 0x140A075CC (ApiSetpLoadSchemaImage.c)
 *     AslpFileLargeMapCreate @ 0x140A56DFC (AslpFileLargeMapCreate.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall ZwCreateSection(
        PHANDLE SectionHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        PLARGE_INTEGER MaximumSize,
        ULONG SectionPageProtection,
        ULONG AllocationAttributes,
        HANDLE FileHandle)
{
  _disable();
  __readeflags();
  return KiServiceInternal(SectionHandle, *(_QWORD *)&DesiredAccess);
}
