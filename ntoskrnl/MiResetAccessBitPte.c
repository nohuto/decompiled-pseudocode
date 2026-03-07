__int64 __fastcall MiResetAccessBitPte(__int64 a1, unsigned __int64 a2, int a3)
{
  __int64 v3; // r14
  __int64 v5; // r15
  __int64 v7; // r9
  __int64 v10; // rbp
  __int64 v11; // r8
  __int64 v12; // rcx
  unsigned __int64 v13; // rsi
  unsigned __int64 v14; // r8
  __int64 v15; // rcx
  unsigned int v16; // edx
  int v17; // r12d
  __int64 v18; // rbx
  unsigned __int64 v19; // rdx
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v21; // rax
  __int64 v22; // rdx
  struct _LIST_ENTRY *v23; // rax
  __int64 v24; // rax
  char v25; // r8^7
  __int64 v26; // [rsp+60h] [rbp+8h] BYREF

  v3 = *(_QWORD *)(a1 + 168);
  v5 = *(_QWORD *)(a1 + 24);
  v7 = *(_QWORD *)a2;
  if ( a2 >= 0xFFFFF6FB7DBED000uLL
    && a2 <= 0xFFFFF6FB7DBED7F8uLL
    && (MiFlags & 0x600000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v7 & 1) != 0
    && ((v7 & 0x20) == 0 || (v7 & 0x42) == 0) )
  {
    Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( Flink )
    {
      v21 = *((_QWORD *)&Flink->Flink + ((a2 >> 3) & 0x1FF));
      v22 = v7 | 0x20;
      if ( (v21 & 0x20) == 0 )
        v22 = v7;
      v7 = v22;
      if ( (v21 & 0x42) != 0 )
        v7 = v22 | 0x42;
    }
  }
  v26 = v7;
  if ( (v7 & 0x20) == 0 )
    return 0LL;
  v10 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v26) >> 12) & 0xFFFFFFFFFFLL)
      - 0x220000000000LL;
  if ( a3 )
  {
    if ( (*(_QWORD *)(v10 + 24) & 0x3FFFFFFFFFFFFFFFLL) != 1 || MiIsPageTableLocked(v5, a2) )
      return 0LL;
  }
  if ( !_bittest64((const signed __int64 *)(v10 + 40), 0x28u) )
  {
    v11 = *(_QWORD *)(v10 + 8);
    if ( v11 > 0 )
      MiDemoteCombinedPte(v5, a2, v11 | 0x8000000000000000uLL);
  }
  v12 = *(_QWORD *)(v3 + 16);
  v13 = (__int64)(a2 << 25) >> 16;
  if ( !v12 || v13 > 0x7FFFFFFEFFFFLL )
  {
    if ( v13 < 0xFFFFF68000000000uLL || v13 > 0xFFFFF6FFFFFFFFFFuLL )
    {
      v14 = ((v13 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v15 = *(_QWORD *)v14;
      if ( v14 >= 0xFFFFF6FB7DBED000uLL
        && v14 <= 0xFFFFF6FB7DBED7F8uLL
        && (MiFlags & 0x600000) != 0
        && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
        && (v15 & 1) != 0
        && ((v15 & 0x20) == 0 || (v15 & 0x42) == 0) )
      {
        v23 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( v23 )
        {
          v24 = *((_QWORD *)&v23->Flink + ((v14 >> 3) & 0x1FF));
          v25 = HIBYTE(*(_QWORD *)v14);
          if ( (v24 & 0x20) == 0 )
            v25 = HIBYTE(v15);
          HIBYTE(v15) = v25;
          if ( (v24 & 0x42) != 0 )
            HIBYTE(v15) = v25;
        }
      }
      v16 = HIBYTE(v15) & 0xF;
    }
    else
    {
      v16 = (*(_DWORD *)(48
                       * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(((v13 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) >> 12) & 0xFFFFFFFFFFLL)
                       - 0x220000000000LL) >> 1) & 7;
    }
    if ( v16 == 7 && (unsigned int)MiGetPfnPriority(v10) < dword_140C67C6C )
    {
      v17 = 0;
    }
    else
    {
      v17 = 1;
      if ( v16 && v16 < 7 )
        MiSetVaAgeList(v5, (__int64)(a2 << 25) >> 16, 1u, 0LL);
    }
    v18 = *(_QWORD *)(v3 + 8);
    if ( !(unsigned int)MiClearPteAccessed(v5, v10, a2, v18, *(_DWORD *)v3, 0) )
      return 0LL;
    if ( v17 && *(_DWORD *)v3 )
    {
      if ( v18 )
      {
LABEL_18:
        v19 = qword_140C65810;
        if ( (*(_BYTE *)(v18 + 4) & 2) == 0
          && *(_DWORD *)v18 == 1
          && KeGetCurrentThread()->ApcState.Process[2].Affinity.StaticBitmap[5] )
        {
          v19 = -1LL;
        }
        if ( (*(_DWORD *)(v18 + 12) >= *(_DWORD *)(v18 + 8) || *(_BYTE *)(v18 + 5) || *(_QWORD *)(v18 + 16) > v19)
          && v19 >= 0x400
          && !*(_BYTE *)(v18 + 5) )
        {
          MiFlushTbList((int *)v18);
        }
        return 0LL;
      }
      MiLogPageAccess(v5, a2);
    }
    else if ( v18 )
    {
      goto LABEL_18;
    }
    return 0LL;
  }
  if ( !(unsigned int)MiInsertVmAccessedEntry(v12, (__int64)(a2 << 25) >> 16) )
    return 0LL;
  return MiResetAccessBitsTail(a1);
}
