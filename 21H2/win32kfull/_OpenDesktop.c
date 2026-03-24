/*
 * XREFs of _OpenDesktop @ 0x1C000F208
 * Callers:
 *     NtUserOpenDesktop @ 0x1C000F170 (NtUserOpenDesktop.c)
 *     xxxResolveDesktop @ 0x1C000F4F0 (xxxResolveDesktop.c)
 *     xxxResolveDesktopForWOW @ 0x1C01E9C64 (xxxResolveDesktopForWOW.c)
 * Callees:
 *     OpenDesktopCompletion @ 0x1C0011364 (OpenDesktopCompletion.c)
 *     UserSetLastError @ 0x1C0069D40 (UserSetLastError.c)
 *     CloseProtectedHandle @ 0x1C00D93E8 (CloseProtectedHandle.c)
 *     __security_check_cookie @ 0x1C0165D70 (__security_check_cookie.c)
 *     ?ProbeAndDeepCaptureWinStaDesktopObjectAttributes@@YAJHPEAU_OBJECT_ATTRIBUTES@@AEAY0BAA@GAEAU1@AEAU_SECURITY_QUALITY_OF_SERVICE@@AEAPEAXAEAU_UNICODE_STRING@@AEAPEAG@Z @ 0x1C0168EA4 (-ProbeAndDeepCaptureWinStaDesktopObjectAttributes@@YAJHPEAU_OBJECT_ATTRIBUTES@@AEAY0BAA@GAEAU1@A.c)
 */

__int64 __fastcall OpenDesktop(struct _OBJECT_ATTRIBUTES *a1, __int64 a2, __int64 a3, int a4, HANDLE *a5)
{
  unsigned int v5; // r15d
  KPROCESSOR_MODE v6; // si
  NTSTATUS v8; // ebx
  __int64 CurrentProcess; // rax
  __int64 v10; // rdx
  ULONG v11; // eax
  int v12; // eax
  ULONG v13; // eax
  PVOID v14; // rdi
  ULONG v15; // eax
  HANDLE Handle; // [rsp+40h] [rbp-C0h] BYREF
  PVOID Object; // [rsp+48h] [rbp-B8h] BYREF
  void *v19; // [rsp+50h] [rbp-B0h] BYREF
  struct _UNICODE_STRING v20; // [rsp+58h] [rbp-A8h] BYREF
  struct _OBJECT_ATTRIBUTES v21; // [rsp+68h] [rbp-98h] BYREF
  struct _SECURITY_QUALITY_OF_SERVICE v22; // [rsp+98h] [rbp-68h] BYREF
  unsigned __int16 v23[256]; // [rsp+B0h] [rbp-50h] BYREF

  Handle = 0LL;
  v5 = a3;
  v6 = 1;
  LOBYTE(a3) = 1;
  v8 = ObOpenObjectByName(a1, ExDesktopObjectType, a3, 0LL, a4 | 0x81u, 0LL, &Handle);
  if ( v8 < 0 )
  {
    CurrentProcess = PsGetCurrentProcess();
    if ( (unsigned int)IsProcessDwm(CurrentProcess) )
    {
      v19 = 0LL;
      Object = 0LL;
      *(_QWORD *)&v22.Length = 0LL;
      *(_DWORD *)&v22.ContextTrackingMode = 0;
      memset(&v21, 0, sizeof(v21));
      v20 = 0LL;
      v8 = ProbeAndDeepCaptureWinStaDesktopObjectAttributes(
             0,
             a1,
             (unsigned __int16 (*)[256])v23,
             &v21,
             &v22,
             &v19,
             &v20,
             (unsigned __int16 **)&Object);
      if ( v8 < 0 )
      {
LABEL_8:
        v11 = RtlNtStatusToDosError(v8);
        UserSetLastError(v11);
        return (unsigned int)v8;
      }
      v6 = 0;
      v8 = ObOpenObjectByName(&v21, ExDesktopObjectType, 0LL, 0LL, 193, 0LL, &Handle);
      if ( v19 )
      {
        LOBYTE(v10) = 1;
        SeReleaseSecurityDescriptor(v19, v10, 0LL);
        v19 = 0LL;
      }
      Win32FreePool(Object);
    }
    if ( v8 < 0 )
      goto LABEL_8;
  }
  Object = 0LL;
  v12 = ObReferenceObjectByHandle(Handle, 0, (POBJECT_TYPE)ExDesktopObjectType, v6, &Object, 0LL);
  v8 = v12;
  if ( v12 < 0 )
  {
    v13 = RtlNtStatusToDosError(v12);
    UserSetLastError(v13);
LABEL_13:
    CloseProtectedHandle(Handle);
    return (unsigned int)v8;
  }
  v14 = Object;
  if ( *(_DWORD *)Object != gSessionId )
  {
    v8 = -1073741816;
    v15 = RtlNtStatusToDosError(-1073741816);
    UserSetLastError(v15);
    ObfDereferenceObject(v14);
    goto LABEL_13;
  }
  v8 = OpenDesktopCompletion(Object, Handle, v5);
  if ( v8 < 0 )
  {
    CloseProtectedHandle(Handle);
    Handle = 0LL;
  }
  ObfDereferenceObject(v14);
  if ( v8 >= 0 )
  {
    if ( (unsigned int)SetHandleFlag(Handle, 1LL, 1LL) )
    {
      v8 = 0;
      *a5 = Handle;
    }
    else
    {
      CloseProtectedHandle(Handle);
      return (unsigned int)-1073741801;
    }
  }
  return (unsigned int)v8;
}
