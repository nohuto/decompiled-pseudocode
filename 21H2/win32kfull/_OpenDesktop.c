/*
 * XREFs of _OpenDesktop @ 0x1C00CEF78
 * Callers:
 *     NtUserOpenDesktop @ 0x1C00CEEE0 (NtUserOpenDesktop.c)
 *     xxxResolveDesktop @ 0x1C00CF130 (xxxResolveDesktop.c)
 *     xxxResolveDesktopForWOW @ 0x1C01E43F8 (xxxResolveDesktopForWOW.c)
 * Callees:
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     CloseProtectedHandle @ 0x1C00A6598 (CloseProtectedHandle.c)
 *     OpenDesktopCompletion @ 0x1C00D0E3C (OpenDesktopCompletion.c)
 */

__int64 __fastcall OpenDesktop(__int64 a1, __int64 a2, __int64 a3, int a4, HANDLE *a5)
{
  unsigned int v5; // r14d
  KPROCESSOR_MODE v6; // si
  __int64 v8; // rdx
  __int64 v9; // rcx
  NTSTATUS v10; // ebx
  int v11; // eax
  PVOID v12; // rdi
  __int64 CurrentProcess; // rax
  ULONG v15; // eax
  __int64 v16; // rdx
  ULONG v17; // eax
  __int64 v18; // rdx
  ULONG v19; // eax
  __int64 v20; // rdx
  HANDLE Handle; // [rsp+40h] [rbp-10h] BYREF
  PVOID Object; // [rsp+48h] [rbp-8h] BYREF

  Handle = 0LL;
  v5 = a3;
  v6 = 1;
  LOBYTE(a3) = 1;
  v10 = ObOpenObjectByName(a1, ExDesktopObjectType, a3, 0LL, a4 | 0x81u, 0LL, &Handle);
  if ( v10 < 0 )
  {
    CurrentProcess = PsGetCurrentProcess(v9, v8);
    if ( !(unsigned int)IsProcessDwm(CurrentProcess)
      || (v6 = 0, v10 = ObOpenObjectByName(a1, ExDesktopObjectType, 0LL, 0LL, 193, 0LL, &Handle), v10 < 0) )
    {
      v15 = RtlNtStatusToDosError(v10);
      UserSetLastError(v15, v16);
      return (unsigned int)v10;
    }
  }
  Object = 0LL;
  v11 = ObReferenceObjectByHandle(Handle, 0, (POBJECT_TYPE)ExDesktopObjectType, v6, &Object, 0LL);
  v10 = v11;
  if ( v11 < 0 )
  {
    v17 = RtlNtStatusToDosError(v11);
    UserSetLastError(v17, v18);
LABEL_16:
    CloseProtectedHandle(Handle, v6);
    return (unsigned int)v10;
  }
  v12 = Object;
  if ( *(_DWORD *)Object != gSessionId )
  {
    v10 = -1073741816;
    v19 = RtlNtStatusToDosError(-1073741816);
    UserSetLastError(v19, v20);
    ObfDereferenceObject(v12);
    goto LABEL_16;
  }
  v10 = OpenDesktopCompletion(Object, Handle, v5);
  if ( v10 < 0 )
  {
    CloseProtectedHandle(Handle, v6);
    Handle = 0LL;
  }
  ObfDereferenceObject(v12);
  if ( v10 >= 0 )
  {
    if ( (unsigned int)SetHandleFlag(Handle, 1LL, 1LL) )
    {
      v10 = 0;
      *a5 = Handle;
    }
    else
    {
      CloseProtectedHandle(Handle, v6);
      return (unsigned int)-1073741801;
    }
  }
  return (unsigned int)v10;
}
