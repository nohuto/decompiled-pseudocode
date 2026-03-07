__int64 ObpSetCurrentProcessDeviceMap()
{
  __int64 v0; // rsi
  _KPROCESS *Process; // r15
  ULONG_PTR v2; // rax
  void *v3; // rbp
  struct _LIST_ENTRY *CurrentServerSiloGlobals; // rax
  struct _LIST_ENTRY *v5; // r14
  int v6; // edx
  struct _KTHREAD *CurrentThread; // rax
  volatile signed __int64 *p_Blink; // r14
  __int64 v9; // rdi
  struct _KTHREAD *v10; // rax
  bool v11; // zf
  __int64 v13; // [rsp+50h] [rbp+8h] BYREF
  __int64 v14; // [rsp+58h] [rbp+10h]

  v0 = 0LL;
  Process = KeGetCurrentThread()->ApcState.Process;
  v2 = PsReferencePrimaryTokenWithTag((__int64)Process, 0x746C6644u);
  v3 = (void *)v2;
  if ( v2 )
  {
    v14 = *(_QWORD *)(v2 + 24);
    CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
    v5 = CurrentServerSiloGlobals;
    if ( v6 != 999 || HIDWORD(v14) )
    {
      v13 = 0LL;
      if ( (int)SeGetTokenDeviceMap(v3, &v13) < 0 )
      {
LABEL_14:
        ObfDereferenceObject(v3);
        return v0;
      }
      v0 = v13;
    }
    else
    {
      v0 = ObpReferenceDeviceMapFastRef(CurrentServerSiloGlobals);
    }
    if ( v0 )
    {
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v0 + 240), 0x10uLL) <= 0 )
        __fastfail(0xEu);
      CurrentThread = KeGetCurrentThread();
      p_Blink = (volatile signed __int64 *)&v5[7].Blink;
      --CurrentThread->SpecialApcDisable;
      ExAcquirePushLockExclusiveEx((ULONG_PTR)p_Blink, 0LL);
      v9 = _InterlockedExchange64((volatile __int64 *)&Process[1].Affinity.StaticBitmap[31], v0 | 0xF);
      if ( (_InterlockedExchangeAdd64(p_Blink, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(p_Blink);
      KeAbPostRelease((ULONG_PTR)p_Blink);
      v10 = KeGetCurrentThread();
      v11 = v10->SpecialApcDisable++ == -1;
      if ( v11 && ($C71981A45BEB2B45F82C232A7085991E *)v10->ApcState.ApcListHead[0].Flink != &v10->152 )
        KiCheckForKernelApcDelivery();
      if ( v9 )
        ObDereferenceDeviceMap((volatile signed __int64 *)(v9 & 0xFFFFFFFFFFFFFFF0uLL), (v9 & 0xF) + 1);
    }
    goto LABEL_14;
  }
  return v0;
}
