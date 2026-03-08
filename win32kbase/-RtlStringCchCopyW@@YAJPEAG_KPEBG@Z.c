/*
 * XREFs of ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C0070E78
 * Callers:
 *     ?_BeginKeyboardEventProcessingByInputService@KeyboardInputTelemetry@@AEAAXI@Z @ 0x1C00066A0 (-_BeginKeyboardEventProcessingByInputService@KeyboardInputTelemetry@@AEAAXI@Z.c)
 *     ?GreCreateColorSpace@@YAPEAUHCOLORSPACE__@@PEAU_LOGCOLORSPACEEXW@@@Z @ 0x1C0016D9C (-GreCreateColorSpace@@YAPEAUHCOLORSPACE__@@PEAU_LOGCOLORSPACEEXW@@@Z.c)
 *     xxxUpdatePerUserAccessPackSettings @ 0x1C0017E70 (xxxUpdatePerUserAccessPackSettings.c)
 *     ?UserInitialize@@YAJXZ @ 0x1C002D838 (-UserInitialize@@YAJXZ.c)
 *     EtwTraceAuditApiSetWindowsHookEx @ 0x1C0037F10 (EtwTraceAuditApiSetWindowsHookEx.c)
 *     ?GetSpriteFillColor@@YAKXZ @ 0x1C0070B50 (-GetSpriteFillColor@@YAKXZ.c)
 *     FastGetProfileStringW @ 0x1C0074270 (FastGetProfileStringW.c)
 *     DrvGetHdevName @ 0x1C00D39D0 (DrvGetHdevName.c)
 *     ?LogHanging@KeyboardInputTelemetry@@CAXPEAUtagTHREADINFO@@_K@Z @ 0x1C017DAEC (-LogHanging@KeyboardInputTelemetry@@CAXPEAUtagTHREADINFO@@_K@Z.c)
 *     rimReadSingleDigitizerToMonitorMappings @ 0x1C01BC984 (rimReadSingleDigitizerToMonitorMappings.c)
 *     InitCreateUserSubsystem @ 0x1C032009C (InitCreateUserSubsystem.c)
 * Callees:
 *     RtlStringCopyWorkerW @ 0x1C0070EA0 (RtlStringCopyWorkerW.c)
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
