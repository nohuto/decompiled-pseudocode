/*
 * XREFs of MiInsertProtectedStandbyPage @ 0x1402A9B00
 * Callers:
 *     MiDeletePteRun @ 0x1402365D0 (MiDeletePteRun.c)
 *     MiInsertAndUnlockStandbyPages @ 0x1402A6550 (MiInsertAndUnlockStandbyPages.c)
 *     MiPfnShareCountIsZero @ 0x1402A6820 (MiPfnShareCountIsZero.c)
 * Callees:
 *     KxWaitForLockOwnerShip @ 0x14022E810 (KxWaitForLockOwnerShip.c)
 *     MiPfnReferenceCountIsZero @ 0x1402A6480 (MiPfnReferenceCountIsZero.c)
 *     MiInsertNumaStandbyPage @ 0x1402A9F20 (MiInsertNumaStandbyPage.c)
 *     MiMakeTransitionPte @ 0x1402AF040 (MiMakeTransitionPte.c)
 *     KeSetEvent @ 0x1402C3C30 (KeSetEvent.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402CDE30 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KxAcquireQueuedSpinLock @ 0x1402D1100 (KxAcquireQueuedSpinLock.c)
 *     KxWaitForLockChainValid @ 0x1402DCF80 (KxWaitForLockChainValid.c)
 *     MiUpdateAvailableEvents @ 0x1403B63E4 (MiUpdateAvailableEvents.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F2D04 (KiRemoveSystemWorkPriorityKick.c)
 *     MI_PFN_IS_PROTO @ 0x1403F3F48 (MI_PFN_IS_PROTO.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x14051630C (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x1405163CC (KiReleaseQueuedSpinLockInstrumented.c)
 */

