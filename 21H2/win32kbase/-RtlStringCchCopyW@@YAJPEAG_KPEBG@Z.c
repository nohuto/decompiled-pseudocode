/*
 * XREFs of ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C0047358
 * Callers:
 *     ?_BeginKeyboardEventProcessingByInputService@KeyboardInputTelemetry@@AEAAXI@Z @ 0x1C00018E8 (-_BeginKeyboardEventProcessingByInputService@KeyboardInputTelemetry@@AEAAXI@Z.c)
 *     FastGetProfileStringW @ 0x1C0019800 (FastGetProfileStringW.c)
 *     ?GetSpriteFillColor@@YAKXZ @ 0x1C0046C98 (-GetSpriteFillColor@@YAKXZ.c)
 *     NtUserGetHDevName @ 0x1C0046FB0 (NtUserGetHDevName.c)
 *     DrvGetHdevName @ 0x1C00470C0 (DrvGetHdevName.c)
 *     EtwTraceAuditApiSetWindowsHookEx @ 0x1C0047100 (EtwTraceAuditApiSetWindowsHookEx.c)
 *     ?UserInitialize@@YAJXZ @ 0x1C005F1A8 (-UserInitialize@@YAJXZ.c)
 *     xxxUpdatePerUserAccessPackSettings @ 0x1C0060150 (xxxUpdatePerUserAccessPackSettings.c)
 *     ?GreCreateColorSpace@@YAPEAUHCOLORSPACE__@@PEAU_LOGCOLORSPACEEXW@@@Z @ 0x1C00BEE40 (-GreCreateColorSpace@@YAPEAUHCOLORSPACE__@@PEAU_LOGCOLORSPACEEXW@@@Z.c)
 *     WinSqmAddToStreamEx @ 0x1C01678C0 (WinSqmAddToStreamEx.c)
 *     ?LogHanging@KeyboardInputTelemetry@@CAXPEAUtagTHREADINFO@@_K@Z @ 0x1C0168CB0 (-LogHanging@KeyboardInputTelemetry@@CAXPEAUtagTHREADINFO@@_K@Z.c)
 *     rimReadSingleDigitizerToMonitorMappings @ 0x1C01976C4 (rimReadSingleDigitizerToMonitorMappings.c)
 *     InitCreateUserSubsystem @ 0x1C02E32B8 (InitCreateUserSubsystem.c)
 * Callees:
 *     RtlStringCopyWorkerW @ 0x1C0047380 (RtlStringCopyWorkerW.c)
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
