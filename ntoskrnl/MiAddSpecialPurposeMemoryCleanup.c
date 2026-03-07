void __fastcall MiAddSpecialPurposeMemoryCleanup(__int64 a1, volatile signed __int64 **a2)
{
  volatile signed __int64 *v2; // rbx
  struct _KTHREAD *CurrentThread; // rax
  bool v5; // zf

  v2 = *a2;
  if ( *a2 )
  {
    if ( (_InterlockedExchangeAdd64(v2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v2);
    KeAbPostRelease((ULONG_PTR)v2);
    CurrentThread = KeGetCurrentThread();
    v5 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v5 && ($C71981A45BEB2B45F82C232A7085991E *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery();
  }
  if ( a1 )
    PsDereferencePartition(a1);
}
