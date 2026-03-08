/*
 * XREFs of MiLockPoolCommitPageTable @ 0x14032FF9C
 * Callers:
 *     MiFillPoolCommitPageTable @ 0x14032F1F0 (MiFillPoolCommitPageTable.c)
 *     MiCommitPoolMemory @ 0x14032FC90 (MiCommitPoolMemory.c)
 * Callees:
 *     MiLockLowestValidPageTable @ 0x140225DB0 (MiLockLowestValidPageTable.c)
 *     MiFastLockLeafPageTable @ 0x140269C50 (MiFastLockLeafPageTable.c)
 *     MiUnlockPageTableInternal @ 0x140290620 (MiUnlockPageTableInternal.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14031B450 (MI_READ_PTE_LOCK_FREE.c)
 *     MiFillPteHierarchy @ 0x140333AE0 (MiFillPteHierarchy.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 */

__int64 __fastcall MiLockPoolCommitPageTable(__int64 a1, unsigned __int64 a2)
{
  __int64 v4; // r15
  unsigned __int64 v5; // rbp
  int v6; // eax
  __int64 v7; // rbx
  unsigned __int64 v8; // r8
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdi
  unsigned __int64 valid; // rax
  int v13; // esi
  char v14; // al
  _OWORD v15[2]; // [rsp+30h] [rbp-48h] BYREF
  unsigned __int64 v16; // [rsp+80h] [rbp+8h] BYREF

  v16 = 0LL;
  v4 = *(_QWORD *)(a1 + 48);
  v5 = (__int64)(a2 << 25) >> 16;
  v6 = MiFastLockLeafPageTable(v4, v5, 0);
  v7 = v6;
  if ( v6
    && (memset(v15, 0, sizeof(v15)),
        MiFillPteHierarchy(v5, v15),
        v8 = *((_QWORD *)v15 + v7),
        v9 = *((_QWORD *)v15 + (int)v7 - 1),
        v16 = v9,
        v8) )
  {
    v10 = v8;
    if ( (_DWORD)v7 == 1 )
      goto LABEL_4;
    v13 = v7;
    if ( (_DWORD)v7 != 2 )
    {
      LODWORD(v7) = 0;
      goto LABEL_14;
    }
  }
  else
  {
    valid = MiLockLowestValidPageTable(v4, a2, &v16);
    v9 = v16;
    v10 = valid;
    if ( v16 == a2 )
    {
      LODWORD(v7) = 1;
LABEL_4:
      if ( (*(_BYTE *)(a1 + 78) & 4) != 0 )
        KeBugCheckEx(0x1Au, 0x5301uLL, v5, 0LL, 0LL);
      goto LABEL_5;
    }
    if ( v16 != ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL )
    {
      LODWORD(v7) = 0;
      goto LABEL_13;
    }
    v13 = 2;
  }
  v14 = MI_READ_PTE_LOCK_FREE(v9);
  if ( (v14 & 1) != 0 )
  {
    if ( v14 < 0 )
      KeBugCheckEx(0x1Au, 0x5302uLL, v5, 0LL, 0LL);
    if ( (*(_BYTE *)(a1 + 78) & 4) != 0 )
      KeBugCheckEx(0x1Au, 0x5303uLL, v5, 0LL, 0LL);
  }
  LODWORD(v7) = (*(_BYTE *)(a1 + 78) & 4) != 0 ? v13 : 0;
  if ( !(_DWORD)v7 )
  {
LABEL_13:
    if ( !v10 )
      goto LABEL_5;
LABEL_14:
    MiUnlockPageTableInternal(v4, v10);
    v10 = 0LL;
  }
LABEL_5:
  *(_QWORD *)(a1 + 64) = v10;
  return (unsigned int)v7;
}
