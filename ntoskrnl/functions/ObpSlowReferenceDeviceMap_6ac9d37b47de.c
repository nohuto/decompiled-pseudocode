volatile signed __int64 *__fastcall ObpSlowReferenceDeviceMap(_QWORD *a1)
{
  struct _LIST_ENTRY *CurrentServerSiloGlobals; // rax
  struct _KTHREAD *CurrentThread; // rdx
  signed __int64 *p_Blink; // rdi
  volatile signed __int64 *v5; // rbx
  struct _KTHREAD *v6; // rcx
  bool v7; // zf
  signed __int64 v9; // rax
  signed __int64 v10; // rtt

  CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
  CurrentThread = KeGetCurrentThread();
  p_Blink = (signed __int64 *)&CurrentServerSiloGlobals[7].Blink;
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)&CurrentServerSiloGlobals[7].Blink, 0LL);
  v5 = (volatile signed __int64 *)(*a1 & 0xFFFFFFFFFFFFFFF0uLL);
  if ( v5 )
  {
    if ( _InterlockedExchangeAdd64(v5 + 30, 0xFuLL) <= 0 )
      __fastfail(0xEu);
    _m_prefetchw(a1);
    v9 = *a1;
    while ( (unsigned __int64)(v9 & 0xF) + 14 <= 0xF && v5 == (volatile signed __int64 *)(v9 & 0xFFFFFFFFFFFFFFF0uLL) )
    {
      v10 = v9;
      v9 = _InterlockedCompareExchange64(a1, v9 + 14, v9);
      if ( v10 == v9 )
        goto LABEL_2;
    }
    ObDereferenceDeviceMap(v5, 0xEu);
  }
LABEL_2:
  if ( _InterlockedCompareExchange64(p_Blink, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(p_Blink);
  KeAbPostRelease((ULONG_PTR)p_Blink);
  v6 = KeGetCurrentThread();
  v7 = v6->SpecialApcDisable++ == -1;
  if ( v7 && ($C71981A45BEB2B45F82C232A7085991E *)v6->ApcState.ApcListHead[0].Flink != &v6->152 )
    KiCheckForKernelApcDelivery();
  return v5;
}
