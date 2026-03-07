HANDLE __fastcall EditionOpenInputDesktopEntryPoint(unsigned int a1, int a2, int a3)
{
  KPROCESSOR_MODE AccessMode; // si
  __int64 ProcessWindowStation; // rax
  __int64 v8; // rcx
  __int64 v9; // r8
  void **v10; // rdx
  void *v11; // rbx
  __int64 CurrentProcess; // rax
  NTSTATUS v13; // eax
  int v14; // ebx
  __int64 v15; // rcx
  HANDLE v16; // rbx
  NTSTATUS v18; // ecx
  ULONG v19; // ecx
  const UNICODE_STRING *NameInfo; // rax
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-10h] BYREF
  HANDLE Handle; // [rsp+88h] [rbp+38h] BYREF

  Handle = 0LL;
  AccessMode = 1;
  EnterCrit(0LL, 0LL);
  if ( !grpdeskRitInput )
    goto LABEL_25;
  ProcessWindowStation = GetProcessWindowStation(&DestinationString);
  if ( !ProcessWindowStation )
  {
    v19 = 5;
    goto LABEL_14;
  }
  if ( (*(_DWORD *)(ProcessWindowStation + 64) & 4) != 0 )
  {
    v19 = 1;
    goto LABEL_14;
  }
  v10 = (void **)grpdeskRitInput;
  if ( gbDesktopLocked )
    v10 = (void **)gspdeskShouldBeForeground;
  v11 = *v10;
  if ( !*v10 )
  {
LABEL_25:
    v19 = 110;
    goto LABEL_14;
  }
  CurrentProcess = PsGetCurrentProcess(v8, v10, v9);
  if ( (unsigned int)IsProcessDwm(CurrentProcess) )
  {
    AccessMode = 0;
    DestinationString = 0LL;
    RtlInitUnicodeString(&DestinationString, L"Default");
    NameInfo = (const UNICODE_STRING *)ObQueryNameInfo(v11);
    if ( NameInfo )
      NameInfo = (const UNICODE_STRING *)(ObQueryNameInfo(v11) + 8);
    if ( !RtlEqualUnicodeString(&DestinationString, NameInfo, 0) )
      a3 = 64;
  }
  v13 = ObOpenObjectByPointer(
          v11,
          a2 != 0 ? 2 : 0,
          0LL,
          a3 | 0x81,
          (POBJECT_TYPE)ExDesktopObjectType,
          AccessMode,
          &Handle);
  if ( v13 < 0 )
  {
    v18 = v13;
LABEL_13:
    Handle = 0LL;
    v19 = RtlNtStatusToDosError(v18);
LABEL_14:
    UserSetLastError(v19);
    goto LABEL_11;
  }
  v14 = OpenDesktopCompletion(v11, Handle, a1);
  if ( v14 < 0 || !(unsigned int)SetHandleFlag(Handle, 1LL, 1LL) )
  {
    CloseProtectedHandle(Handle, 1);
    if ( v14 >= 0 )
      v14 = -1073741801;
    v18 = v14;
    goto LABEL_13;
  }
LABEL_11:
  v16 = Handle;
  UserSessionSwitchLeaveCrit(v15);
  return v16;
}
