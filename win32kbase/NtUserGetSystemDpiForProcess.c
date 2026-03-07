__int64 __fastcall NtUserGetSystemDpiForProcess(char *Handle, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rcx
  PVOID v6; // rdi
  NTSTATUS v7; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  unsigned int v16; // ebx
  int v17; // ebx
  int v18; // ecx
  __int64 ProcessWin32Process; // rax
  __int64 CurrentProcessWin32Process; // rax
  PVOID Object; // [rsp+40h] [rbp+8h] BYREF

  PrivateAPI::_anonymous_namespace_::EnterSharedCritInternal(Handle, a2, a3, a4);
  v6 = 0LL;
  if ( (unsigned __int64)(Handle - 1) > 0xFFFFFFFFFFFFFFFDuLL )
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v5);
    v14 = CurrentProcessWin32Process;
    if ( CurrentProcessWin32Process )
    {
      v13 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
      v14 = v13 & CurrentProcessWin32Process;
    }
  }
  else
  {
    Object = 0LL;
    v7 = ObReferenceObjectByHandle(Handle, 0x1000u, (POBJECT_TYPE)PsProcessType, 1, &Object, 0LL);
    v6 = Object;
    if ( v7 < 0 )
    {
      UserSetLastError(87);
      v16 = 0;
      goto LABEL_16;
    }
    v17 = *(_DWORD *)SGDGetUserSessionState(v9, v8, v10, v11);
    if ( (unsigned int)PsGetProcessSessionId(v6) != v17 )
    {
      v18 = 87;
      goto LABEL_13;
    }
    ProcessWin32Process = PsGetProcessWin32Process(v6);
    v14 = ProcessWin32Process;
    if ( ProcessWin32Process )
    {
      v13 = -*(_QWORD *)ProcessWin32Process;
      v12 = -(__int64)(*(_QWORD *)ProcessWin32Process != 0LL);
      v14 = v12 & ProcessWin32Process;
    }
  }
  if ( v14 )
  {
    v16 = *(unsigned __int16 *)(v14 + 284);
    goto LABEL_14;
  }
  v18 = 5023;
LABEL_13:
  UserSetLastError(v18);
  v16 = 0;
LABEL_14:
  if ( v6 )
    ObfDereferenceObject(v6);
LABEL_16:
  UserSessionSwitchLeaveCrit(v13, v12, v14, v15);
  return v16;
}
