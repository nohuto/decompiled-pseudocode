/*
 * XREFs of UsbDevice_UcxEvtReset @ 0x1C0018D30
 * Callers:
 *     <none>
 * Callees:
 *     XilUsbDevice_GetDeviceContextBufferVA @ 0x1C0007FC0 (XilUsbDevice_GetDeviceContextBufferVA.c)
 *     Command_SendCommand @ 0x1C000A820 (Command_SendCommand.c)
 *     Controller_IsControllerAccessible @ 0x1C000A8E4 (Controller_IsControllerAccessible.c)
 *     Endpoint_Disable @ 0x1C000B0AC (Endpoint_Disable.c)
 *     WPP_RECORDER_SF_dqL @ 0x1C000CC70 (WPP_RECORDER_SF_dqL.c)
 *     WPP_RECORDER_SF_dq @ 0x1C0019330 (WPP_RECORDER_SF_dq.c)
 *     __security_check_cookie @ 0x1C001E820 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0020390 (_guard_dispatch_icall_nop.c)
 *     XilDeviceSlot_SendQuerySlotContextInfoRequest @ 0x1C0038834 (XilDeviceSlot_SendQuerySlotContextInfoRequest.c)
 */

char __fastcall UsbDevice_UcxEvtReset(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // rbx
  _QWORD *v5; // rcx
  __int64 v6; // r14
  __int64 v7; // rcx
  __int64 v8; // rax
  unsigned int v9; // esi
  int v10; // r8d
  int v11; // edx
  int v12; // edx
  int v13; // r9d
  __int64 v14; // rax
  __int64 *v16; // rdi
  __int64 v17; // rsi
  __int64 v18; // rax
  int v19; // ecx
  int v20; // eax
  unsigned int v21; // ecx
  bool v22; // zf
  char v23; // al
  __int64 (__fastcall *v24)(); // rdx
  char v25; // [rsp+28h] [rbp-70h]
  unsigned int v26; // [rsp+40h] [rbp-58h] BYREF
  _OWORD v27[2]; // [rsp+48h] [rbp-50h] BYREF
  __int64 v28; // [rsp+68h] [rbp-30h]

  v26 = 0;
  memset(v27, 0, sizeof(v27));
  v28 = 0LL;
  LOWORD(v27[0]) = 40;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _OWORD *))(WdfFunctions_01023 + 2128))(
    WdfDriverGlobals,
    a2,
    v27);
  v3 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, void *))(WdfFunctions_01023 + 1616))(
         WdfDriverGlobals,
         *(_QWORD *)(*((_QWORD *)&v27[0] + 1) + 16LL),
         off_1C00632C0);
  v4 = v3;
  v5 = *(_QWORD **)(v3 + 8);
  v6 = v5[18];
  if ( !*(_BYTE *)(v3 + 134) )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01023 + 2104))(
               WdfDriverGlobals,
               a2,
               0LL);
    v12 = *(unsigned __int8 *)(v3 + 135);
    v13 = 59;
    v14 = *(_QWORD *)v3;
    goto LABEL_9;
  }
  v7 = v5[17] + 16LL;
  v8 = *(_QWORD *)(*(_QWORD *)(v7 + 72) + 8LL);
  if ( *(_BYTE *)(v7 + 64) && (*(_BYTE *)(v4 + 656) && *(_DWORD *)(v8 + 604) == 2 || *(_DWORD *)(v8 + 604) == 1) )
  {
    XilDeviceSlot_SendQuerySlotContextInfoRequest(v7, v4, 0LL, &v26);
    v9 = v26;
  }
  else
  {
    v9 = *(_DWORD *)(XilUsbDevice_GetDeviceContextBufferVA(v4) + 12) >> 27;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v11 = *(unsigned __int8 *)(v4 + 135);
    LOBYTE(v11) = 4;
    WPP_RECORDER_SF_dqL(*(_QWORD *)(*(_QWORD *)(v4 + 8) + 72LL), v11, v10, 60);
  }
  if ( v9 < 2 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01023 + 2104))(
               WdfDriverGlobals,
               a2,
               0LL);
    v12 = *(unsigned __int8 *)(v4 + 135);
    v13 = 61;
    v5 = *(_QWORD **)(v4 + 8);
    v14 = *(_QWORD *)v4;
LABEL_9:
    v25 = v12;
    LOBYTE(v12) = 4;
    WPP_RECORDER_SF_dq(v5[9], v12, 12, v13, (__int64)&WPP_a3acd40f84823909f7fc3b79b04bc30f_Traceguids, v25, v14);
    return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01023 + 2104))(
             WdfDriverGlobals,
             a2,
             0LL);
  }
  if ( !Controller_IsControllerAccessible(*(_QWORD *)(v4 + 8)) )
  {
    v16 = (__int64 *)(v4 + 184);
    v17 = 30LL;
    do
    {
      if ( *v16 )
        Endpoint_Disable(*v16, 0LL);
      ++v16;
      --v17;
    }
    while ( v17 );
    *(_DWORD *)(v4 + 152) = 3;
    return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01023 + 2104))(
             WdfDriverGlobals,
             a2,
             0LL);
  }
  v18 = *(_QWORD *)(v4 + 8);
  v19 = *(_DWORD *)(v4 + 492);
  *(_QWORD *)(v4 + 424) = a2;
  *(_BYTE *)(v4 + 432) = 1;
  v20 = (*(_QWORD *)(v18 + 336) >> 15) & 1;
  if ( v20 )
    v21 = v19 & 0xFFFF03FF | 0x2800;
  else
    v21 = v19 & 0xFFFF03FF | 0x4400;
  v22 = v20 == 0LL;
  v23 = *(_BYTE *)(v4 + 135);
  v24 = UsbDevice_OnResetDisableCompletion;
  if ( v22 )
    v24 = UsbDevice_DeviceResetCompletion;
  *(_QWORD *)(v4 + 496) = v24;
  *(_QWORD *)(v4 + 504) = v4;
  *(_DWORD *)(v4 + 492) = v21;
  *(_BYTE *)(v4 + 495) = v23;
  *(_QWORD *)(v4 + 528) = 0LL;
  *(_DWORD *)(v4 + 536) = 0;
  *(_DWORD *)(v4 + 540) = 0;
  *(_QWORD *)(v4 + 544) = 0LL;
  return Command_SendCommand(v6, v4 + 456);
}
