void __stdcall KeStackAttachProcess(PRKPROCESS PROCESS, PRKAPC_STATE ApcState)
{
  KiStackAttachProcess((ULONG_PTR)PROCESS);
}
