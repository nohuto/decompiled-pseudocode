/*
 * XREFs of ?RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1C00C1278
 * Callers:
 *     ?CreateShutdownEvent@@YAJPEBGKPEAPEAX@Z @ 0x1C00BD4DC (-CreateShutdownEvent@@YAJPEBGKPEAPEAX@Z.c)
 *     EditionCreateWindowStationEntryPoint @ 0x1C00BDD10 (EditionCreateWindowStationEntryPoint.c)
 *     xxxResolveDesktop @ 0x1C00BF660 (xxxResolveDesktop.c)
 *     ?CreateDesktopNotificationEvent@@YAJPEAX@Z @ 0x1C00C18D0 (-CreateDesktopNotificationEvent@@YAJPEAX@Z.c)
 *     ?GrepDwmCreateComposedEvent@@YAJPEAUDwmState@@@Z @ 0x1C00C1E48 (-GrepDwmCreateComposedEvent@@YAJPEAUDwmState@@@Z.c)
 *     xxxSystemParametersInfoWorker @ 0x1C01032D0 (xxxSystemParametersInfoWorker.c)
 *     ?zzzInternalSetSystemCursor@@YAXPEAUtagCURSOR@@IPEAU_UNICODE_STRING@@W4InputTracing_SetSystemCursorReason@@@Z @ 0x1C01084CC (-zzzInternalSetSystemCursor@@YAXPEAUtagCURSOR@@IPEAU_UNICODE_STRING@@W4InputTracing_SetSystemCur.c)
 *     xxxUpdatePerUserSystemParameters @ 0x1C010AFDC (xxxUpdatePerUserSystemParameters.c)
 *     ?SetHighContrastWorker@@YAHPEAUtagINTERNALSETHIGHCONTRAST@@HPEAH@Z @ 0x1C01C8DCC (-SetHighContrastWorker@@YAHPEAUtagINTERNALSETHIGHCONTRAST@@HPEAH@Z.c)
 *     ?SetMouseKeys@@YAHPEAU_UNICODE_STRING@@PEAUtagMOUSEKEYS@@@Z @ 0x1C01C901C (-SetMouseKeys@@YAHPEAU_UNICODE_STRING@@PEAUtagMOUSEKEYS@@@Z.c)
 *     ?SetSoundSentry@@YAHPEAU_UNICODE_STRING@@PEAUtagSOUNDSENTRYW@@@Z @ 0x1C01C911C (-SetSoundSentry@@YAHPEAU_UNICODE_STRING@@PEAUtagSOUNDSENTRYW@@@Z.c)
 *     UpdateWinIniInt @ 0x1C01C9800 (UpdateWinIniInt.c)
 * Callees:
 *     RtlStringVPrintfWorkerW @ 0x1C00C12B4 (RtlStringVPrintfWorkerW.c)
 */

NTSTATUS RtlStringCchPrintfW(unsigned __int16 *a1, size_t a2, size_t *a3, ...)
{
  NTSTATUS result; // eax
  va_list va; // [rsp+68h] [rbp+20h] BYREF

  va_start(va, a3);
  if ( a2 - 1 <= 0x7FFFFFFE )
    return RtlStringVPrintfWorkerW(a1, a2, a3, (NTSTRSAFE_PCWSTR)a3, va);
  result = -1073741811;
  if ( a2 )
    *a1 = 0;
  return result;
}
