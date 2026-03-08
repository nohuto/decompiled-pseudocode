/*
 * XREFs of PoDiagTraceIRTimerSleepStudyRundown @ 0x14058EA64
 * Callers:
 *     ExStopRecordingIRTimerExpiries @ 0x1409F87CC (ExStopRecordingIRTimerExpiries.c)
 * Callees:
 *     EtwWriteEx @ 0x140231630 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x140231870 (EtwEventEnabled.c)
 *     RtlInitUnicodeString @ 0x14030EBB0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 */

char __fastcall PoDiagTraceIRTimerSleepStudyRundown(int a1, __int16 a2, const WCHAR *a3)
{
  _UNKNOWN **v3; // rax
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp+7h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+58h] [rbp+17h] BYREF
  __int16 *v8; // [rsp+68h] [rbp+27h]
  int v9; // [rsp+70h] [rbp+2Fh]
  int v10; // [rsp+74h] [rbp+33h]
  wchar_t *Buffer; // [rsp+78h] [rbp+37h]
  int Length; // [rsp+80h] [rbp+3Fh]
  int v13; // [rsp+84h] [rbp+43h]
  _UNKNOWN *retaddr; // [rsp+A0h] [rbp+5Fh] BYREF
  int v15; // [rsp+A8h] [rbp+67h] BYREF
  __int16 v16; // [rsp+B0h] [rbp+6Fh] BYREF

  v3 = &retaddr;
  v16 = a2;
  v15 = a1;
  DestinationString = 0LL;
  if ( PopDiagHandleRegistered )
  {
    LOBYTE(v3) = EtwEventEnabled(PopDiagHandle, &POP_ETW_DEEP_SLEEP_IR_TIMER_DATA);
    if ( (_BYTE)v3 )
    {
      RtlInitUnicodeString(&DestinationString, a3);
      UserData.Reserved = 0;
      v10 = 0;
      v13 = 0;
      UserData.Ptr = (ULONGLONG)&v15;
      v8 = &v16;
      Buffer = DestinationString.Buffer;
      Length = DestinationString.Length;
      UserData.Size = 4;
      v9 = 2;
      LOBYTE(v3) = EtwWriteEx(PopDiagHandle, &POP_ETW_DEEP_SLEEP_IR_TIMER_DATA, 0LL, 0, 0LL, 0LL, 3u, &UserData);
    }
  }
  return (char)v3;
}
