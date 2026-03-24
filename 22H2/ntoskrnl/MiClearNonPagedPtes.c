/*
 * XREFs of MiClearNonPagedPtes @ 0x1402E9388
 * Callers:
 *     MmFreePoolMemory @ 0x14027AEC8 (MmFreePoolMemory.c)
 *     MiCommitPoolMemory @ 0x14028B8AC (MiCommitPoolMemory.c)
 *     MmFreeSecurePoolMemory @ 0x140544E48 (MmFreeSecurePoolMemory.c)
 * Callees:
 *     MiWalkPageTables @ 0x140209280 (MiWalkPageTables.c)
 *     MiFastLockLeafPageTable @ 0x14020E690 (MiFastLockLeafPageTable.c)
 *     MiUnlockWorkingSetShared @ 0x14020F750 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x140219C70 (MiLockWorkingSetShared.c)
 *     MiGetAnyMultiplexedVm @ 0x14027D77C (MiGetAnyMultiplexedVm.c)
 *     MiFillPteHierarchy @ 0x14028CAF0 (MiFillPteHierarchy.c)
 *     MiGetLeafVa @ 0x1402AD4F0 (MiGetLeafVa.c)
 *     MiPteInShadowRange @ 0x1402C9180 (MiPteInShadowRange.c)
 *     MiUnlockPageTableInternal @ 0x1402DB460 (MiUnlockPageTableInternal.c)
 *     MiDeleteNonPagedPoolPte @ 0x1402E9620 (MiDeleteNonPagedPoolPte.c)
 *     MiDeleteNonPagedPoolTail @ 0x1402E99A0 (MiDeleteNonPagedPoolTail.c)
 *     MiReturnPhysicalPoolPages @ 0x1402E9A84 (MiReturnPhysicalPoolPages.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     memset @ 0x140413800 (memset.c)
 *     MiLogNonPagedPoolReleaseEvent @ 0x140544B68 (MiLogNonPagedPoolReleaseEvent.c)
 */

__int64 __fastcall MiClearNonPagedPtes(ULONG_PTR LeafVa, __int64 a2, unsigned int a3, unsigned int a4)
{
  char v8; // r15
  char *AnyMultiplexedVm; // r12
  unsigned __int64 v10; // r13
  __int64 v11; // rdx
  __int64 v12; // r8
  _DWORD *v13; // r9
  __int64 v14; // r10
  unsigned __int64 v15; // rsi
  unsigned __int64 v16; // rdi
  __int64 v17; // r10
  unsigned __int64 v18; // rbx
  __int64 v19; // rax
  unsigned __int64 v20; // rbx
  __int64 v21; // rcx
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v24; // rax
  __int64 v25; // rdx
  _OWORD v26[2]; // [rsp+20h] [rbp-E0h] BYREF
  ULONG_PTR BugCheckParameter2[22]; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD v28[28]; // [rsp+F0h] [rbp-10h] BYREF

  memset(BugCheckParameter2, 0, sizeof(BugCheckParameter2));
  memset(v28, 0, sizeof(v28));
  v8 = 0;
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(5);
  BugCheckParameter2[4] = LeafVa;
  LOWORD(BugCheckParameter2[0]) = 2183;
  v28[25] = __PAIR64__(a4, a3);
  BugCheckParameter2[19] = (ULONG_PTR)MiDeleteNonPagedPoolPte;
  v10 = (a2 << 12) + LeafVa - 1;
  BugCheckParameter2[5] = v10;
  BugCheckParameter2[20] = (ULONG_PTR)MiDeleteNonPagedPoolTail;
  BugCheckParameter2[21] = (ULONG_PTR)v28;
  v28[1] = 20LL;
  LODWORD(v28[0]) = v11;
  WORD2(v28[0]) = v11;
  v28[2] = v11;
  v28[3] = v11;
  BugCheckParameter2[3] = (ULONG_PTR)AnyMultiplexedVm;
  BYTE6(BugCheckParameter2[0]) = MiLockWorkingSetShared((__int64)AnyMultiplexedVm, v11, v12, v13);
  if ( LeafVa <= v10 )
  {
    do
    {
      memset(v26, 0, sizeof(v26));
      if ( !(unsigned int)MiFastLockLeafPageTable((__int64)AnyMultiplexedVm, LeafVa, 0) )
        break;
      MiFillPteHierarchy(LeafVa, (unsigned __int64 *)v26);
      v15 = *((_QWORD *)v26 + v14);
      v16 = *((_QWORD *)v26 + (int)v14 - 1);
      MiFillPteHierarchy(v10, (unsigned __int64 *)v26);
      v18 = *((_QWORD *)v26 + v17);
      if ( v18 > (v16 & 0xFFFFFFFFFFFFF000uLL | 0xFF8) )
        v18 = v16 & 0xFFFFFFFFFFFFF000uLL | 0xFF8;
      while ( v16 <= v18 )
      {
        MiDeleteNonPagedPoolPte((ULONG_PTR)BugCheckParameter2);
        v19 = (unsigned int)BYTE3(BugCheckParameter2[0]) + 1;
        BYTE3(BugCheckParameter2[0]) = 0;
        v16 += 8 * v19;
      }
      MiDeleteNonPagedPoolTail(BugCheckParameter2);
      v20 = *(_QWORD *)v15;
      if ( MiPteInShadowRange(v15)
        && (MiFlags & 0xC00000) != 0
        && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
        && (v20 & 1) != 0
        && ((v20 & 0x20) == 0 || (v20 & 0x42) == 0) )
      {
        Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( Flink )
        {
          v24 = *((_QWORD *)&Flink->Flink + ((v15 >> 3) & 0x1FF));
          v25 = v20 | 0x20;
          if ( (v24 & 0x20) == 0 )
            v25 = v20;
          v20 = v25;
          if ( (v24 & 0x42) != 0 )
            v20 = v25 | 0x42;
        }
      }
      if ( (*(_QWORD *)(48 * ((v20 >> 12) & 0xFFFFFFFFFLL) - 0x57FFFFFFFE8LL) & 0x3FFFFFFFFFFFFFFFLL) == 1 )
        v8 = 1;
      MiUnlockPageTableInternal((__int64)AnyMultiplexedVm, v15);
      LeafVa = MiGetLeafVa(v16);
    }
    while ( LeafVa <= v10 );
    if ( !v8 )
    {
      if ( LeafVa > v10 )
        goto LABEL_14;
      BugCheckParameter2[4] = LeafVa;
    }
    MiWalkPageTables((__int64)BugCheckParameter2);
  }
LABEL_14:
  MiUnlockWorkingSetShared((__int64)AnyMultiplexedVm, BYTE6(BugCheckParameter2[0]));
  v21 = v28[23];
  if ( v28[23] )
  {
    if ( (BYTE4(PerfGlobalGroupMask) & 1) != 0 )
    {
      MiLogNonPagedPoolReleaseEvent();
      v21 = v28[23];
    }
    MiReturnPhysicalPoolPages(v21, 2LL);
  }
  if ( v28[24] )
    MiReturnPhysicalPoolPages(v28[24], 3LL);
  return HIDWORD(v28[26]);
}
