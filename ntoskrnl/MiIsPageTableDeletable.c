/*
 * XREFs of MiIsPageTableDeletable @ 0x140346AB4
 * Callers:
 *     MiDeleteEmptyPageTable @ 0x1402EBB20 (MiDeleteEmptyPageTable.c)
 *     MiDeleteVa @ 0x140324900 (MiDeleteVa.c)
 * Callees:
 *     MiLockPageTableInternal @ 0x14026A0D0 (MiLockPageTableInternal.c)
 *     MiUnlockPageTableInternal @ 0x140290620 (MiUnlockPageTableInternal.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14031B450 (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetLeafVa @ 0x140346C50 (MiGetLeafVa.c)
 *     MiGetUsedPtesHandle @ 0x140346CA0 (MiGetUsedPtesHandle.c)
 */

_BOOL8 __fastcall MiIsPageTableDeletable(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rsi
  __int64 v4; // r14
  unsigned __int64 v5; // rbx
  __int64 v6; // r9
  unsigned __int64 v8; // rcx
  int v9; // ebp
  __int64 v10; // rax
  __int64 v11; // [rsp+40h] [rbp+8h] BYREF

  v2 = a2;
  v4 = *(_QWORD *)(a1 + 24);
  v5 = (__int64)(a2 << 25) >> 16;
  if ( (unsigned __int64)MiGetLeafVa(v5) <= 0x7FFFFFFEFFFFLL )
    return (*(_DWORD *)(MiGetUsedPtesHandle((__int64)((v5 << 25) - v6) >> 16) + 16) & 0x3FF0000) == 0;
  v11 = MI_READ_PTE_LOCK_FREE(v2);
  v8 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v11) >> 12) & 0xFFFFFFFFFFLL)
     - 0x220000000000LL;
  if ( (*(_BYTE *)(v4 + 184) & 7) == 1 && v2 >= 0xFFFFF6FB7DBED000uLL && v2 <= 0xFFFFF6FB7DBEDFFFuLL )
  {
    if ( (*(_QWORD *)(v8 + 24) & 0x3FFFFFFFFFFFFFFFLL) != 2 )
      return 0LL;
    if ( (*(_DWORD *)a1 & 4) != 0 )
      MiLockPageTableInternal(v4, v2, 0);
    else
      v2 = 0LL;
    v9 = 1;
    while ( 1 )
    {
      v10 = MI_READ_PTE_LOCK_FREE(v5);
      if ( v10 )
      {
        if ( (v10 & 1) == 0 )
          break;
      }
      v5 += 8LL;
      if ( (v5 & 0xFFF) == 0 )
        goto LABEL_4;
    }
    v9 = 0;
LABEL_4:
    if ( v2 )
      MiUnlockPageTableInternal(v4, v2);
    return v9 != 0;
  }
  return (*(_QWORD *)(v8 + 24) & 0x3FFFFFFFFFFFFFFFLL) == 1;
}
