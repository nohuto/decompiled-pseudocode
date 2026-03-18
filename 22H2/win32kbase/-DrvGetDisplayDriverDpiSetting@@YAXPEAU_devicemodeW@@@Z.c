/*
 * XREFs of ?DrvGetDisplayDriverDpiSetting@@YAXPEAU_devicemodeW@@@Z @ 0x1C0017968
 * Callers:
 *     DrvGetDisplayDriverParameters @ 0x1C00188E0 (DrvGetDisplayDriverParameters.c)
 *     ?DrvGetDevModeForLddmPath@@YAJPEAUtagGRAPHICS_DEVICE@@KPEAU_devicemodeW@@PEA_N@Z @ 0x1C01614AC (-DrvGetDevModeForLddmPath@@YAJPEAUtagGRAPHICS_DEVICE@@KPEAU_devicemodeW@@PEA_N@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall DrvGetDisplayDriverDpiSetting(struct _devicemodeW *a1)
{
  __int64 v2; // rdx
  WORD v3; // ax

  v2 = *(_QWORD *)(SGDGetSessionState() + 24);
  if ( *(_DWORD *)(v2 + 1280) )
    v3 = *(_WORD *)(v2 + 1248);
  else
    v3 = 96;
  a1->dmLogPixels = v3;
}
