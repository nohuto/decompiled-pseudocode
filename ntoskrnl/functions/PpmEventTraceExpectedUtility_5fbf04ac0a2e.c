char __fastcall PpmEventTraceExpectedUtility(__int64 a1)
{
  const EVENT_DESCRIPTOR *EventDescriptorAndProcessorId; // rax
  const EVENT_DESCRIPTOR *v3; // rsi
  REGHANDLE v4; // rdi
  __int64 v5; // rax
  unsigned int v6; // ecx
  unsigned __int64 v7; // r8
  unsigned int v8; // edx
  int v9; // eax
  int v10; // edx
  int v12; // [rsp+48h] [rbp-39h] BYREF
  int v13; // [rsp+4Ch] [rbp-35h] BYREF
  int v14; // [rsp+50h] [rbp-31h] BYREF
  int v15; // [rsp+54h] [rbp-2Dh] BYREF
  unsigned int v16; // [rsp+58h] [rbp-29h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+68h] [rbp-19h] BYREF
  int *v18; // [rsp+78h] [rbp-9h]
  int v19; // [rsp+80h] [rbp-1h]
  int v20; // [rsp+84h] [rbp+3h]
  int *v21; // [rsp+88h] [rbp+7h]
  int v22; // [rsp+90h] [rbp+Fh]
  int v23; // [rsp+94h] [rbp+13h]
  int *v24; // [rsp+98h] [rbp+17h]
  int v25; // [rsp+A0h] [rbp+1Fh]
  int v26; // [rsp+A4h] [rbp+23h]
  unsigned int *v27; // [rsp+A8h] [rbp+27h]
  int v28; // [rsp+B0h] [rbp+2Fh]
  int v29; // [rsp+B4h] [rbp+33h]
  GUID v30; // [rsp+B8h] [rbp+37h] BYREF

  v13 = 0;
  EventDescriptorAndProcessorId = (const EVENT_DESCRIPTOR *)PpmEventGetEventDescriptorAndProcessorId(
                                                              a1,
                                                              (__int64)PPM_ETW_EXPECTED_UTILITY,
                                                              (__int64)PPM_ETW_EXPECTED_UTILITY_HV,
                                                              (__int64)&v13,
                                                              (__int64)&v30);
  v3 = EventDescriptorAndProcessorId;
  if ( PpmEtwRegistered )
  {
    v4 = PpmEtwHandle;
    LOBYTE(EventDescriptorAndProcessorId) = EtwEventEnabled(PpmEtwHandle, EventDescriptorAndProcessorId);
    if ( (_BYTE)EventDescriptorAndProcessorId )
    {
      UserData.Reserved = 0;
      UserData.Ptr = (ULONGLONG)&PpmCheckTime;
      v5 = *(_QWORD *)(a1 + 8);
      UserData.Size = 8;
      if ( v5 )
        v6 = *(_DWORD *)(v5 + 72);
      else
        v6 = 100;
      v16 = v6;
      v7 = PpmCheckPeriod / 0x2710uLL;
      v8 = ((unsigned int)(PpmCheckPeriod / 0x2710uLL) * (*(_DWORD *)(a1 + 40) / v6) + 50) / 0x64;
      v12 = v8;
      if ( v8 <= (unsigned int)(PpmCheckPeriod / 0x2710uLL) )
      {
        v9 = v7 - v8;
        v10 = 0;
      }
      else
      {
        v9 = 0;
        v12 = PpmCheckPeriod / 0x2710uLL;
        v10 = v8 - v7;
      }
      v20 = 0;
      v23 = 0;
      v26 = 0;
      v29 = 0;
      v14 = v9;
      v18 = &v14;
      v21 = &v12;
      v24 = &v15;
      v27 = &v16;
      v15 = v10;
      v19 = 4;
      v22 = 4;
      v25 = 4;
      v28 = 4;
      LOBYTE(EventDescriptorAndProcessorId) = EtwWriteEx(v4, v3, 0LL, 0, 0LL, 0LL, 6u, &UserData);
    }
  }
  return (char)EventDescriptorAndProcessorId;
}
