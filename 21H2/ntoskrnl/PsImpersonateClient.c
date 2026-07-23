/*
 * XREFs of PsImpersonateClient @ 0x14064FCC0
 * Callers:
 *     PsAssignImpersonationToken @ 0x14064FBF0 (PsAssignImpersonationToken.c)
 *     CmpOpenHiveFile @ 0x1406A3938 (CmpOpenHiveFile.c)
 *     PsRevertToSelf @ 0x1406B8020 (PsRevertToSelf.c)
 *     SeImpersonateClientEx @ 0x1406B81C0 (SeImpersonateClientEx.c)
 *     NtImpersonateAnonymousToken @ 0x1406C5380 (NtImpersonateAnonymousToken.c)
 *     AlpcpImpersonateMessage @ 0x1406D9340 (AlpcpImpersonateMessage.c)
 *     CmpCmdHiveOpen @ 0x1406F2CB8 (CmpCmdHiveOpen.c)
 *     PsRevertThreadToSelf @ 0x1409089F0 (PsRevertThreadToSelf.c)
 * Callees:
 *     SeSetTokenTrustLink @ 0x14023DA04 (SeSetTokenTrustLink.c)
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     SeQueryTokenTrustSid @ 0x1402470A4 (SeQueryTokenTrustSid.c)
 *     ObFastDereferenceObject @ 0x14026A5B0 (ObFastDereferenceObject.c)
 *     ObFastReferenceObject @ 0x14026A680 (ObFastReferenceObject.c)
 *     ObFastReferenceObjectLocked @ 0x1402AAC68 (ObFastReferenceObjectLocked.c)
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     KiCheckForKernelApcDelivery @ 0x1402EEF30 (KiCheckForKernelApcDelivery.c)
 *     ExfReleasePushLockShared @ 0x1402FC1C0 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x1402FC2C0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1403539D0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1403556E0 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x1403558A0 (ExAcquirePushLockSharedEx.c)
 *     ObfReferenceObject @ 0x140355F80 (ObfReferenceObject.c)
 *     PspWriteTebImpersonationInfo @ 0x1406500A0 (PspWriteTebImpersonationInfo.c)
 *     SeTokenCanImpersonate @ 0x140650240 (SeTokenCanImpersonate.c)
 *     SeCopyClientToken @ 0x140656B24 (SeCopyClientToken.c)
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
  bool v15; // zf
  struct _KTHREAD *v16; // rdx
  signed __int64 *v17; // r13
  struct _DMA_ADAPTER *v18; // r14
  int v19; // r8d
  char v20; // bp
  struct _KTHREAD *v21; // r14
  unsigned __int64 v22; // rbx
  char v23; // al
  int v25; // ebx
  NTSTATUS v26; // ebx
  signed __int64 *p_Lock; // rbx
  __int64 v28; // rdx
  __int64 v29; // r8
  __int64 v30; // r9
  struct _KTHREAD *v31; // [rsp+30h] [rbp-58h]
  _DWORD *v32; // [rsp+38h] [rbp-50h] BYREF
  char v33; // [rsp+98h] [rbp+10h]
  struct _KTHREAD *v34; // [rsp+98h] [rbp+10h]

  Process = Thread->Process;
  v6 = 0;
  v32 = 0LL;
  v9 = (unsigned __int64)Token;
  v31 = 0LL;
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
    v15 = CurrentThread->KernelApcDisable++ == -1;
    if ( v15
      && ($C459BD0D405E8E46662177FB3D0A143F *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152
      && !CurrentThread->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
    v16 = CurrentThread;
LABEL_20:
    PspWriteTebImpersonationInfo(Thread, v16);
    if ( v11 )
      HalPutDmaAdapter(v11);
    if ( v12 )
      HalPutDmaAdapter((PADAPTER_OBJECT)v12);
    return 0;
  }
  v17 = (signed __int64 *)&Process[1].Affinity.Bitmap[5];
  v18 = (struct _DMA_ADAPTER *)ObFastReferenceObject((signed __int64 *)&Process[1].Affinity.Bitmap[5]);
  if ( !v18 )
  {
    v34 = KeGetCurrentThread();
    --v34->KernelApcDisable;
    p_Lock = (signed __int64 *)&Process[1].Header.Lock;
    ExAcquirePushLockSharedEx((ULONG_PTR)p_Lock, 0LL);
    v18 = (struct _DMA_ADAPTER *)ObFastReferenceObjectLocked(v17);
    if ( _InterlockedCompareExchange64(p_Lock, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(p_Lock);
    KeAbPostRelease((ULONG_PTR)p_Lock);
    KeLeaveCriticalRegionThread((__int64)v34, v28, v29, v30);
    if ( !v18 )
    {
      v20 = ImpersonationLevel;
      goto LABEL_12;
    }
  }
  v33 = ImpersonationLevel;
  if ( (int)SeTokenCanImpersonate(v18, (PACCESS_TOKEN)v9) >= 0 )
  {
LABEL_11:
    ObFastDereferenceObject(v17, v18);
    v15 = v6 == 0;
    v20 = v33;
    if ( !v15 )
    {
LABEL_13:
      v21 = KeGetCurrentThread();
      v22 = v9 & 0xFFFFFFFFFFFFFFF8uLL | v20 & 3 | (4LL * (EffectiveOnly & 1));
      --v21->KernelApcDisable;
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
      Thread[1].WaitBlock[1].Thread = v31;
      *($716DEF6A987B9E81ED436DA1BE78D38B *)((char *)&Thread[1].116 + 4) = ($716DEF6A987B9E81ED436DA1BE78D38B)v22;
      if ( CopyOnOpen )
        _InterlockedOr((volatile signed __int32 *)&Thread[1].SwapListEntry + 2, 0x100u);
      else
        _InterlockedAnd((volatile signed __int32 *)&Thread[1].SwapListEntry + 2, 0xFFFFFEFF);
      v23 = _InterlockedExchangeAdd64((volatile signed __int64 *)&Thread[1].WaitBlockList, 0xFFFFFFFFFFFFFFFFuLL);
      if ( (v23 & 2) != 0 && (v23 & 4) == 0 )
        ExfTryToWakePushLock(&Thread[1].WaitBlockList);
      KeAbPostRelease((ULONG_PTR)&Thread[1].WaitBlockList);
      v15 = v21->KernelApcDisable++ == -1;
      if ( v15
        && ($C459BD0D405E8E46662177FB3D0A143F *)v21->ApcState.ApcListHead[0].Flink != &v21->152
        && !v21->SpecialApcDisable )
      {
        KiCheckForKernelApcDelivery();
      }
      v16 = v21;
      goto LABEL_20;
    }
LABEL_12:
    ObfReferenceObject((PVOID)v9);
    goto LABEL_13;
  }
  v25 = 1;
  v33 = 1;
  if ( *(_DWORD *)(v9 + 192) == 2 && *(int *)(v9 + 196) < 1 )
  {
    v25 = *(_DWORD *)(v9 + 196);
    v33 = v25;
  }
  v26 = SeCopyClientToken(v9, v25, v19, 0, 0LL, (__int64)&v32);
  if ( v26 >= 0 )
  {
    v9 = (unsigned __int64)v32;
    v6 = 1;
    goto LABEL_11;
  }
  ObFastDereferenceObject(v17, v18);
  return v26;
}
