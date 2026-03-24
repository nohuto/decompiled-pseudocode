/*
 * XREFs of Controller_WdfEvtDeviceD0Entry @ 0x1C0014CE0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C000A0B8 (WPP_RECORDER_SF_.c)
 *     DeviceSlot_DisableAllDeviceSlots @ 0x1C000A95C (DeviceSlot_DisableAllDeviceSlots.c)
 *     Register_ControllerStop @ 0x1C000B014 (Register_ControllerStop.c)
 *     DeviceSlot_D0EntryCleanupState @ 0x1C000B42C (DeviceSlot_D0EntryCleanupState.c)
 *     WPP_RECORDER_SF_d @ 0x1C000F118 (WPP_RECORDER_SF_d.c)
 *     Register_SetClearSSICPortUnused @ 0x1C000F58C (Register_SetClearSSICPortUnused.c)
 *     Command_D0Entry @ 0x1C000F5D8 (Command_D0Entry.c)
 *     Register_ControllerReset @ 0x1C0010D88 (Register_ControllerReset.c)
 *     RootHub_D0Entry @ 0x1C0011F50 (RootHub_D0Entry.c)
 *     XilRegister_ReadUlong @ 0x1C0013DA0 (XilRegister_ReadUlong.c)
 *     Register_BiosHandoff @ 0x1C0013F74 (Register_BiosHandoff.c)
 *     Interrupter_D0Entry @ 0x1C0014640 (Interrupter_D0Entry.c)
 *     DeviceSlot_D0Entry @ 0x1C0014754 (DeviceSlot_D0Entry.c)
 *     Register_D0Entry @ 0x1C0015068 (Register_D0Entry.c)
 *     Controller_InUseByDebugger @ 0x1C0015798 (Controller_InUseByDebugger.c)
 *     WPP_RECORDER_SF_qdd @ 0x1C0015C18 (WPP_RECORDER_SF_qdd.c)
 *     __security_check_cookie @ 0x1C0019F30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C001AFF0 (_guard_dispatch_icall_nop.c)
 *     Controller_D0EntryRestoreState @ 0x1C0030AF4 (Controller_D0EntryRestoreState.c)
 *     Controller_HwVerifierBreakIfEnabled @ 0x1C0031CC4 (Controller_HwVerifierBreakIfEnabled.c)
 *     Controller_ReportFatalError @ 0x1C0032BA0 (Controller_ReportFatalError.c)
 *     Controller_SetControllerGone @ 0x1C0032D48 (Controller_SetControllerGone.c)
 *     McTemplateK0pqqh_EtwWriteTransfer @ 0x1C00352C8 (McTemplateK0pqqh_EtwWriteTransfer.c)
 *     McTemplateK0pqqq_EtwWriteTransfer @ 0x1C003535C (McTemplateK0pqqq_EtwWriteTransfer.c)
 *     WPP_RECORDER_SF_sds @ 0x1C0035E5C (WPP_RECORDER_SF_sds.c)
 *     Register_SaveRestoreCHTNonArchitecturalRegisters @ 0x1C003CCFC (Register_SaveRestoreCHTNonArchitecturalRegisters.c)
 *     Controller_UpdateIdleTimeoutOnControllerFDOD0Entry @ 0x1C006B2B4 (Controller_UpdateIdleTimeoutOnControllerFDOD0Entry.c)
 *     Controller_ExecuteHSICDisconnectInU3Workaround @ 0x1C006B2D8 (Controller_ExecuteHSICDisconnectInU3Workaround.c)
 *     Controller_ExecuteKBLPowerTransitionWorkaround @ 0x1C00749BC (Controller_ExecuteKBLPowerTransitionWorkaround.c)
 */

