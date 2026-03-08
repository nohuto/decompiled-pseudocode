/*
 * XREFs of MiCreateSystemPageTable @ 0x140348960
 * Callers:
 *     <none>
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x14031B450 (MI_READ_PTE_LOCK_FREE.c)
 *     MiFlushTbList @ 0x140323BC0 (MiFlushTbList.c)
 *     MiInitializeSystemPageTable @ 0x1403483AC (MiInitializeSystemPageTable.c)
 *     MiGetPageTablePages @ 0x140348AF8 (MiGetPageTablePages.c)
 *     MiMakeSystemLeavesNonZero @ 0x1403B9838 (MiMakeSystemLeavesNonZero.c)
 *     MiMakeLargePageTable @ 0x140634BEC (MiMakeLargePageTable.c)
 *     MiArePageContentsZero @ 0x14064AE74 (MiArePageContentsZero.c)
 */

__int64 __fastcall MiCreateSystemPageTable(__int64 a1, unsigned __int64 a2, int a3)
{
  __int64 v3; // rdi
  __int64 v5; // r14
  __int64 v7; // rax
  __int64 v8; // r12
  __int16 v9; // bx
  int PageTablePages; // edx
  _QWORD *v12; // [rsp+60h] [rbp+8h] BYREF
  __int64 v13; // [rsp+78h] [rbp+20h] BYREF

  v3 = *(_QWORD *)(a1 + 168);
  v12 = 0LL;
  v5 = a3;
  v7 = MI_READ_PTE_LOCK_FREE(a2);
  v13 = v7;
  v8 = v7 & 1;
  v9 = v7;
  if ( (v7 & 1) != 0
    && ((v7 & 0x80u) != 0LL
     || (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v13) >> 12) & 0xFFFFFFFFFFLL) != MiState[v5 + 2139]
     && (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v13) >> 12) & 0xFFFFFFFFFFLL) != MiState[v5 + 2135]
     && ((v9 & 0x800) != 0 || (v9 & 0x42) != 0))
    || (*(_DWORD *)(v3 + 128) & 0x80u) != 0 && (unsigned int)MiMakeLargePageTable(a1, a2, (unsigned int)v5) )
  {
    return 0LL;
  }
  PageTablePages = MiGetPageTablePages(v3, 1LL, (_DWORD)v5 == 0, &v12);
  if ( PageTablePages < 0 )
  {
    if ( PageTablePages == -1073741801
      && (*(_DWORD *)a1 & 2) != 0
      && *(_BYTE *)(a1 + 7) < 2u
      && KeGetCurrentThread()->Priority < 16
      && (*(_DWORD *)(v3 + 128) & 0x400) == 0 )
    {
      return 3LL;
    }
    else
    {
      *(_DWORD *)(v3 + 328) = PageTablePages;
      return 5LL;
    }
  }
  else
  {
    ++*(_QWORD *)(v3 + 112);
    if ( (MiFlags & 0x80u) != 0LL && (++dword_140C67BE0 & MmPageValidationFrequency) == 0 )
      MiArePageContentsZero(0xAAAAAAAAAAAAAAABuLL * ((__int64)(v12 + 0x44000000000LL) >> 4));
    MiInitializeSystemPageTable(a1, v5, a2, v12, v3);
    if ( (int)v5 <= ((*(unsigned __int8 *)(a1 + 4) >> 2) & 7) )
    {
      if ( (int)v5 > 1 )
        MiMakeSystemLeavesNonZero(a1, a2, (unsigned int)v5);
      return 0LL;
    }
    if ( v8 )
      MiFlushTbList((int *)(v3 + 144));
    return 2LL;
  }
}