__int64 __fastcall MiInsertProtectedStandbyPage(__int64 a1, __int64 a2)
{
  unsigned __int64 v4; // rsi
  __int64 v5; // rdx
  ULONG_PTR v6; // r15
  char v7; // r8
  __int64 v8; // rsi
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *SchedulerAssist; // r8
  __int64 v11; // r12
  int v12; // eax
  _QWORD *v13; // rdx
  __int64 result; // rax
  int v15; // eax
  __int64 v16; // r8
  __int64 v17; // rcx
  unsigned __int64 v18; // rdi
  __int64 v19; // rax
  struct _KEVENT *v20; // rbx
  unsigned __int64 v21; // rdi
  char v22; // al
  unsigned __int64 v23; // rcx
  __int64 v24; // rdx
  unsigned __int64 v25; // r10
  __int64 v26; // r8
  struct _KPRCB *v27; // rcx
  _DWORD *v28; // rdx
  signed __int32 v29[8]; // [rsp+0h] [rbp-78h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-58h] BYREF
  struct _KLOCK_QUEUE_HANDLE v31; // [rsp+38h] [rbp-40h] BYREF
  void *retaddr; // [rsp+78h] [rbp+0h]

  memset(&LockHandle, 0, sizeof(LockHandle));
  v4 = *(_QWORD *)(a2 + 40);
  v5 = (unsigned __int128)((a2 + 0x58000000000LL) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64;
  v6 = ((unsigned __int64)v5 >> 63) + (v5 >> 3);
  if ( (v4 & 0x2000000000000LL) != 0 || byte_140C5205E && _bittest64((const signed __int64 *)qword_140C52588, v6 >> 9) )
    return MiPfnReferenceCountIsZero(a2, v6);
  if ( !a1 )
    return MiPfnReferenceCountIsZero(a2, v6);
  v7 = *(_BYTE *)(a2 + 35);
  if ( (v7 & 0x10) != 0 )
    return MiPfnReferenceCountIsZero(a2, v6);
  if ( (v7 & 0x40) != 0 )
    return MiPfnReferenceCountIsZero(a2, v6);
  v8 = *(_QWORD *)(qword_140C4E648 + 8 * ((v4 >> 39) & 0x3FF));
  if ( *(_QWORD *)(qword_140C4E648 + 8 * ((*(_QWORD *)(a1 + 40) >> 39) & 0x3FFLL)) != v8 || (v7 & 7u) >= 5 )
    return MiPfnReferenceCountIsZero(a2, v6);
  LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(v8 + 2664);
  LockHandle.LockQueue.Next = 0LL;
  CurrentPrcb = KeGetCurrentPrcb();
  SchedulerAssist = CurrentPrcb->SchedulerAssist;
  v11 = (a1 + 0x58000000000LL) / 48;
  if ( SchedulerAssist )
  {
    if ( CurrentPrcb->NestingLevel <= 1u )
    {
      v12 = SchedulerAssist[6];
      SchedulerAssist[6] = v12 + 1;
      if ( v12 == -1 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireQueuedSpinLockInstrumented(&LockHandle, v8 + 2664);
  }
  else
  {
    v13 = (_QWORD *)_InterlockedExchange64((volatile __int64 *)(v8 + 2664), (__int64)&LockHandle);
    if ( v13 )
      KxWaitForLockOwnerShip((__int64)&LockHandle, v13);
  }
  if ( (*(_BYTE *)(a1 + 35) & 8) == 0 )
  {
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    return MiPfnReferenceCountIsZero(a2, v6);
  }
  *(_BYTE *)(a2 + 35) |= 8u;
  v15 = MI_PFN_IS_PROTO(a2);
  v17 = 4352LL;
  if ( !v15 )
    v17 = 5056LL;
  _InterlockedIncrement64((volatile signed __int64 *)(v17 + v8));
  memset(&v31, 0, sizeof(v31));
  v18 = _InterlockedIncrement64((volatile signed __int64 *)(v8 + 7104));
  if ( v18 <= 0x420 )
  {
    switch ( v18 )
    {
      case 0xA0uLL:
        v19 = 4968LL;
LABEL_30:
        v31.LockQueue.Next = 0LL;
        v31.LockQueue.Lock = (unsigned __int64 *volatile)(v8 + 4928);
        v20 = (struct _KEVENT *)(v8 + v19);
        KxAcquireQueuedSpinLock(&v31, v8 + 4928, v16);
        KeSetEvent(v20, 0, 0);
        ++v20[1].Header.LockNV;
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&v31);
        break;
      case 0x420uLL:
        v19 = 5000LL;
        goto LABEL_30;
      case 0x22uLL:
        v19 = 4936LL;
        goto LABEL_30;
    }
  }
  v21 = v18 - 1;
  if ( v21 == *(_QWORD *)(v8 + 5168) || v21 == *(_QWORD *)(v8 + 5176) )
    MiUpdateAvailableEvents(v8);
  _InterlockedOr(v29, 0);
  v22 = *(_BYTE *)(a2 + 34);
  *(_QWORD *)(a2 + 24) ^= (*(_QWORD *)(a2 + 24) ^ ((unsigned __int64)(unsigned int)KiTbFlushTimeStamp << 56)) & 0xF00000000000000LL;
  *(_BYTE *)(a2 + 34) = v22 & 0xF8 | 2;
  v23 = *(_QWORD *)(a1 + 16);
  if ( qword_140C4DF40 && (v23 & 0x10) == 0 )
    v23 &= ~qword_140C4DF40;
  v24 = *(_QWORD *)(a1 + 40) & 0xFFFFFFFFFLL;
  v25 = 0xFFFFFFF000000000uLL;
  *(_QWORD *)a2 ^= (v11 ^ *(_QWORD *)a2) & 0xFFFFFFFFFLL;
  v26 = v6 & 0xFFFFFFFFFLL;
  *(_QWORD *)(a2 + 24) = v24 | *(_QWORD *)(a2 + 24) & 0xFFFFFFF000000000uLL;
  if ( ((v23 >> 12) & 0xFFFFFFFFFLL) == v11 )
    *(_QWORD *)(a1 + 16) = MiMakeTransitionPte(v6, 4LL);
  else
    *(_QWORD *)(48 * v24 - 0x58000000000LL) = v26 | *(_QWORD *)(48 * v24 - 0x58000000000LL) & 0xFFFFFFF000000000uLL;
  *(_QWORD *)(a1 + 40) = v26 | v25 & *(_QWORD *)(a1 + 40);
  MiInsertNumaStandbyPage(a2);
  ++*(_QWORD *)(v8 + 2632);
  if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 )
  {
    _m_prefetchw(&LockHandle);
    result = (__int64)LockHandle.LockQueue.Next;
    if ( !LockHandle.LockQueue.Next )
    {
      result = _InterlockedCompareExchange64(
                 (volatile signed __int64 *)LockHandle.LockQueue.Lock,
                 0LL,
                 (signed __int64)&LockHandle);
      if ( (struct _KLOCK_QUEUE_HANDLE *)result == &LockHandle )
        goto LABEL_46;
      result = KxWaitForLockChainValid(&LockHandle);
    }
    LockHandle.LockQueue.Next = 0LL;
    _InterlockedXor64((volatile signed __int64 *)(result + 8), 1uLL);
    goto LABEL_46;
  }
  result = KiReleaseQueuedSpinLockInstrumented(&LockHandle, retaddr);
LABEL_46:
  v27 = KeGetCurrentPrcb();
  v28 = v27->SchedulerAssist;
  if ( v28 && v27->NestingLevel <= 1u )
  {
    result = (unsigned int)(v28[6] - 1);
    v28[6] = result;
    if ( !(_DWORD)result )
      return KiRemoveSystemWorkPriorityKick(v27);
  }
  return result;
}
