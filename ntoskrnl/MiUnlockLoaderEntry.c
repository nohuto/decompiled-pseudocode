int __fastcall MiUnlockLoaderEntry(__int64 a1, int a2)
{
  struct _KTHREAD *CurrentThread; // rdi
  signed __int64 *v3; // rbx
  $C71981A45BEB2B45F82C232A7085991E *v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9

  CurrentThread = KeGetCurrentThread();
  v3 = (signed __int64 *)(a1 + 104);
  if ( a2 )
  {
    if ( a2 != 2 )
    {
      LODWORD(v4) = ExReleaseAutoExpandPushLockExclusive((ULONG_PTR)v3, 0LL);
      goto LABEL_5;
    }
    if ( _InterlockedCompareExchange64(v3, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v3);
  }
  else if ( (_InterlockedExchangeAdd64(v3, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
  {
    ExfTryToWakePushLock(v3);
  }
  LODWORD(v4) = KeAbPostRelease((ULONG_PTR)v3);
LABEL_5:
  if ( CurrentThread->SpecialApcDisable++ == -1 )
  {
    v4 = &CurrentThread->152;
    if ( ($C71981A45BEB2B45F82C232A7085991E *)v4->ApcState.ApcListHead[0].Flink != v4 )
      LODWORD(v4) = KiCheckForKernelApcDelivery(v6, v5, v7, v8);
  }
  return (int)v4;
}
