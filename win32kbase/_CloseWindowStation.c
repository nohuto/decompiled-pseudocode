/*
 * XREFs of _CloseWindowStation @ 0x1C00D38F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall CloseWindowStation(unsigned __int64 Handle, KPROCESSOR_MODE a2)
{
  __int64 CurrentProcessWin32Process; // rax
  __int64 v5; // r10

  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(Handle);
  v5 = CurrentProcessWin32Process;
  if ( CurrentProcessWin32Process )
    v5 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL) & CurrentProcessWin32Process;
  if ( ((*(_QWORD *)(v5 + 664) ^ Handle) & 0xFFFFFFFFFFFFFFFCuLL) != 0 )
    return ObCloseHandle((HANDLE)Handle, a2);
  else
    return -2147483631;
}
