/*
 * XREFs of MiFillPoolCommitPageTable @ 0x14028C060
 * Callers:
 *     MiCommitPoolMemory @ 0x14028B8AC (MiCommitPoolMemory.c)
 * Callees:
 *     MiAssignNonPagedPoolPte @ 0x14023B360 (MiAssignNonPagedPoolPte.c)
 *     MiLockPoolCommitPageTable @ 0x14028BA50 (MiLockPoolCommitPageTable.c)
 *     MiWorkingSetIsContended @ 0x14028BE50 (MiWorkingSetIsContended.c)
 *     MiUnlockPoolCommitWs @ 0x14028BE88 (MiUnlockPoolCommitWs.c)
 *     MiLockPoolCommitWs @ 0x14028BED8 (MiLockPoolCommitWs.c)
 *     MiSwizzleInvalidPte @ 0x1402AA620 (MiSwizzleInvalidPte.c)
 *     MiPteInShadowRange @ 0x1402C9180 (MiPteInShadowRange.c)
 *     MiUnlockPageTableInternal @ 0x1402DB460 (MiUnlockPageTableInternal.c)
 *     KeShouldYieldProcessor @ 0x1402F1320 (KeShouldYieldProcessor.c)
 *     MiWritePteShadow @ 0x14030E10C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14030E16C (MiPteHasShadow.c)
 *     KeBugCheckEx @ 0x1403FD570 (KeBugCheckEx.c)
 */

int __fastcall MiFillPoolCommitPageTable(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  char v3; // bp
  ULONG_PTR i; // rsi
  __int64 v5; // rdx
  unsigned __int64 v6; // rdi
  unsigned int v7; // eax
  __int64 v8; // r9
  __int64 v9; // r8
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  unsigned __int64 v14; // rdx
  __int64 v15; // rdx
  __int64 v16; // r8
  _DWORD *v17; // r9
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rdx
  _UNKNOWN *retaddr; // [rsp+58h] [rbp+0h] BYREF

  CurrentThread = (struct _KTHREAD *)&retaddr;
  if ( (*(_BYTE *)(a1 + 78) & 4) == 0 )
  {
    v3 = 0;
    for ( i = *(_QWORD *)(a1 + 32); i; i = *(_QWORD *)(a1 + 32) )
    {
      v5 = *(_QWORD *)(a1 + 64);
      if ( v5 )
      {
        if ( ((i >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL == v5 )
          goto LABEL_5;
        MiUnlockPageTableInternal(*(_QWORD *)(a1 + 48), v5);
        *(_QWORD *)(a1 + 64) = 0LL;
      }
      if ( !(unsigned int)MiLockPoolCommitPageTable(a1, i) )
        KeBugCheckEx(0x1Au, 0x5310uLL, i, 0LL, 0LL);
LABEL_5:
      v6 = *(_QWORD *)i;
      v7 = MiPteInShadowRange(i, v5);
      v9 = v7;
      if ( v7
        && (MiFlags & 0xC00000) != 0
        && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
        && (v6 & 1) != 0
        && ((v6 & 0x20) == 0 || (v6 & 0x42) == 0) )
      {
        Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( Flink )
        {
          v19 = *((_QWORD *)&Flink->Flink + ((i >> 3) & 0x1FF));
          v20 = v6 | 0x20;
          if ( (v19 & 0x20) == 0 )
            v20 = v6;
          v6 = v20;
          if ( (v19 & 0x42) != 0 )
            v6 = v20 | 0x42;
        }
      }
      if ( !v6 )
        goto LABEL_11;
      if ( qword_140C4DF40 && (v6 & 0x10) == 0 )
        v6 &= ~qword_140C4DF40;
      v6 >>= 28;
      if ( v6 == 0xFFFFFFFFFLL )
        CurrentThread = 0LL;
      else
LABEL_11:
        CurrentThread = (struct _KTHREAD *)(8 * v6 - 0x94000000000LL);
      *(_QWORD *)(a1 + 32) = CurrentThread;
      v10 = *(unsigned __int16 *)(a1 + 78);
      if ( (v10 & 1) != 0 )
      {
        v21 = ZeroPte;
        if ( (_DWORD)v9 )
        {
          if ( (unsigned int)MiPteHasShadow(v10, ZeroPte, v9, v8) )
          {
            if ( !HIBYTE(word_140C4E008) && (v21 & 1) != 0 )
              v21 |= 0x8000000000000000uLL;
            *(_QWORD *)i = v21;
            LODWORD(CurrentThread) = MiWritePteShadow(i, v21);
            goto LABEL_17;
          }
          CurrentThread = KeGetCurrentThread();
          if ( (HIDWORD(CurrentThread->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 && (v21 & 1) != 0 )
          {
            LODWORD(CurrentThread) = 0;
            v21 |= 0x8000000000000000uLL;
          }
        }
        *(_QWORD *)i = v21;
      }
      else
      {
        if ( (v10 & 2) != 0 )
        {
          CurrentThread = (struct _KTHREAD *)MiSwizzleInvalidPte(4LL * ((unsigned __int8)v10 & 0xF8));
          v14 = (unsigned __int64)CurrentThread;
          if ( !(_DWORD)v12 )
            goto LABEL_15;
          if ( (unsigned int)MiPteHasShadow(v11, CurrentThread, v12, v13) )
          {
            if ( !HIBYTE(word_140C4E008) && (v14 & 1) != 0 )
              v14 |= 0x8000000000000000uLL;
            *(_QWORD *)i = v14;
            LODWORD(CurrentThread) = MiWritePteShadow(i, v14);
          }
          else
          {
            CurrentThread = KeGetCurrentThread();
            if ( (HIDWORD(CurrentThread->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 && (v14 & 1) != 0 )
            {
              LODWORD(CurrentThread) = 0;
              v14 |= 0x8000000000000000uLL;
            }
LABEL_15:
            *(_QWORD *)i = v14;
          }
LABEL_16:
          ++*(_QWORD *)(a1 + 24);
          goto LABEL_17;
        }
        LODWORD(CurrentThread) = MiAssignNonPagedPoolPte(a1, (__int64)(i << 25) >> 16);
        if ( (_DWORD)CurrentThread )
          goto LABEL_16;
      }
LABEL_17:
      ++v3;
      if ( *(_QWORD *)(a1 + 32) )
      {
        if ( (v3 & 0xF) == 0 && *(_BYTE *)(a1 + 76) < 2u )
        {
          if ( MiWorkingSetIsContended(*(_QWORD *)(a1 + 48))
            || (LODWORD(CurrentThread) = KeShouldYieldProcessor(), (_DWORD)CurrentThread) )
          {
            MiUnlockPoolCommitWs(a1);
            LODWORD(CurrentThread) = MiLockPoolCommitWs(a1, v15, v16, v17);
          }
        }
      }
    }
  }
  return (int)CurrentThread;
}
