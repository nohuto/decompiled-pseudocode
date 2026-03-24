/*
 * XREFs of RtlValidSid @ 0x14065C720
 * Callers:
 *     AdtpPackageParameters @ 0x1403C06B4 (AdtpPackageParameters.c)
 *     SepValidateCAPIDs @ 0x140597F84 (SepValidateCAPIDs.c)
 *     SeCaptureSidAndAttributesArray @ 0x1405DD560 (SeCaptureSidAndAttributesArray.c)
 *     SeCaptureSid @ 0x1405DE46C (SeCaptureSid.c)
 *     RtlAddMandatoryAce @ 0x14065B720 (RtlAddMandatoryAce.c)
 *     RtlpSetSecurityObject @ 0x14065E3C0 (RtlpSetSecurityObject.c)
 *     RtlValidSecurityDescriptor @ 0x14065EF00 (RtlValidSecurityDescriptor.c)
 *     RtlpValidateSidBuffer @ 0x14067374C (RtlpValidateSidBuffer.c)
 *     RtlConvertSidToUnicodeString @ 0x1406745A0 (RtlConvertSidToUnicodeString.c)
 *     RtlLengthSidAsUnicodeString @ 0x140676DD8 (RtlLengthSidAsUnicodeString.c)
 *     _PnpGetPropertiesSecurityDescriptor @ 0x140768234 (_PnpGetPropertiesSecurityDescriptor.c)
 *     _CmGetRegKeySecurityDescriptor @ 0x14077ED1C (_CmGetRegKeySecurityDescriptor.c)
 *     RtlAddProcessTrustLabelAce @ 0x14079DD90 (RtlAddProcessTrustLabelAce.c)
 *     _PnpGetEnumSecurityDescriptor @ 0x1407CC94C (_PnpGetEnumSecurityDescriptor.c)
 *     IopCheckGetQuotaBufferValidity @ 0x14089125C (IopCheckGetQuotaBufferValidity.c)
 *     IoCheckQuotaBufferValidity @ 0x1408937B0 (IoCheckQuotaBufferValidity.c)
 *     NtQueryQuotaInformationFile @ 0x140895B40 (NtQueryQuotaInformationFile.c)
 *     PiAuCheckClientInteractive @ 0x1408A3AA8 (PiAuCheckClientInteractive.c)
 *     NtManageHotPatch @ 0x1408CED40 (NtManageHotPatch.c)
 *     RtlAddAccessFilterAce @ 0x140912250 (RtlAddAccessFilterAce.c)
 *     RtlAddResourceAttributeAce @ 0x140912570 (RtlAddResourceAttributeAce.c)
 *     RtlpAddKnownObjectAce @ 0x1409128A0 (RtlpAddKnownObjectAce.c)
 *     SepReadSingleCap @ 0x140925D28 (SepReadSingleCap.c)
 *     SddlAddAccessFilterAce @ 0x1409261C8 (SddlAddAccessFilterAce.c)
 *     SddlAddMandatoryAce @ 0x1409263E0 (SddlAddMandatoryAce.c)
 *     SddlAddProcessTrustLabelAce @ 0x140926544 (SddlAddProcessTrustLabelAce.c)
 *     SddlAddScopedPolicyIDAce @ 0x1409266A4 (SddlAddScopedPolicyIDAce.c)
 *     DrvDbGetSecurityDescriptor @ 0x14097E8FC (DrvDbGetSecurityDescriptor.c)
 *     PiAuCreateUserSids @ 0x140A51978 (PiAuCreateUserSids.c)
 *     PiAuCreateStandardSecurityObject @ 0x140A51B9C (PiAuCreateStandardSecurityObject.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall RtlValidSid(PSID Sid)
{
  BOOLEAN result; // al

  if ( (unsigned __int64)Sid <= 0x7FFFFFFF0000LL )
    return 0;
  result = *(_BYTE *)Sid & 0xF;
  if ( result != 1 || *((_BYTE *)Sid + 1) > 0xFu )
    return 0;
  return result;
}
