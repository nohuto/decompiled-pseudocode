/*
 * XREFs of PsImpersonateClient @ 0x14065AEA0
 * Callers:
 *     AlpcpImpersonateMessage @ 0x1405E9BE0 (AlpcpImpersonateMessage.c)
 *     CmpCmdHiveOpen @ 0x140603588 (CmpCmdHiveOpen.c)
 *     PsAssignImpersonationToken @ 0x14065ADD0 (PsAssignImpersonationToken.c)
 *     CmpOpenHiveFile @ 0x1406718C8 (CmpOpenHiveFile.c)
 *     PsRevertToSelf @ 0x1406E0D40 (PsRevertToSelf.c)
 *     SeImpersonateClientEx @ 0x1406E0EE0 (SeImpersonateClientEx.c)
 *     NtImpersonateAnonymousToken @ 0x140716D30 (NtImpersonateAnonymousToken.c)
 *     PsRevertThreadToSelf @ 0x140908890 (PsRevertThreadToSelf.c)
 * Callees:
 *     ObFastReferenceObjectLocked @ 0x140206338 (ObFastReferenceObjectLocked.c)
 *     KeLeaveCriticalRegionThread @ 0x140206FC0 (KeLeaveCriticalRegionThread.c)
 *     KiCheckForKernelApcDelivery @ 0x14024A6E0 (KiCheckForKernelApcDelivery.c)
 *     ObFastDereferenceObject @ 0x14027C610 (ObFastDereferenceObject.c)
 *     ObFastReferenceObject @ 0x14027C6E0 (ObFastReferenceObject.c)
 *     SeSetTokenTrustLink @ 0x1402BF5B4 (SeSetTokenTrustLink.c)
 *     HalPutDmaAdapter @ 0x1402C1740 (HalPutDmaAdapter.c)
 *     SeQueryTokenTrustSid @ 0x1402C8844 (SeQueryTokenTrustSid.c)
 *     ExfReleasePushLockShared @ 0x1402F1470 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x1402F1570 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140348C80 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14034A990 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x14034AB50 (ExAcquirePushLockSharedEx.c)
 *     ObfReferenceObject @ 0x14034B230 (ObfReferenceObject.c)
 *     PspWriteTebImpersonationInfo @ 0x14065B280 (PspWriteTebImpersonationInfo.c)
 *     SeTokenCanImpersonate @ 0x14065B420 (SeTokenCanImpersonate.c)
 *     SeCopyClientToken @ 0x140661D04 (SeCopyClientToken.c)
 */

