__int64 __fastcall CloseDesktop(unsigned __int64 Handle, KPROCESSOR_MODE a2)
{
  __int64 CurrentProcessWin32Process; // rax
  __int64 v5; // rbx
  int v6; // eax
  unsigned int v7; // edi
  PVOID v8; // rdi
  __int64 i; // rcx
  int v10; // ebx
  ULONG v12; // eax
  PVOID Object; // [rsp+60h] [rbp+18h] BYREF

  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(Handle);
  v5 = CurrentProcessWin32Process;
  if ( CurrentProcessWin32Process )
    v5 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL) & CurrentProcessWin32Process;
  Object = 0LL;
  v6 = ObReferenceObjectByHandle((HANDLE)Handle, 0, (POBJECT_TYPE)ExDesktopObjectType, a2, &Object, 0LL);
  v7 = v6;
  if ( v6 < 0 )
  {
    v12 = RtlNtStatusToDosError(v6);
    UserSetLastError(v12);
    return v7;
  }
  else
  {
    v8 = Object;
    if ( *(_QWORD *)v5 != gpepCSRSS )
    {
      for ( i = *(_QWORD *)(v5 + 320); i; i = *(_QWORD *)(i + 664) )
      {
        if ( ((*(_QWORD *)(i + 592) ^ Handle) & 0xFFFFFFFFFFFFFFFCuLL) == 0 )
        {
          UserSetLastError(170);
          ObfDereferenceObject(Object);
          return 2147483665LL;
        }
      }
      if ( Object == *(PVOID *)(v5 + 336) && ((*(_QWORD *)(v5 + 384) ^ Handle) & 0xFFFFFFFFFFFFFFFCuLL) == 0 )
      {
        UnlockObjectAssignment(v5 + 336);
        *(_QWORD *)(v5 + 384) = 0LL;
      }
    }
    SetHandleFlag(Handle, 0LL, 0LL);
    v10 = CloseProtectedHandle((HANDLE)Handle);
    ObfDereferenceObject(v8);
    if ( !gbIgnoreStressedOutStuff && v10 < 0 )
    {
      LODWORD(Object) = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 5588LL);
    }
    return 0LL;
  }
}
