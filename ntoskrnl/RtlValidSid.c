/*
 * XREFs of RtlValidSid @ 0x1407C92A0
 * Callers:
 *     AdtpPackageParameters @ 0x1403958B4 (AdtpPackageParameters.c)
 *     SepValidateCAPIDs @ 0x1405B75BC (SepValidateCAPIDs.c)
 *     SeCaptureSidAndAttributesArray @ 0x140710470 (SeCaptureSidAndAttributesArray.c)
 *     SeCaptureSid @ 0x140710930 (SeCaptureSid.c)
 *     RtlAddMandatoryAce @ 0x140740AF0 (RtlAddMandatoryAce.c)
 *     RtlpValidateSidBuffer @ 0x140743CA0 (RtlpValidateSidBuffer.c)
 *     RtlLengthSidAsUnicodeString @ 0x140747878 (RtlLengthSidAsUnicodeString.c)
 *     RtlConvertSidToUnicodeString @ 0x1407479E0 (RtlConvertSidToUnicodeString.c)
 *     RtlValidSecurityDescriptor @ 0x14075F860 (RtlValidSecurityDescriptor.c)
 *     NtManageHotPatch @ 0x140784740 (NtManageHotPatch.c)
 *     SeCaptureSecurityDescriptor @ 0x1407C8A50 (SeCaptureSecurityDescriptor.c)
 *     _PnpGetEnumSecurityDescriptor @ 0x140856888 (_PnpGetEnumSecurityDescriptor.c)
 *     ExpInitFullProcessSecurityInfo @ 0x14085B9E0 (ExpInitFullProcessSecurityInfo.c)
 *     _CmGetRegKeySecurityDescriptor @ 0x14086D238 (_CmGetRegKeySecurityDescriptor.c)
 *     _PnpGetPropertiesSecurityDescriptor @ 0x14087C494 (_PnpGetPropertiesSecurityDescriptor.c)
 *     SddlAddMandatoryAce @ 0x1408A1E92 (SddlAddMandatoryAce.c)
 *     IopCheckGetQuotaBufferValidity @ 0x1409415E0 (IopCheckGetQuotaBufferValidity.c)
 *     IoCheckQuotaBufferValidity @ 0x140943F70 (IoCheckQuotaBufferValidity.c)
 *     NtQueryQuotaInformationFile @ 0x140948300 (NtQueryQuotaInformationFile.c)
 *     PiAuCheckClientInteractive @ 0x1409586E0 (PiAuCheckClientInteractive.c)
 *     RtlAddAccessFilterAce @ 0x1409B8030 (RtlAddAccessFilterAce.c)
 *     RtlAddResourceAttributeAce @ 0x1409B8350 (RtlAddResourceAttributeAce.c)
 *     RtlpAddKnownObjectAce @ 0x1409B8680 (RtlpAddKnownObjectAce.c)
 *     SepReadSingleCap @ 0x1409CF278 (SepReadSingleCap.c)
 *     SddlAddAccessFilterAce @ 0x1409CF6F0 (SddlAddAccessFilterAce.c)
 *     SddlAddProcessTrustLabelAce @ 0x1409CF92C (SddlAddProcessTrustLabelAce.c)
 *     SddlAddScopedPolicyIDAce @ 0x1409CFA8C (SddlAddScopedPolicyIDAce.c)
 *     DrvDbGetSecurityDescriptor @ 0x140A6AD74 (DrvDbGetSecurityDescriptor.c)
 *     PiAuCreateUserSids @ 0x140B5B564 (PiAuCreateUserSids.c)
 *     PiAuCreateStandardSecurityObject @ 0x140B5B788 (PiAuCreateStandardSecurityObject.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall RtlValidSid(PSID Sid)
{
  return (unsigned __int64)Sid > 0x7FFFFFFF0000LL && (*(_BYTE *)Sid & 0xF) == 1 && *((_BYTE *)Sid + 1) <= 0xFu;
}
