NTSTATUS __stdcall PsGetProcessExitStatus(PEPROCESS Process)
{
  return *(_DWORD *)&Process[1].Spare2[11];
}
