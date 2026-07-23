/*
 * XREFs of __report_rangecheckfailure @ 0x1404B66AC
 * Callers:
 *     KeWaitForMultipleObjects @ 0x1402F03E0 (KeWaitForMultipleObjects.c)
 *     AuthzBasepEvaluateAceCondition @ 0x1402F24D0 (AuthzBasepEvaluateAceCondition.c)
 *     LdrpGetResourceFileName @ 0x140380798 (LdrpGetResourceFileName.c)
 *     strspn @ 0x1403D3D90 (strspn.c)
 *     strtok_s @ 0x1403D8170 (strtok_s.c)
 *     LocalGetStringForControl @ 0x14066A870 (LocalGetStringForControl.c)
 *     RtlCultureNameToLCID @ 0x14078EEE0 (RtlCultureNameToLCID.c)
 *     WdipSemLoadNextEndEvent @ 0x1407995F4 (WdipSemLoadNextEndEvent.c)
 *     WdipSemLoadNextScenario @ 0x140799F84 (WdipSemLoadNextScenario.c)
 *     SepParseElamCertResources @ 0x1407ABC50 (SepParseElamCertResources.c)
 *     PiDevCfgSplitDriverConfigurationId @ 0x1408AA78C (PiDevCfgSplitDriverConfigurationId.c)
 *     PopStatsNotifyPowerRequestCsState @ 0x1408F67F0 (PopStatsNotifyPowerRequestCsState.c)
 *     RtlUnicodeStringToInt64 @ 0x1409150E0 (RtlUnicodeStringToInt64.c)
 *     WheapApplyPolicyChanges @ 0x14095DD1C (WheapApplyPolicyChanges.c)
 *     _CmGetDeviceChildren @ 0x140979F7C (_CmGetDeviceChildren.c)
 *     KdInitSystem @ 0x1409B6160 (KdInitSystem.c)
 *     VfUtilPrintCheckinString @ 0x1409C7900 (VfUtilPrintCheckinString.c)
 *     HdlspPutWideString @ 0x1409F11E8 (HdlspPutWideString.c)
 *     IopInitializeResourceMap @ 0x140A3B34C (IopInitializeResourceMap.c)
 *     InitBootProcessor @ 0x140A3BAF4 (InitBootProcessor.c)
 *     MiInitNucleus @ 0x140A43F34 (MiInitNucleus.c)
 *     CmpInitializeMachineDependentConfiguration @ 0x140A59C04 (CmpInitializeMachineDependentConfiguration.c)
 *     CmpSetupConfigurationTree @ 0x140A5A198 (CmpSetupConfigurationTree.c)
 *     CmSelectQualifiedInstallLanguage @ 0x140A607C0 (CmSelectQualifiedInstallLanguage.c)
 *     KsepMatchInitBiosInfo @ 0x140A6B22C (KsepMatchInitBiosInfo.c)
 *     IopInitCrashDumpDuringSysInit @ 0x140A6DE38 (IopInitCrashDumpDuringSysInit.c)
 * Callees:
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 */

void __noreturn _report_rangecheckfailure()
{
  KeBugCheckEx(0xF7u, 8uLL, _security_cookie, _security_cookie_complement, 0LL);
}
