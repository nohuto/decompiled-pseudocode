/*
 * XREFs of Command_WdfEvtWatchdogTimerFunction @ 0x1C0030270
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0005BBC (WPP_RECORDER_SF_.c)
 *     Controller_IsControllerAccessible @ 0x1C000A8E4 (Controller_IsControllerAccessible.c)
 *     DynamicLock_Acquire @ 0x1C000A918 (DynamicLock_Acquire.c)
 *     DynamicLock_Release @ 0x1C000A958 (DynamicLock_Release.c)
 *     Command_InternalSendCommand @ 0x1C000A998 (Command_InternalSendCommand.c)
 *     XilCommand_WriteDoorbell @ 0x1C000ABF8 (XilCommand_WriteDoorbell.c)
 *     WPP_RECORDER_SF_qd @ 0x1C00141F4 (WPP_RECORDER_SF_qd.c)
 *     WPP_RECORDER_SF_d @ 0x1C0018458 (WPP_RECORDER_SF_d.c)
 *     Controller_ReportFatalErrorEx @ 0x1C001EB8C (Controller_ReportFatalErrorEx.c)
 *     _guard_dispatch_icall_nop @ 0x1C0020390 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_ddL @ 0x1C0030BE4 (WPP_RECORDER_SF_ddL.c)
 *     WPP_RECORDER_SF_qL @ 0x1C0030E00 (WPP_RECORDER_SF_qL.c)
 *     WPP_RECORDER_SF_qLd @ 0x1C0030F30 (WPP_RECORDER_SF_qLd.c)
 *     XilCommand_AdvanceCommandRingControlDequeuePointer @ 0x1C0031388 (XilCommand_AdvanceCommandRingControlDequeuePointer.c)
 *     XilCommand_SendAbortRingCommandRequest @ 0x1C00319C0 (XilCommand_SendAbortRingCommandRequest.c)
 *     XilCommand_SendQueryIsRingRunningRequest @ 0x1C0031F68 (XilCommand_SendQueryIsRingRunningRequest.c)
 *     Controller_HwVerifierBreakIfEnabled @ 0x1C0033774 (Controller_HwVerifierBreakIfEnabled.c)
 *     Controller_SetControllerGone @ 0x1C00347AC (Controller_SetControllerGone.c)
 *     WPP_RECORDER_SF_sds @ 0x1C0037A20 (WPP_RECORDER_SF_sds.c)
 *     Etw_CommandCompleteError @ 0x1C004A868 (Etw_CommandCompleteError.c)
 *     XilCoreCommand_AbortCommandRing @ 0x1C0052A80 (XilCoreCommand_AbortCommandRing.c)
 *     XilCoreCommand_QueryIsRingRunning @ 0x1C0052B1C (XilCoreCommand_QueryIsRingRunning.c)
 */

