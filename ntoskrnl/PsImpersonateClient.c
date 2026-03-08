/*
 * XREFs of PsImpersonateClient @ 0x1406DA310
 * Callers:
 *     CmpOpenHiveFile @ 0x1406C05C4 (CmpOpenHiveFile.c)
 *     CmpCmdHiveOpen @ 0x1406C0FC8 (CmpCmdHiveOpen.c)
 *     AlpcpImpersonateMessage @ 0x1406D4C70 (AlpcpImpersonateMessage.c)
 *     NtSetInformationThread @ 0x1406D8E90 (NtSetInformationThread.c)
 *     NtImpersonateAnonymousToken @ 0x1407390D0 (NtImpersonateAnonymousToken.c)
 *     EtwpDelayCreate @ 0x1407725F4 (EtwpDelayCreate.c)
 *     SeImpersonateClientEx @ 0x140773900 (SeImpersonateClientEx.c)
 *     PsAssignImpersonationToken @ 0x14087A440 (PsAssignImpersonationToken.c)
 *     PsRevertThreadToSelf @ 0x1409AECE0 (PsRevertThreadToSelf.c)
 *     PsRevertToSelf @ 0x1409AED10 (PsRevertToSelf.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140238F40 (ExfTryToWakePushLock.c)
 *     ObFastDereferenceObject @ 0x140245F50 (ObFastDereferenceObject.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140262940 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     PsReferencePrimaryTokenWithTag @ 0x1402666A0 (PsReferencePrimaryTokenWithTag.c)
 *     ObfReferenceObject @ 0x140267A70 (ObfReferenceObject.c)
 *     SeSetTokenTrustLink @ 0x1402E99E8 (SeSetTokenTrustLink.c)
 *     SeQueryTokenTrustSid @ 0x1402F6738 (SeQueryTokenTrustSid.c)
 *     KeLeaveCriticalRegionThread @ 0x14030F120 (KeLeaveCriticalRegionThread.c)
 *     ObfDereferenceObjectWithTag @ 0x140312100 (ObfDereferenceObjectWithTag.c)
 *     ObpPushStackInfo @ 0x140580738 (ObpPushStackInfo.c)
 *     SeCopyClientToken @ 0x1406D1D40 (SeCopyClientToken.c)
 *     PspWriteTebImpersonationInfo @ 0x1406DA6D0 (PspWriteTebImpersonationInfo.c)
 *     SeTokenCanImpersonate @ 0x1406DA880 (SeTokenCanImpersonate.c)
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
  void *v11; // rsi
  struct _KTHREAD *v12; // r14
  struct _KTHREAD *CurrentThread; // rbp
  struct _KTHREAD *v14; // rdx
  void *v15; // rax
  unsigned __int64 v16; // r13
  __int64 v17; // r8
  signed __int64 v18; // rax
  signed __int64 v19; // rtt
  bool v20; // zf
  char v21; // bp
  struct _KTHREAD *v22; // r12
  unsigned __int64 v23; // rbx
  int v25; // r12d
  NTSTATUS v26; // esi
  struct _KTHREAD *v27; // [rsp+30h] [rbp-48h]
  _DWORD *v28; // [rsp+38h] [rbp-40h] BYREF
  char v29; // [rsp+88h] [rbp+10h]

  Process = Thread->Process;
  v6 = 0;
  v28 = 0LL;
  v9 = (unsigned __int64)Token;
  v27 = 0LL;
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
      v11 = (void *)(*(_QWORD *)((char *)&Thread[1].116 + 4) & 0xFFFFFFFFFFFFFFF8uLL);
      Thread[1].WaitBlock[1].Thread = 0LL;
      _InterlockedAnd((volatile signed __int32 *)&Thread[1].SwapListEntry + 2, 0xFFFFFFF7);
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&Thread[1].WaitBlockList, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&Thread[1].WaitBlockList);
    KeAbPostRelease((ULONG_PTR)&Thread[1].WaitBlockList);
    KeLeaveCriticalRegionThread((__int64)CurrentThread);
    v14 = CurrentThread;
LABEL_23:
    PspWriteTebImpersonationInfo(Thread, v14);
    if ( v11 )
      ObfDereferenceObjectWithTag(v11, 0x746C6644u);
    if ( v12 )
      ObfDereferenceObjectWithTag(v12, 0x746C6644u);
    return 0;
  }
  v15 = (void *)PsReferencePrimaryTokenWithTag((__int64)Process, 0x746C6644u);
  v16 = (unsigned __int64)v15;
  if ( !v15 )
  {
    v21 = ImpersonationLevel;
LABEL_15:
    ObfReferenceObject((PVOID)v9);
LABEL_16:
    v22 = KeGetCurrentThread();
    --v22->KernelApcDisable;
    v23 = v9 & 0xFFFFFFFFFFFFFFF8uLL | v21 & 3 | (4LL * (EffectiveOnly & 1));
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&Thread[1].WaitBlockList, 0LL);
    if ( (*(_DWORD *)(&Thread[1].SwapListEntry + 1) & 8) != 0 )
    {
      v12 = Thread[1].WaitBlock[1].Thread;
      v11 = (void *)(*(_QWORD *)((char *)&Thread[1].116 + 4) & 0xFFFFFFFFFFFFFFF8uLL);
      Thread[1].WaitBlock[1].Thread = 0LL;
    }
    else
    {
      v11 = 0LL;
      v12 = 0LL;
      _InterlockedOr((volatile signed __int32 *)&Thread[1].SwapListEntry + 2, 8u);
    }
    Thread[1].WaitBlock[1].Thread = v27;
    *($B2204E9EE8E7DD8EE814BFFAF87CA578 *)((char *)&Thread[1].116 + 4) = ($B2204E9EE8E7DD8EE814BFFAF87CA578)v23;
    if ( CopyOnOpen )
      _InterlockedOr((volatile signed __int32 *)&Thread[1].SwapListEntry + 2, 0x100u);
    else
      _InterlockedAnd((volatile signed __int32 *)&Thread[1].SwapListEntry + 2, 0xFFFFFEFF);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&Thread[1].WaitBlockList, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&Thread[1].WaitBlockList);
    KeAbPostRelease((ULONG_PTR)&Thread[1].WaitBlockList);
    KeLeaveCriticalRegionThread((__int64)v22);
    v14 = v22;
    goto LABEL_23;
  }
  v29 = ImpersonationLevel;
  if ( (int)SeTokenCanImpersonate(v15, (PACCESS_TOKEN)v9) >= 0 )
  {
LABEL_10:
    _m_prefetchw(&Process[1].Affinity.StaticBitmap[5]);
    v18 = Process[1].Affinity.StaticBitmap[5];
    if ( (v16 ^ v18) >= 0xF )
    {
LABEL_31:
      ObfDereferenceObjectWithTag((PVOID)v16, 0x746C6644u);
    }
    else
    {
      while ( 1 )
      {
        v19 = v18;
        v18 = _InterlockedCompareExchange64(
                (volatile signed __int64 *)&Process[1].Affinity.StaticBitmap[5],
                v18 + 1,
                v18);
        if ( v19 == v18 )
          break;
        if ( (v16 ^ v18) >= 0xF )
          goto LABEL_31;
      }
      if ( ObpTraceFlags )
        ObpPushStackInfo(v16 - 48, 0, 1u, 0x746C6644u);
    }
    v20 = v6 == 0;
    v21 = v29;
    if ( !v20 )
      goto LABEL_16;
    goto LABEL_15;
  }
  v25 = 1;
  v29 = 1;
  if ( *(_DWORD *)(v9 + 192) == 2 && *(int *)(v9 + 196) < 1 )
  {
    v25 = *(_DWORD *)(v9 + 196);
    v29 = v25;
  }
  v26 = SeCopyClientToken(v9, v25, v17, 0, 0LL, (PVOID *)&v28);
  if ( v26 >= 0 )
  {
    v9 = (unsigned __int64)v28;
    v6 = 1;
    goto LABEL_10;
  }
  ObFastDereferenceObject((signed __int64 *)&Process[1].Affinity.StaticBitmap[5], v16, 0x746C6644u);
  return v26;
}
