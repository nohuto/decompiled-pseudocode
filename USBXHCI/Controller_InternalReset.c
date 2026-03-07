__int64 __fastcall Controller_InternalReset(__int64 a1, __int64 a2, __int64 a3)
{
  int v4; // esi
  __int64 v5; // rbx
  __int64 v6; // rcx
  __int64 v7; // rbx
  int v8; // edx
  int v9; // eax
  int v10; // edx
  _QWORD *v11; // rcx
  int v12; // edx
  int v13; // r8d
  int v14; // edx
  int v15; // eax
  int v16; // edx
  __int64 v17; // rcx
  __int64 result; // rax
  __int64 v19; // rcx
  __int64 v20; // r8
  _QWORD *v21; // rsi
  int v22; // edx
  __int64 v23; // [rsp+28h] [rbp-30h]
  int v24; // [rsp+30h] [rbp-28h]
  __int64 v25; // [rsp+38h] [rbp-20h]

  v4 = 0;
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc & 2) != 0 )
    McTemplateK0p_EtwWriteTransfer(a1, &USBXHCI_ETW_EVENT_CONTROLLER_INTERNAL_RESET_START, a3, *(_QWORD *)(a1 + 8));
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(*(_QWORD *)(a1 + 72), 4, 4, 179, (__int64)&WPP_ac07559723993fb37d1c33c002d3118e_Traceguids);
  if ( _InterlockedIncrement((volatile signed __int32 *)(a1 + 416)) != 1 && !KdRefreshDebuggerNotPresent() )
    __debugbreak();
  _InterlockedIncrement((volatile signed __int32 *)(a1 + 404));
  if ( !_InterlockedCompareExchange((volatile signed __int32 *)(a1 + 860), 0, 1)
    && !_InterlockedCompareExchange((volatile signed __int32 *)(a1 + 856), 0, 0) )
  {
    ++*(_DWORD *)(a1 + 476);
    ++*(_DWORD *)(a1 + 520);
    *(_BYTE *)(a1 + 472) = 1;
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 408));
  }
  LOBYTE(a3) = 1;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64))(WdfFunctions_01023 + 2560))(
    WdfDriverGlobals,
    *(_QWORD *)(a1 + 360),
    a3);
  v5 = *(_QWORD *)(a1 + 144);
  DynamicLock_Acquire(*(_QWORD *)(v5 + 112));
  v6 = *(_QWORD *)(v5 + 112);
  *(_DWORD *)(v5 + 36) = 3;
  *(_BYTE *)(v5 + 121) = 0;
  DynamicLock_Release(v6);
  DeviceSlot_ControllerResetPreReset(*(_QWORD *)(a1 + 136));
  Interrupter_FlushPendingDpcOrWorkItemPreReset(*(_QWORD *)(a1 + 128));
  v7 = (int)Register_ControllerStop(*(_QWORD *)(a1 + 88));
  Interrupter_FlushPendingDpcOrWorkItemPreReset(*(_QWORD *)(a1 + 128));
  if ( (int)v7 >= 0 )
  {
    v9 = Register_ControllerReset(*(_QWORD *)(a1 + 88), 1);
    v4 = v9;
    if ( v9 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v10) = 2;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(a1 + 72),
        v10,
        4,
        181,
        (__int64)&WPP_ac07559723993fb37d1c33c002d3118e_Traceguids,
        v9);
    }
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v8) = 2;
      WPP_RECORDER_SF_d(*(_QWORD *)(a1 + 72), v8, 4, 180, (__int64)&WPP_ac07559723993fb37d1c33c002d3118e_Traceguids, v7);
    }
    Controller_DisableController(a1);
  }
  Command_ControllerResetPostReset(*(_QWORD *)(a1 + 144));
  v11 = *(_QWORD **)(a1 + 120);
  if ( v11 )
    CommonBuffer_FlushWorkItems(v11);
  DeviceSlot_ControllerResetPostReset(*(_QWORD *)(a1 + 136));
  RootHub_D0Entry(*(_QWORD *)(a1 + 152));
  if ( (int)v7 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v12) = 2;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(a1 + 72),
        v12,
        4,
        182,
        (__int64)&WPP_ac07559723993fb37d1c33c002d3118e_Traceguids,
        v7);
    }
    Controller_HwVerifierBreakIfEnabled(
      (_QWORD *)a1,
      0,
      0,
      8LL,
      "During controller reset recovery, controller stop timed out",
      0LL,
      0LL);
    v13 = 4107;
LABEL_24:
    Controller_ReportFatalErrorEx(a1, 4u, v13, 0LL, v7, 0LL, 0LL, 0LL);
    goto LABEL_34;
  }
  Interrupter_ControllerResetPostReset(*(_QWORD *)(a1 + 128));
  if ( v4 >= 0 )
  {
    v15 = Controller_Start(a1);
    v7 = v15;
    if ( v15 < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v16) = 2;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(a1 + 72),
          v16,
          4,
          184,
          (__int64)&WPP_ac07559723993fb37d1c33c002d3118e_Traceguids,
          v15);
      }
      Controller_HwVerifierBreakIfEnabled(
        (_QWORD *)a1,
        0,
        0,
        32LL,
        "During controller reset recovery, controller start timed out",
        0LL,
        0LL);
      v13 = 4104;
      goto LABEL_24;
    }
    LODWORD(v7) = 0;
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v14) = 2;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(a1 + 72),
        v14,
        4,
        183,
        (__int64)&WPP_ac07559723993fb37d1c33c002d3118e_Traceguids,
        v4);
    }
    Controller_HwVerifierBreakIfEnabled(
      (_QWORD *)a1,
      0,
      0,
      16LL,
      "During controller reset recovery, controller reset timed out",
      0LL,
      0LL);
    Controller_ReportFatalErrorEx(a1, 4u, 4103, 0LL, v4, 0LL, 0LL, 0LL);
    LODWORD(v7) = v4;
  }
LABEL_34:
  v17 = *(_QWORD *)(a1 + 144);
  if ( (int)v7 < 0 )
  {
    Command_FailAllCommands(v17);
    v21 = (_QWORD *)(a1 + 8);
    result = ((__int64 (__fastcall *)(__int64, _QWORD))qword_1C0064800)(UcxDriverGlobals, *(_QWORD *)(a1 + 8));
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v22) = 2;
      result = WPP_RECORDER_SF_d(
                 *(_QWORD *)(a1 + 72),
                 v22,
                 4,
                 186,
                 (__int64)&WPP_ac07559723993fb37d1c33c002d3118e_Traceguids,
                 v7);
    }
  }
  else
  {
    result = Command_ControllerResetPostResetSuccess(v17);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      result = WPP_RECORDER_SF_(
                 *(_QWORD *)(a1 + 72),
                 4,
                 4,
                 185,
                 (__int64)&WPP_ac07559723993fb37d1c33c002d3118e_Traceguids);
    v21 = (_QWORD *)(a1 + 8);
  }
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc & 2) != 0 )
    result = McTemplateK0pq_EtwWriteTransfer(
               v19,
               &USBXHCI_ETW_EVENT_CONTROLLER_INTERNAL_RESET_COMPLETE,
               v20,
               *v21,
               v7,
               v23,
               v24,
               v25);
  _InterlockedDecrement((volatile signed __int32 *)(a1 + 416));
  return result;
}
