__int64 __fastcall TUNNEL_AcquireUsb4HostPowerReference(_QWORD *a1, __int64 a2)
{
  int v4; // r8d
  __int64 v5; // r8
  int v6; // eax
  __int64 v7; // rcx
  __int64 v8; // r8
  int v9; // esi
  struct _DEVICE_OBJECT *v10; // rax
  int v12; // [rsp+28h] [rbp-20h]
  int v13; // [rsp+28h] [rbp-20h]
  int v14; // [rsp+30h] [rbp-18h]
  int v15; // [rsp+30h] [rbp-18h]

  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 2504))(
    WdfDriverGlobals,
    *(_QWORD *)(a2 + 16),
    0LL);
  v4 = *(_DWORD *)(a2 + 40);
  *(_DWORD *)(a2 + 40) = v4 + 1;
  if ( !v4 )
  {
    v5 = *(_QWORD *)(a2 + 32);
    if ( v5 )
    {
      v6 = PoFxAddComponentRelation(a1[326], 0LL, v5, &GUID_NULL);
      v9 = v6;
      if ( v6 >= 0 )
      {
        if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 4) != 0 )
        {
          v13 = v6;
          McTemplateK0ppq_EtwWriteTransfer(
            v7,
            &USBHUB3_ETW_EVENT_HUB_ADDED_COMPONENT_RELATION,
            v8,
            a1[31],
            *(_QWORD *)(a2 + 32),
            v13);
        }
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v15 = v9;
          WPP_RECORDER_SF_qd(
            a1[315],
            4u,
            3u,
            0x28u,
            (__int64)&WPP_16d83da310273e0510a3edcc6c2bc223_Traceguids,
            *(_QWORD *)(a2 + 32),
            v15);
        }
        *(_BYTE *)(a2 + 44) = 1;
        v10 = (struct _DEVICE_OBJECT *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 264))(
                                         WdfDriverGlobals,
                                         a1[2]);
        IoInvalidateDeviceRelations(v10, PowerRelations);
      }
      else
      {
        if ( (BYTE3(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 0x40) != 0 )
        {
          v12 = v6;
          McTemplateK0ppq_EtwWriteTransfer(
            *(_QWORD *)(a2 + 32),
            &USBHUB3_ETW_EVENT_HUB_ADD_COMPONENT_RELATION_FAILURE,
            v8,
            a1[31],
            *(_QWORD *)(a2 + 32),
            v12);
        }
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v14 = v9;
          WPP_RECORDER_SF_qd(
            a1[315],
            2u,
            3u,
            0x27u,
            (__int64)&WPP_16d83da310273e0510a3edcc6c2bc223_Traceguids,
            *(_QWORD *)(a2 + 32),
            v14);
        }
      }
    }
  }
  return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2512))(
           WdfDriverGlobals,
           *(_QWORD *)(a2 + 16));
}