__int64 __fastcall Command_WdfEvtWatchdogTimerFunction(__int64 a1)
{
  __int64 (__fastcall *v1)(PWDF_DRIVER_GLOBALS, __int64); // rax
  __int64 v2; // rax
  __int64 v3; // rbx
  int v4; // edx
  int v5; // r8d
  int v6; // r9d
  char IsControllerAccessible; // r14
  char v8; // si
  char v9; // r13
  unsigned __int8 v10; // r12
  __int64 **v11; // rsi
  __int64 *v12; // rdi
  __int64 *v13; // r15
  int v14; // edx
  int v15; // r8d
  int v16; // r9d
  int v17; // eax
  __int64 v19; // rdx
  int v20; // edx
  int v21; // r8d
  int v22; // r9d
  int v23; // eax
  int v24; // r9d
  __int64 *v25; // rcx
  __int64 **v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rdx
  __int128 *v29; // rax
  _OWORD ***v30; // rcx
  __int64 v31; // rcx
  __int64 result; // rax
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 *v35; // rdx
  __int64 v36; // rdi
  int v37; // edx
  int v38; // edx
  __int64 *v39; // rcx
  __int64 v40; // rdx
  __int64 *v41; // rax
  __int64 **v42; // rdx
  __int64 *v43; // rcx
  __int64 *v44; // r8
  __int64 *v45; // rax
  int v46; // [rsp+20h] [rbp-50h]
  unsigned __int8 v47; // [rsp+40h] [rbp-30h]
  char v48; // [rsp+41h] [rbp-2Fh]
  _BYTE v49[6]; // [rsp+42h] [rbp-2Eh] BYREF
  __int64 v50; // [rsp+48h] [rbp-28h] BYREF
  __int64 *v51; // [rsp+50h] [rbp-20h]
  __int128 v52; // [rsp+58h] [rbp-18h] BYREF
  char v53; // [rsp+C0h] [rbp+50h]
  char v54; // [rsp+C8h] [rbp+58h] BYREF

  v52 = 0LL;
  v1 = *(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01023 + 2568);
  v49[0] = 0;
  v54 = 0;
  v2 = v1(WdfDriverGlobals, a1);
  v3 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
         WdfDriverGlobals,
         v2,
         off_1C00631F8);
  if ( *(_BYTE *)(*(_QWORD *)(v3 + 8) + 601LL) && KeGetCurrentIrql() )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_sds(WPP_GLOBAL_Control->DeviceExtension, v4, v5, v6);
    if ( !KdRefreshDebuggerNotPresent() )
      __debugbreak();
  }
  if ( !KeGetCurrentIrql() )
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64))(WdfFunctions_01023 + 2552))(
      WdfDriverGlobals,
      *(_QWORD *)(v3 + 24),
      -10000000LL);
  IsControllerAccessible = Controller_IsControllerAccessible(*(_QWORD *)(v3 + 8));
  v8 = 0;
  v51 = &v50;
  v9 = 0;
  v53 = 0;
  v50 = (__int64)&v50;
  v10 = 0;
  v48 = 0;
  v47 = 0;
  DynamicLock_Acquire(*(_QWORD *)(v3 + 112));
  if ( !IsControllerAccessible )
  {
    v11 = (__int64 **)(v3 + 80);
    v48 = 0;
    v47 = 0;
    goto LABEL_91;
  }
  if ( *(_DWORD *)(v3 + 36) != 1 )
    goto LABEL_64;
  v11 = (__int64 **)(v3 + 80);
  if ( *(_QWORD *)(v3 + 80) == v3 + 80 )
  {
    v8 = 0;
    goto LABEL_64;
  }
  v12 = *(__int64 **)(v3 + 80);
  v13 = v12;
  if ( *(_BYTE *)(v3 + 136) )
    XilCommand_SendQueryIsRingRunningRequest(v3 + 136, &v54, v49, 3LL);
  else
    XilCoreCommand_QueryIsRingRunning(v3 + 168, &v54, v49, 3LL);
  v17 = *((_DWORD *)v12 + 14);
  if ( v17 > 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v14) = 4;
    WPP_RECORDER_SF_qd(
      *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
      v14,
      7,
      29,
      (__int64)&WPP_7e0bcb5bda0632cd0b4b69ae4ee19d35_Traceguids,
      (char)v12,
      v17);
  }
  if ( !v49[0] )
  {
    if ( *(_BYTE *)(v3 + 121) )
    {
      if ( (*(_DWORD *)(v3 + 124))-- == 1 )
      {
        if ( v54 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v14) = 2;
            WPP_RECORDER_SF_(
              *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
              v14,
              7,
              30,
              (__int64)&WPP_7e0bcb5bda0632cd0b4b69ae4ee19d35_Traceguids);
          }
          Controller_HwVerifierBreakIfEnabled(
            *(_QWORD *)(v3 + 8),
            0,
            0,
            4096,
            (__int64)"Command abort timed out, command ring still running, resetting the controller",
            *(_QWORD *)(v3 + 72) + 16LL * *(unsigned int *)(v3 + 44),
            0LL);
          v19 = *(_QWORD *)(v3 + 24);
          *(_BYTE *)(v3 + 121) = 0;
          (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01023 + 2560))(
            WdfDriverGlobals,
            v19,
            0LL);
          v9 = 1;
          *(_DWORD *)(v3 + 36) = 2;
          v10 = *((_BYTE *)v12 + 62) & 1;
          v48 = 1;
          goto LABEL_26;
        }
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v14) = 2;
          WPP_RECORDER_SF_(
            *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
            v14,
            7,
            31,
            (__int64)&WPP_7e0bcb5bda0632cd0b4b69ae4ee19d35_Traceguids);
        }
        Controller_HwVerifierBreakIfEnabled(
          *(_QWORD *)(v3 + 8),
          0,
          0,
          0x2000,
          (__int64)"Command abort timed out; stopped event not received, but command ring is stopped; Assuming abort finished.",
          *(_QWORD *)(v3 + 72) + 16LL * *(unsigned int *)(v3 + 44),
          0LL);
        *(_BYTE *)(v3 + 121) = 0;
        v23 = *((_DWORD *)v12 + 14);
        switch ( v23 )
        {
          case 0:
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(v20) = 2;
              WPP_RECORDER_SF_d(
                *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
                v20,
                7,
                34,
                (__int64)&WPP_7e0bcb5bda0632cd0b4b69ae4ee19d35_Traceguids,
                0);
            }
            v25 = (__int64 *)*v12;
            if ( *(__int64 **)(*v12 + 8) != v12 || (v26 = (__int64 **)v12[1], *v26 != v12) )
              __fastfail(3u);
            *v26 = v25;
            v25[1] = (__int64)v26;
            v27 = (unsigned int)++*(_DWORD *)(v3 + 44);
            if ( (_DWORD)v27 == *(_DWORD *)(v3 + 48) )
            {
              *(_DWORD *)(v3 + 44) = 0;
              v27 = 0LL;
            }
            XilCommand_AdvanceCommandRingControlDequeuePointer(v3, v27);
            goto LABEL_47;
          case 5:
            if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              goto LABEL_37;
            v24 = 33;
            LOBYTE(v20) = 2;
            break;
          case 10:
            if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
