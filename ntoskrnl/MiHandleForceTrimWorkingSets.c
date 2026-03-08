/*
 * XREFs of MiHandleForceTrimWorkingSets @ 0x1406326A0
 * Callers:
 *     MiWorkingSetManager @ 0x1403616C0 (MiWorkingSetManager.c)
 * Callees:
 *     MiDetachAndUnlockWorkingSet @ 0x14020CF74 (MiDetachAndUnlockWorkingSet.c)
 *     MiUnlockWorkingSetShared @ 0x14025C1E0 (MiUnlockWorkingSetShared.c)
 *     KeSetEvent @ 0x14025C2C0 (KeSetEvent.c)
 *     MiReturnWsToExpansionList @ 0x1402A5FD4 (MiReturnWsToExpansionList.c)
 *     MiAttachWorkingSet @ 0x1402D4FE4 (MiAttachWorkingSet.c)
 *     MiLockWorkingSetShared @ 0x14032DAF0 (MiLockWorkingSetShared.c)
 *     KxReleaseQueuedSpinLock @ 0x14033A950 (KxReleaseQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14033B450 (KeAcquireInStackQueuedSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     MiSelfTrim @ 0x14064DCAC (MiSelfTrim.c)
 */

__int64 __fastcall MiHandleForceTrimWorkingSets(__int64 a1)
{
  __int64 v1; // rsi
  _QWORD *v2; // rdi
  int v3; // r9d
  _QWORD *v4; // r8
  _QWORD *v5; // rdx
  _QWORD *v6; // rax
  _QWORD *v7; // rax
  __int16 v8; // r12
  _QWORD *v9; // rdx
  __int64 v10; // rax
  __int64 v11; // r13
  int v12; // eax
  unsigned __int64 v13; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v17; // eax
  bool v18; // zf
  __int64 v19; // rdx
  unsigned __int8 v20; // bl
  _QWORD *v21; // rax
  __int64 v22; // rax
  __int64 result; // rax
  unsigned __int64 OldIrql; // rbx
  struct _KPRCB *v25; // r9
  _DWORD *v26; // r8
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-20h] BYREF
  int v28; // [rsp+70h] [rbp+30h]
  int v29; // [rsp+70h] [rbp+30h]

  v1 = *(_QWORD *)(a1 + 16920);
  v2 = (_QWORD *)(a1 + 16928);
  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock(&qword_140C69440, &LockHandle);
  v3 = 0;
  *(_DWORD *)(v1 + 40) &= ~0x400u;
  v4 = (_QWORD *)*v2;
  if ( (_QWORD *)*v2 == v2 )
    goto LABEL_37;
  do
  {
    v5 = v4;
    v4 = (_QWORD *)*v4;
    if ( (*((_DWORD *)v5 + 41) & 3) != 0 && (*((_DWORD *)v5 + 41) & 4) != 0 )
    {
      v6 = (_QWORD *)v5[1];
      if ( (_QWORD *)v4[1] != v5 )
        goto LABEL_36;
      if ( (_QWORD *)*v6 != v5 )
        goto LABEL_36;
      *v6 = v4;
      v4[1] = v6;
      v7 = (_QWORD *)*v2;
      if ( *(_QWORD **)(*v2 + 8LL) != v2 )
        goto LABEL_36;
      *v5 = v7;
      ++v3;
      v5[1] = v2;
      v7[1] = v5;
      *v2 = v5;
    }
  }
  while ( v4 != v2 );
  if ( !v3 )
  {
LABEL_37:
    result = KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
    OldIrql = LockHandle.OldIrql;
    if ( !KiIrqlFlags )
      goto LABEL_44;
    result = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) == 0
      || (unsigned __int8)result > 0xFu
      || LockHandle.OldIrql > 0xFu
      || (unsigned __int8)result < 2u )
    {
      goto LABEL_44;
    }
    goto LABEL_42;
  }
  v8 = ++*(_WORD *)(v1 + 2344);
  *(_WORD *)(v1 + 52) = 257;
  while ( 1 )
  {
    v9 = (_QWORD *)*v2;
    if ( (_QWORD *)*v2 == v2 )
      goto LABEL_28;
    v10 = *v9;
    if ( (_QWORD *)v9[1] != v2 || *(_QWORD **)(v10 + 8) != v9 )
      goto LABEL_36;
    *v2 = v10;
    v11 = (__int64)(v9 - 3);
    *(_QWORD *)(v10 + 8) = v2;
    if ( *((_WORD *)v9 + 74) == v8 )
      break;
    *v9 = 0LL;
    v12 = *(_DWORD *)(v11 + 188);
    *(_WORD *)(v11 + 172) = v8;
    if ( (v12 & 3) != 0 && (v12 & 4) != 0 && *(_QWORD *)(v11 + 144) > 1uLL )
    {
      v28 = *(_DWORD *)(v11 + 184);
      BYTE1(v28) = BYTE1(v28) & 0xF9 | 2;
      *(_WORD *)(v11 + 184) = v28;
      KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
      v13 = LockHandle.OldIrql;
      if ( KiIrqlFlags )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && LockHandle.OldIrql <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v17 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v18 = (v17 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v17;
          if ( v18 )
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
      }
      __writecr8(v13);
      MiAttachWorkingSet(v11);
      LOBYTE(v19) = MiLockWorkingSetShared(v11);
      v20 = v19;
      MiSelfTrim(v11, v19);
      MiUnlockWorkingSetShared(v11, v20);
      MiDetachAndUnlockWorkingSet(v11);
      KeAcquireInStackQueuedSpinLock(&qword_140C69440, &LockHandle);
      v29 = *(_DWORD *)(v11 + 184);
      BYTE1(v29) &= 0xF9u;
      *(_WORD *)(v11 + 184) = v29;
      MiReturnWsToExpansionList(v11, 0);
    }
    else
    {
      v21 = (_QWORD *)v2[1];
      if ( (_QWORD *)*v21 != v2 )
        goto LABEL_36;
      *v9 = v2;
      v9[1] = v21;
      *v21 = v9;
      v2[1] = v9;
    }
  }
  v22 = *v2;
  if ( *(_QWORD **)(*v2 + 8LL) != v2 )
LABEL_36:
    __fastfail(3u);
  *v9 = v22;
  v9[1] = v2;
  *(_QWORD *)(v22 + 8) = v9;
  *v2 = v9;
LABEL_28:
  *(_WORD *)(v1 + 52) = 0;
  if ( !*(_DWORD *)(v1 + 40) )
    KeSetEvent((PRKEVENT)v1, 0, 0);
  result = KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
  OldIrql = LockHandle.OldIrql;
  if ( KiIrqlFlags )
  {
    result = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0
      && (unsigned __int8)result <= 0xFu
      && LockHandle.OldIrql <= 0xFu
      && (unsigned __int8)result >= 2u )
    {
LABEL_42:
      v25 = KeGetCurrentPrcb();
      v26 = v25->SchedulerAssist;
      result = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
      v18 = ((unsigned int)result & v26[5]) == 0;
      v26[5] &= result;
      if ( v18 )
        result = KiRemoveSystemWorkPriorityKick((__int64)v25);
    }
  }
LABEL_44:
  __writecr8(OldIrql);
  return result;
}
