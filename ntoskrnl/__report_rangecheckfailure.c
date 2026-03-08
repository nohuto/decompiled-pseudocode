/*
 * XREFs of __report_rangecheckfailure @ 0x1404FBCCC
 * Callers:
 *     AuthzBasepEvaluateAceCondition @ 0x140246980 (AuthzBasepEvaluateAceCondition.c)
 *     KeWaitForMultipleObjects @ 0x1403516C0 (KeWaitForMultipleObjects.c)
 *     LdrpGetResourceFileName @ 0x1403A1D24 (LdrpGetResourceFileName.c)
 *     strspn @ 0x1403D5AA0 (strspn.c)
 *     strtok_s @ 0x1403D9FA0 (strtok_s.c)
 *     PopDetermineBucketFrequencies @ 0x140581250 (PopDetermineBucketFrequencies.c)
 *     LocalGetStringForControl @ 0x140750814 (LocalGetStringForControl.c)
 *     RtlCultureNameToLCID @ 0x1407FE570 (RtlCultureNameToLCID.c)
 *     SepParseElamCertResources @ 0x14081AB7C (SepParseElamCertResources.c)
 *     WdipSemLoadNextEndEvent @ 0x140832620 (WdipSemLoadNextEndEvent.c)
 *     WdipSemLoadNextScenario @ 0x140832FB0 (WdipSemLoadNextScenario.c)
 *     _CmGetDeviceChildren @ 0x140839DE0 (_CmGetDeviceChildren.c)
 *     PiDevCfgSplitDriverConfigurationId @ 0x14095F6CC (PiDevCfgSplitDriverConfigurationId.c)
 *     RtlUnicodeStringToInt64 @ 0x1409BA6A0 (RtlUnicodeStringToInt64.c)
 *     WheapApplyPolicyChanges @ 0x140A06724 (WheapApplyPolicyChanges.c)
 *     KdInitSystem @ 0x140AAE040 (KdInitSystem.c)
 *     VfUtilPrintCheckinString @ 0x140ABF804 (VfUtilPrintCheckinString.c)
 *     HdlspPutWideString @ 0x140AE830C (HdlspPutWideString.c)
 *     CmSelectQualifiedInstallLanguage @ 0x140B333A8 (CmSelectQualifiedInstallLanguage.c)
 *     KsepMatchInitBiosInfo @ 0x140B35308 (KsepMatchInitBiosInfo.c)
 *     IopInitializeResourceMap @ 0x140B36130 (IopInitializeResourceMap.c)
 *     InitBootProcessor @ 0x140B47864 (InitBootProcessor.c)
 *     CmpInitializeMachineDependentConfiguration @ 0x140B520BC (CmpInitializeMachineDependentConfiguration.c)
 *     CmpSetupConfigurationTree @ 0x140B52640 (CmpSetupConfigurationTree.c)
 *     IopInitCrashDumpDuringSysInit @ 0x140B6E3C0 (IopInitCrashDumpDuringSysInit.c)
 * Callees:
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 */

void __noreturn _report_rangecheckfailure()
{
  KeBugCheckEx(0xF7u, 8uLL, _security_cookie, _security_cookie_complement, 0LL);
}
