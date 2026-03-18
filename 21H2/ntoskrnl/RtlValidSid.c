/*
 * XREFs of RtlValidSid @ 0x1407B4660
 * Callers:
 *     AdtpPackageParameters @ 0x1403CC5E8 (AdtpPackageParameters.c)
 *     SepValidateCAPIDs @ 0x1405F5E3C (SepValidateCAPIDs.c)
 *     SeCaptureSid @ 0x14066846C (SeCaptureSid.c)
 *     RtlConvertSidToUnicodeString @ 0x140669DD0 (RtlConvertSidToUnicodeString.c)
 *     RtlLengthSidAsUnicodeString @ 0x14066B6D8 (RtlLengthSidAsUnicodeString.c)
 *     RtlpValidateSidBuffer @ 0x1406C1188 (RtlpValidateSidBuffer.c)
 *     NtManageHotPatch @ 0x1406C9390 (NtManageHotPatch.c)
 *     RtlAddMandatoryAce @ 0x1406CCC10 (RtlAddMandatoryAce.c)
 *     RtlValidSecurityDescriptor @ 0x140726610 (RtlValidSecurityDescriptor.c)
 *     RtlpSetSecurityObject @ 0x140726700 (RtlpSetSecurityObject.c)
 *     _CmGetRegKeySecurityDescriptor @ 0x1407438D8 (_CmGetRegKeySecurityDescriptor.c)
 *     _PnpGetPropertiesSecurityDescriptor @ 0x140743C8C (_PnpGetPropertiesSecurityDescriptor.c)
 *     SeCaptureSidAndAttributesArray @ 0x140799DB0 (SeCaptureSidAndAttributesArray.c)
 *     SeCaptureSecurityDescriptor @ 0x1407B3DD0 (SeCaptureSecurityDescriptor.c)
 *     RtlAddProcessTrustLabelAce @ 0x140848A40 (RtlAddProcessTrustLabelAce.c)
 *     _PnpGetEnumSecurityDescriptor @ 0x14085C290 (_PnpGetEnumSecurityDescriptor.c)
 *     ExpInitFullProcessSecurityInfo @ 0x14085F700 (ExpInitFullProcessSecurityInfo.c)
 *     SddlAddMandatoryAce @ 0x140882C7A (SddlAddMandatoryAce.c)
 *     IopCheckGetQuotaBufferValidity @ 0x140933E58 (IopCheckGetQuotaBufferValidity.c)
 *     IoCheckQuotaBufferValidity @ 0x1409360F0 (IoCheckQuotaBufferValidity.c)
 *     NtQueryQuotaInformationFile @ 0x140939960 (NtQueryQuotaInformationFile.c)
 *     PiAuCheckClientInteractive @ 0x140949890 (PiAuCheckClientInteractive.c)
 *     RtlAddAccessFilterAce @ 0x1409B7E50 (RtlAddAccessFilterAce.c)
 *     RtlAddResourceAttributeAce @ 0x1409B8170 (RtlAddResourceAttributeAce.c)
 *     RtlpAddKnownObjectAce @ 0x1409B84A4 (RtlpAddKnownObjectAce.c)
 *     SepReadSingleCap @ 0x1409CF5C8 (SepReadSingleCap.c)
 *     SddlAddAccessFilterAce @ 0x1409CF980 (SddlAddAccessFilterAce.c)
 *     SddlAddProcessTrustLabelAce @ 0x1409CFB98 (SddlAddProcessTrustLabelAce.c)
 *     SddlAddScopedPolicyIDAce @ 0x1409CFCF8 (SddlAddScopedPolicyIDAce.c)
 *     DrvDbGetSecurityDescriptor @ 0x140A305C4 (DrvDbGetSecurityDescriptor.c)
 *     PiAuCreateUserSids @ 0x140B223B4 (PiAuCreateUserSids.c)
 *     PiAuCreateStandardSecurityObject @ 0x140B225D8 (PiAuCreateStandardSecurityObject.c)
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
