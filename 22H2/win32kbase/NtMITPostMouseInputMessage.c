/*
 * XREFs of NtMITPostMouseInputMessage @ 0x1C0141970
 * Callers:
 *     <none>
 * Callees:
 *     PrivateAPI::_anonymous_namespace_::EnterCritInternal @ 0x1C0048330 (PrivateAPI--_anonymous_namespace_--EnterCritInternal.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C004CE30 (UserSessionSwitchLeaveCrit.c)
 *     HMUnlockObject @ 0x1C0056D70 (HMUnlockObject.c)
 *     ?IsInputThread@CInputThreadBase@@QEBA_NXZ @ 0x1C0057EC8 (-IsInputThread@CInputThreadBase@@QEBA_NXZ.c)
 *     UserSetLastError @ 0x1C005E3B4 (UserSetLastError.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D66B4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     PostMouseInputMessage @ 0x1C01E8838 (PostMouseInputMessage.c)
 */

__int64 __fastcall NtMITPostMouseInputMessage(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD *v4; // rbx
  unsigned int v6; // r15d
  __int64 *v7; // rsi
  struct tagTHREADINFO *v8; // rax
  __int64 v9; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v11; // rax
  char v12; // al
  __int64 *v13; // rdi
  unsigned int v14; // ebx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // r10
  int v21; // [rsp+20h] [rbp-48h]
  _QWORD v22[3]; // [rsp+38h] [rbp-30h] BYREF

  v4 = (_QWORD *)a4;
  v6 = a2;
  v7 = (__int64 *)a1;
  LOBYTE(a1) = 1;
  v8 = (struct tagTHREADINFO *)PrivateAPI::_anonymous_namespace_::EnterCritInternal(a1, a2, a3, a4);
  gptiCurrent = v8;
  if ( v8 )
  {
    *((_DWORD *)v8 + 387) = 1;
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v9);
    if ( CurrentProcessWin32Process )
    {
      v11 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL) & CurrentProcessWin32Process;
      if ( v11 )
      {
        if ( (*(_DWORD *)(v11 + 12) & 0x8000) != 0 )
        {
          if ( (*((_DWORD *)gptiCurrent + 122) & 0x1000000) == 0
            || (v12 = 1, (*((_DWORD *)gptiCurrent + 318) & 0x80u) != 0) )
          {
            v12 = 0;
          }
          if ( v12 )
          {
            while ( 1 )
            {
              v13 = (__int64 *)gpSharedUserCritDeferredUnlockListHead;
              if ( !gpSharedUserCritDeferredUnlockListHead )
                break;
              gpSharedUserCritDeferredUnlockListHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpSharedUserCritDeferredUnlockListHead
                                                                                           + 2);
              v13[2] = 0LL;
              if ( !*(_DWORD *)(*v13 + 8) )
              {
                v21 = 0x20000;
                MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 4237);
              }
              HMUnlockObject(*v13);
            }
          }
        }
      }
    }
  }
  if ( CInputThreadBase::IsInputThread((CInputThreadBase *)WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc) )
  {
    v22[0] = 0LL;
    if ( v7 + 1 < v7 || (unsigned __int64)(v7 + 1) > MmUserProbeAddress )
      v7 = (__int64 *)MmUserProbeAddress;
    v19 = *v7;
    v22[1] = *v7;
    if ( v4 )
    {
      if ( v4 + 1 < v4 || (unsigned __int64)(v4 + 1) > MmUserProbeAddress )
        v4 = (_QWORD *)MmUserProbeAddress;
      v22[0] = *v4;
      v4 = v22;
    }
    v16 = (unsigned int)-((unsigned __int8)PostMouseInputMessage(v19, v6, a3, v4, v21) == 0);
    v14 = v16 & 0xC0000001;
  }
  else
  {
    v14 = -1073741823;
    UserSetLastError(5);
  }
  UserSessionSwitchLeaveCrit(v16, v15, v17, v18);
  return v14;
}
