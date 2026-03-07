int __fastcall HUBPDO_RegisterForPowerSettingsForDevice(__int64 a1)
{
  __int64 v1; // rsi
  LPCGUID *v2; // rbx
  __int64 v4; // r14
  __int64 v5; // rdi
  __int64 v6; // rax
  struct _DEVICE_OBJECT *v7; // rax
  int result; // eax
  __int64 v9; // [rsp+28h] [rbp-50h]
  GUID *v10; // [rsp+30h] [rbp-48h] BYREF
  GUID *v11; // [rsp+38h] [rbp-40h]
  GUID *v12; // [rsp+40h] [rbp-38h]
  GUID *v13; // [rsp+48h] [rbp-30h]
  GUID *v14; // [rsp+50h] [rbp-28h]

  v1 = 0LL;
  v10 = &GUID_POWER_USB_U1_ENABLE_FOR_DEVICES;
  v2 = &v10;
  v11 = &GUID_POWER_USB_U2_ENABLE_FOR_DEVICES;
  v12 = &GUID_POWER_USB_U1_TIMEOUT_FOR_DEVICES;
  v4 = 5LL;
  v13 = &GUID_POWER_USB_U2_TIMEOUT_FOR_DEVICES;
  v14 = &GUID_POWER_USB_3_LINK_POWER_MANAGEMENT_POLICY;
  v5 = a1 - (_QWORD)&v10;
  do
  {
    v6 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1632))(WdfDriverGlobals, a1);
    v7 = (struct _DEVICE_OBJECT *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 248))(
                                    WdfDriverGlobals,
                                    v6);
    result = PoRegisterPowerSettingCallback(
               v7,
               *v2,
               HUBPDO_PowerSettingCallback,
               *(PVOID *)(a1 + 24),
               (PVOID *)(v1 + a1 + 272));
    if ( result < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v9) = result;
        result = WPP_RECORDER_SF_d(
                   *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 8LL) + 1432LL),
                   2u,
                   5u,
                   0x71u,
                   (__int64)&WPP_89394142541e3c268d3f106ce98d6cb5_Traceguids,
                   v9,
                   v10,
                   v11,
                   v12,
                   v13,
                   v14);
      }
      *(LPCGUID *)((char *)v2 + v5 + 272) = 0LL;
    }
    v1 += 8LL;
    ++v2;
    --v4;
  }
  while ( v4 );
  return result;
}
