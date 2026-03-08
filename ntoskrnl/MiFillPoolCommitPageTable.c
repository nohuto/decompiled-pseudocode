/*
 * XREFs of MiFillPoolCommitPageTable @ 0x14032F1F0
 * Callers:
 *     MiCommitPoolMemory @ 0x14032FC90 (MiCommitPoolMemory.c)
 * Callees:
 *     MiUnlockPageTableInternal @ 0x140290620 (MiUnlockPageTableInternal.c)
 *     KeShouldYieldProcessor @ 0x1402C9870 (KeShouldYieldProcessor.c)
 *     MiWritePteShadow @ 0x1402EB2BC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402EB31C (MiPteHasShadow.c)
 *     MiPteInShadowRange @ 0x14031B4C0 (MiPteInShadowRange.c)
 *     MiLockWorkingSetShared @ 0x14032DAF0 (MiLockWorkingSetShared.c)
 *     MiSwizzleInvalidPte @ 0x14032F600 (MiSwizzleInvalidPte.c)
 *     MiLockPoolCommitPageTable @ 0x14032FF9C (MiLockPoolCommitPageTable.c)
 *     MiUnlockPoolCommitWs @ 0x1403303A0 (MiUnlockPoolCommitWs.c)
 *     MiAssignNonPagedPoolPte @ 0x140345570 (MiAssignNonPagedPoolPte.c)
 *     MiWorkingSetIsContended @ 0x1403478E0 (MiWorkingSetIsContended.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 */

