/*
 * XREFs of NtMITConfigureVirtualTouchpad @ 0x1C0140F90
 * Callers:
 *     <none>
 * Callees:
 *     PrivateAPI::_anonymous_namespace_::EnterCritInternal @ 0x1C0048330 (PrivateAPI--_anonymous_namespace_--EnterCritInternal.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C004CE30 (UserSessionSwitchLeaveCrit.c)
 *     HMUnlockObject @ 0x1C0056D70 (HMUnlockObject.c)
 *     ?IsInputThread@CInputThreadBase@@QEBA_NXZ @ 0x1C0057EC8 (-IsInputThread@CInputThreadBase@@QEBA_NXZ.c)
 *     UserSetLastError @ 0x1C005E3B4 (UserSetLastError.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D66B4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     memset @ 0x1C00D6A00 (memset.c)
 *     ?ConfigureVirtualTouchpad@VirtualTouchpadProcessor@@QEAAJPEAUVPTP_ID@@AEBUtagVIRTUAL_PTP_CONFIG@@@Z @ 0x1C01F0A5C (-ConfigureVirtualTouchpad@VirtualTouchpadProcessor@@QEAAJPEAUVPTP_ID@@AEBUtagVIRTUAL_PTP_CONFIG@.c)
 *     ?GetInstance@VirtualTouchpadProcessor@@SAPEAV1@_N@Z @ 0x1C01F146C (-GetInstance@VirtualTouchpadProcessor@@SAPEAV1@_N@Z.c)
 */

__int64 __fastcall NtMITConfigureVirtualTouchpad(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  ULONG64 v4; // r14
  int *v5; // rsi
  struct tagTHREADINFO *v6; // rax
  __int64 v7; // rcx
  int v8; // ebx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v10; // rax
  char v11; // al
  __int64 *v12; // rdi
  ULONG v13; // ecx
  __int64 v14; // rdx
  ULONG64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  int *v18; // rdx
  struct _LIST_ENTRY *Instance; // rax
  NTSTATUS v20; // eax
  _OWORD v22[10]; // [rsp+50h] [rbp-148h] BYREF
  __int128 v23; // [rsp+F0h] [rbp-A8h]
  __int128 v24; // [rsp+100h] [rbp-98h]
  __int128 v25; // [rsp+110h] [rbp-88h]
  __int128 v26; // [rsp+120h] [rbp-78h]
  __int128 v27; // [rsp+130h] [rbp-68h]
  __int128 v28; // [rsp+140h] [rbp-58h]
  __int128 v29; // [rsp+150h] [rbp-48h]
  __int128 v30; // [rsp+160h] [rbp-38h]
  __int128 v31; // [rsp+170h] [rbp-28h]
  __int64 v32; // [rsp+180h] [rbp-18h]
  int v33; // [rsp+1B0h] [rbp+18h] BYREF

  v4 = a2;
  v5 = (int *)a1;
  LOBYTE(a1) = 1;
  v6 = (struct tagTHREADINFO *)PrivateAPI::_anonymous_namespace_::EnterCritInternal(a1, a2, a3, a4);
  gptiCurrent = v6;
  v8 = 0;
  if ( v6 )
  {
    *((_DWORD *)v6 + 387) = 1;
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v7);
    if ( CurrentProcessWin32Process )
    {
      v10 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL) & CurrentProcessWin32Process;
      if ( v10 )
      {
        if ( (*(_DWORD *)(v10 + 12) & 0x8000) != 0 )
        {
          if ( (*((_DWORD *)gptiCurrent + 122) & 0x1000000) == 0
            || (v11 = 1, (*((_DWORD *)gptiCurrent + 318) & 0x80u) != 0) )
          {
            v11 = 0;
          }
          if ( v11 )
          {
            while ( 1 )
            {
              v12 = (__int64 *)gpSharedUserCritDeferredUnlockListHead;
              if ( !gpSharedUserCritDeferredUnlockListHead )
                break;
              gpSharedUserCritDeferredUnlockListHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpSharedUserCritDeferredUnlockListHead
                                                                                           + 2);
              v12[2] = 0LL;
              if ( !*(_DWORD *)(*v12 + 8) )
              {
                v33 = 0x20000;
                MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 4237);
              }
              HMUnlockObject(*v12);
            }
          }
        }
      }
    }
  }
  v33 = 0;
  memset(v22, 0, 0x98uLL);
  if ( !CInputThreadBase::IsInputThread((CInputThreadBase *)WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc) )
  {
    v13 = 5;
LABEL_16:
    UserSetLastError(v13);
    goto LABEL_30;
  }
  v18 = v5;
  if ( v5 + 1 < v5 || (unsigned __int64)(v5 + 1) > MmUserProbeAddress )
    v18 = (int *)MmUserProbeAddress;
  v33 = *v18;
  if ( v4 + 152 < v4 || v4 + 152 > MmUserProbeAddress )
    v4 = MmUserProbeAddress;
  v23 = *(_OWORD *)v4;
  v24 = *(_OWORD *)(v4 + 16);
  v25 = *(_OWORD *)(v4 + 32);
  v26 = *(_OWORD *)(v4 + 48);
  v27 = *(_OWORD *)(v4 + 64);
  v28 = *(_OWORD *)(v4 + 80);
  v29 = *(_OWORD *)(v4 + 96);
  v30 = *(_OWORD *)(v4 + 112);
  v31 = *(_OWORD *)(v4 + 128);
  v32 = *(_QWORD *)(v4 + 144);
  v22[0] = v23;
  v22[1] = v24;
  v22[2] = v25;
  v22[3] = v26;
  v22[4] = v27;
  v22[5] = v28;
  v22[6] = v29;
  v22[7] = v30;
  v22[8] = v31;
  *(_QWORD *)&v22[9] = v32;
  Instance = (struct _LIST_ENTRY *)VirtualTouchpadProcessor::GetInstance(1);
  if ( !Instance )
  {
    v20 = -1073741801;
LABEL_26:
    v13 = RtlNtStatusToDosError(v20);
    goto LABEL_16;
  }
  v20 = VirtualTouchpadProcessor::ConfigureVirtualTouchpad(
          Instance,
          (struct VPTP_ID *)&v33,
          (const struct tagVIRTUAL_PTP_CONFIG *)v22);
  if ( v20 < 0 )
    goto LABEL_26;
  v15 = MmUserProbeAddress;
  if ( (unsigned __int64)v5 >= MmUserProbeAddress )
    v5 = (int *)MmUserProbeAddress;
  *v5 = v33;
  v8 = 1;
LABEL_30:
  UserSessionSwitchLeaveCrit(v15, v14, v16, v17);
  return v8;
}
