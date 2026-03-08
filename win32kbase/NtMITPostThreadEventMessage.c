/*
 * XREFs of NtMITPostThreadEventMessage @ 0x1C016B930
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C003E180 (UserSetLastError.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C004E000 (UserSessionSwitchLeaveCrit.c)
 *     PrivateAPI::_anonymous_namespace_::EnterCritInternal @ 0x1C004FB50 (PrivateAPI--_anonymous_namespace_--EnterCritInternal.c)
 *     HMUnlockObject @ 0x1C0072980 (HMUnlockObject.c)
 *     ?IsInputThread@CInputThreadBase@@QEBA_NXZ @ 0x1C007CCB8 (-IsInputThread@CInputThreadBase@@QEBA_NXZ.c)
 *     PtiFromThreadId @ 0x1C00A6C40 (PtiFromThreadId.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     PostThreadEvent @ 0x1C02182E0 (PostThreadEvent.c)
 */

__int64 __fastcall NtMITPostThreadEventMessage(__int64 a1, __int64 *a2, int a3, int a4, unsigned int a5)
{
  int v8; // r14d
  struct tagTHREADINFO *v9; // rax
  __int64 v10; // rcx
  int v11; // ebx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v13; // rax
  char v14; // al
  __int64 *v15; // rdi
  int v16; // ecx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rdi
  __int64 v22; // rax

  v8 = a1;
  LOBYTE(a1) = 1;
  v9 = (struct tagTHREADINFO *)PrivateAPI::_anonymous_namespace_::EnterCritInternal(a1);
  gptiCurrent = v9;
  v11 = 0;
  if ( v9 )
  {
    *((_DWORD *)v9 + 387) = 1;
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v10);
    if ( CurrentProcessWin32Process )
    {
      v13 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL) & CurrentProcessWin32Process;
      if ( v13 )
      {
        if ( (*(_DWORD *)(v13 + 12) & 0x8000) != 0 )
        {
          if ( (*((_DWORD *)gptiCurrent + 122) & 0x1000000) == 0
            || (v14 = 1, (*((_DWORD *)gptiCurrent + 318) & 0x80u) != 0) )
          {
            v14 = 0;
          }
          if ( v14 )
          {
            while ( 1 )
            {
              v15 = (__int64 *)gpSharedUserCritDeferredUnlockListHead;
              if ( !gpSharedUserCritDeferredUnlockListHead )
                break;
              gpSharedUserCritDeferredUnlockListHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpSharedUserCritDeferredUnlockListHead
                                                                                           + 2);
              v15[2] = 0LL;
              if ( !*(_DWORD *)(*v15 + 8) )
                MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 4237);
              HMUnlockObject(*v15);
            }
          }
        }
      }
    }
  }
  if ( CInputThreadBase::IsInputThread((CInputThreadBase *)WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc) )
  {
    LODWORD(v21) = 0;
    if ( a2 )
    {
      if ( a2 + 1 < a2 || (unsigned __int64)(a2 + 1) > MmUserProbeAddress )
        a2 = (__int64 *)MmUserProbeAddress;
      v21 = *a2;
    }
    v22 = PtiFromThreadId(v8);
    if ( v22 )
    {
      LOBYTE(v11) = (unsigned __int8)PostThreadEvent(v22, v21, a3, a4, a5) != 0;
      goto LABEL_25;
    }
    v16 = 87;
  }
  else
  {
    v16 = 5;
  }
  UserSetLastError(v16);
LABEL_25:
  UserSessionSwitchLeaveCrit(v18, v17, v19, v20);
  return v11;
}
