__int64 __fastcall MiClearNonPagedPtes(unsigned __int64 LeafVa, __int64 a2, unsigned int a3, unsigned int a4)
{
  unsigned int v7; // esi
  char v8; // r12
  __int64 AnyMultiplexedVm; // r15
  unsigned __int64 v10; // r13
  __int64 v11; // rdx
  __int64 v12; // rdx
  __int64 v13; // r10
  unsigned __int64 v14; // rbx
  __int64 v15; // r10
  unsigned __int64 v16; // rdi
  __int64 v17; // rax
  __int64 v18; // rcx
  char v20; // [rsp+20h] [rbp-E0h]
  __int64 v21; // [rsp+28h] [rbp-D8h]
  _OWORD v22[2]; // [rsp+30h] [rbp-D0h] BYREF
  ULONG_PTR BugCheckParameter2[22]; // [rsp+50h] [rbp-B0h] BYREF
  _QWORD v24[28]; // [rsp+100h] [rbp+0h] BYREF

  v20 = a4;
  v7 = a4;
  memset(BugCheckParameter2, 0, sizeof(BugCheckParameter2));
  memset(v24, 0, sizeof(v24));
  v8 = 0;
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(5LL, 0LL);
  LODWORD(BugCheckParameter2[0]) = 2183;
  BugCheckParameter2[19] = (ULONG_PTR)MiDeleteNonPagedPoolPte;
  BugCheckParameter2[4] = LeafVa;
  BugCheckParameter2[20] = (ULONG_PTR)MiDeleteNonPagedPoolTail;
  v10 = (a2 << 12) + LeafVa - 1;
  BugCheckParameter2[5] = v10;
  BugCheckParameter2[21] = (ULONG_PTR)v24;
  v24[25] = __PAIR64__(v7, a3);
  v24[1] = 20LL;
  LODWORD(v24[0]) = v11;
  WORD2(v24[0]) = v11;
  v24[2] = v11;
  v24[3] = v11;
  BugCheckParameter2[3] = AnyMultiplexedVm;
  HIBYTE(BugCheckParameter2[0]) = MiLockWorkingSetShared(AnyMultiplexedVm);
  if ( LeafVa <= v10 )
  {
    do
    {
      memset(v22, 0, sizeof(v22));
      if ( !(unsigned int)MiFastLockLeafPageTable(AnyMultiplexedVm, LeafVa, 0LL) )
        break;
      MiFillPteHierarchy(LeafVa, v22);
      v21 = *((_QWORD *)v22 + v13);
      v14 = *((_QWORD *)v22 + (int)v13 - 1);
      MiFillPteHierarchy(v10, v22);
      v16 = *((_QWORD *)v22 + v15);
      if ( v16 > (v14 & 0xFFFFFFFFFFFFF000uLL | 0xFF8) )
        v16 = v14 & 0xFFFFFFFFFFFFF000uLL | 0xFF8;
      while ( v14 <= v16 )
      {
        MiDeleteNonPagedPoolPte((ULONG_PTR)BugCheckParameter2);
        v17 = (unsigned int)(LODWORD(BugCheckParameter2[1]) + 1);
        LODWORD(BugCheckParameter2[1]) = 0;
        v14 += 8 * v17;
      }
      MiDeleteNonPagedPoolTail(BugCheckParameter2);
      if ( (*(_QWORD *)(48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(v21) >> 12) & 0xFFFFFFFFFFLL) - 0x21FFFFFFFFE8LL) & 0x3FFFFFFFFFFFFFFFLL) == 1 )
        v8 = 1;
      MiUnlockPageTableInternal(AnyMultiplexedVm, v21);
      LeafVa = MiGetLeafVa(v14);
    }
    while ( LeafVa <= v10 );
    LOBYTE(v7) = v20;
    if ( !v8 )
    {
      if ( LeafVa > v10 )
        goto LABEL_13;
      BugCheckParameter2[4] = LeafVa;
    }
    MiWalkPageTables(BugCheckParameter2);
  }
LABEL_13:
  LOBYTE(v12) = HIBYTE(BugCheckParameter2[0]);
  MiUnlockWorkingSetShared(AnyMultiplexedVm, v12);
  v18 = v24[23];
  if ( v24[23] )
  {
    if ( (BYTE4(PerfGlobalGroupMask) & 1) != 0 )
    {
      MiLogNonPagedPoolReleaseEvent();
      v18 = v24[23];
    }
    MiReturnPhysicalPoolPages(v18, 2LL);
  }
  if ( v24[24] )
    MiReturnPhysicalPoolPages(v24[24], (2 * (v7 & 2)) | 3);
  return HIDWORD(v24[26]);
}