NTSTATUS __stdcall PsImpersonateClient(
        PETHREAD Thread,
        PACCESS_TOKEN Token,
        BOOLEAN CopyOnOpen,
        BOOLEAN EffectiveOnly,
        SECURITY_IMPERSONATION_LEVEL ImpersonationLevel)
{
  _KPROCESS *Process; // rbx
  char v6; // bp
  unsigned __int64 v9; // rsi
  struct _DMA_ADAPTER *v11; // rsi
  struct _KTHREAD *v12; // rbp
  struct _KTHREAD *CurrentThread; // rbx
  char v14; // al
  __int64 v15; // rcx
  bool v16; // zf
  struct _KTHREAD *v17; // rdx
  signed __int64 *v18; // r13
  struct _DMA_ADAPTER *v19; // r14
  int v20; // r8d
  char v21; // bp
  struct _KTHREAD *v22; // r14
  unsigned __int64 v23; // rbx
  char v24; // al
  __int64 v25; // rcx
  int v27; // ebx
  NTSTATUS v28; // ebx
  signed __int64 *p_Lock; // rbx
  struct _KTHREAD *v30; // [rsp+30h] [rbp-58h]
  _DWORD *v31; // [rsp+38h] [rbp-50h] BYREF
  char v32; // [rsp+98h] [rbp+10h]
  struct _KTHREAD *v33; // [rsp+98h] [rbp+10h]

  Process = Thread->Process;
  v6 = 0;
  v31 = 0LL;
  v9 = (unsigned __int64)Token;
  v30 = 0LL;
  if ( !Token )
  {
    v11 = 0LL;
    v12 = 0LL;
    if ( (*(_DWORD *)(&Thread[1].SwapListEntry + 1) & 8) == 0 )
      return 0;
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&Thread[1].WaitBlockList, 0LL);
    if ( (*(_DWORD *)(&Thread[1].SwapListEntry + 1) & 8) != 0 )
    {
      v12 = Thread[1].WaitBlock[1].Thread;
      v11 = (struct _DMA_ADAPTER *)(*(_QWORD *)((char *)&Thread[1].116 + 4) & 0xFFFFFFFFFFFFFFF8uLL);
      Thread[1].WaitBlock[1].Thread = 0LL;
      _InterlockedAnd((volatile signed __int32 *)&Thread[1].SwapListEntry + 2, 0xFFFFFFF7);
    }
    v14 = _InterlockedExchangeAdd64((volatile signed __int64 *)&Thread[1].WaitBlockList, 0xFFFFFFFFFFFFFFFFuLL);
    if ( (v14 & 2) != 0 && (v14 & 4) == 0 )
      ExfTryToWakePushLock(&Thread[1].WaitBlockList);
    KeAbPostRelease((ULONG_PTR)&Thread[1].WaitBlockList);
    v16 = CurrentThread->KernelApcDisable++ == -1;
    if ( v16
      && ($C459BD0D405E8E46662177FB3D0A143F *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152
      && !CurrentThread->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery(v15);
    }
    v17 = CurrentThread;
LABEL_20:
    PspWriteTebImpersonationInfo(Thread, v17);
    if ( v11 )
      HalPutDmaAdapter(v11);
    if ( v12 )
      HalPutDmaAdapter((PADAPTER_OBJECT)v12);
    return 0;
  }
  v18 = (signed __int64 *)&Process[1].Affinity.Bitmap[5];
  v19 = (struct _DMA_ADAPTER *)ObFastReferenceObject((signed __int64 *)&Process[1].Affinity.Bitmap[5]);
  if ( !v19 )
  {
    v33 = KeGetCurrentThread();
    --v33->KernelApcDisable;
    p_Lock = (signed __int64 *)&Process[1].Header.Lock;
    ExAcquirePushLockSharedEx((ULONG_PTR)p_Lock, 0LL);
    v19 = (struct _DMA_ADAPTER *)ObFastReferenceObjectLocked(v18);
    if ( _InterlockedCompareExchange64(p_Lock, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(p_Lock);
    KeAbPostRelease((ULONG_PTR)p_Lock);
    KeLeaveCriticalRegionThread((__int64)v33);
    if ( !v19 )
    {
      v21 = ImpersonationLevel;
      goto LABEL_12;
    }
  }
  v32 = ImpersonationLevel;
  if ( (int)SeTokenCanImpersonate(v19, (PACCESS_TOKEN)v9) >= 0 )
  {
LABEL_11:
    ObFastDereferenceObject(v18, v19);
    v16 = v6 == 0;
    v21 = v32;
    if ( !v16 )
    {
LABEL_13:
      v22 = KeGetCurrentThread();
      v23 = v9 & 0xFFFFFFFFFFFFFFF8uLL | v21 & 3 | (4LL * (EffectiveOnly & 1));
      --v22->KernelApcDisable;
      ExAcquirePushLockExclusiveEx((ULONG_PTR)&Thread[1].WaitBlockList, 0LL);
      if ( (*(_DWORD *)(&Thread[1].SwapListEntry + 1) & 8) != 0 )
      {
        v12 = Thread[1].WaitBlock[1].Thread;
        v11 = (struct _DMA_ADAPTER *)(*(_QWORD *)((char *)&Thread[1].116 + 4) & 0xFFFFFFFFFFFFFFF8uLL);
      }
      else
      {
        v11 = 0LL;
        v12 = 0LL;
        _InterlockedOr((volatile signed __int32 *)&Thread[1].SwapListEntry + 2, 8u);
      }
      Thread[1].WaitBlock[1].Thread = v30;
      *($716DEF6A987B9E81ED436DA1BE78D38B *)((char *)&Thread[1].116 + 4) = ($716DEF6A987B9E81ED436DA1BE78D38B)v23;
      if ( CopyOnOpen )
        _InterlockedOr((volatile signed __int32 *)&Thread[1].SwapListEntry + 2, 0x100u);
      else
        _InterlockedAnd((volatile signed __int32 *)&Thread[1].SwapListEntry + 2, 0xFFFFFEFF);
      v24 = _InterlockedExchangeAdd64((volatile signed __int64 *)&Thread[1].WaitBlockList, 0xFFFFFFFFFFFFFFFFuLL);
      if ( (v24 & 2) != 0 && (v24 & 4) == 0 )
        ExfTryToWakePushLock(&Thread[1].WaitBlockList);
      KeAbPostRelease((ULONG_PTR)&Thread[1].WaitBlockList);
      v16 = v22->KernelApcDisable++ == -1;
      if ( v16
        && ($C459BD0D405E8E46662177FB3D0A143F *)v22->ApcState.ApcListHead[0].Flink != &v22->152
        && !v22->SpecialApcDisable )
      {
        KiCheckForKernelApcDelivery(v25);
      }
      v17 = v22;
      goto LABEL_20;
    }
LABEL_12:
    ObfReferenceObject((PVOID)v9);
    goto LABEL_13;
  }
  v27 = 1;
  v32 = 1;
  if ( *(_DWORD *)(v9 + 192) == 2 && *(int *)(v9 + 196) < 1 )
  {
    v27 = *(_DWORD *)(v9 + 196);
    v32 = v27;
  }
  v28 = SeCopyClientToken(v9, v27, v20, 0, 0LL, (__int64)&v31);
  if ( v28 >= 0 )
  {
    v9 = (unsigned __int64)v31;
    v6 = 1;
    goto LABEL_11;
  }
  ObFastDereferenceObject(v18, v19);
  return v28;
}
