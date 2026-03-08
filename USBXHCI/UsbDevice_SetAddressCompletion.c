/*
 * XREFs of UsbDevice_SetAddressCompletion @ 0x1C0019A00
 * Callers:
 *     <none>
 * Callees:
 *     XilUsbDevice_GetDeviceContextBufferVA @ 0x1C0007FC0 (XilUsbDevice_GetDeviceContextBufferVA.c)
 *     Command_SendCommand @ 0x1C000A820 (Command_SendCommand.c)
 *     UsbDevice_SetDeviceDisabled @ 0x1C000FD4C (UsbDevice_SetDeviceDisabled.c)
 *     WPP_RECORDER_SF_dqD @ 0x1C0018C80 (WPP_RECORDER_SF_dqD.c)
 *     WPP_RECORDER_SF_dq @ 0x1C0019330 (WPP_RECORDER_SF_dq.c)
 *     __security_check_cookie @ 0x1C001E820 (__security_check_cookie.c)
 *     Controller_ReportFatalErrorEx @ 0x1C001EB8C (Controller_ReportFatalErrorEx.c)
 *     _guard_dispatch_icall_nop @ 0x1C0020390 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0020700 (memset.c)
 *     Controller_HwVerifierBreakIfEnabled @ 0x1C0033774 (Controller_HwVerifierBreakIfEnabled.c)
 *     XilDeviceSlot_SendQuerySlotContextInfoRequest @ 0x1C0038834 (XilDeviceSlot_SendQuerySlotContextInfoRequest.c)
 *     WPP_RECORDER_SF_dqdL @ 0x1C004A638 (WPP_RECORDER_SF_dqdL.c)
 */

char __fastcall UsbDevice_SetAddressCompletion(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 v4; // rdi
  int v7; // edx
  __int64 v9; // r8
  __int64 v10; // rsi
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rax
  int v15; // r8d
  int v16; // edx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rsi
  unsigned int v20; // eax
  int v21; // [rsp+50h] [rbp-58h] BYREF
  _OWORD v22[2]; // [rsp+58h] [rbp-50h] BYREF
  __int64 v23; // [rsp+78h] [rbp-30h]

  v4 = *(_QWORD *)(a1 + 48);
  v21 = 0;
  memset(v22, 0, sizeof(v22));
  v23 = 0LL;
  if ( (_DWORD)a2 == 3 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v7 = *(unsigned __int8 *)(v4 + 135);
      LOBYTE(v7) = 4;
      WPP_RECORDER_SF_dq(
        *(_QWORD *)(*(_QWORD *)(v4 + 8) + 72LL),
        v7,
        12,
        22,
        (__int64)&WPP_a3acd40f84823909f7fc3b79b04bc30f_Traceguids,
        *(_BYTE *)(v4 + 135),
        *(_QWORD *)v4);
    }
    if ( (*(_DWORD *)(v4 + 492) & 0x200) != 0 )
      return UsbDevice_SetDeviceDisabled(v4, a2);
    v9 = *(_BYTE *)(v4 + 432) == 0 ? 0xC0000001 : 0;
    goto LABEL_24;
  }
  if ( *(_BYTE *)(a1 + 60) == 1 )
  {
    if ( (*(_DWORD *)(v4 + 492) & 0x200) != 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v16 = *(unsigned __int8 *)(a1 + 61);
        LOBYTE(v16) = 4;
        WPP_RECORDER_SF_dq(
          *(_QWORD *)(*(_QWORD *)(v4 + 8) + 72LL),
          v16,
          12,
          24,
          (__int64)&WPP_a3acd40f84823909f7fc3b79b04bc30f_Traceguids,
          *(_BYTE *)(a1 + 61),
          *(_QWORD *)v4);
      }
    }
    else
    {
      LOWORD(v22[0]) = 40;
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _OWORD *))(WdfFunctions_01023 + 2128))(
        WdfDriverGlobals,
        *(_QWORD *)(v4 + 424),
        v22);
      v10 = *((_QWORD *)&v22[0] + 1);
      v11 = *(_QWORD *)(*(_QWORD *)(v4 + 8) + 136LL);
      v12 = *(_QWORD *)(v11 + 88);
      v13 = v11 + 16;
      v14 = *(_QWORD *)(v12 + 8);
      if ( *(_BYTE *)(v13 + 64) && (*(_BYTE *)(v4 + 656) && *(_DWORD *)(v14 + 604) == 2 || *(_DWORD *)(v14 + 604) == 1) )
      {
        XilDeviceSlot_SendQuerySlotContextInfoRequest(v13, v4, &v21, 0LL);
        v15 = v21;
      }
      else
      {
        v15 = (unsigned __int8)*(_DWORD *)(XilUsbDevice_GetDeviceContextBufferVA(v4) + 12);
      }
      *(_DWORD *)(v10 + 28) = v15;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_dqD(*(_QWORD *)(*(_QWORD *)(v4 + 8) + 72LL), *(unsigned __int8 *)(a1 + 61), v15, 23);
    }
    v9 = 0LL;
    goto LABEL_24;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_dqdL(
      *(_QWORD *)(*(_QWORD *)(v4 + 8) + 72LL),
      *(unsigned __int8 *)(v4 + 135),
      (*(_DWORD *)(v4 + 492) >> 9) & 1,
      a4);
  if ( (*(_DWORD *)(v4 + 492) & 0x200) == 0 )
  {
    v9 = 3221225473LL;
LABEL_24:
    v17 = *(_QWORD *)(v4 + 424);
    *(_QWORD *)(v4 + 424) = 0LL;
    return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64))(WdfFunctions_01023 + 2104))(
             WdfDriverGlobals,
             v17,
             v9);
  }
  v18 = *(_QWORD *)(v4 + 8);
  v19 = *(_QWORD *)(v18 + 144);
  if ( *(_BYTE *)(v4 + 432) )
  {
    Controller_HwVerifierBreakIfEnabled(
      v18,
      *(_QWORD *)v4,
      0,
      0x40000,
      (__int64)"Set Address Command with BSR=1 failed",
      a1 + 24,
      a3);
    return Controller_ReportFatalErrorEx(*(_QWORD *)(v4 + 8), 2, 4117, 0, 0LL, 0LL, 0LL, 0LL);
  }
  else
  {
    memset((void *)(v4 + 456), 0, 0x60uLL);
    *(_QWORD *)(v4 + 504) = v4;
    *(_QWORD *)(v4 + 496) = UsbDevice_DisableCompletionReturnFailure;
    v20 = *(_DWORD *)(v4 + 492) & 0xFFFF2BFF;
    *(_QWORD *)(v4 + 528) = 0LL;
    *(_QWORD *)(v4 + 536) = 0LL;
    *(_DWORD *)(v4 + 492) = v20 | 0x2800;
    *(_BYTE *)(v4 + 495) = *(_BYTE *)(v4 + 135);
    *(_QWORD *)(v4 + 544) = 0LL;
    return Command_SendCommand(v19, v4 + 456);
  }
}
