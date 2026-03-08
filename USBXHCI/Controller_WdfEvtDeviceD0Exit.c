/*
 * XREFs of Controller_WdfEvtDeviceD0Exit @ 0x1C000E9C0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0005BBC (WPP_RECORDER_SF_.c)
 *     CommonBuffer_FlushWorkItems @ 0x1C000ED94 (CommonBuffer_FlushWorkItems.c)
 *     Controller_D0Exit @ 0x1C000EE10 (Controller_D0Exit.c)
 *     Interrupter_D0ExitStopped @ 0x1C000EFB0 (Interrupter_D0ExitStopped.c)
 *     RootHub_D0Exit @ 0x1C0010338 (RootHub_D0Exit.c)
 *     Register_SetClearSSICPortUnused @ 0x1C0013BD0 (Register_SetClearSSICPortUnused.c)
 *     WPP_RECORDER_SF_qLL @ 0x1C0013DC4 (WPP_RECORDER_SF_qLL.c)
 *     WPP_RECORDER_SF_d @ 0x1C0018458 (WPP_RECORDER_SF_d.c)
 *     Register_ControllerReset @ 0x1C0018518 (Register_ControllerReset.c)
 *     Controller_InUseByDebugger @ 0x1C001C410 (Controller_InUseByDebugger.c)
 *     Etw_ReportControllerHealthWithPortInfo @ 0x1C001F980 (Etw_ReportControllerHealthWithPortInfo.c)
 *     _guard_dispatch_icall_nop @ 0x1C0020390 (_guard_dispatch_icall_nop.c)
 *     Controller_D0ExitSaveState @ 0x1C0032A8C (Controller_D0ExitSaveState.c)
 *     Controller_ExecuteDSMToSendPORTSCValues @ 0x1C0033374 (Controller_ExecuteDSMToSendPORTSCValues.c)
 *     Controller_HwVerifierBreakIfEnabled @ 0x1C0033774 (Controller_HwVerifierBreakIfEnabled.c)
 *     McTemplateK0pqqh_EtwWriteTransfer @ 0x1C0036EF4 (McTemplateK0pqqh_EtwWriteTransfer.c)
 *     McTemplateK0pqqq_EtwWriteTransfer @ 0x1C0036F88 (McTemplateK0pqqq_EtwWriteTransfer.c)
 *     Register_SaveRestoreCHTNonArchitecturalRegisters @ 0x1C003F048 (Register_SaveRestoreCHTNonArchitecturalRegisters.c)
 *     Controller_ExecuteHSICDisconnectInU3Workaround @ 0x1C006E400 (Controller_ExecuteHSICDisconnectInU3Workaround.c)
 *     Controller_ExecuteKBLPowerTransitionWorkaround @ 0x1C0078248 (Controller_ExecuteKBLPowerTransitionWorkaround.c)
 */

