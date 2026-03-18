/*
 * XREFs of SetContentOrientation @ 0x1C01E85D8
 * Callers:
 *     NtSetShellCursorState @ 0x1C0156AA0 (NtSetShellCursorState.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C002A380 (_tlgKeywordOn.c)
 *     _anonymous_namespace_::GetMouseProcessor @ 0x1C003B2DC (_anonymous_namespace_--GetMouseProcessor.c)
 *     ??$Write@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@@Z @ 0x1C0152710 (--$Write@U-$_tlgWrapSz@D@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_E.c)
 *     ?OrientationToString@InputTraceLogging@@CAPEBDK@Z @ 0x1C01E3DB4 (-OrientationToString@InputTraceLogging@@CAPEBDK@Z.c)
 *     SendOrientationChanged @ 0x1C01E8350 (SendOrientationChanged.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

char __fastcall SetContentOrientation(int a1)
{
  __int64 MouseProcessor; // rax
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v6; // [rsp+48h] [rbp+10h] BYREF

  MouseProcessor = anonymous_namespace_::GetMouseProcessor();
  if ( MouseProcessor )
  {
    *(_DWORD *)(MouseProcessor + 2784) = a1;
    if ( a1 != 1 && a1 != 2 && a1 != 3 && a1 != 4 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v3, (unsigned int)(a1 - 3), v4);
    LOBYTE(MouseProcessor) = SendOrientationChanged(v3);
    if ( (unsigned int)dword_1C028EE70 > 4 )
    {
      LOBYTE(MouseProcessor) = tlgKeywordOn((__int64)&dword_1C028EE70, 64LL);
      if ( (_BYTE)MouseProcessor )
      {
        v6 = (__int64)InputTraceLogging::OrientationToString(a1);
        LOBYTE(MouseProcessor) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>>(
                                   (__int64)&dword_1C028EE70,
                                   byte_1C0263BF3,
                                   0LL,
                                   0LL,
                                   (void **)&v6);
      }
    }
  }
  return MouseProcessor;
}
