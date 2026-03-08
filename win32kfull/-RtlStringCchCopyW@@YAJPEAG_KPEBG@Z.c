/*
 * XREFs of ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C010A9B4
 * Callers:
 *     xxxSetDeskWallpaper @ 0x1C00D7F38 (xxxSetDeskWallpaper.c)
 *     LoadWallpaperFilenameFromRegistry @ 0x1C00D8520 (LoadWallpaperFilenameFromRegistry.c)
 *     _RegisterUserApiHook @ 0x1C00DD234 (_RegisterUserApiHook.c)
 *     _RegisterDManipHook @ 0x1C00DD6D0 (_RegisterDManipHook.c)
 *     NtUserShutdownBlockReasonCreate @ 0x1C00EA2E0 (NtUserShutdownBlockReasonCreate.c)
 *     NtUserShutdownBlockReasonQuery @ 0x1C00EE360 (NtUserShutdownBlockReasonQuery.c)
 *     ?xxxGetWorkAreasFromShell@@YA_NXZ @ 0x1C00F7B94 (-xxxGetWorkAreasFromShell@@YA_NXZ.c)
 *     xxxSystemParametersInfoWorker @ 0x1C01032D0 (xxxSystemParametersInfoWorker.c)
 *     ?ReadPointerDeviceCfgStringSetting@@YAJPEAXPEBGPEAGK@Z @ 0x1C010A340 (-ReadPointerDeviceCfgStringSetting@@YAJPEAXPEBGPEAGK@Z.c)
 *     NtUserGetDManipHookInitFunction @ 0x1C010A450 (NtUserGetDManipHookInitFunction.c)
 *     NtUserFindWindowEx @ 0x1C010A500 (NtUserFindWindowEx.c)
 *     _GetWOWClass @ 0x1C01BF328 (_GetWOWClass.c)
 *     UserGetHipDeviceInfo @ 0x1C01C4660 (UserGetHipDeviceInfo.c)
 *     _SetDisplayMapping @ 0x1C01C4A90 (_SetDisplayMapping.c)
 *     ?SetHighContrastWorker@@YAHPEAUtagINTERNALSETHIGHCONTRAST@@HPEAH@Z @ 0x1C01C8DCC (-SetHighContrastWorker@@YAHPEAUtagINTERNALSETHIGHCONTRAST@@HPEAH@Z.c)
 *     ?GetDefaultWallpaperName@@YAXPEAGI@Z @ 0x1C0203894 (-GetDefaultWallpaperName@@YAXPEAGI@Z.c)
 *     ?FindMirrorDriver@@YAJPEBGPEAU_DISPLAY_DEVICEW@@@Z @ 0x1C0205904 (-FindMirrorDriver@@YAJPEBGPEAU_DISPLAY_DEVICEW@@@Z.c)
 *     xxxSendShutdownData @ 0x1C02163C0 (xxxSendShutdownData.c)
 *     ?UmfdEscEngGetFilePath@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1C02A9CC8 (-UmfdEscEngGetFilePath@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z.c)
 *     ?cjGetLogicalColorSpace@@YAHPEAXH0@Z @ 0x1C02D0A94 (-cjGetLogicalColorSpace@@YAHPEAXH0@Z.c)
 * Callees:
 *     RtlStringCopyWorkerW @ 0x1C010A9DC (RtlStringCopyWorkerW.c)
 */

NTSTATUS __fastcall RtlStringCchCopyW(unsigned __int16 *a1, size_t a2, size_t *a3)
{
  NTSTATUS result; // eax
  size_t v4; // [rsp+20h] [rbp-18h]

  if ( a2 - 1 <= 0x7FFFFFFE )
    return RtlStringCopyWorkerW(a1, a2, a3, (STRSAFE_PCNZWCH)a3, v4);
  result = -1073741811;
  if ( a2 )
    *a1 = 0;
  return result;
}
