__int64 __fastcall HUBPDO_PublishDualRoleFeaturesProperty(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rbx
  int v4; // ecx
  __int64 result; // rax
  __int64 v6; // [rsp+28h] [rbp-40h]
  int v7; // [rsp+40h] [rbp-28h] BYREF
  int v8; // [rsp+44h] [rbp-24h]
  void *v9; // [rsp+48h] [rbp-20h]
  __int64 v10; // [rsp+50h] [rbp-18h]
  int v11; // [rsp+70h] [rbp+8h] BYREF

  v8 = 0;
  v2 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1632))(WdfDriverGlobals, a1);
  v3 = *(_QWORD *)(a1 + 24);
  v4 = *(_DWORD *)(v3 + 2669);
  v8 = 0;
  v10 = 0LL;
  v11 = v4;
  v7 = 24;
  v9 = &DEVPKEY_Device_UsbDualRoleFeatures;
  result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, int *, __int64, int, int *))(WdfFunctions_01015
                                                                                               + 3480))(
             WdfDriverGlobals,
             v2,
             &v7,
             7LL,
             4,
             &v11);
  if ( (int)result < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v6) = result;
    return WPP_RECORDER_SF_d(
             *(_QWORD *)(*(_QWORD *)(v3 + 8) + 1432LL),
             2u,
             2u,
             0x65u,
             (__int64)&WPP_89394142541e3c268d3f106ce98d6cb5_Traceguids,
             v6);
  }
  return result;
}
