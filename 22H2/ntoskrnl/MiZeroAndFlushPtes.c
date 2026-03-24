/*
 * XREFs of MiZeroAndFlushPtes @ 0x1402EA790
 * Callers:
 *     MiFillSystemPtes @ 0x140226EB0 (MiFillSystemPtes.c)
 *     MmUnlockPages @ 0x1402443E0 (MmUnlockPages.c)
 *     MmUnmapLockedPages @ 0x14029D0C0 (MmUnmapLockedPages.c)
 *     MmUnmapIoSpace @ 0x1402EA680 (MmUnmapIoSpace.c)
 *     MmMapMdl @ 0x1405374F0 (MmMapMdl.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x14022E780 (KeAcquireInStackQueuedSpinLock.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x14029D260 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiSwizzleInvalidPte @ 0x1402AA620 (MiSwizzleInvalidPte.c)
 *     MiGetLeafVa @ 0x1402AD4F0 (MiGetLeafVa.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1402AE550 (MI_READ_PTE_LOCK_FREE.c)
 *     MiInsertTbFlushEntry @ 0x1402B6400 (MiInsertTbFlushEntry.c)
 *     MiFlushTbList @ 0x1402BBBB0 (MiFlushTbList.c)
 *     MiPteInShadowRange @ 0x1402C9180 (MiPteInShadowRange.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402CDE30 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MiDereferenceIoPages @ 0x1402EAAB8 (MiDereferenceIoPages.c)
 *     MiInsertLargeTbFlushEntry @ 0x1402EDDE0 (MiInsertLargeTbFlushEntry.c)
 *     MiWritePteShadow @ 0x14030E10C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14030E16C (MiPteHasShadow.c)
 *     MiReplicatePteChange @ 0x1403A3E44 (MiReplicatePteChange.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F2D04 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x140413800 (memset.c)
 */

