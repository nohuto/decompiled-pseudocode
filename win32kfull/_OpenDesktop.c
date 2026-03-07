__int64 __fastcall OpenDesktop(__int64 a1, __int64 a2, __int64 a3, int a4, HANDLE *a5)
{
  unsigned int v5; // r14d
  KPROCESSOR_MODE v6; // si
  __int64 v8; // rdx
  __int64 v9; // rcx
  NTSTATUS v10; // ebx
  __int64 v11; // r8
  int v12; // eax
  __int64 v13; // rcx
  _DWORD *v14; // rax
  PVOID v15; // rdi
  __int64 CurrentProcess; // rax
  ULONG v18; // eax
  ULONG v19; // eax
  ULONG v20; // eax
  HANDLE Handle; // [rsp+40h] [rbp-10h] BYREF
  PVOID Object; // [rsp+48h] [rbp-8h] BYREF

  Handle = 0LL;
  v5 = a3;
  v6 = 1;
  LOBYTE(a3) = 1;
  v10 = ObOpenObjectByName(a1, ExDesktopObjectType, a3, 0LL, a4 | 0x81u, 0LL, &Handle);
  if ( v10 < 0 )
  {
    CurrentProcess = PsGetCurrentProcess(v9, v8, v11);
    if ( !(unsigned int)IsProcessDwm(CurrentProcess)
      || (v6 = 0, v10 = ObOpenObjectByName(a1, ExDesktopObjectType, 0LL, 0LL, 193, 0LL, &Handle), v10 < 0) )
    {
      v18 = RtlNtStatusToDosError(v10);
      UserSetLastError(v18);
      return (unsigned int)v10;
    }
  }
  Object = 0LL;
  v12 = ObReferenceObjectByHandle(Handle, 0, (POBJECT_TYPE)ExDesktopObjectType, v6, &Object, 0LL);
  v10 = v12;
  if ( v12 < 0 )
  {
    v19 = RtlNtStatusToDosError(v12);
    UserSetLastError(v19);
LABEL_15:
    CloseProtectedHandle(Handle, v6);
    return (unsigned int)v10;
  }
  v14 = (_DWORD *)SGDGetUserSessionState(v13);
  v15 = Object;
  if ( *(_DWORD *)Object != *v14 )
  {
    v10 = -1073741816;
    v20 = RtlNtStatusToDosError(-1073741816);
    UserSetLastError(v20);
    ObfDereferenceObject(v15);
    goto LABEL_15;
  }
  v10 = OpenDesktopCompletion(Object, Handle, v5);
  if ( v10 < 0 )
  {
    CloseProtectedHandle(Handle, v6);
    Handle = 0LL;
  }
  ObfDereferenceObject(v15);
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
