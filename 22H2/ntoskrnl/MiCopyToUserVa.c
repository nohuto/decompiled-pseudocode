/*
 * XREFs of MiCopyToUserVa @ 0x14028EBB8
 * Callers:
 *     MiCopyToCfgBitMap @ 0x140636FA0 (MiCopyToCfgBitMap.c)
 * Callees:
 *     MiUnlockWorkingSetShared @ 0x14020F750 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x140219C70 (MiLockWorkingSetShared.c)
 *     MiLocateCloneAddress @ 0x14023E878 (MiLocateCloneAddress.c)
 *     MiCopyOnWrite @ 0x14023EC70 (MiCopyOnWrite.c)
 *     MiReleasePtes @ 0x140245170 (MiReleasePtes.c)
 *     MiMakeSystemAddressValid @ 0x14028EA10 (MiMakeSystemAddressValid.c)
 *     MiLockPageAndSetDirty @ 0x1402900EC (MiLockPageAndSetDirty.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1402AE550 (MI_READ_PTE_LOCK_FREE.c)
 *     MiMakeValidPte @ 0x1402AEDC0 (MiMakeValidPte.c)
 *     MiMapPageInHyperSpaceWorker @ 0x1402B2140 (MiMapPageInHyperSpaceWorker.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x1402C8FA0 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiPteInShadowRange @ 0x1402C9180 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x14030E10C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14030E16C (MiPteHasShadow.c)
 *     MiUnlockPageTable @ 0x1403B6600 (MiUnlockPageTable.c)
 *     MI_PFN_IS_PROTO @ 0x1403F3F48 (MI_PFN_IS_PROTO.c)
 *     memmove @ 0x140413540 (memmove.c)
 *     MiReserveLowPrioritySystemPtes @ 0x14052A844 (MiReserveLowPrioritySystemPtes.c)
 *     MiCopyOnWriteCheckConditions @ 0x14055BE38 (MiCopyOnWriteCheckConditions.c)
 *     MiChargeFullProcessCommitment @ 0x1405F90D0 (MiChargeFullProcessCommitment.c)
 *     MiReturnFullProcessCommitment @ 0x14063BF58 (MiReturnFullProcessCommitment.c)
 */

