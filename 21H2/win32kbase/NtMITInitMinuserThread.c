/*
 * XREFs of NtMITInitMinuserThread @ 0x1C0154FD0
 * Callers:
 *     <none>
 * Callees:
 *     PrivateAPI::_anonymous_namespace_::EnterCritInternal @ 0x1C00293AC (PrivateAPI--_anonymous_namespace_--EnterCritInternal.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0029D70 (UserSessionSwitchLeaveCrit.c)
 *     HMUnlockObject @ 0x1C0038FB0 (HMUnlockObject.c)
 *     ProtectHandle @ 0x1C003AA94 (ProtectHandle.c)
 *     UserSetLastError @ 0x1C003CCC0 (UserSetLastError.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall NtMITInitMinuserThread(HANDLE Handle)
{
  struct tagTHREADINFO *v2; // rax
  __int64 v3; // rdx
  struct tagTHREADINFO *v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  int v7; // ebx
  __int64 CurrentProcessWin32Process; // rax
  char v9; // al
  __int64 v10; // rcx
  struct tagKERNELHANDLETABLEENTRY *v11; // rdi
  struct tagTHREADINFO *v12; // rdi
  int v13; // r14d
  PVOID Object; // [rsp+68h] [rbp+10h] BYREF

  v2 = (struct tagTHREADINFO *)PrivateAPI::_anonymous_namespace_::EnterCritInternal(0);
  gptiCurrent = v2;
  v7 = 0;
  if ( v2 )
  {
    *((_DWORD *)v2 + 377) = 1;
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v4);
    if ( CurrentProcessWin32Process )
    {
      if ( (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0 )
      {
        v4 = gptiCurrent;
        if ( (*((_DWORD *)gptiCurrent + 122) & 0x1000000) == 0
          || (v9 = 1, (*((_DWORD *)gptiCurrent + 314) & 0x80u) != 0) )
        {
          v9 = 0;
        }
        if ( v9 )
        {
          while ( 1 )
          {
            v11 = gpSharedUserCritDeferredUnlockListHead;
            if ( !gpSharedUserCritDeferredUnlockListHead )
              break;
            gpSharedUserCritDeferredUnlockListHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpSharedUserCritDeferredUnlockListHead
                                                                                         + 2);
            *((_QWORD *)v11 + 2) = 0LL;
            v10 = *(_QWORD *)v11;
            if ( !*(_DWORD *)(*(_QWORD *)v11 + 8LL) )
            {
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v10, v3, v5);
              v10 = *(_QWORD *)v11;
            }
            HMUnlockObject(v10);
          }
        }
      }
    }
  }
  v12 = gptiCurrent;
  if ( (*((_DWORD *)gptiCurrent + 314) & 0x1000000) != 0 )
  {
    v7 = 1;
  }
  else
  {
    Object = 0LL;
    v13 = ObReferenceObjectByHandle(Handle, 0x1F0003u, (POBJECT_TYPE)ExEventObjectType, 1, &Object, 0LL);
    if ( v13 >= 0 )
    {
      v13 = ProtectHandle(Handle, v3, (struct _OBJECT_TYPE *)ExEventObjectType, 1);
      if ( v13 < 0 )
      {
        ObfDereferenceObject(Object);
      }
      else
      {
        if ( *((_QWORD *)v12 + 92) )
        {
          ProtectHandle(*((void **)v12 + 91), v3, (struct _OBJECT_TYPE *)ExEventObjectType, 0);
          ObCloseHandle(*((HANDLE *)v12 + 91), 1);
          ObfDereferenceObject(*((PVOID *)v12 + 92));
        }
        *((_QWORD *)v12 + 91) = Handle;
        *((_QWORD *)v12 + 92) = Object;
        *((_DWORD *)v12 + 122) |= 0xC0u;
        *((_DWORD *)v12 + 314) |= 0x1000000u;
      }
    }
    LOBYTE(v7) = v13 >= 0;
  }
  UserSessionSwitchLeaveCrit((__int64)v4, v3, v5, v6);
  return v7;
}
