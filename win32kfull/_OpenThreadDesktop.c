__int64 __fastcall OpenThreadDesktop(__int64 a1, unsigned int a2, int a3, int a4, HANDLE *Object)
{
  unsigned int v8; // ebx
  __int64 v9; // rax
  HANDLE *v10; // r14
  ACCESS_MASK v11; // esi
  __int64 v12; // r10
  HANDLE v13; // rax
  PRKPROCESS *v14; // rcx
  NTSTATUS v15; // eax
  HANDLE *v16; // rdi
  NTSTATUS v17; // ebx
  __int64 v18; // rcx
  NTSTATUS v19; // eax
  __int64 result; // rax
  NTSTATUS v21; // ecx
  ULONG v22; // eax
  ULONG v23; // eax
  HANDLE Handle; // [rsp+40h] [rbp-10h] BYREF
  struct _OBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+48h] [rbp-8h] BYREF

  v8 = a1;
  v9 = PtiFromThreadId(a1);
  v10 = Object;
  v11 = a4 | 0x81;
  HandleInformation = 0LL;
  v12 = v9;
  Handle = 0LL;
  *Object = 0LL;
  if ( v9 )
  {
    v13 = *(HANDLE *)(v9 + 592);
    Handle = v13;
    v14 = *(PRKPROCESS **)(v12 + 424);
    goto LABEL_3;
  }
  result = GetConsoleDesktop(v8, &Handle, 0LL, &HandleInformation);
  if ( (int)result >= 0 )
  {
    v14 = (PRKPROCESS *)HandleInformation;
    v13 = Handle;
LABEL_3:
    if ( !v13 )
      return 0;
    HandleInformation = 0LL;
    KeAttachProcess(*v14);
    Object = 0LL;
    v15 = ObReferenceObjectByHandle(
            Handle,
            0,
            (POBJECT_TYPE)ExDesktopObjectType,
            1,
            (PVOID *)&Object,
            &HandleInformation);
    v16 = Object;
    v17 = v15;
    KeDetachProcess();
    if ( v17 < 0 )
    {
      v22 = RtlNtStatusToDosError(v17);
      UserSetLastError(v22);
      return (unsigned int)v17;
    }
    if ( *(_DWORD *)v16 != *(_DWORD *)SGDGetUserSessionState(v18) || ((_DWORD)v16[6] & 0xE) != 0 )
    {
      v21 = -1073741816;
      v17 = -1073741816;
    }
    else
    {
      v19 = ObOpenObjectByPointer(v16, a3 != 0 ? 66 : 64, 0LL, v11, (POBJECT_TYPE)ExDesktopObjectType, 1, &Handle);
      v17 = v19;
      if ( v19 >= 0 )
      {
        v17 = OpenDesktopCompletion(v16, Handle, a2);
        if ( v17 < 0 )
        {
          CloseProtectedHandle(Handle, 1);
          Handle = 0LL;
        }
        else if ( (unsigned int)SetHandleFlag(Handle, 1LL, 1LL) )
        {
          v17 = 0;
          *v10 = Handle;
        }
        else
        {
          CloseProtectedHandle(Handle, 1);
          v17 = -1073741801;
        }
        goto LABEL_11;
      }
      v21 = v19;
    }
    v23 = RtlNtStatusToDosError(v21);
    UserSetLastError(v23);
LABEL_11:
    ObfDereferenceObject(v16);
    return (unsigned int)v17;
  }
  return result;
}
