/*
 * XREFs of MiTrimPte @ 0x140288F80
 * Callers:
 *     <none>
 * Callees:
 *     MiTrimThisWsle @ 0x140289420 (MiTrimThisWsle.c)
 *     MI_WSLE_LOG_ACCESS @ 0x140289700 (MI_WSLE_LOG_ACCESS.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1402AE550 (MI_READ_PTE_LOCK_FREE.c)
 *     MiInsertTbFlushEntry @ 0x1402B6400 (MiInsertTbFlushEntry.c)
 *     MiPteInShadowRange @ 0x1402C9180 (MiPteInShadowRange.c)
 *     MiPteHasShadow @ 0x14030E16C (MiPteHasShadow.c)
 *     MiIsPageTableLocked @ 0x1403161D8 (MiIsPageTableLocked.c)
 *     MiTrimWorkingSetTail @ 0x140330260 (MiTrimWorkingSetTail.c)
 *     MiTrimWorkingSetBuildup @ 0x1403302C8 (MiTrimWorkingSetBuildup.c)
 *     MiDemoteCombinedPte @ 0x14036ABB0 (MiDemoteCombinedPte.c)
 *     MiComputeNextWalkPte @ 0x14053AEA8 (MiComputeNextWalkPte.c)
 *     MiInsertVmAccessedEntry @ 0x14053B340 (MiInsertVmAccessedEntry.c)
 */