LABEL_37:
              v13 = 0LL;
LABEL_47:
              if ( *v11 != (__int64 *)v11 )
              {
                if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                {
                  LOBYTE(v20) = 4;
                  WPP_RECORDER_SF_(
                    *(_QWORD *)(v3 + 16),
                    v20,
                    7,
                    36,
                    (__int64)&WPP_7e0bcb5bda0632cd0b4b69ae4ee19d35_Traceguids);
                }
                XilCommand_WriteDoorbell(v3);
              }
              v28 = *(_QWORD *)(v3 + 96);
              if ( v28 != v3 + 96 )
              {
                v52 = *(_OWORD *)(v3 + 96);
                *(_QWORD *)(v28 + 8) = &v52;
                **((_QWORD **)&v52 + 1) = &v52;
                *(_QWORD *)(v3 + 104) = v3 + 96;
                *(_QWORD *)(v3 + 96) = v3 + 96;
                goto LABEL_55;
              }
              *((_QWORD *)&v52 + 1) = &v52;
              v29 = &v52;
              *(_QWORD *)&v52 = &v52;
              while ( v29 != &v52 )
              {
                if ( *((__int128 **)v29 + 1) != &v52
                  || (v30 = *(_OWORD ****)v29, *(__int128 **)(*(_QWORD *)v29 + 8LL) != v29) )
                {
                  __fastfail(3u);
                }
                *(_QWORD *)&v52 = *(_QWORD *)v29;
                v30[1] = (_OWORD **)&v52;
                Command_InternalSendCommand(v3, (__int64)v29, v21, v22);
LABEL_55:
                v29 = (__int128 *)v52;
              }
              if ( v13 )
              {
                DynamicLock_Release(*(_QWORD *)(v3 + 112));
                *((_BYTE *)v13 + 60) = 25;
                Etw_CommandCompleteError(v31, v3, v13, 2LL);
                ((void (__fastcall *)(__int64 *, __int64))v13[5])(v13, 2LL);
                DynamicLock_Acquire(*(_QWORD *)(v3 + 112));
              }
              goto LABEL_63;
            }
            v24 = 32;
            LOBYTE(v20) = 4;
            break;
          default:
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(v20) = 2;
              WPP_RECORDER_SF_d(
                *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
                v20,
                7,
                35,
                (__int64)&WPP_7e0bcb5bda0632cd0b4b69ae4ee19d35_Traceguids,
                v23);
            }
            goto LABEL_47;
        }
        WPP_RECORDER_SF_d(
          *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
          v20,
          7,
          v24,
          (__int64)&WPP_7e0bcb5bda0632cd0b4b69ae4ee19d35_Traceguids,
          v23);
        goto LABEL_37;
      }
    }
    else
    {
      v37 = *((_DWORD *)v12 + 14) - 1;
      *((_DWORD *)v12 + 14) = v37;
      if ( v37 == 5 || !v37 )
      {
        if ( v54 == 1 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_qLd(
              *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
              v37,
              v15,
              v16,
              v46,
              (char)v12,
              (unsigned __int16)*((_DWORD *)v12 + 9) >> 10,
              v37);
          v38 = (unsigned __int8)HIBYTE(*((_WORD *)v12 + 18)) >> 2;
          if ( v38 != 11 || ((*((_DWORD *)v12 + 9) >> 9) & 1) != 0 )
          {
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(v38) = 2;
              WPP_RECORDER_SF_ddL(
                *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
                v38,
                7,
                38,
                (__int64)&WPP_7e0bcb5bda0632cd0b4b69ae4ee19d35_Traceguids,
                5,
                (*((_DWORD *)v12 + 9) & 0x200) != 0,
                (unsigned __int8)HIBYTE(*((_WORD *)v12 + 18)) >> 2);
            }
            Controller_HwVerifierBreakIfEnabled(
              *(_QWORD *)(v3 + 8),
              0,
              0,
              0x4000,
              (__int64)"A command timed out, aborting command next",
              (__int64)(v12 + 3),
              0LL);
          }
          *(_BYTE *)(v3 + 121) = 1;
          *(_DWORD *)(v3 + 124) = 5;
          if ( *(_BYTE *)(v3 + 136) )
            XilCommand_SendAbortRingCommandRequest(v3 + 136);
          else
            XilCoreCommand_AbortCommandRing(v3 + 168);
        }
        else
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v37) = 2;
            WPP_RECORDER_SF_(
              *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
              v37,
              7,
              39,
              (__int64)&WPP_7e0bcb5bda0632cd0b4b69ae4ee19d35_Traceguids);
          }
          (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01023 + 2560))(
            WdfDriverGlobals,
            *(_QWORD *)(v3 + 24),
            0LL);
          v9 = 1;
          *(_DWORD *)(v3 + 36) = 2;
          v48 = 1;
          if ( (*((_BYTE *)v12 + 62) & 1) != 0 )
          {
            v10 = 1;
LABEL_26:
            v8 = 0;
            v47 = v10;
            goto LABEL_64;
          }
        }
      }
    }
