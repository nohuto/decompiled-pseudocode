/*
 * XREFs of PsGetProcessExitStatus @ 0x140680130
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall PsGetProcessExitStatus(PEPROCESS Process)
{
  return *(_DWORD *)&Process[1].Spare2[11];
}
