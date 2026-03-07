__int64 __fastcall Controller_WdfEvtDeviceD0Entry(__int64 a1, unsigned int a2)
{
  char v4; // r12
  int v5; // esi
  __m128i *v6; // rdi
  char v7; // r13
  char v8; // al
  int v9; // edx
  int v10; // r8d
  __int64 v11; // rdx
  __int64 v12; // rax
  bool v13; // al
  __int64 v14; // rcx
  int v15; // eax
  int v16; // ebx
  unsigned __int64 v17; // r8
  __int64 v18; // rdx
  __int64 v19; // r8
  unsigned int v20; // r15d
  bool v21; // zf
  __int64 v22; // rdx
  int v23; // ecx
  int v24; // r8d
  int v26; // edx
  int v27; // r8d
  int v28; // r9d
  int v29; // eax
  int v30; // edx
  int v31; // r9d
  __int64 v32; // rbx
  int v33; // eax
  int v34; // edx
  __int64 v35; // rdx
  __m128i *v36; // rcx
  char v37; // [rsp+40h] [rbp-48h]
  __int64 v38; // [rsp+48h] [rbp-40h] BYREF
  int v39; // [rsp+50h] [rbp-38h]

  v4 = 0;
  v5 = 0;
  v6 = *(__m128i **)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
                       WdfDriverGlobals,
                       a1,
                       off_1C00633D8)
                   + 8);
  if ( v6[37].m128i_i8[9] && KeGetCurrentIrql() )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_sds(WPP_GLOBAL_Control->DeviceExtension, v26, v27, v28);
    if ( !KdRefreshDebuggerNotPresent() )
      __debugbreak();
  }
  v7 = 0;
  v8 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01023 + 3104))(WdfDriverGlobals, a1);
  v37 = v8;
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc & 8) != 0 )
    McTemplateK0pqqh_EtwWriteTransfer(
      v6[29].m128i_u8[4],
      (unsigned int)&USBXHCI_ETW_EVENT_CONTROLLER_D0_ENTRY_START,
      v10,
      v6->m128i_i64[1],
      a2,
      v8,
      v6[29].m128i_i8[4]);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v9) = 4;
    WPP_RECORDER_SF_qLL(
      v6[4].m128i_i64[1],
      v9,
      4,
      62,
      (__int64)&WPP_ac07559723993fb37d1c33c002d3118e_Traceguids,
      a1,
      a2,
      v6[26].m128i_i32[1]);
  }
  if ( (unsigned int)XilRegister_ReadUlong(v6[5].m128i_i64[1], *(_QWORD *)(v6[5].m128i_i64[1] + 24)) == -1 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v11) = 2;
      WPP_RECORDER_SF_(v6[4].m128i_i64[1], v11, 4, 63, (__int64)&WPP_ac07559723993fb37d1c33c002d3118e_Traceguids);
    }
    v16 = -1073741823;
    v7 = 1;
    goto LABEL_90;
  }
  if ( v6[29].m128i_i32[0] && v6[53].m128i_i64[0] && qword_1C0064B20 )
    qword_1C0064B20();
  if ( v6[26].m128i_i32[1] != 2 )
    goto LABEL_15;
  v12 = v6[26].m128i_i64[1];
  v13 = v12 && *(_DWORD *)(v12 + 584) == 4;
  v14 = v6[5].m128i_i64[1];
  if ( v13 )
  {
    v29 = Register_ControllerStop(v14);
    if ( v29 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v30) = 2;
      WPP_RECORDER_SF_d(v6[4].m128i_i64[1], v30, 4, 64, (__int64)&WPP_ac07559723993fb37d1c33c002d3118e_Traceguids, v29);
    }
