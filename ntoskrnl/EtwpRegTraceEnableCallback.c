/*
 * XREFs of EtwpRegTraceEnableCallback @ 0x1409F16F0
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitUnicodeString @ 0x14030EBB0 (RtlInitUnicodeString.c)
 *     CmRegisterCallbackEx @ 0x14084E720 (CmRegisterCallbackEx.c)
 *     CmUnRegisterCallback @ 0x140A0C560 (CmUnRegisterCallback.c)
 */

void __fastcall EtwpRegTraceEnableCallback(
        LPCGUID SourceId,
        ULONG ControlCode,
        UCHAR Level,
        ULONGLONG MatchAnyKeyword,
        ULONGLONG MatchAllKeyword,
        PEVENT_FILTER_DESCRIPTOR FilterData)
{
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF

  DestinationString = 0LL;
  if ( FilterData && FilterData->Size == 4 )
    EtwpRegTraceOptions = *(unsigned int *)FilterData->Ptr;
  if ( ControlCode )
  {
    if ( ControlCode == 1 && !EtwpRegTracingEnabled )
    {
      RtlInitUnicodeString(&DestinationString, L"425500");
      if ( CmRegisterCallbackEx(
             (PEX_CALLBACK_FUNCTION)EtwpRegTraceCallback,
             &DestinationString,
             &DestinationString,
             0LL,
             &EtwpRegTraceCookie,
             0LL) >= 0 )
        EtwpRegTracingEnabled = 1;
    }
  }
  else if ( EtwpRegTracingEnabled )
  {
    CmUnRegisterCallback(EtwpRegTraceCookie);
    EtwpRegTracingEnabled = 0;
  }
}
