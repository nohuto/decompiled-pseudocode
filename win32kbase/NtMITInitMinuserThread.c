__int64 __fastcall NtMITInitMinuserThread(HANDLE Handle)
{
  struct tagTHREADINFO *v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  int v7; // ebx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v9; // rax
  char v10; // al
  __int64 *v11; // rdi
  struct tagTHREADINFO *v12; // rdi
  int v13; // r14d
  PVOID Object; // [rsp+68h] [rbp+10h] BYREF

  v2 = (struct tagTHREADINFO *)PrivateAPI::_anonymous_namespace_::EnterCritInternal(0LL);
  gptiCurrent = v2;
  v7 = 0;
  if ( v2 )
  {
    *((_DWORD *)v2 + 387) = 1;
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v4);
    if ( CurrentProcessWin32Process )
    {
      v4 = -*(_QWORD *)CurrentProcessWin32Process;
      v3 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
      v9 = v3 & CurrentProcessWin32Process;
      if ( v9 )
      {
        if ( (*(_DWORD *)(v9 + 12) & 0x8000) != 0 )
        {
          v4 = (__int64)gptiCurrent;
          if ( (*((_DWORD *)gptiCurrent + 122) & 0x1000000) == 0
            || (v10 = 1, (*((_DWORD *)gptiCurrent + 318) & 0x80u) != 0) )
          {
            v10 = 0;
          }
          if ( v10 )
          {
            while ( 1 )
            {
              v11 = (__int64 *)gpSharedUserCritDeferredUnlockListHead;
              if ( !gpSharedUserCritDeferredUnlockListHead )
                break;
              gpSharedUserCritDeferredUnlockListHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpSharedUserCritDeferredUnlockListHead
                                                                                           + 2);
              v11[2] = 0LL;
              if ( !*(_DWORD *)(*v11 + 8) )
              {
                LODWORD(Object) = 0x20000;
                MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 4237);
              }
              HMUnlockObject(*v11);
            }
          }
        }
      }
    }
  }
  v12 = gptiCurrent;
  if ( (*((_DWORD *)gptiCurrent + 318) & 0x1000000) != 0 )
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
        *((_DWORD *)v12 + 318) |= 0x1000000u;
      }
    }
    LOBYTE(v7) = v13 >= 0;
  }
  UserSessionSwitchLeaveCrit(v4, v3, v5, v6);
  return v7;
}
