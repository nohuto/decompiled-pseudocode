/*
 * XREFs of EtwEventWriteStartScenario @ 0x18008A3D0
 * Callers:
 *     <none>
 * Callees:
 *     EtwEventWrite @ 0x180050300 (EtwEventWrite.c)
 *     EtwpGetKmRegHandle @ 0x180051D58 (EtwpGetKmRegHandle.c)
 *     EtwEventEnabled @ 0x180051DB0 (EtwEventEnabled.c)
 *     EtwEventActivityIdControl @ 0x18005CBE0 (EtwEventActivityIdControl.c)
 *     __security_check_cookie @ 0x18008C910 (__security_check_cookie.c)
 *     NtTraceControl @ 0x1800A0D70 (NtTraceControl.c)
 */

ULONG __cdecl EtwEventWriteStartScenario(
        REGHANDLE RegHandle,
        PCEVENT_DESCRIPTOR EventDescriptor,
        ULONG UserDataCount,
        PEVENT_DATA_DESCRIPTOR UserData)
{
  ULONG KmRegHandle; // ebx
  ULONG ReturnLength; // [rsp+30h] [rbp-40h] BYREF
  _OWORD InputBuffer[3]; // [rsp+38h] [rbp-38h] BYREF

  ReturnLength = 0;
  if ( !EventDescriptor )
    return 87;
  if ( !EtwEventEnabled(RegHandle, EventDescriptor) )
    return 6;
  memset(InputBuffer, 0, sizeof(InputBuffer));
  KmRegHandle = EtwpGetKmRegHandle(RegHandle, InputBuffer);
  if ( !KmRegHandle )
  {
    *(EVENT_DESCRIPTOR *)((char *)InputBuffer + 8) = *EventDescriptor;
    *(_GUID *)((char *)&InputBuffer[1] + 8) = NtCurrentTeb()->ActivityId;
    if ( _mm_cvtsi128_si32(*(__m128i *)((char *)&InputBuffer[1] + 8))
      || HIDWORD(InputBuffer[1])
      || LOBYTE(InputBuffer[2])
      || __PAIR16__(BYTE1(InputBuffer[2]), 0) != BYTE2(InputBuffer[2])
      || *(_WORD *)((char *)&InputBuffer[2] + 3)
      || __PAIR16__(BYTE5(InputBuffer[2]), 0) != BYTE6(InputBuffer[2])
      || BYTE7(InputBuffer[2])
      || (KmRegHandle = EtwEventActivityIdControl(3u, (LPGUID)((char *)&InputBuffer[1] + 8))) == 0
      && (KmRegHandle = EtwEventActivityIdControl(2u, (LPGUID)((char *)&InputBuffer[1] + 8))) == 0 )
    {
      DWORD2(InputBuffer[2]) = 10;
      KmRegHandle = EtwEventWrite(RegHandle, EventDescriptor, UserDataCount, UserData);
      NtTraceControl(EtwWdiScenarioCode, InputBuffer, 0x30u, 0LL, 0, &ReturnLength);
    }
  }
  return KmRegHandle;
}
