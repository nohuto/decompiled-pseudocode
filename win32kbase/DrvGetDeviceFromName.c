/*
 * XREFs of DrvGetDeviceFromName @ 0x1C003C370
 * Callers:
 *     ?CheckAndNotifyDualView@@YA?AW4_DUALVIEW_STATE@@PEAU_UNICODE_STRING@@PEAU_MDEV@@@Z @ 0x1C0022BB4 (-CheckAndNotifyDualView@@YA-AW4_DUALVIEW_STATE@@PEAU_UNICODE_STRING@@PEAU_MDEV@@@Z.c)
 *     ?DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C0022E20 (-DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GET.c)
 *     DrvGetHDEV @ 0x1C003C250 (DrvGetHDEV.c)
 *     DrvEnumDisplaySettings @ 0x1C006C130 (DrvEnumDisplaySettings.c)
 *     DrvEnumDisplayDevices @ 0x1C0071810 (DrvEnumDisplayDevices.c)
 *     ?DrvGetDeviceFromNameAndValidateDevice@@YAJPEAU_UNICODE_STRING@@W4_MODE@@PEAPEAUtagGRAPHICS_DEVICE@@@Z @ 0x1C00AFAD4 (-DrvGetDeviceFromNameAndValidateDevice@@YAJPEAU_UNICODE_STRING@@W4_MODE@@PEAPEAUtagGRAPHICS_DEVI.c)
 *     DrvChangeDisplaySettingsPreValidate @ 0x1C019288C (DrvChangeDisplaySettingsPreValidate.c)
 *     DrvSetPruneFlag @ 0x1C01949DC (DrvSetPruneFlag.c)
 *     DrvSetVideoParameters @ 0x1C0194B28 (DrvSetVideoParameters.c)
 *     ?DxgkEngQueryRemoteVidPnSourceFromGdiDisplayName@@YAJPEAU_D3DKMT_QUERYREMOTEVIDPNSOURCEFROMGDIDISPLAYNAME@@@Z @ 0x1C0195C40 (-DxgkEngQueryRemoteVidPnSourceFromGdiDisplayName@@YAJPEAU_D3DKMT_QUERYREMOTEVIDPNSOURCEFROMGDIDI.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DrvGetDeviceFromName(PCUNICODE_STRING String1)
{
  __int64 i; // rbx
  struct _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  DestinationString = 0LL;
  for ( i = *(_QWORD *)(*(_QWORD *)(SGDGetSessionState(String1) + 24) + 1264LL); i; i = *(_QWORD *)(i + 128) )
  {
    RtlInitUnicodeString(&DestinationString, (PCWSTR)(i + 64));
    if ( RtlEqualUnicodeString(String1, &DestinationString, 1u) )
      return i;
  }
  return 0LL;
}
