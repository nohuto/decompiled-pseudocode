/*
 * XREFs of KiAbEntryRemoveFromTree @ 0x14024BC30
 * Callers:
 *     ExReleaseAutoExpandPushLockExclusive @ 0x14023A620 (ExReleaseAutoExpandPushLockExclusive.c)
 *     KeAbPreWait @ 0x140241620 (KeAbPreWait.c)
 *     KiAbEntryFreeAndEnableInterrupts @ 0x140248730 (KiAbEntryFreeAndEnableInterrupts.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     KiAbCrossThreadRelease @ 0x1403C582C (KiAbCrossThreadRelease.c)
 * Callees:
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x140225810 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     RtlRbRemoveNode @ 0x14024C010 (RtlRbRemoveNode.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x14027F8D0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     KiAbTryDecrementIoWaiterCounts @ 0x1402D7D78 (KiAbTryDecrementIoWaiterCounts.c)
 *     RtlRbReplaceNode @ 0x1402DE230 (RtlRbReplaceNode.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140332B10 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140333520 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x140337B70 (KeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     KxReleaseQueuedSpinLock @ 0x14033A950 (KxReleaseQueuedSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall KiAbEntryRemoveFromTree(__int64 a1)
{
  __int64 v2; // rax
  volatile LONG *v3; // rsi
  unsigned __int64 v4; // r12
  unsigned __int8 CurrentIrql; // r15
  int v6; // edi
  __int64 v7; // rax
  unsigned __int64 v8; // rbx
  int v9; // edx
  unsigned __int64 v10; // rax
  unsigned int v11; // eax
  unsigned __int64 v12; // rax
  _QWORD *v13; // rbp
  _QWORD *v14; // rcx
  _BYTE *v15; // rbx
  __int64 v16; // r14
  __int64 result; // rax
  _DWORD *SchedulerAssist; // r8
  __int64 v19; // r9
  __int64 v20; // r8
  _QWORD *v21; // r9
  _OWORD *v22; // r13
  __int64 v23; // rdi
  __int64 v24; // r8
  __int64 v25; // r9
  unsigned __int8 v26; // cl
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v28; // r8
  int v29; // eax
  bool v30; // zf
  unsigned __int64 v31; // [rsp+20h] [rbp-78h]
  unsigned int v32; // [rsp+28h] [rbp-70h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-68h] BYREF
  struct _KLOCK_QUEUE_HANDLE v34; // [rsp+48h] [rbp-50h] BYREF

  v32 = *(_DWORD *)(a1 + 8);
  v31 = *(_QWORD *)a1 & 0x7FFFFFFFFFFFFFFCLL;
  v2 = ((v31 >> 4) & 0x3FF) << 6;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v3 = (volatile LONG *)((char *)&KiAbTreeArray + v2 + 16);
  memset(&v34, 0, sizeof(v34));
  v4 = (unsigned __int64)&KiAbTreeArray + v2;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    if ( CurrentIrql == 2 )
      LODWORD(v19) = 4;
    else
      v19 = (-1LL << (CurrentIrql + 1)) & 4;
    SchedulerAssist[5] |= v19;
  }
  v6 = *(_BYTE *)(a1 + 19) & 1;
  if ( (*(_BYTE *)(a1 + 19) & 1) == 0 )
  {
    ExAcquireSpinLockSharedAtDpcLevel(v3);
    goto LABEL_4;
  }
  while ( 1 )
  {
    ExAcquireSpinLockExclusiveAtDpcLevel(v3);
LABEL_4:
    v7 = *(_QWORD *)(v4 + 8);
    v8 = *(_QWORD *)v4;
    if ( (v7 & 1) != 0 )
    {
      if ( !v8 )
        goto LABEL_13;
      v8 ^= v4;
    }
    v9 = v7 & 1;
    while ( v8 )
    {
      v10 = *(_QWORD *)(v8 - 24) & 0x7FFFFFFFFFFFFFFCLL;
      if ( v10 < v31 )
        goto LABEL_26;
      if ( v10 > v31 )
        goto LABEL_10;
      v11 = *(_DWORD *)(v8 - 16);
      if ( v11 == v32 )
        break;
      if ( v11 < v32 )
      {
LABEL_26:
        v12 = *(_QWORD *)(v8 + 8);
        if ( v9 && v12 )
        {
LABEL_30:
          v8 ^= v12;
          continue;
        }
      }
      else
      {
LABEL_10:
        v12 = *(_QWORD *)v8;
        if ( v9 && v12 )
          goto LABEL_30;
      }
      v8 = v12;
    }
LABEL_13:
    v13 = (_QWORD *)(v8 - 24);
    KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v8 - 24 + 80), &LockHandle);
    if ( v8 - 24 != a1 )
      break;
    if ( v6 )
    {
      if ( v13[8] )
      {
        v14 = v13 + 8;
        v22 = v13 + 6;
      }
      else
      {
        v14 = v13 + 6;
        if ( !v13[6] )
          goto LABEL_17;
        v22 = v13 + 6;
      }
      if ( v14 )
      {
        v23 = *v14;
        RtlRbRemoveNode(v14, *v14);
        RtlRbReplaceNode(v4, v8, v23);
        KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v23 + 56), &v34);
        ExReleaseSpinLockExclusiveFromDpcLevel(v3);
        *(_OWORD *)(v23 + 24) = *v22;
        *(_OWORD *)(v23 + 40) = *((_OWORD *)v13 + 4);
        *(_BYTE *)(v23 + 68) = *((_BYTE *)v13 + 92);
        *(_DWORD *)(v23 + 68) ^= (*(_DWORD *)(v23 + 68) ^ *((_DWORD *)v13 + 23)) & 0x7F00;
        KiAbTryDecrementIoWaiterCounts(v8 - 24, v23 - 24, v24, v25);
        *(_BYTE *)(v23 - 5) |= 1u;
        KxReleaseQueuedSpinLock(&v34);
      }
      else
      {
LABEL_17:
        RtlRbRemoveNode(v4, v8);
        ExReleaseSpinLockExclusiveFromDpcLevel(v3);
        if ( (*((_BYTE *)v13 + 19) & 2) != 0 )
        {
          --*((_BYTE *)v13 + 92);
          *((_BYTE *)v13 + 19) &= ~2u;
        }
        if ( (*((_BYTE *)v13 + 19) & 4) != 0 )
        {
          *((_DWORD *)v13 + 23) ^= ((unsigned __int16)*((_DWORD *)v13 + 23) ^ (unsigned __int16)(((unsigned __int16)(*((_DWORD *)v13 + 23) >> 8)
                                                                                                - 1) << 8)) & 0x7F00;
          *((_BYTE *)v13 + 19) &= ~4u;
        }
      }
      v15 = (_BYTE *)(a1 + 17);
      *((_BYTE *)v13 + 7) &= ~0x80u;
      *((_BYTE *)v13 + 19) &= ~1u;
      goto LABEL_22;
    }
    ExReleaseSpinLockSharedFromDpcLevel(v3);
    KxReleaseQueuedSpinLock(&LockHandle);
    v6 = 1;
  }
  if ( v6 )
    ExReleaseSpinLockExclusiveFromDpcLevel(v3);
  else
    ExReleaseSpinLockSharedFromDpcLevel(v3);
  v15 = (_BYTE *)(a1 + 17);
  *(_BYTE *)(a1 + 7) &= ~0x80u;
  if ( *(_BYTE *)(a1 + 17) )
    KiAbTryDecrementIoWaiterCounts(a1, v13, v20, v13 + 8);
  else
    v21 = v13 + 6;
  RtlRbRemoveNode(v21, a1 + 24);
LABEL_22:
  KxReleaseQueuedSpinLock(&LockHandle);
  v16 = a1 - 96LL * *(unsigned __int8 *)(a1 + 16);
  if ( *v15 )
    --*(_BYTE *)(v16 - 903);
  else
    _InterlockedExchangeAdd8((volatile signed __int8 *)(v16 - 825), 0xFFu);
  if ( KiIrqlFlags )
  {
    v26 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v26 <= 0xFu && CurrentIrql <= 0xFu && v26 >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v28 = CurrentPrcb->SchedulerAssist;
      v29 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
      v30 = (v29 & v28[5]) == 0;
      v28[5] &= v29;
      if ( v30 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
