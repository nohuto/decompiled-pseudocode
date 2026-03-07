void __fastcall CmpAttachToRegistryProcess(PRKAPC_STATE ApcState)
{
  struct _KPROCESS *Process; // rcx

  Process = (struct _KPROCESS *)*((_QWORD *)&CmpRegistryProcess + 1);
  if ( !*((_QWORD *)&CmpRegistryProcess + 1) )
    Process = KeGetCurrentThread()->ApcState.Process;
  KeStackAttachProcess(Process, ApcState);
}