__int64 __fastcall Controller_WdfEvtDeviceD0Exit(__int64 a1, unsigned __int32 a2)
{
  __m128i *v4; // rdi
  int v5; // eax
  int v6; // edx
  __int64 v7; // r8
  int v8; // r14d
  bool v9; // zf
  __int64 v10; // rdx
  __m128i *v11; // rbp
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rbx
  __int64 v15; // rdx
  int v16; // eax
  int v17; // edx
  int v18; // ecx
  int v19; // r8d

  v4 = *(__m128i **)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
                       WdfDriverGlobals,
                       a1,
                       off_1C00633D8)
                   + 8);
  v5 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01023 + 3104))(WdfDriverGlobals, a1);
  v8 = v5;
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc & 8) != 0 )
    McTemplateK0pqqh_EtwWriteTransfer(
      v4[29].m128i_u8[4],
      (unsigned int)&USBXHCI_ETW_EVENT_CONTROLLER_D0_EXIT_START,
      v7,
      v4->m128i_i64[1],
      a2,
      v5,
      v4[29].m128i_i8[4]);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v6) = 4;
    WPP_RECORDER_SF_qLL(
      v4[4].m128i_i64[1],
      v6,
      4,
      85,
      (__int64)&WPP_ac07559723993fb37d1c33c002d3118e_Traceguids,
      a1,
      a2,
      v4[26].m128i_i32[1]);
  }
  v9 = v4[26].m128i_i64[1] == 0;
  v4[24].m128i_i32[2] = a2;
  if ( v9 || a2 != 6 )
  {
    if ( v4[7].m128i_i64[1] )
      CommonBuffer_FlushWorkItems();
    RootHub_D0Exit(v4[9].m128i_i64[1], a2, v4[26].m128i_u32[1]);
    Controller_D0Exit(v4, a2);
    Interrupter_D0ExitStopped(v4[8].m128i_i64[0], a2);
    v11 = v4 + 21;
    if ( (v4[21].m128i_i64[0] & 2) != 0
      || v4[24].m128i_i8[12]
      || a2 == 5
      || v4[26].m128i_i32[1] == 5
      || (_mm_srli_si128(*v11, 8).m128i_u8[0] & 8) != 0 && (unsigned __int8)Controller_InUseByDebugger(v4) )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v10) = 4;
        WPP_RECORDER_SF_(v4[4].m128i_i64[1], v10, 4, 86, (__int64)&WPP_ac07559723993fb37d1c33c002d3118e_Traceguids);
      }
    }
    else
    {
      v12 = Controller_D0ExitSaveState(v4);
      if ( v12 < 0 )
      {
        v4[24].m128i_i8[12] = 1;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v13) = 4;
          WPP_RECORDER_SF_d(
            v4[4].m128i_i64[1],
            v13,
            4,
            87,
            (__int64)&WPP_ac07559723993fb37d1c33c002d3118e_Traceguids,
            v12);
        }
        Controller_HwVerifierBreakIfEnabled(
          (_DWORD)v4,
          0,
          0,
          0x400000,
          (__int64)"Controller save state operation failed",
          0LL,
          0LL);
      }
      v14 = v4[5].m128i_i64[1];
      LOBYTE(v13) = 1;
      Register_SetClearSSICPortUnused(v14, v13);
      LOBYTE(v15) = 1;
      Register_SaveRestoreCHTNonArchitecturalRegisters(v14, v15);
      Controller_ExecuteHSICDisconnectInU3Workaround(v4, 0LL);
      Controller_ExecuteDSMToSendPORTSCValues(v4);
      if ( (_mm_srli_si128(*v11, 8).m128i_u8[0] & 1) != 0 )
        Controller_ExecuteKBLPowerTransitionWorkaround(v4, 0LL);
    }
  }
  else
  {
    LOBYTE(v7) = 1;
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64))(WdfFunctions_01023 + 2560))(
      WdfDriverGlobals,
      v4[22].m128i_i64[1],
      v7);
    v11 = v4 + 21;
  }
  if ( _bittest64(v11->m128i_i64, 0x2Bu) )
  {
    if ( v8 == 5 )
    {
      LOBYTE(v10) = 1;
      v16 = Register_ControllerReset(v4[5].m128i_i64[1], v10);
      if ( v16 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v17) = 4;
        WPP_RECORDER_SF_d(
          v4[4].m128i_i64[1],
          v17,
          4,
          88,
          (__int64)&WPP_ac07559723993fb37d1c33c002d3118e_Traceguids,
          v16);
      }
    }
  }
  if ( a2 == 5 && v4[29].m128i_i8[8] )
  {
    Etw_ReportControllerHealthWithPortInfo(v4, 0LL, 0LL, 0LL);
    v4[29].m128i_i8[8] = 0;
  }
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01023 + 3056))(
    WdfDriverGlobals,
    v4[23].m128i_i64[0]);
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01023 + 3056))(
    WdfDriverGlobals,
    v4[52].m128i_i64[0]);
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01023 + 3056))(
    WdfDriverGlobals,
    v4[35].m128i_i64[1]);
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01023 + 3056))(
    WdfDriverGlobals,
    v4[44].m128i_i64[1]);
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc & 8) != 0 )
    McTemplateK0pqqq_EtwWriteTransfer(
      v18,
      (unsigned int)&USBXHCI_ETW_EVENT_CONTROLLER_D0_EXIT_COMPLETE,
      v19,
      v4->m128i_i64[1],
      a2,
      v8,
      0);
  return 0LL;
}
