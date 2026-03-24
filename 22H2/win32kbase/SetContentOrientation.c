/*
 * XREFs of SetContentOrientation @ 0x1C01AEF30
 * Callers:
 *     NtSetShellCursorState @ 0x1C012D180 (NtSetShellCursorState.c)
 * Callees:
 *     _anonymous_namespace_::GetMouseProcessor @ 0x1C0043E8C (_anonymous_namespace_--GetMouseProcessor.c)
 *     _tlgKeywordOn @ 0x1C004BCA0 (_tlgKeywordOn.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE808 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ??$Write@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@@Z @ 0x1C0128388 (--$Write@U-$_tlgWrapSz@D@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_E.c)
 *     SendOrientationChanged @ 0x1C01AEDE0 (SendOrientationChanged.c)
 *     ?OrientationToString@InputTraceLogging@@CAPEBDK@Z @ 0x1C01B34AC (-OrientationToString@InputTraceLogging@@CAPEBDK@Z.c)
 */

char __fastcall SetContentOrientation(unsigned int a1)
{
  __int64 MouseProcessor; // rax
  __int64 v3; // rcx
  __int64 v5; // [rsp+48h] [rbp+10h] BYREF

  MouseProcessor = anonymous_namespace_::GetMouseProcessor();
  if ( MouseProcessor )
  {
    *(_DWORD *)(MouseProcessor + 2792) = a1;
    if ( a1 != 1 && a1 != 2 && a1 != 3 && a1 != 4 )
    {
      LODWORD(v5) = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 5120);
    }
    LOBYTE(MouseProcessor) = SendOrientationChanged(v3);
    if ( (unsigned int)dword_1C024AA90 > 4 )
    {
      LOBYTE(MouseProcessor) = tlgKeywordOn((__int64)&dword_1C024AA90, 64LL);
      if ( (_BYTE)MouseProcessor )
      {
        v5 = (__int64)InputTraceLogging::OrientationToString(a1);
        LOBYTE(MouseProcessor) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>>(
                                   (__int64)&dword_1C024AA90,
                                   byte_1C021FB23,
                                   0LL,
                                   0LL,
                                   (void **)&v5);
      }
    }
  }
  return MouseProcessor;
}
