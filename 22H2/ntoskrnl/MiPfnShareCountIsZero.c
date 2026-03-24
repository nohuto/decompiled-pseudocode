/*
 * XREFs of MiPfnShareCountIsZero @ 0x1402A6820
 * Callers:
 *     MiDeletePteList @ 0x140231190 (MiDeletePteList.c)
 *     MiDeletePteRun @ 0x1402365D0 (MiDeletePteRun.c)
 *     MiDeleteBatch @ 0x140237DC0 (MiDeleteBatch.c)
 *     MiDeleteTransitionPte @ 0x1402381A0 (MiDeleteTransitionPte.c)
 *     MiDecrementShareCount @ 0x14023FB30 (MiDecrementShareCount.c)
 *     MmUnlockPages @ 0x1402443E0 (MmUnlockPages.c)
 *     MiMakePageAvoidRead @ 0x1402A4700 (MiMakePageAvoidRead.c)
 *     MiWsleFree @ 0x1402A8560 (MiWsleFree.c)
 *     MiDeleteValidSystemPage @ 0x1402A94B0 (MiDeleteValidSystemPage.c)
 *     MiReduceShareCount @ 0x1402E9A2C (MiReduceShareCount.c)
 *     MiUnlockPageTableCharges @ 0x140338DA8 (MiUnlockPageTableCharges.c)
 * Callees:
 *     MiGetPfnPriority @ 0x140218590 (MiGetPfnPriority.c)
 *     MiGetUltraMapping @ 0x140234070 (MiGetUltraMapping.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x140234880 (MiInsertPageInFreeOrZeroedList.c)
 *     MiIsAddressGlobal @ 0x14029F1A0 (MiIsAddressGlobal.c)
 *     MiInsertPageInList @ 0x1402A6E90 (MiInsertPageInList.c)
 *     MiInsertProtectedStandbyPage @ 0x1402A9B00 (MiInsertProtectedStandbyPage.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1402AE550 (MI_READ_PTE_LOCK_FREE.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x1402C8FA0 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiUserPdeOrAbove @ 0x140303E44 (MiUserPdeOrAbove.c)
 *     MiWritePteShadow @ 0x14030E10C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14030E16C (MiPteHasShadow.c)
 *     MiReleasePageFileInfo @ 0x140330CC0 (MiReleasePageFileInfo.c)
 *     MiGetPagingFileOffset @ 0x14033A2B0 (MiGetPagingFileOffset.c)
 *     MI_PFN_IS_PROTO @ 0x1403F3F48 (MI_PFN_IS_PROTO.c)
 */

