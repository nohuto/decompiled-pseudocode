/*
 * XREFs of ExpWnfDeleteSubscription @ 0x14071D44C
 * Callers:
 *     ExpWnfDeleteProcessContext @ 0x140704AB8 (ExpWnfDeleteProcessContext.c)
 *     NtUnsubscribeWnfStateChange @ 0x14071D2B0 (NtUnsubscribeWnfStateChange.c)
 *     ExUnsubscribeWnfStateChange @ 0x140791FA0 (ExUnsubscribeWnfStateChange.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140238F40 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1402411C0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x1402627F0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     ExAcquireRundownProtection_0 @ 0x14028D2A0 (ExAcquireRundownProtection_0.c)
 *     ExReleaseRundownProtection_0 @ 0x14028D330 (ExReleaseRundownProtection_0.c)
 *     ExWaitForRundownProtectionRelease @ 0x140352F40 (ExWaitForRundownProtectionRelease.c)
 *     ExpWnfNotifyNameSubscribers @ 0x14071B5C8 (ExpWnfNotifyNameSubscribers.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __fastcall ExpWnfDeleteSubscription(struct _EX_RUNDOWN_REF *P, PEPROCESS a2)
{
  unsigned __int64 v2; // r15
  int v4; // esi
  __int64 v5; // rax
  __int64 v6; // rbp
  __int64 Count; // rbp
  __int64 v8; // rax
  __int64 v9; // r13
  struct _EX_RUNDOWN_REF **v10; // rdx
  PVOID *v11; // rcx
  int Ptr_high; // eax
  struct _EX_RUNDOWN_REF **v13; // rdx
  PVOID *v14; // rcx
  __int64 v15; // rax
  __int64 v16; // r13
  int v17; // ecx
  BOOL v18; // r13d
  int v19; // r12d
  struct _EX_RUNDOWN_REF **v20; // rdx
  PVOID *v21; // rcx
  BOOL v23; // [rsp+78h] [rbp+20h]

  v2 = a2[1].EndPadding[0];
  v4 = 1;
  if ( v2 )
  {
    v5 = KeAbPreAcquire(v2 + 80, 0LL);
    v6 = v5;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(v2 + 80), 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v2 + 80), v5, v2 + 80);
    if ( v6 )
      *(_BYTE *)(v6 + 18) = 1;
  }
  if ( !P[5].Count )
  {
    v4 = 0;
    goto LABEL_43;
  }
  v23 = 0;
  Count = P[6].Count;
  if ( Count )
  {
    v8 = KeAbPreAcquire(Count + 112, 0LL);
    v9 = v8;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(Count + 112), 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(Count + 112), v8, Count + 112);
    if ( v9 )
      *(_BYTE *)(v9 + 18) = 1;
    v10 = (struct _EX_RUNDOWN_REF **)P[8].Count;
    if ( v10[1] != &P[8] )
      goto LABEL_61;
    v11 = (PVOID *)P[9].Count;
    if ( *v11 != &P[8] )
      goto LABEL_61;
    *v11 = v10;
    v10[1] = (struct _EX_RUNDOWN_REF *)v11;
    Ptr_high = HIDWORD(P[12].Ptr);
    P[6].Count = 0LL;
    if ( (Ptr_high & 1) != 0 )
      v23 = _InterlockedExchangeAdd((volatile signed __int32 *)(Count + 160), 0xFFFFFFFF) == 1;
  }
  v13 = (struct _EX_RUNDOWN_REF **)P[3].Count;
  if ( v13[1] != &P[3] )
    goto LABEL_61;
  v14 = (PVOID *)P[4].Count;
  if ( *v14 != &P[3] )
    goto LABEL_61;
  *v14 = v13;
  v13[1] = (struct _EX_RUNDOWN_REF *)v14;
  v15 = KeAbPreAcquire(v2 + 104, 0LL);
  v16 = v15;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(v2 + 104), 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v2 + 104), v15, v2 + 104);
  if ( v16 )
    *(_BYTE *)(v16 + 18) = 1;
  v17 = P[15].Count;
  if ( v17 != 1 && ((PEPROCESS)P[5].Count == PsInitialSystemProcess || !v17) )
    goto LABEL_25;
  v20 = (struct _EX_RUNDOWN_REF **)P[13].Count;
  if ( v20[1] != &P[13] || (v21 = (PVOID *)P[14].Count, *v21 != &P[13]) )
LABEL_61:
    __fastfail(3u);
  *v21 = v20;
  v20[1] = (struct _EX_RUNDOWN_REF *)v21;
  if ( Count && (BYTE4(P[12].Ptr) & 1) != 0 && ((BYTE4(P[15].Ptr) & 1) != 0 || (P[16].Count & 1) != 0) )
  {
    v18 = _InterlockedExchangeAdd((volatile signed __int32 *)(Count + 164), 0xFFFFFFFF) == 1;
    goto LABEL_26;
  }
LABEL_25:
  v18 = 0;
LABEL_26:
  P[5].Count = 0LL;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v2 + 104), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(v2 + 104));
  KeAbPostRelease(v2 + 104);
  if ( Count )
  {
    v19 = 0;
    if ( v23 || v18 )
    {
      if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(Count + 8)) )
      {
        v19 = 1;
      }
      else
      {
        v23 = 0;
        v18 = 0;
      }
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(Count + 112), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(Count + 112));
    KeAbPostRelease(Count + 112);
    if ( v2 )
    {
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v2 + 80), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(v2 + 80));
      KeAbPostRelease(v2 + 80);
      v2 = 0LL;
    }
    if ( v18 )
      ExpWnfNotifyNameSubscribers(Count, 8u, 1, a2 != PsInitialSystemProcess);
    if ( v23 )
      ExpWnfNotifyNameSubscribers(Count, 4u, 1, a2 != PsInitialSystemProcess);
    if ( v19 )
      ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(Count + 8));
  }
LABEL_43:
  if ( v2 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v2 + 80), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(v2 + 80));
    KeAbPostRelease(v2 + 80);
  }
  ExReleaseRundownProtection_0(P + 1);
  if ( v4 )
  {
    ExWaitForRundownProtectionRelease(P + 1);
    ExFreePoolWithTag(P, 0x20666E57u);
  }
}
