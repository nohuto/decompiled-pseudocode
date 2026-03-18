/*
 * XREFs of NtKSTInitialize @ 0x1C0083F60
 * Callers:
 *     <none>
 * Callees:
 *     PrivateAPI::_anonymous_namespace_::EnterCritInternal @ 0x1C0048330 (PrivateAPI--_anonymous_namespace_--EnterCritInternal.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C004CE30 (UserSessionSwitchLeaveCrit.c)
 *     HMUnlockObject @ 0x1C0056D70 (HMUnlockObject.c)
 *     ?IsInputThread@CInputThreadBase@@QEBA_NXZ @ 0x1C0057EC8 (-IsInputThread@CInputThreadBase@@QEBA_NXZ.c)
 *     UserSetLastError @ 0x1C005E3B4 (UserSetLastError.c)
 *     UserKSTInitialize @ 0x1C0084060 (UserKSTInitialize.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D66B4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall NtKSTInitialize(__int64 a1, void *a2, __int64 a3, __int64 a4)
{
  void *v4; // rbp
  struct tagTHREADINFO *v6; // rax
  __int64 v7; // rdx
  struct tagTHREADINFO *v8; // rcx
  __int64 v9; // r8
  unsigned int v10; // ebx
  __int64 CurrentProcessWin32Process; // rax
  __int64 *v12; // rdi
  __int64 CurrentProcess; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v19; // rax

  v4 = (void *)a1;
  LOBYTE(a1) = 1;
  v6 = (struct tagTHREADINFO *)PrivateAPI::_anonymous_namespace_::EnterCritInternal(a1, (__int64)a2, a3, a4);
  v10 = 0;
  gptiCurrent = v6;
  if ( v6 )
  {
    *((_DWORD *)v6 + 387) = 1;
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v8);
    if ( CurrentProcessWin32Process )
    {
      if ( *(_QWORD *)CurrentProcessWin32Process )
      {
        if ( (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0 )
        {
          v8 = gptiCurrent;
          if ( (*((_DWORD *)gptiCurrent + 122) & 0x1000000) != 0 && (*((_DWORD *)gptiCurrent + 318) & 0x80u) == 0 )
          {
            while ( 1 )
            {
              v12 = (__int64 *)gpSharedUserCritDeferredUnlockListHead;
              if ( !gpSharedUserCritDeferredUnlockListHead )
                break;
              gpSharedUserCritDeferredUnlockListHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpSharedUserCritDeferredUnlockListHead
                                                                                           + 2);
              v19 = *v12;
              v12[2] = 0LL;
              if ( !*(_DWORD *)(v19 + 8) )
                MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4237LL);
              HMUnlockObject(*v12);
            }
          }
        }
      }
    }
  }
  CurrentProcess = PsGetCurrentProcess(v8, v7, v9);
  if ( (!CurrentProcess || CurrentProcess != *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels)
    && PsGetCurrentProcessId() != (HANDLE)gpidLogon )
  {
    if ( !gDWMCapable )
      goto LABEL_19;
    goto LABEL_20;
  }
  if ( !gDWMCapable )
  {
LABEL_19:
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4691LL);
    goto LABEL_20;
  }
  if ( CInputThreadBase::IsInputThread((CInputThreadBase *)WPP_MAIN_CB.Queue.Wcb.CurrentIrp) )
  {
LABEL_20:
    UserSetLastError(5);
    goto LABEL_13;
  }
  v10 = UserKSTInitialize(v4, a2);
LABEL_13:
  UserSessionSwitchLeaveCrit(v15, v14, v16, v17);
  return v10;
}