LABEL_63:
    v8 = 0;
    goto LABEL_64;
  }
  IsControllerAccessible = 0;
  v53 = 1;
LABEL_91:
  if ( *(_BYTE *)(v3 + 128) )
  {
    while ( 1 )
    {
      v39 = *v11;
      if ( *v11 == (__int64 *)v11 )
        break;
      if ( (__int64 **)v39[1] != v11 || (v40 = *v39, *(__int64 **)(*v39 + 8) != v39) )
        __fastfail(3u);
      *v11 = (__int64 *)v40;
      *(_QWORD *)(v40 + 8) = v11;
      v41 = v51;
      if ( (__int64 *)*v51 != &v50 )
        __fastfail(3u);
      v39[1] = (__int64)v51;
      *v39 = (__int64)&v50;
      *v41 = (__int64)v39;
      v51 = v39;
    }
    v42 = (__int64 **)(v3 + 96);
    while ( 1 )
    {
      v43 = *v42;
      if ( *v42 == (__int64 *)v42 )
        break;
      v44 = (__int64 *)*v43;
      if ( (__int64 **)v43[1] != v42 || (__int64 *)v44[1] != v43 )
        __fastfail(3u);
      *v42 = v44;
      v44[1] = (__int64)v42;
      v45 = v51;
      if ( (__int64 *)*v51 != &v50 )
        __fastfail(3u);
      v43[1] = (__int64)v51;
      *v43 = (__int64)&v50;
      *v45 = (__int64)v43;
      v51 = v43;
    }
  }
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD, __int64))(WdfFunctions_01023 + 2560))(
    WdfDriverGlobals,
    *(_QWORD *)(v3 + 24),
    0LL,
    3LL);
  v8 = v53;
LABEL_64:
  result = DynamicLock_Release(*(_QWORD *)(v3 + 112));
  if ( !IsControllerAccessible )
  {
    if ( v8 == 1 )
    {
      LOBYTE(v33) = 1;
      Controller_SetControllerGone(*(_QWORD *)(v3 + 8), v33);
    }
    while ( 1 )
    {
      result = v50;
      if ( (__int64 *)v50 == &v50 )
        break;
      v34 = *(_QWORD *)v50;
      if ( *(__int64 **)(v50 + 8) != &v50 || *(_QWORD *)(v34 + 8) != v50 )
        __fastfail(3u);
      v35 = &v50;
      v50 = *(_QWORD *)v50;
      *(_QWORD *)(v34 + 8) = &v50;
      v36 = result;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v35) = 4;
        WPP_RECORDER_SF_qL(
          *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
          (_DWORD)v35,
          7,
          40,
          (__int64)&WPP_7e0bcb5bda0632cd0b4b69ae4ee19d35_Traceguids,
          result,
          (unsigned __int8)HIBYTE(*(_WORD *)(result + 36)) >> 2);
      }
      Etw_CommandCompleteError(v34, v3, v36, 3LL);
      (*(void (__fastcall **)(__int64, __int64, _QWORD))(v36 + 40))(v36, 3LL, 0LL);
    }
    v10 = v47;
    v9 = v48;
  }
  if ( v9 == 1 )
    return Controller_ReportFatalErrorEx(*(_QWORD *)(v3 + 8), (v10 ^ 1u) + 1, 4105, 0LL, 0LL, 0LL, 0LL, 0LL);
  return result;
}
