/*
 * XREFs of __report_rangecheckfailure @ 0x1404FE1FC
 * Callers:
 *     AuthzBasepEvaluateAceCondition @ 0x14022BF60 (AuthzBasepEvaluateAceCondition.c)
 *     KeWaitForMultipleObjects @ 0x140310FC0 (KeWaitForMultipleObjects.c)
 *     LdrpGetResourceFileName @ 0x1403A6A94 (LdrpGetResourceFileName.c)
 *     strspn @ 0x1403DAFC0 (strspn.c)
 *     strtok_s @ 0x1403DF4C0 (strtok_s.c)
 *     PopDetermineBucketFrequencies @ 0x140583780 (PopDetermineBucketFrequencies.c)
 *     LocalGetStringForControl @ 0x14069DF74 (LocalGetStringForControl.c)
 *     SepParseElamCertResources @ 0x14081238C (SepParseElamCertResources.c)
 *     RtlCultureNameToLCID @ 0x140826300 (RtlCultureNameToLCID.c)
 *     WdipSemLoadNextEndEvent @ 0x1408322D0 (WdipSemLoadNextEndEvent.c)
 *     WdipSemLoadNextScenario @ 0x140832C60 (WdipSemLoadNextScenario.c)
 *     _CmGetDeviceChildren @ 0x14083AE90 (_CmGetDeviceChildren.c)
 *     PiDevCfgSplitDriverConfigurationId @ 0x1409626EC (PiDevCfgSplitDriverConfigurationId.c)
 *     RtlUnicodeStringToInt64 @ 0x1409BD6D0 (RtlUnicodeStringToInt64.c)
 *     WheapApplyPolicyChanges @ 0x140A09414 (WheapApplyPolicyChanges.c)
 *     KdInitSystem @ 0x140AB2040 (KdInitSystem.c)
 *     VfUtilPrintCheckinString @ 0x140AC3804 (VfUtilPrintCheckinString.c)
 *     HdlspPutWideString @ 0x140AEC30C (HdlspPutWideString.c)
 *     CmpInitializeMachineDependentConfiguration @ 0x140B3A520 (CmpInitializeMachineDependentConfiguration.c)
 *     CmpSetupConfigurationTree @ 0x140B3AAA4 (CmpSetupConfigurationTree.c)
 *     IopInitializeResourceMap @ 0x140B44840 (IopInitializeResourceMap.c)
 *     InitBootProcessor @ 0x140B52774 (InitBootProcessor.c)
 *     CmSelectQualifiedInstallLanguage @ 0x140B5C4DC (CmSelectQualifiedInstallLanguage.c)
 *     KsepMatchInitBiosInfo @ 0x140B6519C (KsepMatchInitBiosInfo.c)
 *     IopInitCrashDumpDuringSysInit @ 0x140B726E0 (IopInitCrashDumpDuringSysInit.c)
 * Callees:
 *     KeBugCheckEx @ 0x14041E390 (KeBugCheckEx.c)
 */

void __noreturn _report_rangecheckfailure()
{
  KeBugCheckEx(0xF7u, 8uLL, _security_cookie, _security_cookie_complement, 0LL);
}
