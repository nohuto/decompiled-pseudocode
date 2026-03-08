/*
 * XREFs of _GetThreadDesktop @ 0x1C00D13FC
 * Callers:
 *     EditionGetThreadDesktopEntryPoint @ 0x1C00D13C0 (EditionGetThreadDesktopEntryPoint.c)
 * Callees:
 *     UserSetLastError @ 0x1C004103C (UserSetLastError.c)
 *     GetConsoleDesktop @ 0x1C01BFCC8 (GetConsoleDesktop.c)
 */

HANDLE __fastcall GetThreadDesktop(__int64 a1)
{
  unsigned int v1; // ebx
  __int64 v2; // rax
  __int64 v3; // rcx
  __int64 v4; // rdx
  HANDLE result; // rax
  PRKPROCESS *v6; // rbx
  __int64 CurrentProcessWin32Process; // rax
  HANDLE v8; // rcx
  int v9; // eax
  NTSTATUS v10; // eax
  PVOID v11; // rbx
  int v12; // edi
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 CurrentProcess; // rax
  HANDLE Handle; // [rsp+58h] [rbp+28h] BYREF
  PVOID Object; // [rsp+60h] [rbp+30h] BYREF
  struct _OBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+68h] [rbp+38h] BYREF

  v1 = a1;
  v2 = PtiFromThreadId(a1);
  Object = 0LL;
  v4 = v2;
  Handle = 0LL;
  if ( v2 )
  {
    result = *(HANDLE *)(v2 + 592);
    Handle = result;
    v6 = *(PRKPROCESS **)(v4 + 424);
  }
  else
  {
    if ( (int)GetConsoleDesktop(v1, &Handle, 0LL, &Object) < 0 )
      return 0LL;
    v6 = (PRKPROCESS *)Object;
    result = Handle;
  }
  if ( result )
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v3);
    if ( CurrentProcessWin32Process )
      CurrentProcessWin32Process &= -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
    if ( v6 != (PRKPROCESS *)CurrentProcessWin32Process )
    {
      HandleInformation = 0LL;
      KeAttachProcess(*v6);
      Object = 0LL;
      v10 = ObReferenceObjectByHandle(Handle, 0, (POBJECT_TYPE)ExDesktopObjectType, 1, &Object, &HandleInformation);
      v11 = Object;
      v12 = v10;
      KeDetachProcess();
      if ( v12 < 0
        || (CurrentProcess = PsGetCurrentProcess(v14, v13, v15),
            !(unsigned __int8)ObFindHandleForObject(CurrentProcess, v11, 0LL, &HandleInformation, &Handle)) )
      {
        v8 = 0LL;
        Handle = 0LL;
        if ( v12 < 0 )
          goto LABEL_8;
      }
      ObfDereferenceObject(v11);
    }
    v8 = Handle;
LABEL_8:
    if ( v8 )
    {
      v9 = SetHandleFlag(v8, 1LL, 1LL);
      return (HANDLE)((unsigned __int64)Handle & -(__int64)(v9 != 0));
    }
    else
    {
      UserSetLastError(5);
      return Handle;
    }
  }
  return result;
}
