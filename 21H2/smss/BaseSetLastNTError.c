/*
 * XREFs of BaseSetLastNTError @ 0x1400119F0
 * Callers:
 *     BasepGetFileNameInformation @ 0x14000F610 (BasepGetFileNameInformation.c)
 *     BasepGetObjectNTName @ 0x14000F730 (BasepGetObjectNTName.c)
 *     DeviceIoControl @ 0x14000FBD8 (DeviceIoControl.c)
 *     GetFileAttributesW @ 0x1400101C4 (GetFileAttributesW.c)
 *     CreateFileInternal @ 0x14001031C (CreateFileInternal.c)
 *     SetErrorMode @ 0x140010900 (SetErrorMode.c)
 *     CloseHandle @ 0x1400109A8 (CloseHandle.c)
 *     SetStdHandleEx @ 0x140011170 (SetStdHandleEx.c)
 *     FindClose @ 0x140011304 (FindClose.c)
 *     FindFirstFileExW @ 0x140011438 (FindFirstFileExW.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall BaseSetLastNTError(NTSTATUS a1)
{
  ULONG v1; // ebx

  v1 = RtlNtStatusToDosError(a1);
  RtlSetLastWin32Error(v1);
  return v1;
}
