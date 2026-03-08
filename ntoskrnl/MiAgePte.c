/*
 * XREFs of MiAgePte @ 0x1403260A0
 * Callers:
 *     <none>
 * Callees:
 *     MiDemoteCombinedPte @ 0x14029DF88 (MiDemoteCombinedPte.c)
 *     MiAgeWorkingSetTail @ 0x1402C9E50 (MiAgeWorkingSetTail.c)
 *     MiIsPageTableLocked @ 0x1402F2A4C (MiIsPageTableLocked.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14031B450 (MI_READ_PTE_LOCK_FREE.c)
 *     MiAgePteWorker @ 0x140326530 (MiAgePteWorker.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x140350400 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     KeYieldProcessorEx @ 0x1403512B0 (KeYieldProcessorEx.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140462ED8 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     MiInsertVmAccessedEntry @ 0x140463768 (MiInsertVmAccessedEntry.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x140608CDC (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

__int64 __fastcall MiAgePte(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // r13
  unsigned int v4; // esi
  __int64 v5; // rdi
  __int64 v7; // r14
  unsigned __int64 v8; // r14
  unsigned __int64 v9; // r15
  unsigned __int64 v10; // rbx
  unsigned __int64 v11; // rbp
  __int64 v12; // rcx
  __int64 v13; // r8
  int v14; // ebx
  __int64 v15; // rcx
  int v16; // r8d
  unsigned __int64 v18; // rbx
  unsigned __int64 v19; // rcx
  LONG *v20; // rbp
  unsigned __int64 v21; // rbx
  volatile signed __int32 *v22; // r15
  __int64 v23; // r8
  __int64 v24; // r15
  unsigned __int64 v25; // rcx
  unsigned __int64 v26; // rcx
  unsigned __int64 v27; // rcx
  unsigned __int64 i; // r8
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v30; // rax
  unsigned int v31; // [rsp+30h] [rbp-68h]
  int v32; // [rsp+38h] [rbp-60h]
  _QWORD *v33; // [rsp+40h] [rbp-58h]
  __int64 v34; // [rsp+48h] [rbp-50h]
  unsigned __int64 v35[9]; // [rsp+50h] [rbp-48h] BYREF
  void *retaddr; // [rsp+98h] [rbp+0h]
  __int64 v38; // [rsp+B8h] [rbp+20h] BYREF

  v3 = *(_QWORD *)(a1 + 24);
  v4 = 0;
  v5 = *(_QWORD *)(a1 + 168);
  v7 = a2;
  v35[0] = 0LL;
  v33 = *(_QWORD **)(v3 + 16);
  if ( *(_BYTE *)(v5 + 6) )
  {
    *(_BYTE *)(v5 + 6) = 0;
    v18 = *(_QWORD *)(v3 + 144);
    v33 = *(_QWORD **)(v3 + 16);
    v19 = v33[4];
    if ( v18 <= v19 )
      return 4LL;
    v20 = &dword_140C69E40;
    v21 = v18 - v19;
    v31 = *(_DWORD *)(v5 + 12);
    v32 = *(_DWORD *)v5;
    v34 = *(_QWORD *)(v3 + 16);
    v22 = (*(_BYTE *)(v3 + 184) & 7) == 2 ? &dword_140C69E40 : (volatile signed __int32 *)(v3 + 256);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      LOBYTE(a2) = -1;
      ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v22, a2);
    }
    else
    {
      LODWORD(v38) = 0;
      if ( _interlockedbittestandset(v22, 0x1Fu) )
        LODWORD(v38) = ExpWaitForSpinLockExclusiveAndAcquire(v22);
      while ( (*v22 & 0xBFFFFFFF) != 0x80000000 )
      {
        if ( (*v22 & 0x40000000) == 0 )
          _InterlockedOr(v22, 0x40000000u);
        KeYieldProcessorEx(&v38);
      }
    }
    v23 = v31;
    if ( (v32 & 2) != 0 )
    {
      v24 = *(unsigned int *)(v34 + 24);
      v26 = v24 + v21;
      if ( v31 == 10LL )
        v27 = v26 % 0xA;
      else
        v27 = v26 % v31;
      *(_DWORD *)(v34 + 24) = v27;
    }
    else
    {
      v24 = *(unsigned int *)(v34 + 28);
      *(_DWORD *)(v34 + 28) = (v24 + v21) % v31;
    }
    if ( (*(_BYTE *)(v3 + 184) & 7) != 2 )
      v20 = (LONG *)(v3 + 256);
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    {
      ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v20, retaddr);
      v23 = v31;
    }
    else
    {
      *v20 = 0;
    }
    if ( v24 + v21 < v21 )
      v24 = 0LL;
    v25 = v23 * (v24 + v21) / 0x3E8;
    if ( v25 > v21 )
      v25 = v21 * v23 / 0x3E8;
    *(_QWORD *)(v5 + 48) = v25;
    if ( *(_QWORD *)(v5 + 40) >= v25 )
      return 4LL;
  }
  v38 = 0LL;
  v8 = v7 << 25 >> 16;
  v9 = ((v8 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v10 = *(_QWORD *)v9;
  if ( v9 >= 0xFFFFF6FB7DBED000uLL
    && v9 <= 0xFFFFF6FB7DBED7F8uLL
    && (MiFlags & 0x600000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v10 & 1) != 0
    && ((v10 & 0x20) == 0 || (v10 & 0x42) == 0) )
  {
    Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( Flink )
    {
      v30 = *((_QWORD *)&Flink->Flink + ((v9 >> 3) & 0x1FF));
      if ( (v30 & 0x20) != 0 )
        v10 |= 0x20uLL;
      if ( (v30 & 0x42) != 0 )
        v10 |= 0x42uLL;
    }
  }
  v35[0] = v10;
  v11 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)v35) >> 12) & 0xFFFFFFFFFFLL)
      - 0x220000000000LL;
  if ( a3 )
  {
    v12 = (__int64)((v9 << 25) - v38 + 0x10000000) >> 16;
    for ( i = ((v12 << 25) - v38) >> 16; i >= 0xFFFFF68000000000uLL; i = (__int64)((i << 25) - v38) >> 16 )
    {
      if ( i > 0xFFFFF6FFFFFFFFFFuLL )
        break;
      v12 = i;
    }
  }
  else
  {
    v12 = v9 + 8;
  }
  if ( (*(_DWORD *)v5 & 2) != 0 )
    v33[2] = v12;
  else
    v33[1] = v12;
  if ( a3
    && ((*(_QWORD *)(v11 + 24) & 0x3FFFFFFFFFFFFFFFLL) != 1
     || MiIsPageTableLocked(v3, ((v8 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL)) )
  {
    return 0LL;
  }
  if ( !_bittest64((const signed __int64 *)(v11 + 40), 0x28u) )
  {
    v13 = *(_QWORD *)(v11 + 8);
    if ( v13 > 0 )
    {
      if ( (unsigned int)MiDemoteCombinedPte(
                           v3,
                           ((v8 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL,
                           v13 | 0x8000000000000000uLL) )
        v10 = MI_READ_PTE_LOCK_FREE(((v8 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    }
  }
  v14 = (v10 >> 5) & 1;
  if ( v14 && (v15 = *(_QWORD *)(v5 + 248)) != 0 && v8 <= 0x7FFFFFFEFFFFLL )
  {
    if ( (unsigned int)MiInsertVmAccessedEntry(v15, v8) )
      return MiAgeWorkingSetTail(a1);
  }
  else
  {
    v16 = v14 | 2;
    if ( (*(_DWORD *)v5 & 3) == 0 )
      v16 = v14;
    MiAgePteWorker(v3, (v8 >> 9) & 0xFFFFFFF8, v8, v11, v5, v16);
  }
  if ( ++*(_QWORD *)(v5 + 40) >= *(_QWORD *)(v5 + 48) )
    return 4;
  return v4;
}
