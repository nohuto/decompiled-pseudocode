int __fastcall MiUnlockControlAreaFileObjectShared(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rdi
  signed __int64 *v2; // rbx
  $C71981A45BEB2B45F82C232A7085991E *v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9

  CurrentThread = KeGetCurrentThread();
  v2 = (signed __int64 *)(a1 + 104);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 104), 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v2);
  LODWORD(v3) = KeAbPostRelease((ULONG_PTR)v2);
  if ( CurrentThread->SpecialApcDisable++ == -1 )
  {
    v3 = &CurrentThread->152;
    if ( ($C71981A45BEB2B45F82C232A7085991E *)v3->ApcState.ApcListHead[0].Flink != v3 )
      LODWORD(v3) = KiCheckForKernelApcDelivery(v5, v4, v6, v7);
  }
  return (int)v3;
}
