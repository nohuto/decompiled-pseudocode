NTSTATUS __stdcall ObCloseHandle(HANDLE Handle, KPROCESSOR_MODE PreviousMode)
{
  ULONG_PTR v5; // rcx

  if ( (MmVerifierData & 0x100) != 0 && !PreviousMode && !ObpIsKernelHandle((__int64)Handle, 0) )
    VfCheckUserHandle(v5);
  return ObpCloseHandle((__int64)Handle, PreviousMode);
}
