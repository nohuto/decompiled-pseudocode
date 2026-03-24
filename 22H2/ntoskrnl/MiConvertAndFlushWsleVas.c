/*
 * XREFs of MiConvertAndFlushWsleVas @ 0x140339AFC
 * Callers:
 *     MiEliminateZeroPages @ 0x1406BF340 (MiEliminateZeroPages.c)
 * Callees:
 *     MiUnlockWorkingSetShared @ 0x14020F750 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x140219C70 (MiLockWorkingSetShared.c)
 *     MiLockLowestValidPageTable @ 0x140285C40 (MiLockLowestValidPageTable.c)
 *     MiFreeWsleList @ 0x1402A79B0 (MiFreeWsleList.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1402AE550 (MI_READ_PTE_LOCK_FREE.c)
 *     MiUnlockPageTableInternal @ 0x1402DB460 (MiUnlockPageTableInternal.c)
 *     MiGetWsleContents @ 0x140339D50 (MiGetWsleContents.c)
 */

void __fastcall MiConvertAndFlushWsleVas(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  unsigned __int64 v6; // rbx
  __int64 v7; // rbp
  unsigned __int8 v8; // r15
  unsigned __int64 valid; // r14
  __int64 v10; // rbx
  unsigned __int64 v11; // r12
  __int64 v12; // rcx
  unsigned __int64 v13; // rax
  __int64 v14; // [rsp+70h] [rbp+18h] BYREF
  unsigned __int64 v15; // [rsp+78h] [rbp+20h]

  if ( *(_DWORD *)(a2 + 12) )
  {
    v6 = *(_QWORD *)(a2 + 24);
    v7 = 0LL;
    v8 = MiLockWorkingSetShared(a1, a2, a3, a4);
    valid = MiLockLowestValidPageTable(a1, ((v6 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, (unsigned __int64 *)&v14);
    v15 = valid;
    if ( valid == ((v6 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL )
    {
      v10 = 0LL;
      if ( *(_DWORD *)(a2 + 12) )
      {
        do
        {
          v11 = *(_QWORD *)(a2 + 8 * v10 + 24);
          v14 = MI_READ_PTE_LOCK_FREE(((v11 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
          if ( (v14 & 1) != 0 && (MiGetWsleContents(v12, v11) & 0xF) != 0xA )
          {
            v13 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v14);
            if ( (*(_QWORD *)(48 * ((v13 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL + 40) & 0x1000000000LL) != 0
              || *(__int64 *)(48 * ((v13 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL + 8) <= 0 )
            {
              *(_QWORD *)(a2 + 8 * v7 + 24) = *(_QWORD *)(a2 + 8 * v10 + 24);
              v7 = (unsigned int)(v7 + 1);
            }
          }
          v10 = (unsigned int)(v10 + 1);
        }
        while ( (unsigned int)v10 < *(_DWORD *)(a2 + 12) );
        valid = v15;
      }
      if ( (_DWORD)v7 )
      {
        *(_DWORD *)(a2 + 12) = v7;
        MiFreeWsleList(a1, a2, 0);
      }
      else
      {
        *(_DWORD *)(a2 + 12) = 0;
      }
    }
    else
    {
      *(_DWORD *)(a2 + 12) = 0;
    }
    MiUnlockPageTableInternal(a1, valid);
    MiUnlockWorkingSetShared(a1, v8);
  }
}
