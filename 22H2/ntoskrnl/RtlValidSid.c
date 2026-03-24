/*
 * XREFs of RtlValidSid @ 0x1406D54E0
 * Callers:
 *     AdtpPackageParameters @ 0x1403C0314 (AdtpPackageParameters.c)
 *     SepValidateCAPIDs @ 0x140597EC4 (SepValidateCAPIDs.c)
 *     SeCaptureSidAndAttributesArray @ 0x1405DD560 (SeCaptureSidAndAttributesArray.c)
 *     SeCaptureSid @ 0x1405DE46C (SeCaptureSid.c)
 *     RtlAddMandatoryAce @ 0x1406D44E0 (RtlAddMandatoryAce.c)
 *     RtlpSetSecurityObject @ 0x1406D7180 (RtlpSetSecurityObject.c)
 *     RtlValidSecurityDescriptor @ 0x1406D7CC0 (RtlValidSecurityDescriptor.c)
 *     RtlpValidateSidBuffer @ 0x1406EC53C (RtlpValidateSidBuffer.c)
 *     RtlConvertSidToUnicodeString @ 0x1406ED390 (RtlConvertSidToUnicodeString.c)
 *     RtlLengthSidAsUnicodeString @ 0x1406EFBC8 (RtlLengthSidAsUnicodeString.c)
 *     _PnpGetPropertiesSecurityDescriptor @ 0x140767854 (_PnpGetPropertiesSecurityDescriptor.c)
 *     _CmGetRegKeySecurityDescriptor @ 0x14077EC1C (_CmGetRegKeySecurityDescriptor.c)
 *     RtlAddProcessTrustLabelAce @ 0x14079E1C0 (RtlAddProcessTrustLabelAce.c)
 *     _PnpGetEnumSecurityDescriptor @ 0x1407CC86C (_PnpGetEnumSecurityDescriptor.c)
 *     IopCheckGetQuotaBufferValidity @ 0x1408912AC (IopCheckGetQuotaBufferValidity.c)
 *     IoCheckQuotaBufferValidity @ 0x140893800 (IoCheckQuotaBufferValidity.c)
 *     NtQueryQuotaInformationFile @ 0x140895B90 (NtQueryQuotaInformationFile.c)
 *     PiAuCheckClientInteractive @ 0x1408A3AF8 (PiAuCheckClientInteractive.c)
 *     NtManageHotPatch @ 0x1408CED90 (NtManageHotPatch.c)
 *     RtlAddAccessFilterAce @ 0x1409122A0 (RtlAddAccessFilterAce.c)
 *     RtlAddResourceAttributeAce @ 0x1409125C0 (RtlAddResourceAttributeAce.c)
 *     RtlpAddKnownObjectAce @ 0x1409128F0 (RtlpAddKnownObjectAce.c)
 *     SepReadSingleCap @ 0x140925D78 (SepReadSingleCap.c)
 *     SddlAddAccessFilterAce @ 0x140926218 (SddlAddAccessFilterAce.c)
 *     SddlAddMandatoryAce @ 0x140926430 (SddlAddMandatoryAce.c)
 *     SddlAddProcessTrustLabelAce @ 0x140926594 (SddlAddProcessTrustLabelAce.c)
 *     SddlAddScopedPolicyIDAce @ 0x1409266F4 (SddlAddScopedPolicyIDAce.c)
 *     DrvDbGetSecurityDescriptor @ 0x14097E94C (DrvDbGetSecurityDescriptor.c)
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
