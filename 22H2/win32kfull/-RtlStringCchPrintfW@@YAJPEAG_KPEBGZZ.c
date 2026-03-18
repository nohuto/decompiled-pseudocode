/*
 * XREFs of ?RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1C0069710
 * Callers:
 *     ?zzzInternalSetSystemCursor@@YAXPEAUtagCURSOR@@IPEAU_UNICODE_STRING@@W4InputTracing_SetSystemCursorReason@@@Z @ 0x1C0024CFC (-zzzInternalSetSystemCursor@@YAXPEAUtagCURSOR@@IPEAU_UNICODE_STRING@@W4InputTracing_SetSystemCur.c)
 *     ?CreateShutdownEvent@@YAJPEBGKPEAPEAX@Z @ 0x1C003CFF0 (-CreateShutdownEvent@@YAJPEBGKPEAPEAX@Z.c)
 *     xxxSystemParametersInfoWorker @ 0x1C0043D70 (xxxSystemParametersInfoWorker.c)
 *     xxxResolveDesktop @ 0x1C0067670 (xxxResolveDesktop.c)
 *     xxxUpdatePerUserSystemParameters @ 0x1C0072BDC (xxxUpdatePerUserSystemParameters.c)
 *     ?CreateDesktopNotificationEvent@@YAJPEAX@Z @ 0x1C00B1B24 (-CreateDesktopNotificationEvent@@YAJPEAX@Z.c)
 *     ?GrepDwmCreateComposedEvent@@YAJPEAUDwmState@@@Z @ 0x1C00B1D78 (-GrepDwmCreateComposedEvent@@YAJPEAUDwmState@@@Z.c)
 *     ?ProbeAndDeepCaptureWinStaDesktopObjectAttributes@@YAJHPEAU_OBJECT_ATTRIBUTES@@AEAY0BAA@GAEAU1@AEAU_SECURITY_QUALITY_OF_SERVICE@@AEAPEAXAEAU_UNICODE_STRING@@AEAPEAG@Z @ 0x1C013B3F8 (-ProbeAndDeepCaptureWinStaDesktopObjectAttributes@@YAJHPEAU_OBJECT_ATTRIBUTES@@AEAY0BAA@GAEAU1@A.c)
 *     ?SetHighContrastWorker@@YAHPEAUtagINTERNALSETHIGHCONTRAST@@HPEAH@Z @ 0x1C01C7C6C (-SetHighContrastWorker@@YAHPEAUtagINTERNALSETHIGHCONTRAST@@HPEAH@Z.c)
 *     ?SetMouseKeys@@YAHPEAU_UNICODE_STRING@@PEAUtagMOUSEKEYS@@@Z @ 0x1C01C7EBC (-SetMouseKeys@@YAHPEAU_UNICODE_STRING@@PEAUtagMOUSEKEYS@@@Z.c)
 *     ?SetSoundSentry@@YAHPEAU_UNICODE_STRING@@PEAUtagSOUNDSENTRYW@@@Z @ 0x1C01C7FBC (-SetSoundSentry@@YAHPEAU_UNICODE_STRING@@PEAUtagSOUNDSENTRYW@@@Z.c)
 *     UpdateWinIniInt @ 0x1C01C86A0 (UpdateWinIniInt.c)
 * Callees:
 *     RtlStringVPrintfWorkerW @ 0x1C006974C (RtlStringVPrintfWorkerW.c)
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
