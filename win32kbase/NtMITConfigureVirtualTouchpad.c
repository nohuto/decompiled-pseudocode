__int64 __fastcall NtMITConfigureVirtualTouchpad(int *a1, ULONG64 a2)
{
  int *v3; // rsi
  struct tagTHREADINFO *v4; // rax
  __int64 v5; // rcx
  int v6; // ebx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v8; // rax
  char v9; // al
  __int64 *v10; // rdi
  ULONG v11; // ecx
  __int64 v12; // rdx
  ULONG64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  int *v16; // rdx
  struct _LIST_ENTRY *Instance; // rax
  NTSTATUS v18; // eax
  _OWORD v20[10]; // [rsp+50h] [rbp-148h] BYREF
  __int128 v21; // [rsp+F0h] [rbp-A8h]
  __int128 v22; // [rsp+100h] [rbp-98h]
  __int128 v23; // [rsp+110h] [rbp-88h]
  __int128 v24; // [rsp+120h] [rbp-78h]
  __int128 v25; // [rsp+130h] [rbp-68h]
  __int128 v26; // [rsp+140h] [rbp-58h]
  __int128 v27; // [rsp+150h] [rbp-48h]
  __int128 v28; // [rsp+160h] [rbp-38h]
  __int128 v29; // [rsp+170h] [rbp-28h]
  __int64 v30; // [rsp+180h] [rbp-18h]
  int v31; // [rsp+1B0h] [rbp+18h] BYREF

  v3 = a1;
  LOBYTE(a1) = 1;
  v4 = (struct tagTHREADINFO *)PrivateAPI::_anonymous_namespace_::EnterCritInternal(a1);
  gptiCurrent = v4;
  v6 = 0;
  if ( v4 )
  {
    *((_DWORD *)v4 + 387) = 1;
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v5);
    if ( CurrentProcessWin32Process )
    {
      v8 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL) & CurrentProcessWin32Process;
      if ( v8 )
      {
        if ( (*(_DWORD *)(v8 + 12) & 0x8000) != 0 )
        {
          if ( (*((_DWORD *)gptiCurrent + 122) & 0x1000000) == 0
            || (v9 = 1, (*((_DWORD *)gptiCurrent + 318) & 0x80u) != 0) )
          {
            v9 = 0;
          }
          if ( v9 )
          {
            while ( 1 )
            {
              v10 = (__int64 *)gpSharedUserCritDeferredUnlockListHead;
              if ( !gpSharedUserCritDeferredUnlockListHead )
                break;
              gpSharedUserCritDeferredUnlockListHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpSharedUserCritDeferredUnlockListHead
                                                                                           + 2);
              v10[2] = 0LL;
              if ( !*(_DWORD *)(*v10 + 8) )
              {
                v31 = 0x20000;
                MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 4237);
              }
              HMUnlockObject(*v10);
            }
          }
        }
      }
    }
  }
  v31 = 0;
  memset(v20, 0, 0x98uLL);
  if ( !CInputThreadBase::IsInputThread((CInputThreadBase *)WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc) )
  {
    v11 = 5;
LABEL_16:
    UserSetLastError(v11);
    goto LABEL_30;
  }
  v16 = v3;
  if ( v3 + 1 < v3 || (unsigned __int64)(v3 + 1) > MmUserProbeAddress )
    v16 = (int *)MmUserProbeAddress;
  v31 = *v16;
  if ( a2 + 152 < a2 || a2 + 152 > MmUserProbeAddress )
    a2 = MmUserProbeAddress;
  v21 = *(_OWORD *)a2;
  v22 = *(_OWORD *)(a2 + 16);
  v23 = *(_OWORD *)(a2 + 32);
  v24 = *(_OWORD *)(a2 + 48);
  v25 = *(_OWORD *)(a2 + 64);
  v26 = *(_OWORD *)(a2 + 80);
  v27 = *(_OWORD *)(a2 + 96);
  v28 = *(_OWORD *)(a2 + 112);
  v29 = *(_OWORD *)(a2 + 128);
  v30 = *(_QWORD *)(a2 + 144);
  v20[0] = v21;
  v20[1] = v22;
  v20[2] = v23;
  v20[3] = v24;
  v20[4] = v25;
  v20[5] = v26;
  v20[6] = v27;
  v20[7] = v28;
  v20[8] = v29;
  *(_QWORD *)&v20[9] = v30;
  Instance = (struct _LIST_ENTRY *)VirtualTouchpadProcessor::GetInstance(1);
  if ( !Instance )
  {
    v18 = -1073741801;
LABEL_26:
    v11 = RtlNtStatusToDosError(v18);
    goto LABEL_16;
  }
  v18 = VirtualTouchpadProcessor::ConfigureVirtualTouchpad(
          Instance,
          (struct VPTP_ID *)&v31,
          (const struct tagVIRTUAL_PTP_CONFIG *)v20);
  if ( v18 < 0 )
    goto LABEL_26;
  v13 = MmUserProbeAddress;
  if ( (unsigned __int64)v3 >= MmUserProbeAddress )
    v3 = (int *)MmUserProbeAddress;
  *v3 = v31;
  v6 = 1;
LABEL_30:
  UserSessionSwitchLeaveCrit(v13, v12, v14, v15);
  return v6;
}
