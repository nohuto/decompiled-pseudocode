__int64 __fastcall NtUserGetProcessDpiAwarenessContext(char *Handle, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int CurrentThreadDpiAwarenessContext; // edi
  __int64 v6; // rcx
  PVOID v7; // rsi
  __int64 CurrentProcessWin32Process; // rax
  __int64 v9; // rcx
  __int64 v10; // rbx
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rdx
  NTSTATUS v17; // eax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  int v22; // ebx
  PVOID Object; // [rsp+40h] [rbp+8h] BYREF

  CurrentThreadDpiAwarenessContext = 0;
  PrivateAPI::_anonymous_namespace_::EnterSharedCritInternal(Handle, a2, a3, a4);
  v7 = 0LL;
  if ( (unsigned __int64)(Handle - 1) > 0xFFFFFFFFFFFFFFFDuLL )
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v6);
LABEL_3:
    v10 = CurrentProcessWin32Process;
    if ( CurrentProcessWin32Process )
    {
      v9 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
      v10 = v9 & CurrentProcessWin32Process;
    }
    v11 = PsGetCurrentProcessWin32Process(v9);
    v15 = v11;
    if ( v11 )
    {
      v12 = -(__int64)(*(_QWORD *)v11 != 0LL);
      v15 = v12 & v11;
    }
    if ( v10 == v15 )
    {
      CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext();
    }
    else if ( v10 )
    {
      CurrentThreadDpiAwarenessContext = *(_DWORD *)(v10 + 280);
      if ( !CurrentThreadDpiAwarenessContext )
        CurrentThreadDpiAwarenessContext = 24592;
    }
    goto LABEL_9;
  }
  Object = 0LL;
  v17 = ObReferenceObjectByHandle(Handle, 0x1000u, (POBJECT_TYPE)PsProcessType, 1, &Object, 0LL);
  v7 = Object;
  if ( v17 < 0 )
  {
    UserSetLastError(87);
    goto LABEL_11;
  }
  v22 = *(_DWORD *)SGDGetUserSessionState(v19, v18, v20, v21);
  if ( (unsigned int)PsGetProcessSessionId(v7) == v22 )
  {
    CurrentProcessWin32Process = PsGetProcessWin32Process(v7);
    goto LABEL_3;
  }
  UserSetLastError(87);
LABEL_9:
  if ( v7 )
    ObfDereferenceObject(v7);
LABEL_11:
  UserSessionSwitchLeaveCrit(v12, v15, v13, v14);
  return CurrentThreadDpiAwarenessContext;
}
