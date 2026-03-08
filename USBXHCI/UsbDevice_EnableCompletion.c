/*
 * XREFs of UsbDevice_EnableCompletion @ 0x1C0019560
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_dd @ 0x1C00084D8 (WPP_RECORDER_SF_dd.c)
 *     Command_SendCommand @ 0x1C000A820 (Command_SendCommand.c)
 *     Endpoint_Disable @ 0x1C000B0AC (Endpoint_Disable.c)
 *     WPP_RECORDER_SF_L @ 0x1C00136C0 (WPP_RECORDER_SF_L.c)
 *     WPP_RECORDER_SF_q @ 0x1C00142CC (WPP_RECORDER_SF_q.c)
 *     UsbDevice_SetAddress @ 0x1C0018EE0 (UsbDevice_SetAddress.c)
 *     WPP_RECORDER_SF_dq @ 0x1C0019330 (WPP_RECORDER_SF_dq.c)
 *     Endpoint_SetLogIdentifier @ 0x1C0019968 (Endpoint_SetLogIdentifier.c)
 *     XilDeviceSlot_SetDeviceContext @ 0x1C0019D94 (XilDeviceSlot_SetDeviceContext.c)
 *     __security_check_cookie @ 0x1C001E820 (__security_check_cookie.c)
 *     Controller_ReportFatalErrorEx @ 0x1C001EB8C (Controller_ReportFatalErrorEx.c)
 *     _guard_dispatch_icall_nop @ 0x1C0020390 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0020700 (memset.c)
 *     Controller_HwVerifierBreakIfEnabled @ 0x1C0033774 (Controller_HwVerifierBreakIfEnabled.c)
 */