__int64 __fastcall MiTrimPte(__int64 a1, unsigned __int64 Flink, int a3)
{
  unsigned __int64 v4; // r15
  __int64 v6; // rbp
  unsigned __int64 v7; // rdi
  unsigned __int64 v8; // r13
  BOOL v9; // r9d
  __int64 v10; // rax
  int *v11; // rsi
  unsigned __int64 v12; // rax
  __int64 v13; // r8
  int v14; // ecx
  unsigned __int64 v15; // rbx
  __int64 v16; // r9
  struct _LIST_ENTRY *v17; // rdx
  __int64 v18; // rax
  __int64 v19; // rdx
  _QWORD *v20; // rbx
  __int64 v21; // r8
  __int64 v22; // rbp
  unsigned __int64 *v23; // r8
  unsigned __int64 v24; // rdx
  unsigned __int64 v25; // r8
  struct _LIST_ENTRY *v26; // rax
  __int64 v27; // rax
  __int64 v28; // r8
  __int64 v29; // r12
  unsigned int v30; // r14d
  __int64 v31; // rbx
  int v34; // [rsp+80h] [rbp+18h] BYREF

  v34 = 0;
  v4 = Flink;
  v6 = *(_QWORD *)(a1 + 24);
  v7 = *(_QWORD *)Flink;
  v8 = (__int64)(Flink << 25) >> 16;
  v9 = a3 == 0;
  if ( Flink >= 0xFFFFF6FB7DBED000uLL
    && Flink <= 0xFFFFF6FB7DBED7F8uLL
    && (MiFlags & 0xC00000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v7 & 1) != 0
    && ((v7 & 0x20) == 0 || (v7 & 0x42) == 0) )
  {
    Flink = (unsigned __int64)KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( Flink )
    {
      v10 = *(_QWORD *)(Flink + 8 * ((v4 >> 3) & 0x1FF));
      Flink = v7 | 0x20;
      if ( (v10 & 0x20) == 0 )
        Flink = v7;
      v7 = Flink;
      if ( (v10 & 0x42) != 0 )
        v7 = Flink | 0x42;
    }
  }
  v11 = *(int **)(a1 + 168);
  v12 = *((_QWORD *)v11 + 2);
  v13 = *((_QWORD *)v11 + 1);
  if ( v12 == v13 )
    return 3LL;
  v14 = *v11;
  if ( (*v11 & 0x400) != 0
    && ((v14 & 0x800) != 0 && v12 >= 0x100 || *(_QWORD *)(v6 + 136) <= (unsigned __int64)(*((_QWORD *)v11 + 6) - v13)) )
  {
    return 3LL;
  }
  if ( (v14 & 0x1000) == 0 )
    **(_QWORD **)(v6 + 16) = MiComputeNextWalkPte(v4, v9);
  v15 = *(_QWORD *)v4;
  if ( (unsigned int)MiPteInShadowRange(v4, Flink)
    && (MiFlags & 0xC00000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v15 & 1) != 0
    && ((v15 & 0x20) == 0 || (v15 & 0x42) == 0) )
  {
    v17 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( v17 )
    {
      v18 = *((_QWORD *)&v17->Flink + ((v4 >> 3) & 0x1FF));
      v19 = v15 | 0x20;
      if ( (v18 & 0x20) == 0 )
        v19 = v15;
      v15 = v19;
      if ( (v18 & 0x42) != 0 )
        v15 = v19 | 0x42;
    }
  }
  v20 = (_QWORD *)(48 * ((v15 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL);
  if ( a3 && ((v20[3] & 0x3FFFFFFFFFFFFFFFLL) != 1 || (unsigned int)MiIsPageTableLocked(v6)) )
    return 0LL;
  if ( (v20[5] & 0x1000000000LL) == 0 )
  {
    v21 = v20[1];
    if ( v21 > 0 && (unsigned int)MiDemoteCombinedPte(v6, v4, v21 | 0x8000000000000000uLL) == 1 )
      v7 = MI_READ_PTE_LOCK_FREE(v4);
  }
  if ( v8 < 0xFFFFF68000000000uLL || v8 > 0xFFFFF6FFFFFFFFFFuLL )
  {
    v23 = (unsigned __int64 *)(((v8 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    v24 = *v23;
    if ( (unsigned __int64)v23 >= 0xFFFFF6FB7DBED000uLL
      && (unsigned __int64)v23 <= 0xFFFFF6FB7DBED7F8uLL
      && (unsigned int)MiPteHasShadow(0xFFFFF68000000000uLL, v24, v23, v16)
      && (v24 & 1) != 0
      && ((v24 & 0x20) == 0 || (v24 & 0x42) == 0) )
    {
      v26 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
      if ( v26 )
      {
        v27 = *((_QWORD *)&v26->Flink + ((v25 >> 3) & 0x1FF));
        v28 = v24 | 0x20;
        if ( (v27 & 0x20) == 0 )
          v28 = v24;
        v24 = v28;
        if ( (v27 & 0x42) != 0 )
          v24 = v28 | 0x42;
      }
    }
    v22 = HIBYTE(v24) & 0xF;
  }
  else
  {
    LODWORD(v22) = (*(_DWORD *)(48
                              * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(((v8 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) >> 12) & 0xFFFFFFFFFLL)
                              - 0x58000000000LL) >> 1) & 7;
  }
  v29 = *(_QWORD *)(a1 + 24);
  v30 = *v11 & 0xF;
  if ( !(unsigned int)MiTrimThisWsle(v29, v8, (_DWORD)v20, (_DWORD)v11, (v7 >> 5) & 1, (__int64)&v34) )
    goto LABEL_60;
  MiInsertTbFlushEntry(v11 + 14, v8, 1LL, 0LL);
  if ( (*v11 & 0x10) != 0 )
    MI_WSLE_LOG_ACCESS(v29, v4);
  if ( ++*((_QWORD *)v11 + 2) == *((_QWORD *)v11 + 1) || v11[17] == v11[16] )
  {
    v31 = a1;
    MiTrimWorkingSetBuildup(a1, v11);
    if ( *((_QWORD *)v11 + 2) == *((_QWORD *)v11 + 1) )
      return 3LL;
  }
  else
  {
LABEL_60:
    v31 = a1;
  }
  if ( v34 && (unsigned int)MiInsertVmAccessedEntry(*((_QWORD *)v11 + 30), v8) )
  {
    MiTrimWorkingSetTail(v31);
    return 0LL;
  }
  if ( (unsigned int)v22 < v30 )
    return 0LL;
  if ( ++*((_QWORD *)v11 + 4) < *((_QWORD *)v11 + 5) )
    return 0LL;
  return 3LL;
}