void __fastcall MiZeroAndFlushPtes(unsigned __int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v3; // r14
  unsigned __int64 v4; // rsi
  unsigned __int64 v5; // r12
  int v6; // eax
  int v7; // ebx
  unsigned __int64 v8; // r15
  unsigned int v9; // r13d
  __int64 v10; // rax
  unsigned __int64 v11; // rcx
  __int64 v12; // rdi
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // rtt
  __int64 v15; // rax
  unsigned __int64 v16; // r14
  __int64 v17; // r14
  BOOL v18; // eax
  __int64 v19; // rcx
  __int64 v20; // r9
  __int64 v21; // r11
  int v22; // r8d
  __int64 v23; // rdx
  __int64 v24; // rax
  __int64 v25; // rdi
  _QWORD *v26; // rbx
  __int64 v27; // rcx
  __int64 v28; // rcx
  struct _LIST_ENTRY *Flink; // r8
  __int64 v30; // rax
  unsigned __int64 v31; // rbx
  int v32; // r15d
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  bool v37; // zf
  unsigned __int64 v38; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v42; // eax
  bool v44; // zf
  _QWORD *v45; // rbx
  __int64 v46; // r14
  unsigned __int64 LeafVa; // rax
  __int64 v48; // r11
  __int64 v49; // r10
  __int64 v50; // r9
  int v51; // [rsp+28h] [rbp-E0h]
  BOOL v52; // [rsp+2Ch] [rbp-DCh]
  __int64 v53; // [rsp+30h] [rbp-D8h] BYREF
  unsigned __int64 v54; // [rsp+38h] [rbp-D0h]
  unsigned __int64 v55; // [rsp+40h] [rbp-C8h]
  unsigned __int64 v56; // [rsp+48h] [rbp-C0h]
  unsigned __int64 v57; // [rsp+50h] [rbp-B8h]
  unsigned __int64 v58; // [rsp+58h] [rbp-B0h]
  unsigned __int64 v59; // [rsp+60h] [rbp-A8h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v61; // [rsp+80h] [rbp-88h]
  _QWORD v62[24]; // [rsp+88h] [rbp-80h] BYREF
  _QWORD v63[32]; // [rsp+148h] [rbp+40h] BYREF

  v55 = a2;
  memset(v62, 0, 0xB8uLL);
  v3 = a1 & 0xFFFFFFFFFFFFF000uLL;
  v54 = a1 & 0xFFFFFFFFFFFFF000uLL;
  v61 = 0LL;
  *(_OWORD *)&LockHandle.LockQueue.Lock = 0LL;
  v4 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v5 = 1LL;
  v6 = MI_IS_PHYSICAL_ADDRESS(a1);
  v7 = v6;
  v51 = v6;
  if ( v6 > 0 )
  {
    v28 = (unsigned int)v6;
    do
    {
      v5 <<= 9;
      v4 = ((v4 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      --v28;
    }
    while ( v28 );
  }
  v8 = 0LL;
  LODWORD(v62[1]) = 20;
  v56 = 0LL;
  v9 = 0;
  v62[3] = 0LL;
  v10 = MiSwizzleInvalidPte(768LL);
  v11 = v55;
  v12 = v10;
  while ( 2 )
  {
    v14 = v11;
    v13 = v11 % v5;
    v11 = v13;
    v55 = v13;
    LockHandle.LockQueue.Next = (_KSPIN_LOCK_QUEUE *volatile)(v4 + 8 * (v14 / v5));
    if ( (_KSPIN_LOCK_QUEUE *volatile)v4 >= LockHandle.LockQueue.Next )
      goto LABEL_19;
    v52 = MiPteInShadowRange((unsigned __int64)&v53);
    v59 = v5 << 12;
    do
    {
      v58 = v8;
      v57 = v8;
      v15 = MI_READ_PTE_LOCK_FREE(v4);
      v16 = v15;
      v53 = v15;
      if ( v52
        && (MiFlags & 0xC00000) != 0
        && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
        && (v15 & 1) != 0
        && ((v15 & 0x20) == 0 || (v15 & 0x42) == 0) )
      {
        Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( Flink )
        {
          v30 = *((_QWORD *)&Flink->Flink + (((unsigned __int64)&v53 >> 3) & 0x1FF));
          if ( (v30 & 0x20) != 0 )
            v16 |= 0x20uLL;
          if ( (v30 & 0x42) != 0 )
            v16 |= 0x42uLL;
        }
        else
        {
          v16 = v53;
        }
      }
      v17 = (v16 >> 12) & 0xFFFFFFFFFLL;
      if ( v7 == 3 )
      {
        KeAcquireInStackQueuedSpinLock(&SpinLock, (PKLOCK_QUEUE_HANDLE)&LockHandle.LockQueue.Lock);
        v31 = ZeroPte;
        v32 = 0;
        if ( MiPteInShadowRange(v4) )
        {
          if ( (unsigned int)MiPteHasShadow(v34, v33, v35, v36) )
          {
            v32 = 1;
            if ( !HIBYTE(word_140C4E008) )
            {
              v37 = (ZeroPte & 1) == 0;
              goto LABEL_52;
            }
          }
          else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
          {
            v37 = (ZeroPte & 1) == 0;
LABEL_52:
            if ( !v37 )
              v31 = ZeroPte | 0x8000000000000000uLL;
          }
        }
        *(_QWORD *)v4 = v31;
        if ( v32 )
          MiWritePteShadow(v4, v31);
        KeReleaseInStackQueuedSpinLockFromDpcLevel((PKLOCK_QUEUE_HANDLE)&LockHandle.LockQueue.Lock);
        v38 = (unsigned __int8)v61;
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            CurrentIrql = KeGetCurrentIrql();
            if ( CurrentIrql <= 0xFu && (unsigned __int8)v61 <= 0xFu && CurrentIrql >= 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              SchedulerAssist = CurrentPrcb->SchedulerAssist;
              v42 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v61 + 1));
              v37 = (v42 & SchedulerAssist[5]) == 0;
              SchedulerAssist[5] &= v42;
              if ( v37 )
                KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            }
          }
        }
        __writecr8(v38);
        v8 = v4;
        v7 = v51;
        if ( v57 )
          v8 = v58;
        v56 = v4;
        goto LABEL_33;
      }
      v18 = MiPteInShadowRange(v4);
      v21 = 1LL;
      v22 = 0;
      if ( v7 >= 1 )
      {
        v23 = v12;
        if ( !v18 )
          goto LABEL_9;
        if ( (unsigned int)MiPteHasShadow(v19, v12, 0LL, v20) )
        {
          v22 = v21;
          if ( HIBYTE(word_140C4E008) )
            goto LABEL_9;
        }
        else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
        {
          goto LABEL_9;
        }
        v44 = ((unsigned __int8)v12 & (unsigned __int8)v21) == 0;
      }
      else
      {
        v23 = ZeroPte;
        if ( !v18 )
          goto LABEL_9;
        if ( (unsigned int)MiPteHasShadow(v19, ZeroPte, 0LL, v20) )
        {
          v22 = v21;
          if ( HIBYTE(word_140C4E008) )
            goto LABEL_9;
        }
        else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
        {
          goto LABEL_9;
        }
        v44 = ((unsigned __int8)v23 & (unsigned __int8)v21) == 0;
      }
      if ( !v44 )
        v23 |= 0x8000000000000000uLL;
LABEL_9:
      *(_QWORD *)v4 = v23;
      if ( v22 )
        MiWritePteShadow(v4, v23);
      if ( v7 < (int)v21 )
      {
        MiInsertTbFlushEntry((__int64)v62, v54, v21, v7);
        goto LABEL_13;
      }
LABEL_33:
      MiInsertLargeTbFlushEntry(v62, (unsigned int)v7, v4);
LABEL_13:
      if ( (*(_QWORD *)(48 * v17 - 0x57FFFFFFFD8LL) & 0x4000000000000LL) == 0 )
      {
        if ( v9 && (v24 = v63[2 * v9 - 1], v24 == v17) )
        {
          v63[2 * v9 - 1] = v5 + v24;
        }
        else
        {
          v27 = 2LL * v9++;
          v63[v27] = v17;
          v63[v27 + 1] = v17 + v5;
          if ( v9 == 16 )
          {
            MiFlushTbList((__int64)v62, (_KPROCESS *)v13);
            v45 = v63;
            v46 = 16LL;
            do
            {
              MiDereferenceIoPages(1LL, *v45, v45[1] - *v45);
              v45 += 2;
              --v46;
            }
            while ( v46 );
            v7 = v51;
            v9 = 0;
          }
        }
      }
      v4 += 8LL;
      v3 = v59 + v54;
      v54 += v59;
    }
    while ( (_KSPIN_LOCK_QUEUE *volatile)v4 < LockHandle.LockQueue.Next );
    v11 = v55;
LABEL_19:
    if ( v11 )
    {
      v7 = 0;
      v51 = 0;
      v5 = 1LL;
      v4 = ((v3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      continue;
    }
    break;
  }
  if ( v8 )
  {
    MiGetLeafVa(v56);
    LeafVa = MiGetLeafVa(v8);
    MiReplicatePteChange(v49 + (v48 & (LeafVa >> 9)), v50);
  }
  MiFlushTbList((__int64)v62, (_KPROCESS *)v13);
  v25 = v9;
  if ( v9 )
  {
    v26 = v63;
    do
    {
      MiDereferenceIoPages(1LL, *v26, v26[1] - *v26);
      v26 += 2;
      --v25;
    }
    while ( v25 );
  }
}