__int64 __fastcall MiPfnShareCountIsZero(__int64 a1, unsigned __int64 a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r9
  unsigned __int64 v7; // r8
  unsigned __int64 v8; // rsi
  unsigned __int64 v9; // r8
  struct _LIST_ENTRY *Flink; // rax
  __int64 v11; // rdx
  __int64 v12; // rax
  unsigned __int64 v13; // r15
  __int64 v14; // r8
  unsigned __int64 v15; // rsi
  char v16; // dl
  __int64 Process; // rcx
  int v18; // eax
  struct _KPRCB *CurrentPrcb; // r14
  unsigned __int64 v20; // rdi
  unsigned __int64 *MmInternal; // rbx
  unsigned __int64 UltraMapping; // rax
  __int64 v23; // rdx
  unsigned __int64 v24; // r11
  unsigned __int64 *v25; // r8
  __int64 v26; // r15
  __int64 v27; // r8
  unsigned __int64 v28; // r11
  __int64 v29; // rax
  struct _LIST_ENTRY *v30; // rdx
  __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // r8
  __int64 v34; // rdx
  unsigned __int64 v35; // rcx
  __int64 v36; // rcx
  char v37; // al
  char v38; // al
  char v40; // al
  __int64 v41; // rcx
  __int64 v42; // rbx
  __int64 v43; // rax
  __int64 v44; // rcx
  __int64 v45; // rax
  char v46; // al
  __int64 v47; // rdx
  __int64 v48; // [rsp+60h] [rbp+8h] BYREF
  __int64 v49; // [rsp+70h] [rbp+18h] BYREF

  if ( (unsigned int)MI_PFN_IS_PROTO(a1) )
  {
    v7 = v5 + 16;
    v8 = *(_QWORD *)(v5 + 16);
    if ( (unsigned __int64)(v5 + 16) >= 0xFFFFF6FB7DBED000uLL
      && v7 <= 0xFFFFF6FB7DBED7F8uLL
      && (unsigned int)MiPteHasShadow(0xFFFFF6FB7DBED7F8uLL, v4, v7, v6)
      && (v8 & 1) != 0
      && ((v8 & 0x20) == 0 || (v8 & 0x42) == 0) )
    {
      Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
      if ( Flink )
      {
        v11 = v8 | 0x20;
        v12 = *((_QWORD *)&Flink->Flink + ((v9 >> 3) & 0x1FF));
        if ( (v12 & 0x20) == 0 )
          v11 = v8;
        v8 = v11;
        if ( (v12 & 0x42) != 0 )
          v8 = v11 | 0x42;
      }
    }
    v13 = *(_QWORD *)(a1 + 8);
    v14 = *(_QWORD *)(a1 + 40) & 0xFFFFFFFFFLL;
    v15 = v8 >> 5;
    v16 = 4;
    Process = 6 * v14;
    v18 = *(unsigned __int8 *)(48 * v14 - 0x58000000000LL + 34) >> 6;
    if ( !v18 || v18 == 3 )
    {
      v16 = 12;
    }
    else if ( v18 == 2 )
    {
      v16 = 28;
    }
    CurrentPrcb = KeGetCurrentPrcb();
    v20 = (v14 << 12) & 0xFAFFFFFFFFFFFEFFuLL | MmProtectToPteMask[v16 & 0x1F] & 0xFAFF000000000E7FuLL | 0x21 | ((unsigned __int64)(word_140C4E008 & 1) << 8) | 0xA00000000000042LL;
    MmInternal = (unsigned __int64 *)CurrentPrcb->MmInternal;
    if ( MmInternal )
    {
      UltraMapping = MiGetUltraMapping(MmInternal + 1556, 3u, 1LL, 0);
      v23 = 0x7FFFFFFFF8LL;
      v24 = UltraMapping;
      Process = 0xFFFFF68000000000uLL;
      v25 = (unsigned __int64 *)(((UltraMapping >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
      MmInternal[1543] = (unsigned __int64)v25;
      if ( UltraMapping )
      {
LABEL_23:
        if ( (unsigned __int64)v25 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v25 <= 0xFFFFF6FB7DBED7F8uLL )
        {
          if ( (unsigned int)MiPteHasShadow(Process, 0x7FFFFFFFF8LL, v25, v6) )
          {
            if ( !HIBYTE(word_140C4E008) )
              v20 |= 0x8000000000000000uLL;
            *v25 = v20;
            MiWritePteShadow(v25, v20);
LABEL_32:
            v26 = (v13 >> 3) & 0x1FF;
            v27 = *(_QWORD *)(v24 + 8 * v26);
            v28 = v24 + 8 * v26;
            if ( v28 >= 0xFFFFF6FB7DBED000uLL
              && v28 <= 0xFFFFF6FB7DBED7F8uLL
              && (unsigned int)MiPteHasShadow(Process, v23, v27, v6)
              && (v27 & 1) != 0
              && ((v27 & 0x20) == 0 || (v27 & 0x42) == 0) )
            {
              v23 = (__int64)KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
              if ( v23 )
              {
                v29 = *(_QWORD *)(v23 + 8 * ((v28 >> 3) & 0x1FF));
                v23 = v27 | 0x20;
                if ( (v29 & 0x20) == 0 )
                  v23 = v27;
                v27 = v23;
                if ( (v29 & 0x42) != 0 )
                  v27 = v23 | 0x42;
              }
            }
            v48 = v27;
            if ( (unsigned __int64)&v48 >= 0xFFFFF6FB7DBED000uLL
              && (unsigned __int64)&v48 <= 0xFFFFF6FB7DBED7F8uLL
              && (unsigned int)MiPteHasShadow(&v48, v23, v27, v6)
              && (v27 & 1) != 0
              && ((v27 & 0x20) == 0 || (v27 & 0x42) == 0) )
            {
              v30 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
              if ( v30 )
              {
                v31 = *((_QWORD *)&v30->Flink + (((unsigned __int64)&v48 >> 3) & 0x1FF));
                v32 = v27 | 0x20;
                if ( (v31 & 0x20) == 0 )
                  v32 = v27;
                v27 = v32;
                if ( (v31 & 0x42) != 0 )
                  v27 = v32 | 0x42;
              }
            }
            v33 = v27 & 0xFFFFFFFFF000LL;
            v34 = v33 | (32 * (v15 & 0x1F | 0x40));
            if ( qword_140C4DF40 )
            {
              if ( (qword_140C4DF40 & v34) != 0 )
                v34 |= 0x10uLL;
              else
                v34 |= qword_140C4DF40;
            }
            v48 = v34;
            if ( v28 >= 0xFFFFF6FB7DBED000uLL && v28 <= 0xFFFFF6FB7DBED7F8uLL )
            {
              if ( (unsigned int)MiPteHasShadow(qword_140C4DF40, v34, v33, v6) )
              {
                if ( !HIBYTE(word_140C4E008) && (v34 & 1) != 0 )
                  v34 |= 0x8000000000000000uLL;
                *(_QWORD *)v28 = v34;
                MiWritePteShadow(v28, v34);
                goto LABEL_69;
              }
              if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
                && (v34 & 1) != 0 )
              {
                v34 |= 0x8000000000000000uLL;
              }
            }
            *(_QWORD *)v28 = v34;
LABEL_69:
            LOBYTE(v34) = 17;
            MiUnmapPageInHyperSpaceWorker(v28, v34, 0x80000000LL);
            goto LABEL_70;
          }
          Process = (__int64)KeGetCurrentThread()->ApcState.Process;
          if ( (*(_DWORD *)(Process + 2172) & 0x1000) != 0 )
            v20 |= 0x8000000000000000uLL;
        }
        *v25 = v20;
        goto LABEL_32;
      }
    }
    else
    {
      v23 = 0x7FFFFFFFF8LL;
    }
    v24 = ((unsigned __int64)CurrentPrcb->HyperPte & 0xFFFFFFFFFFFFF000uLL)
        + (((__int64)CurrentPrcb->HyperPte & 0xFFF) << 12);
    v25 = (unsigned __int64 *)(((v24 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    goto LABEL_23;
  }
LABEL_70:
  v35 = *(_QWORD *)(a1 + 24);
  --*(_WORD *)(a1 + 32);
  v36 = (v35 >> 62) & 1;
  if ( *(_WORD *)(a1 + 32) )
  {
    v37 = *(_BYTE *)(a1 + 34);
    if ( (_DWORD)v36 )
    {
      v38 = v37 | 7;
    }
    else if ( (v37 & 0x10) != 0 )
    {
      v38 = v37 & 0xF8 | 3;
    }
    else
    {
      v38 = v37 & 0xF8 | 2;
    }
    *(_BYTE *)(a1 + 34) = v38;
    if ( (*(_DWORD *)(a1 + 16) & 0x400LL) == 0 )
    {
      if ( (unsigned int)MiGetPagingFileOffset(a1 + 16) )
        *(_BYTE *)(*(_QWORD *)(qword_140C4E648 + 8 * ((*(_QWORD *)(a1 + 40) >> 39) & 0x3FFLL)) + 675LL) = 1;
    }
    return 3LL;
  }
  else if ( (_DWORD)v36 )
  {
    v40 = *(_BYTE *)(a1 + 35);
    if ( (v40 & 0x10) != 0 )
      *(_BYTE *)(a1 + 35) = v40 & 0xEF;
    v41 = (*(_QWORD *)(a1 + 40) >> 39) & 0x3FFLL;
    v49 = *(_QWORD *)(a1 + 16);
    v42 = *(_QWORD *)(qword_140C4E648 + 8 * v41);
    if ( (v49 & 0x400) == 0 && ((v49 & 4) != 0 || (v49 & 2) != 0) )
    {
      v43 = MI_READ_PTE_LOCK_FREE(&v49);
      if ( v43 )
        MiReleasePageFileInfo(v42, v43, 0LL);
    }
    MiInsertPageInFreeOrZeroedList((a1 + 0x58000000000LL) / 48, 2);
    return 4LL;
  }
  else
  {
    v44 = *(_QWORD *)(a1 + 16);
    v45 = -9LL;
    if ( (v44 & 0x400) != 0 )
      v45 = -2049LL;
    *(_QWORD *)(a1 + 16) = v44 & v45;
    v46 = *(_BYTE *)(a1 + 34);
    if ( (v46 & 0x10) != 0 )
    {
      v47 = 136LL;
      if ( a2 != 1 )
        v47 = 8LL;
    }
    else
    {
      *(_BYTE *)(a1 + 34) = v46 & 0xF8 | 2;
      if ( a2 > 1 && (unsigned int)MiGetPfnPriority(a1) < 5 )
      {
        MiInsertProtectedStandbyPage(a2, a1);
        return 4LL;
      }
      v47 = 4LL;
    }
    MiInsertPageInList(a1, v47);
    return 4LL;
  }
}
