/*
 * XREFs of _OpenThreadDesktop @ 0x1C01E418C
 * Callers:
 *     NtUserOpenThreadDesktop @ 0x1C01FAAB0 (NtUserOpenThreadDesktop.c)
 * Callees:
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     CloseProtectedHandle @ 0x1C00A6598 (CloseProtectedHandle.c)
 *     OpenDesktopCompletion @ 0x1C00D0E3C (OpenDesktopCompletion.c)
 *     GetConsoleDesktop @ 0x1C01E4070 (GetConsoleDesktop.c)
 */

__int64 __fastcall OpenThreadDesktop(__int64 a1, char a2, int a3, int a4, HANDLE *Object)
{
  int v8; // ebx
  __int64 v9; // rax
  HANDLE *v10; // r14
  ACCESS_MASK v11; // esi
  __int64 v12; // r10
  __int64 result; // rax
  PRKPROCESS *v14; // rcx
  HANDLE v15; // rax
  NTSTATUS v16; // eax
  HANDLE *v17; // rdi
  NTSTATUS v18; // ebx
  ULONG v19; // eax
  __int64 v20; // rdx
  NTSTATUS v21; // ecx
  NTSTATUS v22; // eax
  ULONG v23; // eax
  __int64 v24; // rdx
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
    v15 = *(HANDLE *)(v9 + 592);
    Handle = v15;
    v14 = *(PRKPROCESS **)(v12 + 424);
  }
  else
  {
    result = GetConsoleDesktop(v8, &Handle, 0LL, (__int64 *)&HandleInformation);
    if ( (int)result < 0 )
      return result;
    v14 = (PRKPROCESS *)HandleInformation;
    v15 = Handle;
  }
  if ( !v15 )
    return 0;
  HandleInformation = 0LL;
  KeAttachProcess(*v14);
  Object = 0LL;
  v16 = ObReferenceObjectByHandle(Handle, 0, (POBJECT_TYPE)ExDesktopObjectType, 1, (PVOID *)&Object, &HandleInformation);
  v17 = Object;
  v18 = v16;
  KeDetachProcess();
  if ( v18 >= 0 )
  {
    if ( *(_DWORD *)v17 == gSessionId && ((_DWORD)v17[6] & 0xE) == 0 )
    {
      v22 = ObOpenObjectByPointer(v17, a3 != 0 ? 66 : 64, 0LL, v11, (POBJECT_TYPE)ExDesktopObjectType, 1, &Handle);
      v18 = v22;
      if ( v22 >= 0 )
      {
        v18 = OpenDesktopCompletion((__int64)v17, (__int64)Handle, a2);
        if ( v18 >= 0 )
        {
          if ( (unsigned int)SetHandleFlag(Handle, 1LL, 1LL) )
          {
            v18 = 0;
            *v10 = Handle;
          }
          else
          {
            CloseProtectedHandle(Handle, 1);
            v18 = -1073741801;
          }
        }
        else
        {
          CloseProtectedHandle(Handle, 1);
          Handle = 0LL;
        }
        goto LABEL_19;
      }
      v21 = v22;
    }
    else
    {
      v21 = -1073741816;
      v18 = -1073741816;
    }
    v23 = RtlNtStatusToDosError(v21);
    UserSetLastError(v23, v24);
LABEL_19:
    ObfDereferenceObject(v17);
    return (unsigned int)v18;
  }
  v19 = RtlNtStatusToDosError(v18);
  UserSetLastError(v19, v20);
  return (unsigned int)v18;
}
