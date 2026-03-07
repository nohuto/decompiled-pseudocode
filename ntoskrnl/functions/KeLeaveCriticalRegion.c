void KeLeaveCriticalRegion(void)
{
  struct _KTHREAD *CurrentThread; // rax
  bool v1; // zf

  CurrentThread = KeGetCurrentThread();
  v1 = CurrentThread->KernelApcDisable++ == -1;
  if ( v1
    && ($C71981A45BEB2B45F82C232A7085991E *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152
    && !CurrentThread->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
}
