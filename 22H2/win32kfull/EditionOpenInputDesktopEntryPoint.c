/*
 * XREFs of EditionOpenInputDesktopEntryPoint @ 0x1C000EA00
 * Callers:
 *     <none>
 * Callees:
 *     _GetProcessWindowStation @ 0x1C000EED0 (_GetProcessWindowStation.c)
 *     OpenDesktopCompletion @ 0x1C0011364 (OpenDesktopCompletion.c)
 *     UserSetLastError @ 0x1C0069CA0 (UserSetLastError.c)
 *     CloseProtectedHandle @ 0x1C00D9098 (CloseProtectedHandle.c)
 */

HANDLE __fastcall EditionOpenInputDesktopEntryPoint(unsigned int a1, int a2, int a3)
{
  KPROCESSOR_MODE AccessMode; // si
  __int64 v7; // rdx
  __int64 ProcessWindowStation; // rax
  void **v9; // rdx
  void *v10; // rbx
  __int64 CurrentProcess; // rax
  NTSTATUS v12; // eax
  int v13; // ebx
  __int64 v14; // rcx
  HANDLE v15; // rbx
  NTSTATUS v17; // ecx
  __int64 v18; // rcx
  const UNICODE_STRING *NameInfo; // rax
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-10h] BYREF
  HANDLE Handle; // [rsp+88h] [rbp+38h] BYREF

  Handle = 0LL;
  AccessMode = 1;
  EnterCrit(0LL, 1LL);
  if ( !grpdeskRitInput )
    goto LABEL_25;
  ProcessWindowStation = GetProcessWindowStation(&DestinationString, v7);
  if ( !ProcessWindowStation )
  {
    v18 = 5LL;
    goto LABEL_14;
  }
  if ( (*(_DWORD *)(ProcessWindowStation + 64) & 4) != 0 )
  {
    v18 = 1LL;
    goto LABEL_14;
  }
  v9 = (void **)grpdeskRitInput;
  if ( gbDesktopLocked )
    v9 = (void **)gspdeskShouldBeForeground;
  v10 = *v9;
  if ( !*v9 )
  {
LABEL_25:
    v18 = 110LL;
    goto LABEL_14;
  }
  CurrentProcess = PsGetCurrentProcess();
  if ( (unsigned int)IsProcessDwm(CurrentProcess) )
  {
    AccessMode = 0;
    DestinationString = 0LL;
    RtlInitUnicodeString(&DestinationString, L"Default");
    NameInfo = (const UNICODE_STRING *)ObQueryNameInfo(v10);
    if ( NameInfo )
      NameInfo = (const UNICODE_STRING *)(ObQueryNameInfo(v10) + 8);
    if ( !RtlEqualUnicodeString(&DestinationString, NameInfo, 0) )
      a3 = 64;
  }
  v12 = ObOpenObjectByPointer(
          v10,
          a2 != 0 ? 2 : 0,
          0LL,
          a3 | 0x81,
          (POBJECT_TYPE)ExDesktopObjectType,
          AccessMode,
          &Handle);
  if ( v12 < 0 )
  {
    v17 = v12;
LABEL_13:
    Handle = 0LL;
    v18 = RtlNtStatusToDosError(v17);
LABEL_14:
    UserSetLastError(v18);
    goto LABEL_11;
  }
  v13 = OpenDesktopCompletion(v10, Handle, a1);
  if ( v13 < 0 || !(unsigned int)SetHandleFlag(Handle, 1LL, 1LL) )
  {
    CloseProtectedHandle(Handle);
    if ( v13 >= 0 )
      v13 = -1073741801;
    v17 = v13;
    goto LABEL_13;
  }
LABEL_11:
  v15 = Handle;
  UserSessionSwitchLeaveCrit(v14);
  return v15;
}
