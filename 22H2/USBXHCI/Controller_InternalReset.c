/*
 * XREFs of Controller_InternalReset @ 0x1C00322D8
 * Callers:
 *     Controller_InitiateBootRecovery @ 0x1C0031EF0 (Controller_InitiateBootRecovery.c)
 *     Controller_InitiateRecovery @ 0x1C0031F80 (Controller_InitiateRecovery.c)
 *     Controller_UcxEvtReset @ 0x1C0033F60 (Controller_UcxEvtReset.c)
 * Callees:
 *     DynamicLock_Release @ 0x1C0006D40 (DynamicLock_Release.c)
 *     DynamicLock_Acquire @ 0x1C0007340 (DynamicLock_Acquire.c)
 *     WPP_RECORDER_SF_ @ 0x1C000A0B8 (WPP_RECORDER_SF_.c)
 *     Register_ControllerStop @ 0x1C000B014 (Register_ControllerStop.c)
 *     CommonBuffer_FlushWorkItems @ 0x1C000B6F0 (CommonBuffer_FlushWorkItems.c)
 *     WPP_RECORDER_SF_d @ 0x1C000F118 (WPP_RECORDER_SF_d.c)
 *     Register_ControllerReset @ 0x1C0010D88 (Register_ControllerReset.c)
 *     Controller_Start @ 0x1C0011474 (Controller_Start.c)
 *     RootHub_D0Entry @ 0x1C0011F50 (RootHub_D0Entry.c)
 *     _guard_dispatch_icall_nop @ 0x1C001AFF0 (_guard_dispatch_icall_nop.c)
 *     Command_ControllerResetPostReset @ 0x1C002DDEC (Command_ControllerResetPostReset.c)
 *     Command_ControllerResetPostResetSuccess @ 0x1C002DFB4 (Command_ControllerResetPostResetSuccess.c)
 *     Command_FailAllCommands @ 0x1C002E080 (Command_FailAllCommands.c)
 *     Controller_DisableController @ 0x1C00314CC (Controller_DisableController.c)
 *     Controller_HwVerifierBreakIfEnabled @ 0x1C0031CC4 (Controller_HwVerifierBreakIfEnabled.c)
 *     Controller_ReportFatalError @ 0x1C0032BA0 (Controller_ReportFatalError.c)
 *     McTemplateK0p_EtwWriteTransfer @ 0x1C0034FB0 (McTemplateK0p_EtwWriteTransfer.c)
 *     McTemplateK0pq_EtwWriteTransfer @ 0x1C0035254 (McTemplateK0pq_EtwWriteTransfer.c)
 *     DeviceSlot_ControllerResetPostReset @ 0x1C0036010 (DeviceSlot_ControllerResetPostReset.c)
 *     DeviceSlot_ControllerResetPreReset @ 0x1C00360AC (DeviceSlot_ControllerResetPreReset.c)
 *     Interrupter_ControllerResetPostReset @ 0x1C003B850 (Interrupter_ControllerResetPostReset.c)
 *     Interrupter_FlushPendingDpcOrWorkItemPreReset @ 0x1C003BB4C (Interrupter_FlushPendingDpcOrWorkItemPreReset.c)
 */