__int64 __fastcall Controller_WdfEvtDeviceD0Entry(__int64 a1, int a2)
{
  char v4; // r14
  int v5; // edx
  __m128i *v6; // rdi
  int v7; // r8d
  int v8; // r9d
  char v9; // r15
  char v10; // al
  int v11; // edx
  int v12; // r8d
  char v13; // r12
  __int64 v14; // rdx
  __int64 v15; // rax
  int v16; // ebx
  int v17; // eax
  unsigned __int64 v18; // r8
  __int64 v19; // rdx
  unsigned int v20; // ebp
  bool v21; // zf
  char v22; // r8
  __int64 v23; // rdx
  int v24; // ecx
  int v25; // r8d
  __int64 v27; // rdx
  __m128i *v28; // rcx
  int v29; // eax
  int v30; // edx
  int v31; // r9d
  __int64 v32; // rbx
  int v33; // eax
  int v34; // edx
  int v35; // eax
  char v36; // [rsp+28h] [rbp-60h]
  int v37; // [rsp+40h] [rbp-48h] BYREF
  __int64 v38; // [rsp+44h] [rbp-44h]

  v4 = 0;
  v6 = *(__m128i **)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
                       WdfDriverGlobals,
                       a1,
                       off_1C00603D8)
                   + 8);
  if ( v6[34].m128i_i8[9] && KeGetCurrentIrql() )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_sds(WPP_GLOBAL_Control->DeviceExtension, v5, v7, v8);
    if ( !KdRefreshDebuggerNotPresent() )
      __debugbreak();
  }
  v9 = 0;
  v10 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01023 + 3104))(WdfDriverGlobals, a1);
  v13 = v10;
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc & 8) != 0 )
    McTemplateK0pqqh_EtwWriteTransfer(
      v6[29].m128i_u8[4],
      (unsigned int)&USBXHCI_ETW_EVENT_CONTROLLER_D0_ENTRY_START,
      v12,
      v6->m128i_i64[1],
      a2,
      v10,
      v6[29].m128i_i8[4]);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v11) = 4;
    WPP_RECORDER_SF_qdd(
      v6[4].m128i_i64[1],
      v11,
      4,
      61,
      (__int64)&WPP_4d8d366f5fa2386b8519f650eb4534ed_Traceguids,
      a1,
      a2,
      v6[26].m128i_i32[1]);
  }
  if ( (unsigned int)XilRegister_ReadUlong(v6[5].m128i_i64[1], *(unsigned int **)(v6[5].m128i_i64[1] + 24)) == -1 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v14) = 2;
      WPP_RECORDER_SF_(v6[4].m128i_i64[1], v14, 4, 62, (__int64)&WPP_4d8d366f5fa2386b8519f650eb4534ed_Traceguids);
    }
    v9 = 1;
    v16 = -1073741823;
    goto LABEL_51;
  }
  if ( v6[29].m128i_i32[0] && v6[49].m128i_i64[1] )
    SleepstudyHelper_ComponentActive();
  if ( v6[26].m128i_i32[1] != 2 )
    goto LABEL_15;
  v15 = v6[26].m128i_i64[1];
  if ( v15 && *(_DWORD *)(v15 + 584) == 4 )
  {
    v29 = Register_ControllerStop(v6[5].m128i_i64[1]);
    if ( v29 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v30) = 2;
      WPP_RECORDER_SF_d(v6[4].m128i_i64[1], v30, 4, 63, (__int64)&WPP_4d8d366f5fa2386b8519f650eb4534ed_Traceguids, v29);
    }
  }
  else
  {
    v16 = Register_BiosHandoff((_QWORD *)v6[5].m128i_i64[1]);
    if ( v16 < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_36;
      v31 = 64;
      goto LABEL_89;
    }
  }
  DeviceSlot_D0EntryCleanupState(v6[8].m128i_i64[1], a2);
  v17 = Register_ControllerReset(v6[5].m128i_i64[1], 0);
  v16 = v17;
  if ( v17 >= 0 )
  {
    v4 = 1;
LABEL_15:
    if ( !v6[27].m128i_i8[8] )
    {
      v6[27].m128i_i32[3] = KeQueryTimeIncrement();
      v18 = ((unsigned int)(**(_DWORD **)(v6[5].m128i_i64[1] + 40) + 1) >> 3) & 0x7FF;
      v14 = _InterlockedExchange64(
              v6[27].m128i_i64,
              (v18 >> 11) | ((MEMORY[0xFFFFF78000000320] * v6[27].m128i_u32[3] / 10000LL - v18) << 21));
      v6[27].m128i_i8[8] = 1;
    }
    LOBYTE(v14) = 1;
    Controller_ExecuteHSICDisconnectInU3Workaround(v6, v14);
    if ( (_mm_srli_si128(v6[21], 8).m128i_u8[0] & 1) != 0 )
    {
      LOBYTE(v19) = 1;
      Controller_ExecuteKBLPowerTransitionWorkaround(v6, v19);
    }
    v20 = 1;
    v21 = 0;
    do
    {
      if ( v21
        || (v6[21].m128i_i64[0] & 2) != 0
        || a2 == 5
        || v6[24].m128i_i8[12]
        || v6[26].m128i_i32[1] == 2
        || (_mm_srli_si128(v6[21], 8).m128i_u8[0] & 8) != 0 && (unsigned __int8)Controller_InUseByDebugger(v6) )
      {
        v22 = 0;
      }
      else
      {
        v32 = v6[5].m128i_i64[1];
        Register_SetClearSSICPortUnused(v32, 0);
        Register_SaveRestoreCHTNonArchitecturalRegisters(v32, 0LL);
        v22 = 1;
      }
      v16 = Interrupter_D0Entry(v6[8].m128i_i64[0], a2, v22);
      if ( v16 < 0 )
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_36;
        v31 = 66;
        goto LABEL_89;
      }
      v16 = DeviceSlot_D0Entry(v6[8].m128i_i64[1], a2);
      if ( v16 < 0 )
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_36;
        v31 = 67;
        goto LABEL_89;
      }
      v16 = Command_D0Entry(v6[9].m128i_i64[0], a2);
      if ( v16 < 0 )
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_36;
        v31 = 68;
        goto LABEL_89;
      }
      if ( a2 == 5 || v20 == 2 || v6[26].m128i_i32[1] == 2 )
        break;
      if ( (v6[21].m128i_i64[0] & 2) != 0
        || v6[24].m128i_i8[12]
        || (_mm_srli_si128(v6[21], 8).m128i_u8[0] & 8) != 0 && (unsigned __int8)Controller_InUseByDebugger(v6) )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v14) = 4;
          WPP_RECORDER_SF_(v6[4].m128i_i64[1], v14, 4, 70, (__int64)&WPP_4d8d366f5fa2386b8519f650eb4534ed_Traceguids);
        }
      }
      else
      {
        v33 = Controller_D0EntryRestoreState(v6);
        if ( v33 >= 0 )
          break;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v34) = 4;
          WPP_RECORDER_SF_d(
            v6[4].m128i_i64[1],
            v34,
            4,
            69,
            (__int64)&WPP_4d8d366f5fa2386b8519f650eb4534ed_Traceguids,
            v33);
        }
        Controller_HwVerifierBreakIfEnabled(
          (_DWORD)v6,
          0,
          0,
          0x400000,
          (__int64)"Controller restore state operation failed",
          0LL,
          0LL);
      }
      DeviceSlot_D0EntryCleanupState(v6[8].m128i_i64[1], a2);
      v35 = Register_ControllerReset(v6[5].m128i_i64[1], 0);
      v16 = v35;
      if ( v35 < 0 )
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_36;
        v31 = 71;
        v36 = v35;
        goto LABEL_90;
      }
      ++v20;
      v4 = 1;
      v21 = v20 == 2;
    }
    while ( v20 <= 2 );
    v16 = Register_D0Entry(v6[5].m128i_i64[1]);
    if ( v16 < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_36;
      v31 = 72;
    }
    else
    {
      v16 = RootHub_D0Entry(v6[9].m128i_i64[1]);
      if ( v16 >= 0 )
      {
        v6[24].m128i_i32[2] = 1;
        if ( v4 == 1 )
        {
          v23 = v6->m128i_i64[1];
          v38 = 0LL;
          v37 = 12;
          ((void (__fastcall *)(__int64, __int64, int *))qword_1C0061798)(UcxDriverGlobals, v23, &v37);
        }
        goto LABEL_36;
      }
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_36;
      v31 = 73;
    }
