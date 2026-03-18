/*
 * XREFs of PsImpersonateClient @ 0x1407AF1B0
 * Callers:
 *     NtImpersonateAnonymousToken @ 0x140695570 (NtImpersonateAnonymousToken.c)
 *     SeImpersonateClientEx @ 0x1406BFE80 (SeImpersonateClientEx.c)
 *     EtwpDelayCreate @ 0x1406F0C9C (EtwpDelayCreate.c)
 *     CmpCmdHiveOpen @ 0x14070AAD0 (CmpCmdHiveOpen.c)
 *     CmpOpenHiveFile @ 0x140713F8C (CmpOpenHiveFile.c)
 *     PsAssignImpersonationToken @ 0x1407AF0C0 (PsAssignImpersonationToken.c)
 *     PsRevertThreadToSelf @ 0x1407AF180 (PsRevertThreadToSelf.c)
 *     AlpcpImpersonateMessage @ 0x1407B0C70 (AlpcpImpersonateMessage.c)
 *     PsRevertToSelf @ 0x1407F6CB0 (PsRevertToSelf.c)
 * Callees:
 *     SeSetTokenTrustLink @ 0x140243610 (SeSetTokenTrustLink.c)
 *     SeQueryTokenTrustSid @ 0x14024FBA4 (SeQueryTokenTrustSid.c)
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     PspUnlockThreadSecurityExclusive @ 0x1402F7118 (PspUnlockThreadSecurityExclusive.c)
 *     PspLockThreadSecurityExclusive @ 0x1402F7280 (PspLockThreadSecurityExclusive.c)
 *     ObFastDereferenceObject @ 0x1402F89B0 (ObFastDereferenceObject.c)
 *     PsReferencePrimaryTokenWithTag @ 0x140347920 (PsReferencePrimaryTokenWithTag.c)
 *     ObfReferenceObject @ 0x140347CF0 (ObfReferenceObject.c)
 *     SeCopyClientToken @ 0x14072295C (SeCopyClientToken.c)
 *     PspWriteTebImpersonationInfo @ 0x1407AF4B0 (PspWriteTebImpersonationInfo.c)
 *     SeTokenCanImpersonate @ 0x1407AFBE0 (SeTokenCanImpersonate.c)
 */

NTSTATUS __stdcall PsImpersonateClient(
        PETHREAD Thread,
        PACCESS_TOKEN Token,
        BOOLEAN CopyOnOpen,
        BOOLEAN EffectiveOnly,
        SECURITY_IMPERSONATION_LEVEL ImpersonationLevel)
{
  int v5; // ebp
  _KPROCESS *Process; // rbx
  unsigned __int64 v9; // rsi
  void *v11; // rsi
  struct _KTHREAD *v12; // rbp
  struct _KTHREAD *CurrentThread; // rbx
  struct _KTHREAD *v14; // rdx
  void *v15; // rax
  unsigned __int64 v16; // r15
  __int64 v17; // r8
  struct _KTHREAD *v18; // r15
  unsigned __int64 v19; // rbx
  int v21; // eax
  signed __int64 *v22; // rcx
  NTSTATUS v23; // esi
  _DWORD *v24; // [rsp+30h] [rbp-48h] BYREF
  struct _KTHREAD *v25; // [rsp+88h] [rbp+10h]

  LOBYTE(v5) = ImpersonationLevel;
  Process = Thread->Process;
  v9 = (unsigned __int64)Token;
  v24 = 0LL;
  v25 = 0LL;
  if ( !Token )
  {
    v11 = 0LL;
    v12 = 0LL;
    if ( (*(_DWORD *)(&Thread[1].SwapListEntry + 1) & 8) == 0 )
      return 0;
    CurrentThread = KeGetCurrentThread();
    PspLockThreadSecurityExclusive((__int64)Thread, (__int64)CurrentThread);
    if ( (*(_DWORD *)(&Thread[1].SwapListEntry + 1) & 8) != 0 )
    {
      v12 = Thread[1].WaitBlock[1].Thread;
      v11 = (void *)(*(_QWORD *)((char *)&Thread[1].116 + 4) & 0xFFFFFFFFFFFFFFF8uLL);
      Thread[1].WaitBlock[1].Thread = 0LL;
      _InterlockedAnd((volatile signed __int32 *)&Thread[1].SwapListEntry + 2, 0xFFFFFFF7);
    }
    PspUnlockThreadSecurityExclusive((__int64)Thread, (__int64)CurrentThread);
    v14 = CurrentThread;
LABEL_15:
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
    goto LABEL_9;
  if ( (int)SeTokenCanImpersonate(v15, (PACCESS_TOKEN)v9) >= 0 )
  {
    ObFastDereferenceObject((signed __int64 *)&Process[1].Affinity.StaticBitmap[5], v16, 0x746C6644u);
LABEL_9:
    ObfReferenceObject((PVOID)v9);
LABEL_10:
    v18 = KeGetCurrentThread();
    v19 = v9 & 0xFFFFFFFFFFFFFFF8uLL | v5 & 3 | (4LL * (EffectiveOnly & 1));
    PspLockThreadSecurityExclusive((__int64)Thread, (__int64)v18);
    if ( (*(_DWORD *)(&Thread[1].SwapListEntry + 1) & 8) != 0 )
    {
      v12 = Thread[1].WaitBlock[1].Thread;
      v11 = (void *)(*(_QWORD *)((char *)&Thread[1].116 + 4) & 0xFFFFFFFFFFFFFFF8uLL);
    }
    else
    {
      v11 = 0LL;
      v12 = 0LL;
      _InterlockedOr((volatile signed __int32 *)&Thread[1].SwapListEntry + 2, 8u);
    }
    Thread[1].WaitBlock[1].Thread = v25;
    *($CCA5BBB6D199B5680204B8CF1C208784 *)((char *)&Thread[1].116 + 4) = ($CCA5BBB6D199B5680204B8CF1C208784)v19;
    if ( CopyOnOpen )
      _InterlockedOr((volatile signed __int32 *)&Thread[1].SwapListEntry + 2, 0x100u);
    else
      _InterlockedAnd((volatile signed __int32 *)&Thread[1].SwapListEntry + 2, 0xFFFFFEFF);
    PspUnlockThreadSecurityExclusive((__int64)Thread, (__int64)v18);
    v14 = v18;
    goto LABEL_15;
  }
  v5 = 1;
  if ( *(_DWORD *)(v9 + 192) == 2 && *(int *)(v9 + 196) < 1 )
    v5 = *(_DWORD *)(v9 + 196);
  v21 = SeCopyClientToken(v9, v5, v17, 0, 0LL, (PVOID *)&v24);
  v22 = (signed __int64 *)&Process[1].Affinity.StaticBitmap[5];
  v23 = v21;
  if ( v21 >= 0 )
  {
    v9 = (unsigned __int64)v24;
    ObFastDereferenceObject(v22, v16, 0x746C6644u);
    goto LABEL_10;
  }
  ObFastDereferenceObject(v22, v16, 0x746C6644u);
  return v23;
}
