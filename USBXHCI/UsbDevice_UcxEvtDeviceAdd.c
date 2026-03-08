/*
 * XREFs of UsbDevice_UcxEvtDeviceAdd @ 0x1C0070FD0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C00142CC (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_d @ 0x1C0018458 (WPP_RECORDER_SF_d.c)
 *     Controller_AddDeviceToControllerDeviceList @ 0x1C001A5D0 (Controller_AddDeviceToControllerDeviceList.c)
 *     XilUsbDevice_Create @ 0x1C001BB24 (XilUsbDevice_Create.c)
 *     WPP_RECORDER_SF_dqd @ 0x1C001E3F8 (WPP_RECORDER_SF_dqd.c)
 *     Etw_DeviceCreate @ 0x1C001E5C8 (Etw_DeviceCreate.c)
 *     __security_check_cookie @ 0x1C001E820 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0020390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall UsbDevice_UcxEvtDeviceAdd(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // r15
  int v6; // eax
  int v7; // edx
  int v8; // r12d
  __int64 v9; // rbx
  __int128 v10; // xmm0
  __int64 v11; // xmm1_8
  __int64 v12; // rcx
  int v13; // edx
  __int64 v15; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v16; // [rsp+48h] [rbp-B8h] BYREF
  int v17; // [rsp+50h] [rbp-B0h] BYREF
  int v18; // [rsp+54h] [rbp-ACh]
  __int64 (__fastcall *v19)(__int64); // [rsp+58h] [rbp-A8h]
  __int64 v20; // [rsp+60h] [rbp-A0h]
  int v21; // [rsp+68h] [rbp-98h]
  int v22; // [rsp+6Ch] [rbp-94h]
  __int128 v23; // [rsp+70h] [rbp-90h]
  void *v24; // [rsp+80h] [rbp-80h]
  _QWORD v25[10]; // [rsp+90h] [rbp-70h] BYREF
  __int128 v26; // [rsp+E0h] [rbp-20h]
  __int64 (__fastcall *v27)(__int64, __int64, _DWORD *); // [rsp+F0h] [rbp-10h]
  int v28; // [rsp+100h] [rbp+0h] BYREF
  __int128 v29; // [rsp+104h] [rbp+4h]
  __int64 v30; // [rsp+114h] [rbp+14h]

  v16 = a3;
  v20 = 0LL;
  v15 = 0LL;
  v30 = 0LL;
  v18 = 0;
  HIDWORD(v25[0]) = 0;
  v23 = 0LL;
  v29 = 0LL;
  v5 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
         WdfDriverGlobals,
         a1,
         off_1C0063428);
  v25[0] = 104LL;
  v25[1] = UsbDevice_UcxEvtEndpointsConfigure;
  v25[2] = UsbDevice_UcxEvtEnable;
  v25[3] = UsbDevice_UcxEvtDisable;
  v25[4] = UsbDevice_UcxEvtReset;
  v25[5] = UsbDevice_UcxEvtAddress;
  v25[6] = UsbDevice_UcxEvtUpdate;
  v25[7] = UsbDevice_UcxEvtHubInfo;
  v25[8] = Endpoint_UcxEvtUsbDeviceDefaultEndpointAdd;
  v25[9] = Endpoint_UcxEvtUsbDeviceEndpointAdd;
  v27 = UsbDevice_UcxEvtUsbDeviceGetCharacteristic;
  v26 = 0LL;
  ((void (__fastcall *)(__int64, __int64, _QWORD *))qword_1C0064820)(UcxDriverGlobals, v16, v25);
  v18 = 0;
  v20 = 0LL;
  v21 = 1;
  v22 = 1;
  v24 = off_1C00632C0;
  v19 = UsbDevice_EvtUsbDeviceCleanupCallback;
  v23 = 0LL;
  v17 = 56;
  v6 = ((__int64 (__fastcall *)(__int64, __int64, __int64 *, int *, __int64 *))qword_1C0064818)(
         UcxDriverGlobals,
         a1,
         &v16,
         &v17,
         &v15);
  v8 = v6;
  if ( v6 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v7) = 2;
      WPP_RECORDER_SF_d(*(_QWORD *)(v5 + 72), v7, 12, 10, (__int64)&WPP_a3acd40f84823909f7fc3b79b04bc30f_Traceguids, v6);
    }
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v7) = 4;
      WPP_RECORDER_SF_q(
        *(_QWORD *)(v5 + 72),
        v7,
        12,
        11,
        (__int64)&WPP_a3acd40f84823909f7fc3b79b04bc30f_Traceguids,
        v15);
    }
    v9 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
           WdfDriverGlobals,
           v15,
           off_1C00632C0);
    *(_QWORD *)v9 = v15;
    *(_QWORD *)(v9 + 8) = v5;
    *(_OWORD *)(v9 + 16) = *(_OWORD *)a2;
    *(_OWORD *)(v9 + 32) = *(_OWORD *)(a2 + 16);
    *(_OWORD *)(v9 + 48) = *(_OWORD *)(a2 + 32);
    *(_QWORD *)(v9 + 64) = *(_QWORD *)(a2 + 48);
    v10 = *(_OWORD *)(a2 + 28);
    v28 = *(_DWORD *)(a2 + 20);
    v11 = *(_QWORD *)(a2 + 44);
    v29 = v10;
    v30 = v11;
    v8 = XilUsbDevice_Create(v9, (__int64)&v28);
    if ( v8 >= 0 )
    {
      KeInitializeSpinLock((PKSPIN_LOCK)(v9 + 88));
      *(_DWORD *)(v9 + 112) = 0;
      *(_QWORD *)(v9 + 104) = v9 + 96;
      *(_QWORD *)(v9 + 96) = v9 + 96;
      Controller_AddDeviceToControllerDeviceList(v5, v15, (_QWORD *)(v9 + 72));
      Etw_DeviceCreate(v12, v9);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v13) = 4;
        WPP_RECORDER_SF_dqd(
          *(_QWORD *)(v5 + 72),
          v13,
          12,
          12,
          (__int64)&WPP_a3acd40f84823909f7fc3b79b04bc30f_Traceguids,
          *(_DWORD *)(v9 + 20),
          *(_QWORD *)(v9 + 24),
          *(_DWORD *)(v9 + 44));
      }
    }
  }
  return (unsigned int)v8;
}
