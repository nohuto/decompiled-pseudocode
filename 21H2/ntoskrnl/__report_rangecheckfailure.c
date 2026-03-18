/*
 * XREFs of __report_rangecheckfailure @ 0x140502A3C
 * Callers:
 *     AuthzBasepEvaluateAceCondition @ 0x140219130 (AuthzBasepEvaluateAceCondition.c)
 *     KeWaitForMultipleObjects @ 0x1402F13C0 (KeWaitForMultipleObjects.c)
 *     LdrpGetResourceFileName @ 0x1403D7C1C (LdrpGetResourceFileName.c)
 *     strspn @ 0x1403E2FD0 (strspn.c)
 *     strtok_s @ 0x1403E7440 (strtok_s.c)
 *     LocalGetStringForControl @ 0x1406768BC (LocalGetStringForControl.c)
 *     _CmGetDeviceChildren @ 0x1406D068C (_CmGetDeviceChildren.c)
 *     SepParseElamCertResources @ 0x14082E2BC (SepParseElamCertResources.c)
 *     RtlCultureNameToLCID @ 0x140830F20 (RtlCultureNameToLCID.c)
 *     WdipSemLoadNextEndEvent @ 0x14083F908 (WdipSemLoadNextEndEvent.c)
 *     WdipSemLoadNextScenario @ 0x14084028C (WdipSemLoadNextScenario.c)
 *     PiDevCfgSplitDriverConfigurationId @ 0x14094E74C (PiDevCfgSplitDriverConfigurationId.c)
 *     RtlUnicodeStringToInt64 @ 0x1409BA570 (RtlUnicodeStringToInt64.c)
 *     WheapApplyPolicyChanges @ 0x140A09578 (WheapApplyPolicyChanges.c)
 *     KdInitSystem @ 0x140A70470 (KdInitSystem.c)
 *     VfUtilPrintCheckinString @ 0x140A81E94 (VfUtilPrintCheckinString.c)
 *     HdlspPutWideString @ 0x140AAA2B0 (HdlspPutWideString.c)
 *     IopInitCrashDumpDuringSysInit @ 0x140AF71F0 (IopInitCrashDumpDuringSysInit.c)
 *     IopInitializeResourceMap @ 0x140AF7DC8 (IopInitializeResourceMap.c)
 *     InitBootProcessor @ 0x140AFB264 (InitBootProcessor.c)
 *     KsepMatchInitBiosInfo @ 0x140B001A8 (KsepMatchInitBiosInfo.c)
 *     CmSelectQualifiedInstallLanguage @ 0x140B146C4 (CmSelectQualifiedInstallLanguage.c)
 *     CmpInitializeMachineDependentConfiguration @ 0x140B17304 (CmpInitializeMachineDependentConfiguration.c)
 *     CmpSetupConfigurationTree @ 0x140B1789C (CmpSetupConfigurationTree.c)
 * Callees:
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

void __noreturn _report_rangecheckfailure()
{
  KeBugCheckEx(0xF7u, 8uLL, _security_cookie, _security_cookie_complement, 0LL);
}
