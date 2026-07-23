/*
 * XREFs of PpmEventThermalCapChange @ 0x14057A878
 * Callers:
 *     PpmRegisterPerfCap @ 0x140392C40 (PpmRegisterPerfCap.c)
 * Callees:
 *     EtwWriteEx @ 0x14027F840 (EtwWriteEx.c)
 *     EtwTraceKernelEvent @ 0x14029BFE0 (EtwTraceKernelEvent.c)
 *     EtwEventEnabled @ 0x1402C0830 (EtwEventEnabled.c)
 *     PpmEventGetEventDescriptorAndProcessorId @ 0x14039911C (PpmEventGetEventDescriptorAndProcessorId.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     PpmFireWmiEvent @ 0x140578738 (PpmFireWmiEvent.c)
 */

char __fastcall PpmEventThermalCapChange(__int64 a1, int a2)
{
  bool v2; // zf
  const EVENT_DESCRIPTOR *EventDescriptorAndProcessorId; // rax
  const EVENT_DESCRIPTOR *v5; // rdi
  REGHANDLE v6; // rbx
  int v8; // [rsp+40h] [rbp-9h] BYREF
  int v9; // [rsp+48h] [rbp-1h] BYREF
  __int128 v10; // [rsp+50h] [rbp+7h] BYREF
  __int128 *v11; // [rsp+60h] [rbp+17h] BYREF
  int v12; // [rsp+68h] [rbp+1Fh]
  int v13; // [rsp+6Ch] [rbp+23h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+70h] [rbp+27h] BYREF
  int *v15; // [rsp+80h] [rbp+37h]
  int v16; // [rsp+88h] [rbp+3Fh]
  int v17; // [rsp+8Ch] [rbp+43h]

  v8 = 0;
  v2 = *(_BYTE *)(a1 + 60) == 0;
  v9 = a2;
  v10 = 0LL;
  if ( !v2 )
  {
    *((_QWORD *)&v10 + 1) = *(_QWORD *)(a1 - 32928);
    LODWORD(v10) = a2;
    if ( (xmmword_140CFC490 & 0x8000) != 0 )
    {
      v13 = 0;
      v11 = &v10;
      v12 = 16;
      EtwTraceKernelEvent((int)&v11, 1, 0x80008000, 4662, 4200450);
    }
    if ( WmiThermalEventEnabled )
      PpmFireWmiEvent(a1 - 136, (__int128 *)&PPM_THERMALCONSTRAINT_GUID, 0x10u, &v10);
  }
  EventDescriptorAndProcessorId = (const EVENT_DESCRIPTOR *)PpmEventGetEventDescriptorAndProcessorId(
                                                              a1,
                                                              (__int64)PPM_ETW_THERMAL_CAP_CHANGE,
                                                              (__int64)PPM_ETW_THERMAL_CAP_CHANGE_HV,
                                                              (__int64)&v8,
                                                              (__int64)&UserData);
  v5 = EventDescriptorAndProcessorId;
  if ( PpmEtwRegistered )
  {
    v6 = PpmEtwHandle;
    LOBYTE(EventDescriptorAndProcessorId) = EtwEventEnabled(PpmEtwHandle, EventDescriptorAndProcessorId);
    if ( (_BYTE)EventDescriptorAndProcessorId )
    {
      v17 = 0;
      v15 = &v9;
      v16 = 4;
      LOBYTE(EventDescriptorAndProcessorId) = EtwWriteEx(v6, v5, 0LL, 0, 0LL, 0LL, 2u, &UserData);
    }
  }
  return (char)EventDescriptorAndProcessorId;
}
