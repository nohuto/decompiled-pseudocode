/*
 * XREFs of EtwEventWriteEndScenario @ 0x18004FD30
 * Callers:
 *     <none>
 * Callees:
 *     EtwEventWrite @ 0x180050300 (EtwEventWrite.c)
 *     EtwpGetKmRegHandle @ 0x180051D58 (EtwpGetKmRegHandle.c)
 *     EtwEventEnabled @ 0x180051DB0 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x18008C910 (__security_check_cookie.c)
 *     NtTraceControl @ 0x1800A0D70 (NtTraceControl.c)
 */

ULONG __cdecl EtwEventWriteEndScenario(
        REGHANDLE RegHandle,
        PCEVENT_DESCRIPTOR EventDescriptor,
        ULONG UserDataCount,
        PEVENT_DATA_DESCRIPTOR UserData)
{
  ULONG result; // eax
  _GUID ActivityId; // xmm1
  ULONG ReturnLength; // [rsp+30h] [rbp-58h] BYREF
  _OWORD InputBuffer[3]; // [rsp+38h] [rbp-50h] BYREF

  ReturnLength = 0;
  if ( !EventDescriptor )
    return 87;
  if ( !EtwEventEnabled(RegHandle, EventDescriptor) )
    return 6;
  memset(InputBuffer, 0, sizeof(InputBuffer));
  result = EtwpGetKmRegHandle(RegHandle, InputBuffer);
  if ( !result )
  {
    *(EVENT_DESCRIPTOR *)((char *)InputBuffer + 8) = *EventDescriptor;
    ActivityId = NtCurrentTeb()->ActivityId;
    DWORD2(InputBuffer[2]) = 11;
    *(_GUID *)((char *)&InputBuffer[1] + 8) = ActivityId;
    NtTraceControl(EtwWdiScenarioCode, InputBuffer, 0x30u, 0LL, 0, &ReturnLength);
    return EtwEventWrite(RegHandle, EventDescriptor, UserDataCount, UserData);
  }
  return result;
}
