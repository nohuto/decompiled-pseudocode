/*
 * XREFs of GreIncrementDisplaySettingsUniqueness @ 0x1C00CCE70
 * Callers:
 *     DxgkEngNotifyDisplayChange @ 0x1C000FDC0 (DxgkEngNotifyDisplayChange.c)
 *     DrvDisableMDEV @ 0x1C001D710 (DrvDisableMDEV.c)
 *     DrvEnableMDEV @ 0x1C001D978 (DrvEnableMDEV.c)
 *     ?DrvDisableDisplay@@YAHPEAUHDEV__@@H@Z @ 0x1C001DC20 (-DrvDisableDisplay@@YAHPEAUHDEV__@@H@Z.c)
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPATHSMODALITY@@PEAXHHPEAU_MDEV@@PEAPEAU4@KHHHU_CDS_INTERNAL_FLAGS@@@Z @ 0x1C001E2BC (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPA.c)
 *     ApplyPathsModality @ 0x1C00C89C8 (ApplyPathsModality.c)
 *     GreResumeDirectDraw @ 0x1C00CCE50 (GreResumeDirectDraw.c)
 *     ?DrvEnableDisplay@@YAHPEAUHDEV__@@@Z @ 0x1C00D7E30 (-DrvEnableDisplay@@YAHPEAUHDEV__@@@Z.c)
 *     VideoPortCalloutThread @ 0x1C00D93A8 (VideoPortCalloutThread.c)
 *     UserNotifyUniversalScaleFactorChanged @ 0x1C017CCD4 (UserNotifyUniversalScaleFactorChanged.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GreIncrementDisplaySettingsUniqueness(__int64 a1)
{
  __int64 result; // rax

  result = *(_QWORD *)(*(_QWORD *)(SGDGetSessionState(a1) + 24) + 1928LL);
  if ( result )
  {
    _InterlockedIncrement((volatile signed __int32 *)(result + 1573008));
    return DisplayScenarioJournalDisplayUniquenessIncremented();
  }
  return result;
}
