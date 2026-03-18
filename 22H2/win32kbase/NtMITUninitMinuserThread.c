/*
 * XREFs of NtMITUninitMinuserThread @ 0x1C01426E0
 * Callers:
 *     <none>
 * Callees:
 *     PrivateAPI::_anonymous_namespace_::EnterCritInternal @ 0x1C0048330 (PrivateAPI--_anonymous_namespace_--EnterCritInternal.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C004CE30 (UserSessionSwitchLeaveCrit.c)
 *     HMUnlockObject @ 0x1C0056D70 (HMUnlockObject.c)
 *     ProtectHandle @ 0x1C0087A68 (ProtectHandle.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D66B4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall NtMITUninitMinuserThread(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct tagTHREADINFO *v4; // rax
  __int64 v5; // rdx
  struct tagTHREADINFO *v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rbx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v11; // rax
  __int64 *v12; // rdi
  struct tagTHREADINFO *v13; // rdi
  int v14; // eax
  void *v15; // rcx

  v4 = (struct tagTHREADINFO *)PrivateAPI::_anonymous_namespace_::EnterCritInternal(0LL, a2, a3, a4);
  v9 = 0LL;
  gptiCurrent = v4;
  if ( v4 )
  {
    *((_DWORD *)v4 + 387) = 1;
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v6);
    if ( CurrentProcessWin32Process )
    {
      if ( *(_QWORD *)CurrentProcessWin32Process )
      {
        if ( (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0 )
        {
          v6 = gptiCurrent;
          if ( (*((_DWORD *)gptiCurrent + 122) & 0x1000000) != 0 && (*((_DWORD *)gptiCurrent + 318) & 0x80u) == 0 )
          {
            while ( 1 )
            {
              v12 = (__int64 *)gpSharedUserCritDeferredUnlockListHead;
              if ( !gpSharedUserCritDeferredUnlockListHead )
                break;
              gpSharedUserCritDeferredUnlockListHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpSharedUserCritDeferredUnlockListHead
                                                                                           + 2);
              v11 = *v12;
              v12[2] = 0LL;
              if ( !*(_DWORD *)(v11 + 8) )
                MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 4237);
              HMUnlockObject(*v12);
            }
          }
        }
      }
    }
  }
  v13 = gptiCurrent;
  v14 = *((_DWORD *)gptiCurrent + 318);
  if ( (v14 & 0x1000000) != 0 )
  {
    v15 = (void *)*((_QWORD *)gptiCurrent + 91);
    *((_DWORD *)gptiCurrent + 318) = v14 & 0xFEFFFFFF;
    ProtectHandle(v15, v5, (struct _OBJECT_TYPE *)ExEventObjectType, 0);
    ObfDereferenceObject(*((PVOID *)v13 + 92));
    *((_QWORD *)v13 + 91) = 0LL;
    *((_QWORD *)v13 + 92) = 0LL;
    v9 = 1LL;
  }
  UserSessionSwitchLeaveCrit((__int64)v6, v5, v7, v8);
  return v9;
}