char __fastcall MiFillPoolCommitPageTable(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  char v3; // bp
  ULONG_PTR v4; // rsi
  __int64 v5; // r9
  struct _LIST_ENTRY *Flink; // r8
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // rcx
  __int64 v9; // rax
  __int16 v10; // ax
  __int64 v11; // rbx
  unsigned __int8 CurrentIrql; // dl
  __int64 v13; // rcx
  _DWORD *SchedulerAssist; // r10
  __int64 v15; // r8
  __int64 v16; // rax
  unsigned __int64 v17; // rbx
  __int64 v18; // r8
  __int64 v19; // r8
  _UNKNOWN *retaddr; // [rsp+58h] [rbp+0h] BYREF

  CurrentThread = (struct _KTHREAD *)&retaddr;
  if ( (*(_BYTE *)(a1 + 78) & 4) == 0 )
  {
    v3 = 0;
    v4 = *(_QWORD *)(a1 + 32);
    if ( v4 )
    {
      v5 = 0x4000000000LL;
      Flink = (struct _LIST_ENTRY *)0xFFFFF6FB7DBED7F8LL;
      do
      {
        v7 = *(_QWORD *)(a1 + 64);
        if ( v7 )
        {
          if ( ((v4 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL == v7 )
            goto LABEL_6;
          MiUnlockPageTableInternal(*(_QWORD *)(a1 + 48), v7);
          *(_QWORD *)(a1 + 64) = 0LL;
        }
        if ( !(unsigned int)MiLockPoolCommitPageTable(a1, v4, Flink, v5) )
          KeBugCheckEx(0x1Au, 0x5310uLL, v4, 0LL, 0LL);
        Flink = (struct _LIST_ENTRY *)0xFFFFF6FB7DBED7F8LL;
LABEL_6:
        v8 = *(_QWORD *)v4;
        if ( v4 >= 0xFFFFF6FB7DBED000uLL
          && v4 <= 0xFFFFF6FB7DBED7F8uLL
          && (MiFlags & 0x600000) != 0
          && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
          && (v8 & 1) != 0
          && ((v8 & 0x20) == 0 || (v8 & 0x42) == 0) )
        {
          Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
          if ( Flink )
          {
            v16 = *((_QWORD *)&Flink->Flink + ((v4 >> 3) & 0x1FF));
            if ( (v16 & 0x20) != 0 )
              v8 |= 0x20uLL;
            if ( (v16 & 0x42) != 0 )
              v8 |= 0x42uLL;
          }
        }
        if ( !v8 )
          goto LABEL_13;
        if ( qword_140C657C0 && (v8 & 0x10) == 0 )
          v8 &= ~qword_140C657C0;
        v8 >>= 28;
        if ( v8 == 0xFFFFFFFFFLL )
          v9 = 0LL;
        else
LABEL_13:
          v9 = 8 * v8 - 0x94000000000LL;
        *(_QWORD *)(a1 + 32) = v9;
        v10 = *(_WORD *)(a1 + 78);
        if ( (v10 & 1) != 0 )
        {
          v17 = ZeroPte;
          LODWORD(CurrentThread) = MiPteInShadowRange(v4);
          if ( (_DWORD)CurrentThread )
          {
            if ( MiPteHasShadow() )
            {
              if ( !HIBYTE(word_140C6697C) && (ZeroPte & 1) != 0 )
                v17 = ZeroPte | 0x8000000000000000uLL;
              *(_QWORD *)v4 = v17;
              LOBYTE(CurrentThread) = MiWritePteShadow(v4, v17, v18);
              goto LABEL_19;
            }
            CurrentThread = KeGetCurrentThread();
            if ( (HIDWORD(CurrentThread->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
              && (ZeroPte & 1) != 0 )
            {
              LOBYTE(CurrentThread) = 0;
              v17 = ZeroPte | 0x8000000000000000uLL;
            }
          }
          *(_QWORD *)v4 = v17;
        }
        else
        {
          if ( (v10 & 2) != 0 )
          {
            v11 = MiSwizzleInvalidPte(32LL * ((unsigned __int8)v10 >> 3));
            LODWORD(CurrentThread) = MiPteInShadowRange(v4);
            if ( !(_DWORD)CurrentThread )
              goto LABEL_17;
            if ( MiPteHasShadow() )
            {
              if ( !HIBYTE(word_140C6697C) && (v11 & 1) != 0 )
                v11 |= 0x8000000000000000uLL;
              *(_QWORD *)v4 = v11;
              LOBYTE(CurrentThread) = MiWritePteShadow(v4, v11, v19);
            }
            else
            {
              CurrentThread = KeGetCurrentThread();
              if ( (HIDWORD(CurrentThread->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
                && (v11 & 1) != 0 )
              {
                LOBYTE(CurrentThread) = 0;
                v11 |= 0x8000000000000000uLL;
              }
LABEL_17:
              *(_QWORD *)v4 = v11;
            }
LABEL_18:
            ++*(_QWORD *)(a1 + 24);
            goto LABEL_19;
          }
          LODWORD(CurrentThread) = MiAssignNonPagedPoolPte(a1, (__int64)(v4 << 25) >> 16, Flink, 0x4000000000LL);
          if ( (_DWORD)CurrentThread )
            goto LABEL_18;
        }
LABEL_19:
        ++v3;
        if ( *(_QWORD *)(a1 + 32) )
        {
          if ( (v3 & 0xF) == 0 && *(_BYTE *)(a1 + 76) < 2u )
          {
            if ( (unsigned int)MiWorkingSetIsContended(*(_QWORD *)(a1 + 48))
              || (LODWORD(CurrentThread) = KeShouldYieldProcessor(), (_DWORD)CurrentThread) )
            {
              MiUnlockPoolCommitWs(a1);
              CurrentIrql = KeGetCurrentIrql();
              __writecr8(2uLL);
              if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
              {
                SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
                if ( CurrentIrql == 2 )
                  LODWORD(v15) = 4;
                else
                  v15 = (-1LL << (CurrentIrql + 1)) & 4;
                SchedulerAssist[5] |= v15;
              }
              v13 = *(_QWORD *)(a1 + 48);
              *(_BYTE *)(a1 + 76) = CurrentIrql;
              LOBYTE(CurrentThread) = MiLockWorkingSetShared(v13);
            }
          }
        }
        v4 = *(_QWORD *)(a1 + 32);
        v5 = 0x4000000000LL;
        Flink = (struct _LIST_ENTRY *)0xFFFFF6FB7DBED7F8LL;
      }
      while ( v4 );
    }
  }
  return (char)CurrentThread;
}
