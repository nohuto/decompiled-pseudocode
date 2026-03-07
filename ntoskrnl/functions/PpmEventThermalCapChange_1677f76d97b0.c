char __fastcall PpmEventThermalCapChange(__int64 a1, int a2)
{
  const EVENT_DESCRIPTOR *EventDescriptorAndProcessorId; // rax
  const EVENT_DESCRIPTOR *v4; // rdi
  REGHANDLE v5; // rbx
  int v7; // [rsp+40h] [rbp-9h] BYREF
  int v8; // [rsp+48h] [rbp-1h] BYREF
  __int64 v9; // [rsp+50h] [rbp+7h] BYREF
  __int64 v10; // [rsp+58h] [rbp+Fh]
  __int64 *v11; // [rsp+60h] [rbp+17h] BYREF
  int v12; // [rsp+68h] [rbp+1Fh]
  int v13; // [rsp+6Ch] [rbp+23h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+70h] [rbp+27h] BYREF
  int *v15; // [rsp+80h] [rbp+37h]
  int v16; // [rsp+88h] [rbp+3Fh]
  int v17; // [rsp+8Ch] [rbp+43h]

  v7 = 0;
  v8 = a2;
  v9 = 0LL;
  LODWORD(v10) = 0;
  if ( *(_BYTE *)(a1 + 68) )
  {
    v10 = *(_QWORD *)(a1 - 33768);
    LODWORD(v9) = a2;
    if ( (xmmword_140D1EAD0 & 0x8000) != 0 )
    {
      v13 = 0;
      v11 = &v9;
      v12 = 16;
      EtwTraceKernelEvent((__int64)&v11, 1u, 0x80008000, 0x1236u, 0x401802u);
    }
    if ( WmiThermalEventEnabled )
      PpmFireWmiEvent(a1 - 136, (__int128 *)&PPM_THERMALCONSTRAINT_GUID, 0x10u, &v9);
  }
  EventDescriptorAndProcessorId = (const EVENT_DESCRIPTOR *)PpmEventGetEventDescriptorAndProcessorId(
                                                              a1,
                                                              (__int64)PPM_ETW_THERMAL_CAP_CHANGE,
                                                              (__int64)PPM_ETW_THERMAL_CAP_CHANGE_HV,
                                                              (__int64)&v7,
                                                              (__int64)&UserData);
  v4 = EventDescriptorAndProcessorId;
  if ( PpmEtwRegistered )
  {
    v5 = PpmEtwHandle;
    LOBYTE(EventDescriptorAndProcessorId) = EtwEventEnabled(PpmEtwHandle, EventDescriptorAndProcessorId);
    if ( (_BYTE)EventDescriptorAndProcessorId )
    {
      v17 = 0;
      v15 = &v8;
      v16 = 4;
      LOBYTE(EventDescriptorAndProcessorId) = EtwWriteEx(v5, v4, 0LL, 0, 0LL, 0LL, 2u, &UserData);
    }
  }
  return (char)EventDescriptorAndProcessorId;
}
