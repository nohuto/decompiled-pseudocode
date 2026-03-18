/*
 * XREFs of EditionOpenInputDesktopEntryPoint @ 0x1C006B0C0
 * Callers:
 *     <none>
 * Callees:
 *     OpenDesktopCompletion @ 0x1C0069634 (OpenDesktopCompletion.c)
 *     CloseProtectedHandle @ 0x1C006A694 (CloseProtectedHandle.c)
 *     _GetProcessWindowStation @ 0x1C006B240 (_GetProcessWindowStation.c)
 *     UserSetLastError @ 0x1C00F04CC (UserSetLastError.c)
 */

HANDLE __fastcall EditionOpenInputDesktopEntryPoint(char a1, int a2, int a3)
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
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  HANDLE v19; // rbx
  NTSTATUS v21; // ecx
  __int64 v22; // rcx
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
    v22 = 5LL;
    goto LABEL_14;
  }
  if ( (*(_DWORD *)(ProcessWindowStation + 64) & 4) != 0 )
  {
    v22 = 1LL;
    goto LABEL_14;
  }
  v10 = (void **)grpdeskRitInput;
  if ( gbDesktopLocked )
    v10 = (void **)gspdeskShouldBeForeground;
  v11 = *v10;
  if ( !*v10 )
  {
LABEL_25:
    v22 = 110LL;
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
    v21 = v13;
LABEL_13:
    Handle = 0LL;
    v22 = RtlNtStatusToDosError(v21);
LABEL_14:
    UserSetLastError(v22);
    goto LABEL_11;
  }
  v14 = OpenDesktopCompletion((__int64)v11, (__int64)Handle, a1);
  if ( v14 < 0 || !(unsigned int)SetHandleFlag(Handle, 1LL, 1LL) )
  {
    CloseProtectedHandle(Handle, 1);
    if ( v14 >= 0 )
      v14 = -1073741801;
    v21 = v14;
    goto LABEL_13;
  }
LABEL_11:
  v19 = Handle;
  UserSessionSwitchLeaveCrit(v16, v15, v17, v18);
  return v19;
}
