void __fastcall HUBPDO_BillboardCleanup(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rax
  int v4; // eax
  int v5; // eax
  int updated; // eax
  void *v7; // rcx
  void *v8; // rcx
  __int64 v9; // [rsp+28h] [rbp-40h]
  __int64 v10; // [rsp+28h] [rbp-40h]
  _DWORD v11[2]; // [rsp+40h] [rbp-28h] BYREF
  void *v12; // [rsp+48h] [rbp-20h]
  __int64 v13; // [rsp+50h] [rbp-18h]

  if ( *(_QWORD *)(a1 + 2648) )
  {
    v11[1] = 0;
    v13 = 0LL;
    v2 = *(_QWORD *)(a1 + 16);
    v11[0] = 24;
    v12 = &DEVPKEY_Device_UsbBillboardInfo;
    v3 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1632))(WdfDriverGlobals, v2);
    v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _DWORD *, __int64, _DWORD, _QWORD))(WdfFunctions_01015 + 3480))(
           WdfDriverGlobals,
           v3,
           v11,
           4099LL,
           0,
           0LL);
    if ( v4 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v9) = v4;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
        2u,
        2u,
        0x5Eu,
        (__int64)&WPP_89394142541e3c268d3f106ce98d6cb5_Traceguids,
        v9);
    }
    v5 = HUBFDO_CleanupDeviceInterfaceForBillboard(
           *(_QWORD *)a1,
           *(_WORD *)(*(_QWORD *)(a1 + 16) + 48LL),
           *(_QWORD *)(a1 + 2656),
           *(_BYTE *)(a1 + 2664));
    if ( v5 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v9) = v5;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
        2u,
        2u,
        0x5Fu,
        (__int64)&WPP_89394142541e3c268d3f106ce98d6cb5_Traceguids,
        v9);
    }
    updated = ZwUpdateWnfStateData(&WNF_USB_BILLBOARD_CHANGE, 0LL, 0LL, 0LL, 0LL, 0, 0);
    if ( updated < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v10) = updated;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
        2u,
        2u,
        0x60u,
        (__int64)&WPP_89394142541e3c268d3f106ce98d6cb5_Traceguids,
        v10);
    }
    v7 = **(void ***)(a1 + 2648);
    if ( v7 )
      ExFreePoolWithTag(v7, 0x68334855u);
    **(_QWORD **)(a1 + 2648) = 0LL;
    v8 = *(void **)(a1 + 2648);
    if ( v8 )
      ExFreePoolWithTag(v8, 0x68334855u);
    *(_QWORD *)(a1 + 2648) = 0LL;
  }
}
