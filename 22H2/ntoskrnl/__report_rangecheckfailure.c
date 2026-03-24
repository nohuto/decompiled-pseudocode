/*
 * XREFs of __report_rangecheckfailure @ 0x1404B63BC
 * Callers:
 *     KeWaitForMultipleObjects @ 0x14024B500 (KeWaitForMultipleObjects.c)
 *     AuthzBasepEvaluateAceCondition @ 0x14024D5F0 (AuthzBasepEvaluateAceCondition.c)
 *     LdrpGetResourceFileName @ 0x1403803F8 (LdrpGetResourceFileName.c)
 *     strspn @ 0x1403D3520 (strspn.c)
 *     strtok_s @ 0x1403D7900 (strtok_s.c)
 *     LocalGetStringForControl @ 0x1406EFF90 (LocalGetStringForControl.c)
 *     RtlCultureNameToLCID @ 0x14078EC20 (RtlCultureNameToLCID.c)
 *     WdipSemLoadNextEndEvent @ 0x140794284 (WdipSemLoadNextEndEvent.c)
 *     WdipSemLoadNextScenario @ 0x140794C14 (WdipSemLoadNextScenario.c)
 *     SepParseElamCertResources @ 0x1407ABE90 (SepParseElamCertResources.c)
 *     PiDevCfgSplitDriverConfigurationId @ 0x1408AA67C (PiDevCfgSplitDriverConfigurationId.c)
 *     PopStatsNotifyPowerRequestCsState @ 0x1408F66E0 (PopStatsNotifyPowerRequestCsState.c)
 *     RtlUnicodeStringToInt64 @ 0x140914FD0 (RtlUnicodeStringToInt64.c)
 *     WheapApplyPolicyChanges @ 0x14095DB8C (WheapApplyPolicyChanges.c)
 *     _CmGetDeviceChildren @ 0x140979DEC (_CmGetDeviceChildren.c)
 *     KdInitSystem @ 0x1409B5160 (KdInitSystem.c)
 *     VfUtilPrintCheckinString @ 0x1409C6910 (VfUtilPrintCheckinString.c)
 *     HdlspPutWideString @ 0x1409F01E8 (HdlspPutWideString.c)
 *     IopInitializeResourceMap @ 0x140A39780 (IopInitializeResourceMap.c)
 *     InitBootProcessor @ 0x140A39F24 (InitBootProcessor.c)
 *     MiInitNucleus @ 0x140A42364 (MiInitNucleus.c)
 *     CmpInitializeMachineDependentConfiguration @ 0x140A58C04 (CmpInitializeMachineDependentConfiguration.c)
 *     CmpSetupConfigurationTree @ 0x140A59198 (CmpSetupConfigurationTree.c)
 *     CmSelectQualifiedInstallLanguage @ 0x140A5F7C0 (CmSelectQualifiedInstallLanguage.c)
 *     KsepMatchInitBiosInfo @ 0x140A6A22C (KsepMatchInitBiosInfo.c)
 *     IopInitCrashDumpDuringSysInit @ 0x140A6CE38 (IopInitCrashDumpDuringSysInit.c)
 * Callees:
 *     KeBugCheckEx @ 0x1403FD570 (KeBugCheckEx.c)
 */

void __noreturn _report_rangecheckfailure()
{
  KeBugCheckEx(0xF7u, 8uLL, _security_cookie, _security_cookie_complement, 0LL);
}
