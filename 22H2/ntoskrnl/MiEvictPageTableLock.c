/*
 * XREFs of MiEvictPageTableLock @ 0x14028CCA0
 * Callers:
 *     MiTerminateWsle @ 0x1402B7440 (MiTerminateWsle.c)
 *     MiDeleteVa @ 0x1402B8110 (MiDeleteVa.c)
 *     MiDeleteNonPagedPoolPte @ 0x1402E9620 (MiDeleteNonPagedPoolPte.c)
 *     MiDeleteSystemPageTable @ 0x14030E4E0 (MiDeleteSystemPageTable.c)
 * Callees:
 *     MiLockPageTableInternal @ 0x14020EAB0 (MiLockPageTableInternal.c)
 *     MiUnlockNestedPageTableWritePte @ 0x14028CECC (MiUnlockNestedPageTableWritePte.c)
 *     MiGetUsedPtesHandle @ 0x14028D0E0 (MiGetUsedPtesHandle.c)
 *     MiIsPoolPteInUse @ 0x14028D1AC (MiIsPoolPteInUse.c)
 *     MiGetLeafVa @ 0x1402AD4F0 (MiGetLeafVa.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1402AE550 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1402C9180 (MiPteInShadowRange.c)
 *     MiUnlockPageTableInternal @ 0x1402DB460 (MiUnlockPageTableInternal.c)
 *     RtlCompareMemoryUlong @ 0x1404078B0 (RtlCompareMemoryUlong.c)
 */

__int64 __fastcall MiEvictPageTableLock(__int64 a1, unsigned __int64 a2, __int64 a3, char a4)
{
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rdx
  unsigned __int64 v13; // rbx
  __int64 v14; // rbx
  __int64 v15; // rax
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v17; // rax
  __int64 v18; // rdx

  MiLockPageTableInternal(a1, a2, 0LL);
  if ( (unsigned __int64)MiGetLeafVa(a2, v8, v9, v10) > 0x7FFFFFFEFFFFLL )
  {
    v13 = *(_QWORD *)a2;
    if ( (unsigned int)MiPteInShadowRange(a2, v11)
      && (MiFlags & 0xC00000) != 0
      && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
      && (v13 & 1) != 0
      && ((v13 & 0x20) == 0 || (v13 & 0x42) == 0) )
    {
      Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
      if ( Flink )
      {
        v17 = *((_QWORD *)&Flink->Flink + ((a2 >> 3) & 0x1FF));
        v18 = v13 | 0x20;
        if ( (v17 & 0x20) == 0 )
          v18 = v13;
        v13 = v18;
        if ( (v17 & 0x42) != 0 )
          v13 = v18 | 0x42;
      }
    }
    if ( (unsigned __int16)*(_DWORD *)(48 * ((v13 >> 12) & 0xFFFFFFFFFLL) - 0x57FFFFFFFE8LL) == 1
      && ((a4 & 1) == 0 || RtlCompareMemoryUlong((PVOID)((__int64)(a2 << 25) >> 16), 0x1000uLL, 0) == 4096) )
    {
      if ( (a4 & 2) == 0 )
        goto LABEL_3;
      v14 = (__int64)(a2 << 25) >> 16;
      while ( 1 )
      {
        v15 = MI_READ_PTE_LOCK_FREE(v14);
        if ( (unsigned int)MiIsPoolPteInUse(v15) )
          break;
        v14 += 8LL;
        if ( (v14 & 0xFFF) == 0 )
          goto LABEL_3;
      }
    }
  }
  else if ( (*(_DWORD *)(MiGetUsedPtesHandle((__int64)(a2 << 25) >> 16 << 25 >> 16) + 16) & 0x3FF0000) == 0 )
  {
LABEL_3:
    MiUnlockNestedPageTableWritePte(a1, a2, a3, 0LL);
    return 1LL;
  }
  MiUnlockPageTableInternal(a1, a2);
  return 0LL;
}
