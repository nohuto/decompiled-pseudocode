/*
 * XREFs of ZwCreateSection @ 0x1403FAEC0
 * Callers:
 *     CmSiCreateSectionForFile @ 0x1402F7C64 (CmSiCreateSectionForFile.c)
 *     LdrpMapResourceFile @ 0x14038021C (LdrpMapResourceFile.c)
 *     RtlFileMapMapView @ 0x1403BDA34 (RtlFileMapMapView.c)
 *     NtGetNlsSectionPtr @ 0x14060EE10 (NtGetNlsSectionPtr.c)
 *     ExpGetGlobalLocaleSection @ 0x1406A268C (ExpGetGlobalLocaleSection.c)
 *     KsepSdbMapToMemory @ 0x140755C14 (KsepSdbMapToMemory.c)
 *     PiInitializeDDB @ 0x14077EB24 (PiInitializeDDB.c)
 *     ExInitializeLeapSecondData @ 0x1407A90AC (ExInitializeLeapSecondData.c)
 *     SepRmLsaConnectRequest @ 0x1407AD5B0 (SepRmLsaConnectRequest.c)
 *     CmFcpManagerCreateSection @ 0x14087E6D0 (CmFcpManagerCreateSection.c)
 *     IopIsNotNativeDriverImage @ 0x140891A84 (IopIsNotNativeDriverImage.c)
 *     ExpQueryCodeIntegrityCertificateInfo @ 0x14094A86C (ExpQueryCodeIntegrityCertificateInfo.c)
 *     ExpQueryElamCertInfo @ 0x14094AAA8 (ExpQueryElamCertInfo.c)
 *     SLUpdateLicenseDataInternal @ 0x14094E460 (SLUpdateLicenseDataInternal.c)
 *     CMFReadCompressedSegment @ 0x1409590C0 (CMFReadCompressedSegment.c)
 *     CMFSystemThreadRoutine @ 0x1409595A0 (CMFSystemThreadRoutine.c)
 *     ApiSetpLoadSchemaImage @ 0x14095EFA4 (ApiSetpLoadSchemaImage.c)
 *     AslpFileLargeMapCreate @ 0x14096C5E4 (AslpFileLargeMapCreate.c)
 *     Phase1InitializationDiscard @ 0x140A3C6A4 (Phase1InitializationDiscard.c)
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
