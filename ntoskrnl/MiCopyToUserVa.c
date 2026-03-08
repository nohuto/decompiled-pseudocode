/*
 * XREFs of MiCopyToUserVa @ 0x140211730
 * Callers:
 *     MiCopyToCfgBitMap @ 0x1406A5890 (MiCopyToCfgBitMap.c)
 * Callees:
 *     MiLockPageAndSetDirty @ 0x1402110B8 (MiLockPageAndSetDirty.c)
 *     MiMapPageInHyperSpaceWorker @ 0x140214870 (MiMapPageInHyperSpaceWorker.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x140214A54 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiUnlockWorkingSetShared @ 0x14025C1E0 (MiUnlockWorkingSetShared.c)
 *     MiUnlockPageTableInternal @ 0x140290620 (MiUnlockPageTableInternal.c)
 *     MiLocateCloneAddress @ 0x1402CF530 (MiLocateCloneAddress.c)
 *     MiCopyOnWrite @ 0x140319F00 (MiCopyOnWrite.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14031B450 (MI_READ_PTE_LOCK_FREE.c)
 *     MiMakeSystemAddressValid @ 0x140321770 (MiMakeSystemAddressValid.c)
 *     MiLockWorkingSetShared @ 0x14032DAF0 (MiLockWorkingSetShared.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     MiCopyOnWriteCheckConditions @ 0x140664840 (MiCopyOnWriteCheckConditions.c)
 *     MiReturnFullProcessCommitment @ 0x1406B6FB4 (MiReturnFullProcessCommitment.c)
 *     MiChargeFullProcessCommitment @ 0x1407C5840 (MiChargeFullProcessCommitment.c)
 */

__int64 __fastcall MiCopyToUserVa(ULONG_PTR a1, __int64 a2, const void *a3, size_t a4)
{
  _KPROCESS *Process; // r15
  ULONG_PTR v5; // r13
  int v6; // r14d
  char v7; // al
  char v8; // di
  __int64 v9; // r12
  unsigned __int64 v10; // rcx
  __int64 v11; // r13
  __int64 v12; // rax
  __int64 v14; // rbx
  __int64 v15; // rdx
  __int64 v16; // rdx
  int v17; // edi
  __int64 v19; // rdx
  __int64 CloneAddress; // rax
  __int64 v21; // rdx
  __int64 v22; // rdx
  int v23; // [rsp+34h] [rbp-64h]
  __int64 v24; // [rsp+38h] [rbp-60h] BYREF
  __int64 v25; // [rsp+40h] [rbp-58h]
  ULONG_PTR v26; // [rsp+48h] [rbp-50h]
  _KPROCESS *v27; // [rsp+50h] [rbp-48h]

  Process = KeGetCurrentThread()->ApcState.Process;
  v27 = Process;
  v5 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v26 = v5;
  v6 = 0;
LABEL_2:
  v7 = MiLockWorkingSetShared(&Process[1].ActiveProcessors.StaticBitmap[26]);
LABEL_3:
  v8 = v7;
  while ( 1 )
  {
    v23 = v6;
    v9 = ((v5 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    MiMakeSystemAddressValid(v5, 0);
    v24 = MI_READ_PTE_LOCK_FREE(v5);
    if ( (v24 & 1) == 0 )
    {
      MiUnlockPageTableInternal(
        &Process[1].ActiveProcessors.StaticBitmap[26],
        ((v5 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
      LOBYTE(v19) = v8;
      MiUnlockWorkingSetShared(&Process[1].ActiveProcessors.StaticBitmap[26], v19);
      goto LABEL_2;
    }
    v10 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v24) >> 12) & 0xFFFFFFFFFFLL;
    v11 = 48 * v10 - 0x220000000000LL;
    v12 = *(_QWORD *)(v11 + 40);
    if ( v12 >= 0 )
      break;
    v25 = 0LL;
    if ( (v12 & 0x10000000000LL) != 0 || *(__int64 *)(v11 + 8) <= 0 )
    {
      if ( Process[1].Affinity.StaticBitmap[12] )
      {
        CloneAddress = MiLocateCloneAddress(Process, *(_QWORD *)(v11 + 8) | 0x8000000000000000uLL);
        v25 = CloneAddress;
        if ( CloneAddress )
        {
          if ( *(_QWORD *)(Process[1].ActiveProcessors.StaticBitmap[28] + 344) <= *(_QWORD *)(CloneAddress + 96) )
          {
            v25 = 0LL;
          }
          else if ( !v6 )
          {
            MiUnlockPageTableInternal(&Process[1].ActiveProcessors.StaticBitmap[26], v9);
            LOBYTE(v21) = v8;
            MiUnlockWorkingSetShared(&Process[1].ActiveProcessors.StaticBitmap[26], v21);
            v17 = MiChargeFullProcessCommitment(Process, 1LL);
            if ( v17 < 0 )
              goto LABEL_16;
            v6 = 1;
            v7 = MiLockWorkingSetShared(&Process[1].ActiveProcessors.StaticBitmap[26]);
            v5 = v26;
            goto LABEL_3;
          }
        }
      }
    }
    v5 = v26;
    LODWORD(v24) = MiCopyOnWrite(a1);
    if ( (int)v24 >= 0 )
    {
      v24 = MI_READ_PTE_LOCK_FREE(v5);
      v10 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v24) >> 12) & 0xFFFFFFFFFFLL;
      v11 = 48 * v10 - 0x220000000000LL;
      v6 = 0;
      if ( !v25 )
        v6 = v23;
      break;
    }
    MiUnlockPageTableInternal(&Process[1].ActiveProcessors.StaticBitmap[26], v9);
    LOBYTE(v22) = v8;
    MiUnlockWorkingSetShared(&Process[1].ActiveProcessors.StaticBitmap[26], v22);
    MiCopyOnWriteCheckConditions(&Process[1].ActiveProcessors.StaticBitmap[26], (unsigned int)v24);
    MiLockWorkingSetShared(&Process[1].ActiveProcessors.StaticBitmap[26]);
  }
  v14 = MiMapPageInHyperSpaceWorker(v10, 0LL, 0x80000000LL);
  memmove((void *)(v14 + (a1 & 0xFFF)), a3, a4);
  LOBYTE(v15) = 17;
  MiUnmapPageInHyperSpaceWorker(v14, v15, 0x80000000LL);
  MiLockPageAndSetDirty(v11, 1);
  if ( v9 )
    MiUnlockPageTableInternal(&Process[1].ActiveProcessors.StaticBitmap[26], v9);
  LOBYTE(v16) = v8;
  MiUnlockWorkingSetShared(&Process[1].ActiveProcessors.StaticBitmap[26], v16);
  v17 = 0;
LABEL_16:
  if ( v6 )
    MiReturnFullProcessCommitment(Process, 1LL);
  return (unsigned int)v17;
}
