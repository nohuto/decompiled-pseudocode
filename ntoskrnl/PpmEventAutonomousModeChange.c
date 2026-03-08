/*
 * XREFs of PpmEventAutonomousModeChange @ 0x140597710
 * Callers:
 *     PpmUpdateTargetProcessorPolicy @ 0x14038E1DC (PpmUpdateTargetProcessorPolicy.c)
 * Callees:
 *     EtwEventEnabled @ 0x140231870 (EtwEventEnabled.c)
 *     EtwWrite @ 0x1402338C0 (EtwWrite.c)
 *     PpmEventGetEventDescriptorAndProcessorId @ 0x140233B18 (PpmEventGetEventDescriptorAndProcessorId.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 */

char __fastcall PpmEventAutonomousModeChange(__int64 a1, int a2)
{
  const EVENT_DESCRIPTOR *EventDescriptorAndProcessorId; // rax
  const EVENT_DESCRIPTOR *v3; // rdi
  REGHANDLE v4; // rbx
  int v6; // [rsp+30h] [rbp-38h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+38h] [rbp-30h] BYREF
  int *v8; // [rsp+48h] [rbp-20h]
  int v9; // [rsp+50h] [rbp-18h]
  int v10; // [rsp+54h] [rbp-14h]
  int v11; // [rsp+78h] [rbp+10h] BYREF

  v11 = a2;
  v6 = 0;
  EventDescriptorAndProcessorId = (const EVENT_DESCRIPTOR *)PpmEventGetEventDescriptorAndProcessorId(
                                                              a1,
                                                              (__int64)PPM_ETW_AUTONOMOUS_MODE_CHANGE,
                                                              (__int64)PPM_ETW_AUTONOMOUS_MODE_CHANGE_HV,
                                                              (__int64)&v6,
                                                              (__int64)&UserData);
  v3 = EventDescriptorAndProcessorId;
  if ( PpmEtwRegistered )
  {
    v4 = PpmEtwHandle;
    LOBYTE(EventDescriptorAndProcessorId) = EtwEventEnabled(PpmEtwHandle, EventDescriptorAndProcessorId);
    if ( (_BYTE)EventDescriptorAndProcessorId )
    {
      v10 = 0;
      v8 = &v11;
      v9 = 4;
      LOBYTE(EventDescriptorAndProcessorId) = EtwWrite(v4, v3, 0LL, 2u, &UserData);
    }
  }
  return (char)EventDescriptorAndProcessorId;
}