__int64 __fastcall MiCopyToUserVa(ULONG_PTR a1, __int64 a2, const void *a3, _DWORD *a4)
{
  _KPROCESS *Process; // r13
  ULONG_PTR v5; // rdi
  int v6; // r12d
  unsigned int v7; // ebx
  unsigned __int8 v8; // al
  unsigned __int8 v9; // dl
  unsigned __int64 v10; // rdi
  __int64 v11; // rcx
  _QWORD *CloneAddress; // rax
  __int64 v13; // rdx
  int v14; // edi
  __int64 v15; // r8
  _DWORD *v16; // r9
  __int64 v17; // r9
  __int64 v18; // r12
  __int64 v19; // rbx
  __int64 v20; // rdx
  __int64 v21; // r8
  _DWORD *v22; // r9
  __int64 ValidPte; // rax
  char v24; // di
  __int64 v25; // rbx
  __int64 v26; // rdx
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // rdx
  unsigned __int8 i; // [rsp+30h] [rbp-68h]
  int v34; // [rsp+34h] [rbp-64h]
  int v35; // [rsp+38h] [rbp-60h]
  __int64 v36; // [rsp+40h] [rbp-58h] BYREF
  __int64 v37; // [rsp+48h] [rbp-50h]
  __int64 v38; // [rsp+50h] [rbp-48h]
  _QWORD *v39; // [rsp+58h] [rbp-40h]
  __int64 v40; // [rsp+60h] [rbp-38h]
  _KPROCESS *v41; // [rsp+68h] [rbp-30h]

  Process = KeGetCurrentThread()->ApcState.Process;
  v41 = Process;
  v5 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v37 = v5;
  v6 = 0;
  v35 = 0;
  v7 = (*(_DWORD *)(a2 + 48) >> 12) & 0x3F;
LABEL_2:
  v8 = MiLockWorkingSetShared((__int64)&Process[1].ActiveProcessorsPadding[6], a2, (__int64)a3, a4);
LABEL_3:
  v9 = v8;
  for ( i = v8; ; v9 = i )
  {
    v38 = ((v5 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    MiMakeSystemAddressValid(v5, 0LL, v7, v9, 0);
    v36 = MI_READ_PTE_LOCK_FREE(v5);
    if ( (v36 & 1) == 0 )
    {
      MiUnlockPageTable(&Process[1].ActiveProcessorsPadding[6], v38);
      MiUnlockWorkingSetShared((__int64)&Process[1].ActiveProcessorsPadding[6], i);
      goto LABEL_2;
    }
    v10 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v36) >> 12) & 0xFFFFFFFFFLL;
    v40 = 48 * v10 - 0x58000000000LL;
    if ( !(unsigned int)MI_PFN_IS_PROTO(v40) )
      break;
    v39 = 0LL;
    if ( (*(_QWORD *)(v11 + 40) & 0x1000000000LL) != 0 || *(__int64 *)(v11 + 8) <= 0 )
    {
      if ( Process[1].Affinity.Bitmap[12] )
      {
        CloneAddress = MiLocateCloneAddress((__int64)Process, *(_QWORD *)(v11 + 8) | 0x8000000000000000uLL);
        v39 = CloneAddress;
        if ( CloneAddress )
        {
          if ( *(_QWORD *)(Process[1].ActiveProcessorsPadding[8] + 360) <= CloneAddress[12] )
          {
            v39 = 0LL;
          }
          else if ( !v6 )
          {
            MiUnlockPageTable(&Process[1].ActiveProcessorsPadding[6], v38);
            MiUnlockWorkingSetShared((__int64)&Process[1].ActiveProcessorsPadding[6], i);
            v14 = MiChargeFullProcessCommitment(Process, 1LL);
            if ( v14 < 0 )
              goto LABEL_39;
            v6 = 1;
            v35 = 1;
            v8 = MiLockWorkingSetShared((__int64)&Process[1].ActiveProcessorsPadding[6], v13, v15, v16);
            v5 = v37;
            goto LABEL_3;
          }
        }
      }
    }
    v5 = v37;
    LODWORD(v36) = MiCopyOnWrite(a1, (ULONG_PTR *)v37, -1LL, 0);
    if ( (int)v36 >= 0 )
    {
      v36 = MI_READ_PTE_LOCK_FREE(v5);
      v10 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v36) >> 12) & 0xFFFFFFFFFLL;
      v40 = 48 * v10 - 0x58000000000LL;
      if ( v39 )
        v6 = 0;
      v35 = v6;
      break;
    }
    MiUnlockPageTable(&Process[1].ActiveProcessorsPadding[6], v38);
    MiUnlockWorkingSetShared((__int64)&Process[1].ActiveProcessorsPadding[6], i);
    MiCopyOnWriteCheckConditions(&Process[1].ActiveProcessorsPadding[6], (unsigned int)v36);
    MiLockWorkingSetShared((__int64)&Process[1].ActiveProcessorsPadding[6], v20, v21, v22);
  }
  v18 = MiReserveLowPrioritySystemPtes(1LL);
  if ( v18 )
  {
    v37 = v18 << 25 >> 16;
    ValidPte = MiMakeValidPte(v18, v10, 2684354564LL);
    v24 = ValidPte;
    v36 = ValidPte;
    v34 = 0;
    v25 = ValidPte;
    if ( (unsigned int)MiPteInShadowRange(v18, v26) )
    {
      if ( (unsigned int)MiPteHasShadow(v28, v27, v29, v30) )
      {
        v34 = 1;
        if ( !HIBYTE(word_140C4E008) )
        {
LABEL_28:
          if ( (v24 & 1) != 0 )
            v25 |= 0x8000000000000000uLL;
        }
      }
      else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
      {
        goto LABEL_28;
      }
    }
    *(_QWORD *)v18 = v25;
    if ( v34 )
      MiWritePteShadow(v18, v25);
    v19 = v37;
    goto LABEL_33;
  }
  v19 = MiMapPageInHyperSpaceWorker(v10, 0LL, 0x80000000LL, v17);
LABEL_33:
  memmove((void *)(v19 + (a1 & 0xFFF)), a3, (size_t)a4);
  if ( v18 )
  {
    MiReleasePtes((__int64)&qword_140C4EF40, (_QWORD *)v18, 1u);
  }
  else
  {
    LOBYTE(v31) = 17;
    MiUnmapPageInHyperSpaceWorker(v19, v31, 0x80000000LL);
  }
  MiLockPageAndSetDirty(v40, 1LL);
  if ( v38 )
    MiUnlockPageTable(&Process[1].ActiveProcessorsPadding[6], v38);
  MiUnlockWorkingSetShared((__int64)&Process[1].ActiveProcessorsPadding[6], i);
  v14 = 0;
  v6 = v35;
LABEL_39:
  if ( v6 )
    MiReturnFullProcessCommitment(Process);
  return (unsigned int)v14;
}
