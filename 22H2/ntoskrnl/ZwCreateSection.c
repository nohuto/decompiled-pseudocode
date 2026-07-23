/*
 * XREFs of ZwCreateSection @ 0x1403FA360
 * Callers:
 *     CmSiCreateSectionForFile @ 0x140362144 (CmSiCreateSectionForFile.c)
 *     LdrpMapResourceFile @ 0x14037FE7C (LdrpMapResourceFile.c)
 *     RtlFileMapMapView @ 0x1403BD264 (RtlFileMapMapView.c)
 *     ExpGetGlobalLocaleSection @ 0x14061303C (ExpGetGlobalLocaleSection.c)
 *     NtGetNlsSectionPtr @ 0x14069CEC0 (NtGetNlsSectionPtr.c)
 *     KsepSdbMapToMemory @ 0x140755244 (KsepSdbMapToMemory.c)
 *     PiInitializeDDB @ 0x14077E864 (PiInitializeDDB.c)
 *     ExInitializeLeapSecondData @ 0x1407A92DC (ExInitializeLeapSecondData.c)
 *     SepRmLsaConnectRequest @ 0x1407AD7F0 (SepRmLsaConnectRequest.c)
 *     CmFcpManagerCreateSection @ 0x14087E5C0 (CmFcpManagerCreateSection.c)
 *     IopIsNotNativeDriverImage @ 0x140891974 (IopIsNotNativeDriverImage.c)
 *     ExpQueryCodeIntegrityCertificateInfo @ 0x14094A6EC (ExpQueryCodeIntegrityCertificateInfo.c)
 *     ExpQueryElamCertInfo @ 0x14094A928 (ExpQueryElamCertInfo.c)
 *     SLUpdateLicenseDataInternal @ 0x14094E2E0 (SLUpdateLicenseDataInternal.c)
 *     CMFReadCompressedSegment @ 0x140958F40 (CMFReadCompressedSegment.c)
 *     CMFSystemThreadRoutine @ 0x140959420 (CMFSystemThreadRoutine.c)
 *     ApiSetpLoadSchemaImage @ 0x14095EE14 (ApiSetpLoadSchemaImage.c)
 *     AslpFileLargeMapCreate @ 0x14096C454 (AslpFileLargeMapCreate.c)
 *     Phase1InitializationDiscard @ 0x140A3AAD4 (Phase1InitializationDiscard.c)
 * Callees:
 *     <none>
 */

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
  return KiServiceInternal(SectionHandle);
}