LABEL_13:
    DeviceSlot_D0EntryCleanupState(v6[8].m128i_i64[1], a2);
    v15 = Register_ControllerReset(v6[5].m128i_i64[1], 0LL);
    v16 = v15;
    if ( v15 >= 0 )
    {
      v4 = 1;
LABEL_15:
      if ( !v6[27].m128i_i8[8] )
      {
        v6[27].m128i_i32[3] = KeQueryTimeIncrement();
        v17 = ((unsigned int)(**(_DWORD **)(v6[5].m128i_i64[1] + 40) + 1) >> 3) & 0x7FF;
        v11 = _InterlockedExchange64(
                v6[27].m128i_i64,
                (v17 >> 11) | ((MEMORY[0xFFFFF78000000320] * v6[27].m128i_u32[3] / 10000LL - v17) << 21));
        v6[27].m128i_i8[8] = 1;
      }
      LOBYTE(v11) = 1;
      Controller_ExecuteHSICDisconnectInU3Workaround(v6, v11);
      if ( (_mm_srli_si128(v6[21], 8).m128i_u8[0] & 1) != 0 )
      {
        LOBYTE(v18) = 1;
        Controller_ExecuteKBLPowerTransitionWorkaround(v6, v18);
      }
      v20 = 1;
      v5 = 5;
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
          LOBYTE(v19) = 0;
        }
        else
        {
          v32 = v6[5].m128i_i64[1];
          Register_SetClearSSICPortUnused(v32, 0);
          Register_SaveRestoreCHTNonArchitecturalRegisters(v32, 0LL);
          LOBYTE(v19) = 1;
        }
        v15 = Interrupter_D0Entry(v6[8].m128i_i64[0], a2, v19);
        v16 = v15;
        if ( v15 < 0 )
        {
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_90;
          v31 = 67;
          goto LABEL_89;
        }
        v15 = DeviceSlot_D0Entry(v6[8].m128i_i64[1], a2);
        v16 = v15;
        if ( v15 < 0 )
        {
          v5 = 6;
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_90;
          v31 = 68;
          goto LABEL_89;
        }
        v15 = Command_D0Entry(v6[9].m128i_i64[0], a2);
        v16 = v15;
        if ( v15 < 0 )
        {
          v5 = 7;
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_90;
          v31 = 69;
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
            LOBYTE(v11) = 4;
            WPP_RECORDER_SF_(v6[4].m128i_i64[1], v11, 4, 71, (__int64)&WPP_ac07559723993fb37d1c33c002d3118e_Traceguids);
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
              70,
              (__int64)&WPP_ac07559723993fb37d1c33c002d3118e_Traceguids,
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
        v15 = Register_ControllerReset(v6[5].m128i_i64[1], 0LL);
        v16 = v15;
        if ( v15 < 0 )
        {
          v5 = 11;
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_90;
          v31 = 72;
          goto LABEL_89;
        }
        ++v20;
        v4 = 1;
        v21 = v20 == 2;
      }
      while ( v20 <= 2 );
      v15 = Register_D0Entry(v6[5].m128i_i64[1]);
      v16 = v15;
      if ( v15 < 0 )
      {
        v5 = 1;
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_90;
        v31 = 73;
      }
      else
      {
        v15 = RootHub_D0Entry(v6[9].m128i_i64[1]);
        v16 = v15;
        if ( v15 >= 0 )
        {
          v6[24].m128i_i32[2] = 1;
          if ( v4 == 1 )
          {
            v22 = v6->m128i_i64[1];
            v39 = 0;
            v38 = 12LL;
            ((void (__fastcall *)(__int64, __int64, __int64 *))qword_1C00647F8)(UcxDriverGlobals, v22, &v38);
          }
          Controller_UpdateIdleTimeoutOnControllerFDOD0Entry(v6);
          if ( v6[26].m128i_i32[1] <= 2u )
            v6[26].m128i_i32[1] = 7;
          goto LABEL_38;
        }
        v5 = 13;
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_90;
        v31 = 74;
      }
      goto LABEL_89;
    }
    v5 = 11;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v31 = 66;
      goto LABEL_89;
    }
    goto LABEL_90;
  }
  v15 = Register_BiosHandoff(v14);
  v16 = v15;
  if ( v15 >= 0 )
    goto LABEL_13;
  v5 = 10;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v31 = 65;
LABEL_89:
    LOBYTE(v11) = 2;
    WPP_RECORDER_SF_d(v6[4].m128i_i64[1], v11, 4, v31, (__int64)&WPP_ac07559723993fb37d1c33c002d3118e_Traceguids, v15);
  }
LABEL_90:
  DeviceSlot_DisableAllDeviceSlots(v6[8].m128i_i64[1]);
  v36 = v6;
  if ( v7 )
  {
    LOBYTE(v35) = 1;
  }
  else
  {
    Controller_ReportFatalErrorEx((_DWORD)v6, 0, 4124, v5, v16, 0LL, 0LL, 0LL);
    v35 = 0LL;
    v36 = v6;
  }
  Controller_SetControllerGone(v36, v35);
LABEL_38:
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc & 8) != 0 )
    McTemplateK0pqqq_EtwWriteTransfer(
      v23,
      (unsigned int)&USBXHCI_ETW_EVENT_CONTROLLER_D0_ENTRY_COMPLETE,
      v24,
      v6->m128i_i64[1],
      a2,
      v37,
      v16);
  return (unsigned int)v16;
}