LABEL_89:
    v36 = v16;
    goto LABEL_90;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    goto LABEL_36;
  v31 = 65;
  v36 = v17;
LABEL_90:
  LOBYTE(v14) = 2;
  WPP_RECORDER_SF_d(v6[4].m128i_i64[1], v14, 4, v31, (__int64)&WPP_4d8d366f5fa2386b8519f650eb4534ed_Traceguids, v36);
LABEL_36:
  if ( v16 < 0 )
  {
LABEL_51:
    DeviceSlot_DisableAllDeviceSlots(v6[8].m128i_i64[1]);
    v28 = v6;
    if ( v9 )
    {
      LOBYTE(v27) = 1;
    }
    else
    {
      Controller_ReportFatalError((_DWORD)v6, 0, 4124, 0, 0LL, 0LL, 0LL);
      v27 = 0LL;
      v28 = v6;
    }
    Controller_SetControllerGone(v28, v27);
    goto LABEL_40;
  }
  if ( v6[26].m128i_i32[1] <= 2u )
    v6[26].m128i_i32[1] = 7;
  Controller_UpdateIdleTimeoutOnControllerFDOD0Entry(v6);
LABEL_40:
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc & 8) != 0 )
    McTemplateK0pqqq_EtwWriteTransfer(
      v24,
      (unsigned int)&USBXHCI_ETW_EVENT_CONTROLLER_D0_ENTRY_COMPLETE,
      v25,
      v6->m128i_i64[1],
      a2,
      v13,
      v16);
  return (unsigned int)v16;
}
