/*
 * XREFs of NtUserGetProcessDpiAwarenessContext @ 0x1C00B7A60
 * Callers:
 *     <none>
 * Callees:
 *     PrivateAPI::_anonymous_namespace_::EnterSharedCritInternal @ 0x1C0029AC4 (PrivateAPI--_anonymous_namespace_--EnterSharedCritInternal.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0029D70 (UserSessionSwitchLeaveCrit.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C002EA80 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     UserSetLastError @ 0x1C003CCC0 (UserSetLastError.c)
 */

__int64 __fastcall NtUserGetProcessDpiAwarenessContext(char *Handle)
{
  unsigned int CurrentThreadDpiAwarenessContext; // ebx
  __int64 v3; // rcx
  PVOID v4; // rdi
  __int64 CurrentProcessWin32Process; // rax
  __int64 v6; // rcx
  __int64 v7; // rsi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  NTSTATUS v13; // eax
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  PVOID Object; // [rsp+40h] [rbp+8h] BYREF

  CurrentThreadDpiAwarenessContext = 0;
  PrivateAPI::_anonymous_namespace_::EnterSharedCritInternal();
  v4 = 0LL;
  if ( (unsigned __int64)(Handle - 1) > 0xFFFFFFFFFFFFFFFDuLL )
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v3);
    goto LABEL_3;
  }
  Object = 0LL;
  v13 = ObReferenceObjectByHandle(Handle, 0x1000u, (POBJECT_TYPE)PsProcessType, 1, &Object, 0LL);
  v4 = Object;
  if ( v13 < 0 )
  {
    UserSetLastError(87LL, v14, v15, v16);
    goto LABEL_7;
  }
  if ( (unsigned int)PsGetProcessSessionId(Object) == gSessionId )
  {
    CurrentProcessWin32Process = PsGetProcessWin32Process(v4);
LABEL_3:
    v7 = CurrentProcessWin32Process;
    if ( CurrentProcessWin32Process == PsGetCurrentProcessWin32Process(v6) )
    {
      CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext();
    }
    else if ( v7 )
    {
      CurrentThreadDpiAwarenessContext = *(_DWORD *)(v7 + 280);
      if ( !CurrentThreadDpiAwarenessContext )
        CurrentThreadDpiAwarenessContext = 24592;
    }
    goto LABEL_5;
  }
  UserSetLastError(87LL, v17, v18, v19);
LABEL_5:
  if ( v4 )
    ObfDereferenceObject(v4);
LABEL_7:
  UserSessionSwitchLeaveCrit(v9, v8, v10, v11);
  return CurrentThreadDpiAwarenessContext;
}
