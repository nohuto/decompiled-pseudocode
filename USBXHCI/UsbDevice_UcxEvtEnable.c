char __fastcall UsbDevice_UcxEvtEnable(__int64 a1, __int64 a2)
{
  __int64 v3; // rdi
  __int64 v4; // rbp
  int v5; // edx
  int v6; // ebx
  __int64 v7; // rdx
  unsigned int v8; // eax
  _OWORD v10[2]; // [rsp+30h] [rbp-38h] BYREF
  __int64 v11; // [rsp+50h] [rbp-18h]

  memset(v10, 0, sizeof(v10));
  v11 = 0LL;
  LOWORD(v10[0]) = 40;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _OWORD *))(WdfFunctions_01023 + 2128))(
    WdfDriverGlobals,
    a2,
    v10);
  v3 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, void *))(WdfFunctions_01023 + 1616))(
         WdfDriverGlobals,
         *(_QWORD *)(*((_QWORD *)&v10[0] + 1) + 16LL),
         off_1C00632C0);
  v4 = *(_QWORD *)(*(_QWORD *)(v3 + 8) + 144LL);
  if ( *(_BYTE *)(v3 + 134) )
    MicrosoftTelemetryAssertTriggeredMsgKM("Slot already enabled");
  if ( *(_BYTE *)(v3 + 135) )
    MicrosoftTelemetryAssertTriggeredMsgKM("Slot ID was expected to be 0");
  v6 = Endpoint_Enable(*(__m128i ***)(v3 + 176));
  if ( v6 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v5) = 2;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
        v5,
        12,
        14,
        (__int64)&WPP_a3acd40f84823909f7fc3b79b04bc30f_Traceguids,
        v6);
    }
  }
  else
  {
    if ( Controller_IsControllerAccessible(*(_QWORD *)(v3 + 8)) )
    {
      *(_QWORD *)(v3 + 424) = a2;
      *(_BYTE *)(v3 + 432) = 0;
      memset((void *)(v3 + 456), 0, 0x60uLL);
      *(_QWORD *)(v3 + 528) = 0LL;
      *(_DWORD *)(v3 + 536) = 0;
      *(_DWORD *)(v3 + 540) = 0;
      *(_QWORD *)(v3 + 544) = 0LL;
      *(_QWORD *)(v3 + 496) = UsbDevice_EnableCompletion;
      v8 = *(_DWORD *)(v3 + 492) & 0xFFFF27FF;
      *(_QWORD *)(v3 + 504) = v3;
      *(_DWORD *)(v3 + 492) = v8 | 0x2400;
      return Command_SendCommand(v4, v3 + 456);
    }
    LOBYTE(v7) = 1;
    v6 = -1073741810;
    Endpoint_Disable(*(_QWORD *)(v3 + 176), v7);
  }
  *(_QWORD *)(v3 + 424) = 0LL;
  return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01023 + 2104))(
           WdfDriverGlobals,
           a2,
           (unsigned int)v6);
}
