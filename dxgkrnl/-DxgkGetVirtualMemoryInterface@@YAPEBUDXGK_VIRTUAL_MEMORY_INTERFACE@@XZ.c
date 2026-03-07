const struct DXGK_VIRTUAL_MEMORY_INTERFACE *DxgkGetVirtualMemoryInterface(void)
{
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  int v2; // eax
  const struct DXGK_VIRTUAL_MEMORY_INTERFACE *result; // rax
  bool v4; // cf

  CurrentProcess = PsGetCurrentProcess();
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  if ( !ProcessDxgProcess )
    return (const struct DXGK_VIRTUAL_MEMORY_INTERFACE *)&g_WindowsSubsystem;
  v2 = *(_DWORD *)(ProcessDxgProcess + 424);
  if ( (v2 & 0x10) == 0 )
    return (const struct DXGK_VIRTUAL_MEMORY_INTERFACE *)&g_WindowsSubsystem;
  v4 = (v2 & 0x100) != 0;
  result = (const struct DXGK_VIRTUAL_MEMORY_INTERFACE *)&g_WslSubsystem;
  if ( v4 )
    return (const struct DXGK_VIRTUAL_MEMORY_INTERFACE *)&g_WindowsSubsystem;
  return result;
}
