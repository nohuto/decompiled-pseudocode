/*
 * XREFs of __report_rangecheckfailure @ 0x1404B646C
 * Callers:
 *     KeWaitForMultipleObjects @ 0x14024BB90 (KeWaitForMultipleObjects.c)
 *     AuthzBasepEvaluateAceCondition @ 0x14024DC80 (AuthzBasepEvaluateAceCondition.c)
 *     LdrpGetResourceFileName @ 0x140380C48 (LdrpGetResourceFileName.c)
 *     strspn @ 0x1403D3C20 (strspn.c)
 *     strtok_s @ 0x1403D8000 (strtok_s.c)
 *     LocalGetStringForControl @ 0x1406771A0 (LocalGetStringForControl.c)
 *     RtlCultureNameToLCID @ 0x140793140 (RtlCultureNameToLCID.c)
 *     WdipSemLoadNextEndEvent @ 0x1407993F4 (WdipSemLoadNextEndEvent.c)
 *     WdipSemLoadNextScenario @ 0x140799D84 (WdipSemLoadNextScenario.c)
 *     SepParseElamCertResources @ 0x1407ABA50 (SepParseElamCertResources.c)
 *     PiDevCfgSplitDriverConfigurationId @ 0x1408AA62C (PiDevCfgSplitDriverConfigurationId.c)
 *     PopStatsNotifyPowerRequestCsState @ 0x1408F6690 (PopStatsNotifyPowerRequestCsState.c)
 *     RtlUnicodeStringToInt64 @ 0x140914F80 (RtlUnicodeStringToInt64.c)
 *     WheapApplyPolicyChanges @ 0x14095DB3C (WheapApplyPolicyChanges.c)
 *     _CmGetDeviceChildren @ 0x140979D9C (_CmGetDeviceChildren.c)
 *     KdInitSystem @ 0x1409B5160 (KdInitSystem.c)
 *     VfUtilPrintCheckinString @ 0x1409C6900 (VfUtilPrintCheckinString.c)
 *     HdlspPutWideString @ 0x1409F01E8 (HdlspPutWideString.c)
 *     IopInitializeResourceMap @ 0x140A3A34C (IopInitializeResourceMap.c)
 *     InitBootProcessor @ 0x140A3AAF4 (InitBootProcessor.c)
 *     MiInitNucleus @ 0x140A42F34 (MiInitNucleus.c)
 *     CmpInitializeMachineDependentConfiguration @ 0x140A58C04 (CmpInitializeMachineDependentConfiguration.c)
 *     CmpSetupConfigurationTree @ 0x140A59198 (CmpSetupConfigurationTree.c)
 *     CmSelectQualifiedInstallLanguage @ 0x140A5F7C0 (CmSelectQualifiedInstallLanguage.c)
 *     KsepMatchInitBiosInfo @ 0x140A6A22C (KsepMatchInitBiosInfo.c)
 *     IopInitCrashDumpDuringSysInit @ 0x140A6CE38 (IopInitCrashDumpDuringSysInit.c)
 * Callees:
 *     KeBugCheckEx @ 0x1403FDEF0 (KeBugCheckEx.c)
 */

void __noreturn _report_rangecheckfailure()
{
  KeBugCheckEx(0xF7u, 8uLL, _security_cookie, _security_cookie_complement, 0LL);
}
