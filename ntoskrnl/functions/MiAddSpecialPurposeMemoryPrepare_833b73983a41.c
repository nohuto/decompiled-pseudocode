__int64 __fastcall MiAddSpecialPurposeMemoryPrepare(__int64 a1, const void *a2, _QWORD *a3, unsigned __int64 **a4)
{
  struct _KTHREAD *CurrentThread; // rsi
  unsigned __int64 *v5; // rbx
  __int64 v10; // rax
  __int64 v11; // rdi
  int v12; // edi
  __int64 v13; // rdx
  unsigned int v14; // ecx
  bool v15; // zf

  CurrentThread = KeGetCurrentThread();
  v5 = (unsigned __int64 *)(a1 + 16992);
  *a3 = 0LL;
  *a4 = 0LL;
  --CurrentThread->SpecialApcDisable;
  v10 = KeAbPreAcquire(a1 + 16992, 0LL);
  v11 = v10;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v5, 0LL) )
    ExfAcquirePushLockExclusiveEx(v5, v10, (__int64)v5);
  if ( v11 )
    *(_BYTE *)(v11 + 18) = 1;
  v12 = MiInitializePartitionSpecialPurposeMemory(a1, a2);
  if ( v12 < 0 )
  {
    v14 = v12;
    if ( v5 )
    {
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v5, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)v5);
      KeAbPostRelease((ULONG_PTR)v5);
      v14 = v12;
      v15 = CurrentThread->SpecialApcDisable++ == -1;
      if ( v15
        && ($C71981A45BEB2B45F82C232A7085991E *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      {
        KiCheckForKernelApcDelivery();
        return (unsigned int)v12;
      }
    }
  }
  else
  {
    v13 = *(_QWORD *)(MiFindSpecialPurposeMemoryType(a1, a2)[8] + 200LL);
    *a3 = v13;
    if ( _InterlockedIncrement64((volatile signed __int64 *)(v13 + 32)) <= 1 )
      __fastfail(0xEu);
    *a4 = v5;
    return 0;
  }
  return v14;
}
