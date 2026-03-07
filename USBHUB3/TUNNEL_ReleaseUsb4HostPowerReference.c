__int64 __fastcall TUNNEL_ReleaseUsb4HostPowerReference(_QWORD *a1, __int64 a2)
{
  bool v4; // zf
  int v5; // eax
  __int64 v6; // rcx
  __int64 v7; // r8
  int v8; // esi
  struct _DEVICE_OBJECT *v9; // rax
  int v11; // [rsp+28h] [rbp-20h]
  int v12; // [rsp+28h] [rbp-20h]
  int v13; // [rsp+30h] [rbp-18h]
  int v14; // [rsp+30h] [rbp-18h]

  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 2504))(
    WdfDriverGlobals,
    *(_QWORD *)(a2 + 16),
    0LL);
  v4 = (*(_DWORD *)(a2 + 40))-- == 1;
  if ( v4 && *(_BYTE *)(a2 + 44) == 1 )
  {
    v5 = PoFxRemoveComponentRelation(a1[326], 0LL, *(_QWORD *)(a2 + 32), &GUID_NULL);
    v8 = v5;
    if ( v5 >= 0 )
    {
      if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 4) != 0 )
      {
        v12 = v5;
        McTemplateK0ppq_EtwWriteTransfer(
          v6,
          &USBHUB3_ETW_EVENT_HUB_REMOVED_COMPONENT_RELATION,
          v7,
          a1[31],
          *(_QWORD *)(a2 + 32),
          v12);
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v14 = v8;
        WPP_RECORDER_SF_qd(
          a1[315],
          4u,
          3u,
          0x2Au,
          (__int64)&WPP_16d83da310273e0510a3edcc6c2bc223_Traceguids,
          *(_QWORD *)(a2 + 32),
          v14);
      }
      *(_BYTE *)(a2 + 44) = 0;
      v9 = (struct _DEVICE_OBJECT *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 264))(
                                      WdfDriverGlobals,
                                      a1[2]);
      IoInvalidateDeviceRelations(v9, PowerRelations);
    }
    else
    {
      if ( (BYTE3(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 0x40) != 0 )
      {
        v11 = v5;
        McTemplateK0ppq_EtwWriteTransfer(
          *(_QWORD *)(a2 + 32),
          &USBHUB3_ETW_EVENT_HUB_REMOVE_COMPONENT_RELATION_FAILURE,
          v7,
          a1[31],
          *(_QWORD *)(a2 + 32),
          v11);
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v13 = v8;
        WPP_RECORDER_SF_qd(
          a1[315],
          2u,
          3u,
          0x29u,
          (__int64)&WPP_16d83da310273e0510a3edcc6c2bc223_Traceguids,
          *(_QWORD *)(a2 + 32),
          v13);
      }
    }
  }
  return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2512))(
           WdfDriverGlobals,
           *(_QWORD *)(a2 + 16));
}