__int64 __fastcall Controller_InternalReset(__int64 a1, __int64 a2, __int64 a3)
{
  int v4; // esi
  __int64 v5; // rbx
  int v6; // edx
  int v7; // r8d
  int v8; // r9d
  __int64 v9; // rcx
  int v10; // edx
  int v11; // r8d
  int v12; // r9d
  int v13; // ebx
  int v14; // edx
  int v15; // edx
  int v16; // r8d
  int v17; // r9d
  int v18; // eax
  _QWORD *v19; // rcx
  int v20; // edx
  int v21; // r8d
  int v22; // edx
  int v23; // r8d
  int v24; // r9d
  int v25; // edx
  int v26; // r8d
  int v27; // r9d
  int v28; // eax
  __int64 v29; // rcx
  __int64 result; // rax
  __int64 v31; // rcx
  __int64 v32; // r8
  int v33; // edx
  __int64 v34; // [rsp+28h] [rbp-30h]
  int v35; // [rsp+30h] [rbp-28h]

  v4 = 0;
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc & 2) != 0 )
    McTemplateK0p_EtwWriteTransfer(a1, &USBXHCI_ETW_EVENT_CONTROLLER_INTERNAL_RESET_START, a3, *(_QWORD *)(a1 + 8));
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(*(_QWORD *)(a1 + 72), 4, 4, 176, (__int64)&WPP_4d8d366f5fa2386b8519f650eb4534ed_Traceguids);
  if ( _InterlockedIncrement((volatile signed __int32 *)(a1 + 416)) != 1 && !KdRefreshDebuggerNotPresent() )
    __debugbreak();
  _InterlockedIncrement((volatile signed __int32 *)(a1 + 404));
  if ( !_InterlockedCompareExchange((volatile signed __int32 *)(a1 + 804), 0, 1)
    && !_InterlockedCompareExchange((volatile signed __int32 *)(a1 + 800), 0, 0) )
  {
    ++*(_DWORD *)(a1 + 476);
    *(_BYTE *)(a1 + 472) = 1;
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 408));
  }
  LOBYTE(a3) = 1;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64))(WdfFunctions_01023 + 2560))(
    WdfDriverGlobals,
    *(_QWORD *)(a1 + 360),
    a3);
  v5 = *(_QWORD *)(a1 + 144);
  DynamicLock_Acquire(*(_QWORD *)(v5 + 112), v6, v7, v8);
  v9 = *(_QWORD *)(v5 + 112);
  *(_DWORD *)(v5 + 36) = 3;
  *(_BYTE *)(v5 + 121) = 0;
  DynamicLock_Release(v9, v10, v11, v12);
  DeviceSlot_ControllerResetPreReset(*(_QWORD *)(a1 + 136));
  Interrupter_FlushPendingDpcOrWorkItemPreReset(*(_QWORD *)(a1 + 128));
  v13 = Register_ControllerStop(*(_QWORD *)(a1 + 88));
  Interrupter_FlushPendingDpcOrWorkItemPreReset(*(_QWORD *)(a1 + 128));
  if ( v13 >= 0 )
  {
    v18 = Register_ControllerReset(*(_QWORD *)(a1 + 88), 1);
    v4 = v18;
    if ( v18 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v15) = 2;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(a1 + 72),
        v15,
        4,
        178,
        (__int64)&WPP_4d8d366f5fa2386b8519f650eb4534ed_Traceguids,
        v18);
    }
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
        177,
        (__int64)&WPP_4d8d366f5fa2386b8519f650eb4534ed_Traceguids,
        v13);
    }
    Controller_DisableController(a1);
  }
  Command_ControllerResetPostReset(*(_QWORD *)(a1 + 144), v15, v16, v17);
  v19 = *(_QWORD **)(a1 + 120);
  if ( v19 )
    CommonBuffer_FlushWorkItems(v19);
  DeviceSlot_ControllerResetPostReset(*(_QWORD *)(a1 + 136));
  RootHub_D0Entry(*(_QWORD *)(a1 + 152));
  if ( v13 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v20) = 2;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(a1 + 72),
        v20,
        4,
        179,
        (__int64)&WPP_4d8d366f5fa2386b8519f650eb4534ed_Traceguids,
        v13);
    }
    Controller_HwVerifierBreakIfEnabled(
      (_QWORD *)a1,
      0,
      0,
      8LL,
      "During controller reset recovery, controller stop timed out",
      0LL,
      0LL);
    v21 = 4107;
LABEL_24:
    Controller_ReportFatalError(a1, 4, v21, 0, 0LL, 0LL, 0LL);
    goto LABEL_34;
  }
  Interrupter_ControllerResetPostReset(*(_QWORD *)(a1 + 128));
  if ( v4 >= 0 )
  {
    v28 = Controller_Start(a1, v25, v26, v27);
    v13 = v28;
    if ( v28 < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v22) = 2;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(a1 + 72),
          v22,
          4,
          181,
          (__int64)&WPP_4d8d366f5fa2386b8519f650eb4534ed_Traceguids,
          v28);
      }
      Controller_HwVerifierBreakIfEnabled(
        (_QWORD *)a1,
        0,
        0,
        32LL,
        "During controller reset recovery, controller start timed out",
        0LL,
        0LL);
      v21 = 4104;
      goto LABEL_24;
    }
    v13 = 0;
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v25) = 2;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(a1 + 72),
        v25,
        4,
        180,
        (__int64)&WPP_4d8d366f5fa2386b8519f650eb4534ed_Traceguids,
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
    Controller_ReportFatalError(a1, 4, 4103, 0, 0LL, 0LL, 0LL);
    v13 = v4;
  }
LABEL_34:
  v29 = *(_QWORD *)(a1 + 144);
  if ( v13 < 0 )
  {
    Command_FailAllCommands(v29, v22, v23, v24);
    result = ((__int64 (__fastcall *)(__int64, _QWORD))qword_1C00617A0)(UcxDriverGlobals, *(_QWORD *)(a1 + 8));
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v33) = 2;
      result = WPP_RECORDER_SF_d(
                 *(_QWORD *)(a1 + 72),
                 v33,
                 4,
                 183,
                 (__int64)&WPP_4d8d366f5fa2386b8519f650eb4534ed_Traceguids,
                 v13);
    }
  }
  else
  {
    result = Command_ControllerResetPostResetSuccess(v29, v22, v23, v24);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      result = WPP_RECORDER_SF_(
                 *(_QWORD *)(a1 + 72),
                 4,
                 4,
                 182,
                 (__int64)&WPP_4d8d366f5fa2386b8519f650eb4534ed_Traceguids);
  }
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc & 2) != 0 )
    result = McTemplateK0pq_EtwWriteTransfer(
               v31,
               &USBXHCI_ETW_EVENT_CONTROLLER_INTERNAL_RESET_COMPLETE,
               v32,
               *(_QWORD *)(a1 + 8),
               v13,
               v34,
               v35);
  _InterlockedDecrement((volatile signed __int32 *)(a1 + 416));
  return result;
}