char __fastcall UsbDevice_EnableCompletion(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  _QWORD *v6; // r10
  __int64 v7; // r15
  __int64 v8; // rdi
  char v9; // si
  __int64 v10; // rdi
  char v11; // al
  int v12; // eax
  int v13; // edx
  __int64 v14; // rcx
  __int64 v15; // rdx
  int v16; // eax
  __int64 v17; // rdi
  int v18; // edx
  __int64 v19; // rbp
  unsigned int v20; // eax
  __int64 v21; // rdx
  __int64 v22; // rdx
  _OWORD v24[2]; // [rsp+40h] [rbp-68h] BYREF
  __int64 v25; // [rsp+60h] [rbp-48h]

  v3 = *(_QWORD *)(a1 + 48);
  v6 = *(_QWORD **)(v3 + 8);
  v7 = v6[11];
  v8 = v6[17];
  if ( (_DWORD)a2 == 3 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(a2) = 4;
      WPP_RECORDER_SF_q(v6[9], a2, 12, 15, (__int64)&WPP_a3acd40f84823909f7fc3b79b04bc30f_Traceguids, *(_QWORD *)v3);
    }
    v9 = 1;
    LODWORD(v10) = *(_BYTE *)(v3 + 432) == 0 ? 0xC0000001 : 0;
LABEL_29:
    LOBYTE(a2) = 1;
    LOBYTE(v16) = Endpoint_Disable(*(_QWORD *)(v3 + 176), a2);
    if ( v9 )
    {
      v22 = *(_QWORD *)(v3 + 424);
      *(_QWORD *)(v3 + 424) = 0LL;
      LOBYTE(v16) = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01023 + 2104))(
                      WdfDriverGlobals,
                      v22,
                      (unsigned int)v10);
    }
    return v16;
  }
  v11 = *(_BYTE *)(a1 + 60);
  if ( v11 != 1 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(a2) = 3;
      WPP_RECORDER_SF_L(v6[9], a2, 12, 19, (__int64)&WPP_a3acd40f84823909f7fc3b79b04bc30f_Traceguids, v11);
    }
    if ( *(_BYTE *)(a1 + 60) == 9 )
    {
      v21 = *(_QWORD *)(v3 + 424);
      v25 = 0LL;
      memset(v24, 0, sizeof(v24));
      LOWORD(v24[0]) = 40;
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _OWORD *))(WdfFunctions_01023 + 2128))(
        WdfDriverGlobals,
        v21,
        v24);
      *(_DWORD *)(*((_QWORD *)&v24[0] + 1) + 32LL) |= 2u;
    }
    if ( *(_BYTE *)(v3 + 432) )
    {
      Controller_ReportFatalErrorEx(*(_QWORD *)(v3 + 8), 2, 4118, 0, 0LL, 0LL, 0LL, 0LL);
      v9 = 0;
    }
    else
    {
      v9 = 1;
    }
    LODWORD(v10) = -1073741823;
    goto LABEL_29;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_dq(
      v6[9],
      a2,
      12,
      16,
      (__int64)&WPP_a3acd40f84823909f7fc3b79b04bc30f_Traceguids,
      *(_BYTE *)(a1 + 61),
      *(_QWORD *)v3);
  }
  *(_BYTE *)(v3 + 134) = 1;
  *(_BYTE *)(v3 + 135) = *(_BYTE *)(a1 + 61);
  Endpoint_SetLogIdentifier(*(_QWORD *)(v3 + 176));
  v12 = XilDeviceSlot_SetDeviceContext(v8, v3, *(unsigned __int8 *)(v3 + 135));
  v10 = v12;
  if ( v12 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v13 = *(unsigned __int8 *)(v3 + 135);
      LOBYTE(v13) = 2;
      WPP_RECORDER_SF_dd(
        *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
        v13,
        12,
        17,
        (__int64)&WPP_a3acd40f84823909f7fc3b79b04bc30f_Traceguids,
        *(_BYTE *)(v3 + 135),
        v12);
    }
    Controller_HwVerifierBreakIfEnabled(
      *(_QWORD *)(v3 + 8),
      *(_QWORD *)v3,
      0,
      0x20000,
      (__int64)"Enable Slot command returned a SlotId value that is already in use",
      a1 + 24,
      a3);
    Controller_ReportFatalErrorEx(*(_QWORD *)(v3 + 8), 2, 4116, 0, v10, 0LL, 0LL, 0LL);
    v9 = 1;
    goto LABEL_29;
  }
  v14 = *(_QWORD *)(v7 + 48);
  if ( v14 )
    v15 = v14 + 4LL * *(unsigned __int8 *)(v3 + 135);
  else
    v15 = 0LL;
  *(_QWORD *)(v3 + 160) = v15;
  v16 = UsbDevice_SetAddress(v3, 1);
  v17 = v16;
  if ( v16 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v18 = *(unsigned __int8 *)(v3 + 135);
      LOBYTE(v18) = 2;
      WPP_RECORDER_SF_dd(
        *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
        v18,
        12,
        18,
        (__int64)&WPP_a3acd40f84823909f7fc3b79b04bc30f_Traceguids,
        *(_BYTE *)(v3 + 135),
        v16);
    }
    v19 = *(_QWORD *)(*(_QWORD *)(v3 + 8) + 144LL);
    memset((void *)(v3 + 456), 0, 0x60uLL);
    if ( *(_BYTE *)(v3 + 432) )
    {
      LOBYTE(v16) = Controller_ReportFatalErrorEx(*(_QWORD *)(v3 + 8), 2, 4117, 0, v17, 0LL, 0LL, 0LL);
    }
    else
    {
      *(_QWORD *)(v3 + 504) = v3;
      *(_QWORD *)(v3 + 496) = UsbDevice_DisableCompletionReturnFailure;
      v20 = *(_DWORD *)(v3 + 492) & 0xFFFF2BFF;
      *(_QWORD *)(v3 + 528) = 0LL;
      *(_QWORD *)(v3 + 536) = 0LL;
      *(_DWORD *)(v3 + 492) = v20 | 0x2800;
      *(_BYTE *)(v3 + 495) = *(_BYTE *)(v3 + 135);
      *(_QWORD *)(v3 + 544) = 0LL;
      LOBYTE(v16) = Command_SendCommand(v19, v3 + 456);
    }
  }
  return v16;
}
