__int64 __fastcall Controller_WdfEvtDeviceAdd(__int64 a1, __int64 a2)
{
  int v3; // edx
  int v4; // ebx
  __int64 v5; // rdi
  __int64 v6; // rcx
  __int64 *v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 *v10; // rcx
  __int64 *v11; // rax
  __int64 v12; // rcx
  int v14; // r9d
  __int64 *v15; // [rsp+38h] [rbp-9h] BYREF
  __int64 v16; // [rsp+40h] [rbp-1h] BYREF
  __int64 v17; // [rsp+48h] [rbp+7h] BYREF
  unsigned int v18; // [rsp+50h] [rbp+Fh] BYREF
  _QWORD v19[4]; // [rsp+58h] [rbp+17h] BYREF
  __int128 v20; // [rsp+78h] [rbp+37h]
  __int64 v21; // [rsp+88h] [rbp+47h]

  v20 = 0LL;
  v19[0] = 56LL;
  LOBYTE(v20) = 0;
  v19[2] = 0LL;
  v19[3] = 0x1000000000LL;
  v21 = 0x200000002LL;
  v19[1] = 0xC800000400LL;
  v17 = 0LL;
  v16 = 0LL;
  v18 = 0;
  v15 = 0LL;
  imp_WppRecorderLogCreate(WPP_GLOBAL_Control, v19, &v16);
  v4 = ((__int64 (__fastcall *)(__int64, __int64))qword_1C0064888)(UcxDriverGlobals, a2);
  if ( v4 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_22;
    v14 = 10;
    goto LABEL_21;
  }
  v4 = Controller_CreateWdfDevice(a2, v16, &v17, &v18);
  if ( v4 < 0 )
    goto LABEL_22;
  v5 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
         WdfDriverGlobals,
         v17,
         off_1C00633D8);
  if ( Device_IsSecureDevice(v5) )
  {
    v4 = SecureChannel_Create(v6, v5 + 96);
    if ( v4 < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v14 = 11;
LABEL_21:
        LOBYTE(v3) = 2;
        WPP_RECORDER_SF_d(v16, v3, 4, v14, (__int64)&WPP_ac07559723993fb37d1c33c002d3118e_Traceguids, v4);
        goto LABEL_22;
      }
      goto LABEL_22;
    }
  }
  v4 = Controller_Create(v17, v16, v18, &v15);
  if ( v4 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v14 = 12;
      goto LABEL_21;
    }
LABEL_22:
    if ( v15 )
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01023 + 1664))(WdfDriverGlobals, v15[1]);
    return (unsigned int)v4;
  }
  v7 = v15;
  *(_OWORD *)((char *)v15 + 180) = *(_OWORD *)(v5 + 24);
  *(_OWORD *)((char *)v7 + 196) = *(_OWORD *)(v5 + 40);
  *(_OWORD *)((char *)v7 + 212) = *(_OWORD *)(v5 + 56);
  *(_OWORD *)((char *)v7 + 228) = *(_OWORD *)(v5 + 72);
  *(_QWORD *)(v5 + 8) = v15;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64 (__fastcall *)(), __int64, const char *))(WdfFunctions_01023 + 1640))(
    WdfDriverGlobals,
    v15[1],
    Controller_WdfEvtDeviceAdd,
    332LL,
    "onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\controller.c");
  v4 = IoControl_Create(v17, (__int64)v15, v15 + 10);
  if ( v4 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v14 = 13;
      goto LABEL_21;
    }
    goto LABEL_22;
  }
  v4 = Register_Create(v15, v15 + 11);
  if ( v4 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v14 = 14;
      goto LABEL_21;
    }
    goto LABEL_22;
  }
  v4 = Interrupter_Create(v17, v15, v15 + 16);
  if ( v4 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v14 = 15;
      goto LABEL_21;
    }
    goto LABEL_22;
  }
  v4 = DeviceSlot_Create(v8, v15, v15 + 17);
  if ( v4 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v14 = 16;
      goto LABEL_21;
    }
    goto LABEL_22;
  }
  v4 = Command_Create(v9, v15, v15 + 18);
  if ( v4 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v14 = 17;
      goto LABEL_21;
    }
    goto LABEL_22;
  }
  v10 = v15 + 21;
  if ( (v15[42] & 0x800000) != 0 )
  {
    v4 = IntelPptFilter_Create(v17, v15, v15 + 21);
    if ( v4 < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v14 = 18;
        goto LABEL_21;
      }
      goto LABEL_22;
    }
  }
  else
  {
    *v10 = 0LL;
  }
  v4 = RootHub_Create((__int64)v10, (__int64)v15, v15 + 19);
  if ( v4 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v14 = 19;
      goto LABEL_21;
    }
    goto LABEL_22;
  }
  v4 = Wmi_Create(v17, v15, v15 + 20);
  if ( v4 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v14 = 20;
      goto LABEL_21;
    }
    goto LABEL_22;
  }
  *(_QWORD *)v5 = g_UsbXhciTriageInfo;
  Controller_ConfigureS0IdleSettings(v15);
  Controller_ConfigureSxWakeSettings(v15);
  KeInitializeSpinLock((PKSPIN_LOCK)v15 + 5);
  v11 = v15 + 6;
  v15[7] = (__int64)(v15 + 6);
  *v11 = (__int64)v11;
  *((_DWORD *)v15 + 16) = 0;
  *((_DWORD *)v15 + 98) = 5;
  Controller_AddControllerToGlobalControllerList((__int64)v15);
  Etw_ControllerCreate(v12, (__int64)v15);
  Controller_QueryControllerCapabilitiesFromACPI((__int64)v15);
  if ( (_mm_srli_si128(*((__m128i *)v15 + 21), 8).m128i_u8[0] & 1) != 0 )
    Controller_ExecuteDSM(v15, &GUID_DSM_ENABLE_KBL_WORKAROUNDS, 1, 1, 0LL, 0);
  return (unsigned int)v4;
}
