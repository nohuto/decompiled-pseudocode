NTSTATUS __fastcall GetProcessSyscallDisablePolicy(void *a1, _QWORD *a2)
{
  *a2 = 0LL;
  *(_DWORD *)a2 = 4;
  return ZwQueryInformationProcess(a1, ProcessCookie|ProcessUserModeIOPL, a2, 8u, 0LL);
}
