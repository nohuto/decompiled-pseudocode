/*
 * XREFs of MiPfnShareCountIsZero @ 0x14032BF50
 * Callers:
 *     MiDeletePteList @ 0x140276AC0 (MiDeletePteList.c)
 *     MiDeletePteRun @ 0x140279760 (MiDeletePteRun.c)
 *     MiDeleteBatch @ 0x14027A5E0 (MiDeleteBatch.c)
 *     MmUnlockPages @ 0x14027C0C0 (MmUnlockPages.c)
 *     MiDeleteTransitionPte @ 0x1402833F0 (MiDeleteTransitionPte.c)
 *     MiReduceShareCount @ 0x1402EADCC (MiReduceShareCount.c)
 *     MiDecrementShareCount @ 0x14032AE40 (MiDecrementShareCount.c)
 *     MiDeleteValidSystemPage @ 0x14032AEA0 (MiDeleteValidSystemPage.c)
 *     MiWsleFree @ 0x14032BA30 (MiWsleFree.c)
 *     MiUnlockPageTableCharges @ 0x140345720 (MiUnlockPageTableCharges.c)
 * Callees:
 *     MiReleasePageFileInfo @ 0x14020B300 (MiReleasePageFileInfo.c)
 *     MiMakeValidPte @ 0x140273920 (MiMakeValidPte.c)
 *     MiGetUltraMapping @ 0x140276080 (MiGetUltraMapping.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x140277CE0 (MiInsertPageInFreeOrZeroedList.c)
 *     MiGetPfnPriority @ 0x14028A3F8 (MiGetPfnPriority.c)
 *     MiGetPagingFileOffset @ 0x14029EA80 (MiGetPagingFileOffset.c)
 *     MiInsertProtectedStandbyPage @ 0x1402DFCF4 (MiInsertProtectedStandbyPage.c)
 *     MiInsertPageInList @ 0x140318540 (MiInsertPageInList.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14031B450 (MI_READ_PTE_LOCK_FREE.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 */

