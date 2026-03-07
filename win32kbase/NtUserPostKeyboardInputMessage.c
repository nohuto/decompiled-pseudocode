__int64 __fastcall NtUserPostKeyboardInputMessage(int a1, ULONG64 a2, __int64 a3)
{
  struct tagTHREADINFO *v6; // rax
  __int64 v7; // rdx
  struct tagTHREADINFO *v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 CurrentProcessWin32Process; // rax
  __int64 v12; // rax
  char v13; // al
  __int64 *v14; // rbx
  __int64 CurrentProcess; // rax
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  _BOOL8 v19; // rdx
  int v21; // edx
  int v22; // r8d
  __int16 v23; // r9
  __int16 v24; // r10
  __int16 v25; // r11
  unsigned int v26; // ebx
  ULONG v27; // eax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  __int128 v32; // [rsp+68h] [rbp-50h]
  int v33; // [rsp+78h] [rbp-40h]

  v6 = (struct tagTHREADINFO *)PrivateAPI::_anonymous_namespace_::EnterCritInternal(0LL);
  gptiCurrent = v6;
  if ( v6 )
  {
    *((_DWORD *)v6 + 387) = 1;
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v8);
    if ( CurrentProcessWin32Process )
    {
      v8 = (struct tagTHREADINFO *)-*(_QWORD *)CurrentProcessWin32Process;
      v7 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
      v12 = v7 & CurrentProcessWin32Process;
      if ( v12 )
      {
        if ( (*(_DWORD *)(v12 + 12) & 0x8000) != 0 )
        {
          v8 = gptiCurrent;
          if ( (*((_DWORD *)gptiCurrent + 122) & 0x1000000) == 0
            || (v13 = 1, (*((_DWORD *)gptiCurrent + 318) & 0x80u) != 0) )
          {
            v13 = 0;
          }
          if ( v13 )
          {
            while ( 1 )
            {
              v14 = (__int64 *)gpSharedUserCritDeferredUnlockListHead;
              if ( !gpSharedUserCritDeferredUnlockListHead )
                break;
              gpSharedUserCritDeferredUnlockListHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpSharedUserCritDeferredUnlockListHead
                                                                                           + 2);
              v14[2] = 0LL;
              if ( !*(_DWORD *)(*v14 + 8) )
                MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 4237);
              HMUnlockObject(*v14);
            }
          }
        }
      }
    }
  }
  CurrentProcess = PsGetCurrentProcess(v8, v7, v9, v10);
  v19 = 0LL;
  if ( CurrentProcess )
    v19 = CurrentProcess == *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels;
  if ( v19 )
  {
    if ( a2 + 20 < a2 || a2 + 20 > MmUserProbeAddress )
      a2 = MmUserProbeAddress;
    v32 = *(_OWORD *)a2;
    v33 = *(_DWORD *)(a2 + 16);
    LOBYTE(v21) = CKeyboardProcessor::HandleLeftRightVKs(*(_QWORD *)(a2 + 8));
    v26 = ApiSetEditionPostKeyboardInputMessage(a1, v21, v22, (unsigned __int16)v32, v25, v23, v33, v22, v24, a3);
    v27 = RtlNtStatusToDosError(v26);
    UserSetLastError(v27);
    UserSessionSwitchLeaveCrit(v29, v28, v30, v31);
    return v26;
  }
  else
  {
    UserSessionSwitchLeaveCrit(v16, v19, v17, v18);
    return 3221225506LL;
  }
}
