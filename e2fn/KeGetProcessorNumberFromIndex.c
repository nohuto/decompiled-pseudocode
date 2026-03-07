// attributes: thunk
NTSTATUS __stdcall KeGetProcessorNumberFromIndex(ULONG ProcIndex, PPROCESSOR_NUMBER ProcNumber)
{
  return __imp_KeGetProcessorNumberFromIndex(ProcIndex, ProcNumber);
}
