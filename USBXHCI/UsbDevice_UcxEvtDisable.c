/*
 * XREFs of UsbDevice_UcxEvtDisable @ 0x1C0049D80
 * Callers:
 *     <none>
 * Callees:
 *     Command_SendCommand @ 0x1C000A820 (Command_SendCommand.c)
 *     Controller_IsControllerAccessible @ 0x1C000A8E4 (Controller_IsControllerAccessible.c)
 *     Endpoint_Disable @ 0x1C000B0AC (Endpoint_Disable.c)
 *     UsbDevice_SetDeviceDisabled @ 0x1C000FD4C (UsbDevice_SetDeviceDisabled.c)
 *     RootHub_ReleaseReadModifyWriteLock @ 0x1C00182B0 (RootHub_ReleaseReadModifyWriteLock.c)
 *     RootHub_AcquireReadModifyWriteLock @ 0x1C00182F4 (RootHub_AcquireReadModifyWriteLock.c)
 *     WPP_RECORDER_SF_dq @ 0x1C0019330 (WPP_RECORDER_SF_dq.c)
 *     __security_check_cookie @ 0x1C001E820 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0020390 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0020700 (memset.c)
 *     RootHub_DisableLPMForSlot @ 0x1C003F3E8 (RootHub_DisableLPMForSlot.c)
 */

char __fastcall UsbDevice_UcxEvtDisable(__int64 a1, __int64 a2)
{
  _QWORD *v3; // rax
  __int64 v4; // rdx
  __int64 v5; // r14
  __int64 v6; // rcx
  __int64 v7; // r12
  char *v8; // r15
  int v9; // edx
  int v10; // edx
  __int64 v11; // rdx
  __int64 *v12; // r14
  __int64 v13; // rbx
  unsigned int v15; // edi
  __int64 v16; // rsi
  __int64 v17; // rbx
  __int64 v18; // rdx
  unsigned int v19; // eax
  _OWORD v20[2]; // [rsp+40h] [rbp-58h] BYREF
  __int64 v21; // [rsp+60h] [rbp-38h]

  memset(v20, 0, sizeof(v20));
  v21 = 0LL;
  LOWORD(v20[0]) = 40;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _OWORD *))(WdfFunctions_01023 + 2128))(
    WdfDriverGlobals,
    a2,
    v20);
  v3 = (_QWORD *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, void *))(WdfFunctions_01023 + 1616))(
                   WdfDriverGlobals,
                   *(_QWORD *)(*((_QWORD *)&v20[0] + 1) + 16LL),
                   off_1C00632C0);
  v5 = (__int64)v3;
  v6 = v3[1];
  v7 = *(_QWORD *)(v6 + 144);
  v8 = (char *)v3 + 135;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v9 = (unsigned __int8)*v8;
    LOBYTE(v9) = 4;
    WPP_RECORDER_SF_dq(
      *(_QWORD *)(v6 + 72),
      v9,
      12,
      53,
      (__int64)&WPP_a3acd40f84823909f7fc3b79b04bc30f_Traceguids,
      *v8,
      *v3);
  }
  if ( !*(_BYTE *)(v5 + 134) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v10 = (unsigned __int8)*v8;
      LOBYTE(v10) = 4;
      WPP_RECORDER_SF_dq(
        *(_QWORD *)(*(_QWORD *)(v5 + 8) + 72LL),
        v10,
        12,
        54,
        (__int64)&WPP_a3acd40f84823909f7fc3b79b04bc30f_Traceguids,
        *v8,
        *(_QWORD *)v5);
    }
    LOBYTE(v4) = 1;
    Endpoint_Disable(*(_QWORD *)(v5 + 176), v4);
    v12 = (__int64 *)(v5 + 184);
    v13 = 30LL;
    do
    {
      if ( *v12 )
      {
        LOBYTE(v11) = 1;
        Endpoint_Disable(*v12, v11);
        *v12 = 0LL;
      }
      ++v12;
      --v13;
    }
    while ( v13 );
    return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01023 + 2104))(
             WdfDriverGlobals,
             a2,
             0LL);
  }
  if ( *(_BYTE *)(v5 + 568) )
    RootHub_DisableLPMForSlot(*(_QWORD **)(*(_QWORD *)(v5 + 8) + 152LL), *(_DWORD *)(v5 + 44), (unsigned __int8)*v8);
  if ( *(_BYTE *)(v5 + 569) )
  {
    v15 = *(_DWORD *)(v5 + 44) - 1;
    v16 = *(_QWORD *)(*(_QWORD *)(v5 + 8) + 152LL);
    v17 = *(_QWORD *)(v16 + 48) + 120LL * v15;
    RootHub_AcquireReadModifyWriteLock(v16, v15);
    --*(_DWORD *)(v17 + 48);
    RootHub_ReleaseReadModifyWriteLock(v16, v15);
  }
  if ( !Controller_IsControllerAccessible(*(_QWORD *)(v5 + 8)) )
  {
    UsbDevice_SetDeviceDisabled(v5, v18);
    return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01023 + 2104))(
             WdfDriverGlobals,
             a2,
             0LL);
  }
  *(_QWORD *)(v5 + 424) = a2;
  *(_BYTE *)(v5 + 432) = 1;
  memset((void *)(v5 + 456), 0, 0x60uLL);
  *(_QWORD *)(v5 + 528) = 0LL;
  *(_DWORD *)(v5 + 536) = 0;
  *(_DWORD *)(v5 + 540) = 0;
  *(_QWORD *)(v5 + 544) = 0LL;
  *(_QWORD *)(v5 + 496) = UsbDevice_DisableCompletionReturnSuccess;
  v19 = *(_DWORD *)(v5 + 492) & 0xFFFF2BFF;
  *(_QWORD *)(v5 + 504) = v5;
  *(_DWORD *)(v5 + 492) = v19 | 0x2800;
  *(_BYTE *)(v5 + 495) = *v8;
  return Command_SendCommand(v7, v5 + 456);
}
