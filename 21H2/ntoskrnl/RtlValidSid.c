/*
 * XREFs of RtlValidSid @ 0x140651540
 * Callers:
 *     AdtpPackageParameters @ 0x1403C0AE4 (AdtpPackageParameters.c)
 *     SepValidateCAPIDs @ 0x1405981B4 (SepValidateCAPIDs.c)
 *     RtlAddMandatoryAce @ 0x140650540 (RtlAddMandatoryAce.c)
 *     RtlpSetSecurityObject @ 0x1406531E0 (RtlpSetSecurityObject.c)
 *     RtlValidSecurityDescriptor @ 0x140653D20 (RtlValidSecurityDescriptor.c)
 *     RtlpValidateSidBuffer @ 0x14066897C (RtlpValidateSidBuffer.c)
 *     RtlConvertSidToUnicodeString @ 0x1406697D0 (RtlConvertSidToUnicodeString.c)
 *     RtlLengthSidAsUnicodeString @ 0x14066A4A8 (RtlLengthSidAsUnicodeString.c)
 *     SeCaptureSidAndAttributesArray @ 0x1406CCCC0 (SeCaptureSidAndAttributesArray.c)
 *     SeCaptureSid @ 0x1406CDBCC (SeCaptureSid.c)
 *     _PnpGetPropertiesSecurityDescriptor @ 0x1407683F4 (_PnpGetPropertiesSecurityDescriptor.c)
 *     _CmGetRegKeySecurityDescriptor @ 0x14077EEDC (_CmGetRegKeySecurityDescriptor.c)
 *     RtlAddProcessTrustLabelAce @ 0x14079DF90 (RtlAddProcessTrustLabelAce.c)
 *     _PnpGetEnumSecurityDescriptor @ 0x1407CCABC (_PnpGetEnumSecurityDescriptor.c)
 *     IopCheckGetQuotaBufferValidity @ 0x1408913BC (IopCheckGetQuotaBufferValidity.c)
 *     IoCheckQuotaBufferValidity @ 0x140893910 (IoCheckQuotaBufferValidity.c)
 *     NtQueryQuotaInformationFile @ 0x140895CA0 (NtQueryQuotaInformationFile.c)
 *     PiAuCheckClientInteractive @ 0x1408A3C08 (PiAuCheckClientInteractive.c)
 *     NtManageHotPatch @ 0x1408CEEA0 (NtManageHotPatch.c)
 *     RtlAddAccessFilterAce @ 0x1409123B0 (RtlAddAccessFilterAce.c)
 *     RtlAddResourceAttributeAce @ 0x1409126D0 (RtlAddResourceAttributeAce.c)
 *     RtlpAddKnownObjectAce @ 0x140912A00 (RtlpAddKnownObjectAce.c)
 *     SepReadSingleCap @ 0x140925E88 (SepReadSingleCap.c)
 *     SddlAddAccessFilterAce @ 0x140926328 (SddlAddAccessFilterAce.c)
 *     SddlAddMandatoryAce @ 0x140926540 (SddlAddMandatoryAce.c)
 *     SddlAddProcessTrustLabelAce @ 0x1409266A4 (SddlAddProcessTrustLabelAce.c)
 *     SddlAddScopedPolicyIDAce @ 0x140926804 (SddlAddScopedPolicyIDAce.c)
 *     DrvDbGetSecurityDescriptor @ 0x14097EADC (DrvDbGetSecurityDescriptor.c)
 *     PiAuCreateUserSids @ 0x140A52978 (PiAuCreateUserSids.c)
 *     PiAuCreateStandardSecurityObject @ 0x140A52B9C (PiAuCreateStandardSecurityObject.c)
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
