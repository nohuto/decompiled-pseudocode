/*
 * XREFs of NtUserGetSystemDpiForProcess @ 0x1C015B010
 * Callers:
 *     <none>
 * Callees:
 *     PrivateAPI::_anonymous_namespace_::EnterSharedCritInternal @ 0x1C0029AC4 (PrivateAPI--_anonymous_namespace_--EnterSharedCritInternal.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0029D70 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C003CCC0 (UserSetLastError.c)
 */

__int64 __fastcall NtUserGetSystemDpiForProcess(char *Handle)
{
  __int64 v2; // rcx
  PVOID v3; // rdi
  NTSTATUS v4; // eax
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  unsigned int v12; // ebx
  __int64 v13; // rcx
  __int64 CurrentProcessWin32Process; // rax
  PVOID Object; // [rsp+40h] [rbp+8h] BYREF

  PrivateAPI::_anonymous_namespace_::EnterSharedCritInternal();
  v3 = 0LL;
  if ( (unsigned __int64)(Handle - 1) > 0xFFFFFFFFFFFFFFFDuLL )
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v2);
  }
  else
  {
    Object = 0LL;
    v4 = ObReferenceObjectByHandle(Handle, 0x1000u, (POBJECT_TYPE)PsProcessType, 1, &Object, 0LL);
    v3 = Object;
    if ( v4 < 0 )
    {
      UserSetLastError(87LL, v5, v6, v7);
      v12 = 0;
      goto LABEL_14;
    }
    if ( (unsigned int)PsGetProcessSessionId(Object) != gSessionId )
    {
      v13 = 87LL;
      goto LABEL_11;
    }
    CurrentProcessWin32Process = PsGetProcessWin32Process(v3);
  }
  if ( CurrentProcessWin32Process )
  {
    v12 = *(unsigned __int16 *)(CurrentProcessWin32Process + 284);
    goto LABEL_12;
  }
  v13 = 5023LL;
LABEL_11:
  UserSetLastError(v13, v8, v10, v11);
  v12 = 0;
LABEL_12:
  if ( v3 )
    ObfDereferenceObject(v3);
LABEL_14:
  UserSessionSwitchLeaveCrit(v9, v8, v10, v11);
  return v12;
}
