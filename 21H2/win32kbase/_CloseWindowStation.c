/*
 * XREFs of _CloseWindowStation @ 0x1C00BE670
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall CloseWindowStation(unsigned __int64 Handle, KPROCESSOR_MODE a2)
{
  if ( ((Handle ^ *(_QWORD *)(PsGetCurrentProcessWin32Process(Handle) + 672)) & 0xFFFFFFFFFFFFFFFCuLL) != 0 )
    return ObCloseHandle((HANDLE)Handle, a2);
  else
    return -2147483631;
}