__int64 __fastcall MiPfnShareCountIsZero(ULONG_PTR a1, unsigned __int64 a2)
{
  __int64 *v2; // r14
  unsigned __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rax
  char v8; // al
  unsigned int v9; // edx
  unsigned __int64 v10; // rax
  unsigned __int64 UltraMapping; // r8
  unsigned __int64 v13; // rdi
  _QWORD *v14; // r12
  __int64 v15; // r11
  __int64 v16; // r15
  int v17; // r8d
  __int64 v18; // rdx
  int v19; // eax
  unsigned __int64 ValidPte; // rbx
  unsigned __int64 *MmInternal; // rbp
  unsigned __int64 *v22; // rcx
  __int64 v23; // r9
  __int64 v24; // rax
  char v25; // al
  __int64 v26; // rbx
  char v27; // al
  char v28; // al
  __int64 v29; // [rsp+70h] [rbp+8h]
  __int64 v30; // [rsp+80h] [rbp+18h] BYREF

  v2 = (__int64 *)(a1 + 16);
  if ( *(__int64 *)(a1 + 40) < 0 )
  {
    UltraMapping = 0LL;
    v13 = (unsigned __int64)*v2 >> 5;
    v14 = (_QWORD *)a1;
    v15 = 0LL;
    v29 = 0LL;
    do
    {
      v16 = ((unsigned int)v14[1] >> 3) & 0x1FF;
      if ( !UltraMapping )
      {
        v17 = 4;
        v18 = v14[5] & 0xFFFFFFFFFFLL;
        v19 = *(unsigned __int8 *)(48 * v18 - 0x220000000000LL + 34) >> 6;
        if ( !v19 || v19 == 3 )
        {
          v17 = 12;
        }
        else if ( v19 == 2 )
        {
          v17 = 28;
        }
        ValidPte = MiMakeValidPte(0LL, v18, v17 | 0xA0000000);
        MmInternal = (unsigned __int64 *)KeGetCurrentPrcb()->MmInternal;
        UltraMapping = MiGetUltraMapping(MmInternal + 1556, 3u, 1LL, 0);
        v15 = v29;
        v22 = (unsigned __int64 *)(((UltraMapping >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
        MmInternal[1543] = (unsigned __int64)v22;
        *v22 = ValidPte;
      }
      v23 = (*(_QWORD *)(UltraMapping + 8 * v16) >> 12) & 0xFFFFFFFFFFLL;
      if ( (_QWORD *)(48 * v23 - 0x220000000000LL) != v14 )
        KeBugCheckEx(
          0x4Eu,
          6uLL,
          0xAAAAAAAAAAAAAAABuLL * ((__int64)(v14 + 0x44000000000LL) >> 4),
          v16 + UltraMapping,
          *(_QWORD *)(UltraMapping + 8 * v16));
      v24 = 32 * ((v23 << 7) | v13 & 0x1F | 0x40);
      if ( qword_140C657C0 )
      {
        if ( (v24 & qword_140C657C0) != 0 )
          v24 |= 0x10uLL;
        else
          v24 |= qword_140C657C0;
      }
      *(_QWORD *)(UltraMapping + 8 * v16) = v24;
      v29 = ++v15;
      if ( v15 == 1 )
        break;
      v14 = (_QWORD *)(48 * (*v14 & 0xFFFFFFFFFFLL) - 0x220000000000LL);
    }
    while ( !v15 );
    *((_QWORD *)KeGetCurrentPrcb()->MmInternal + 1543) = 0LL;
    *(_QWORD *)(((UltraMapping >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) = ZeroPte;
  }
  v5 = *(_QWORD *)(a1 + 24);
  --*(_WORD *)(a1 + 32);
  v6 = (v5 >> 62) & 1;
  if ( *(_WORD *)(a1 + 32) )
  {
    v27 = *(_BYTE *)(a1 + 34);
    if ( (_DWORD)v6 )
    {
      v28 = v27 | 7;
    }
    else if ( (v27 & 0x10) != 0 )
    {
      v28 = v27 & 0xF8 | 3;
    }
    else if ( (v27 & 8) != 0 )
    {
      v2 = (__int64 *)(a1 + 16);
      v28 = v27 & 0xF8 | 3;
    }
    else
    {
      v28 = v27 & 0xF8 | 2;
    }
    *(_BYTE *)(a1 + 34) = v28;
    if ( (*(_DWORD *)v2 & 0x400LL) == 0 && (unsigned int)MiGetPagingFileOffset(v2) )
      *(_BYTE *)(*(_QWORD *)(qword_140C67048 + 8 * ((*(_QWORD *)(a1 + 40) >> 43) & 0x3FFLL)) + 715LL) = 1;
    return 3LL;
  }
  else
  {
    if ( (_DWORD)v6 )
    {
      v25 = *(_BYTE *)(a1 + 35);
      if ( (v25 & 0x10) != 0 )
        *(_BYTE *)(a1 + 35) = v25 & 0xEF;
      v26 = *(_QWORD *)(qword_140C67048 + 8 * ((*(_QWORD *)(a1 + 40) >> 43) & 0x3FFLL));
      v30 = *v2;
      if ( (v30 & 0x400) == 0 && ((v30 & 4) != 0 || (v30 & 2) != 0) )
      {
        v10 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v30);
        if ( v10 )
          MiReleasePageFileInfo(v26, v10, 0);
      }
      MiInsertPageInFreeOrZeroedList(0xAAAAAAAAAAAAAAABuLL * ((__int64)(a1 + 0x220000000000LL) >> 4), 2);
    }
    else
    {
      v7 = -9LL;
      if ( (*v2 & 0x400) != 0 )
        v7 = -2049LL;
      *v2 &= v7;
      v8 = *(_BYTE *)(a1 + 34);
      if ( (v8 & 0x10) != 0 )
      {
        v9 = 136;
        if ( a2 != 1 )
          v9 = 8;
        MiInsertPageInList(a1, v9);
      }
      else
      {
        *(_BYTE *)(a1 + 34) = v8 & 0xF8 | 2;
        if ( a2 <= 1 || (unsigned int)MiGetPfnPriority(a1) >= 5 )
          MiInsertPageInList(a1, 4u);
        else
          MiInsertProtectedStandbyPage(a2, a1);
      }
    }
    return 4LL;
  }
}
