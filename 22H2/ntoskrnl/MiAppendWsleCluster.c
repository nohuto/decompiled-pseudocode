/*
 * XREFs of MiAppendWsleCluster @ 0x1402B6160
 * Callers:
 *     MiDeleteSystemPagableVm @ 0x140286100 (MiDeleteSystemPagableVm.c)
 *     MiRemoveMappedPtes @ 0x140288B80 (MiRemoveMappedPtes.c)
 *     MiDecommitPages @ 0x1402B4EB0 (MiDecommitPages.c)
 * Callees:
 *     MiTerminateWsleCluster @ 0x1402BB3B0 (MiTerminateWsleCluster.c)
 *     MiPteHasShadow @ 0x14030E16C (MiPteHasShadow.c)
 *     MI_PFN_IS_PROTO @ 0x1403F3F48 (MI_PFN_IS_PROTO.c)
 */

__int64 __fastcall MiAppendWsleCluster(__int64 a1, __int64 a2, unsigned __int64 *a3)
{
  unsigned __int64 Process; // rcx
  unsigned __int64 Flink; // r8
  unsigned __int64 v8; // r10
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // r9
  struct _LIST_ENTRY *v11; // rax
  __int64 v12; // rax
  char v13; // di
  unsigned __int64 v14; // rdx
  __int64 v15; // rax
  struct _LIST_ENTRY *v16; // r8
  __int64 v17; // rax
  __int64 v18; // r8
  bool v19; // zf
  __int64 v20; // rax
  BOOL v21; // esi
  __int64 v22; // rcx
  unsigned int v24; // eax
  unsigned __int64 v25; // [rsp+40h] [rbp+8h] BYREF

  Process = 0xFFFFF68000000000uLL;
  Flink = ((((__int64)((_QWORD)a3 << 25) >> 16) & 0xFFFFFFFFF000uLL) >> 9) - 0x98000000000LL;
  v8 = 0xFFFFF6FB7DBED000uLL;
  v9 = *(_QWORD *)Flink;
  v10 = 0xFFFFF6FB7DBED7F8uLL;
  if ( Flink >= 0xFFFFF6FB7DBED000uLL
    && Flink <= 0xFFFFF6FB7DBED7F8uLL
    && (unsigned int)MiPteHasShadow(0xFFFFF68000000000uLL, v9, Flink, 0xFFFFF6FB7DBED7F8uLL)
    && (v9 & 1) != 0
    && ((v9 & 0x20) == 0 || (v9 & 0x42) == 0) )
  {
    Process = (unsigned __int64)KeGetCurrentThread()->ApcState.Process;
    v11 = *(struct _LIST_ENTRY **)(Process + 1928);
    if ( v11 )
    {
      v12 = *((_QWORD *)&v11->Flink + ((Flink >> 3) & 0x1FF));
      Flink = v9 | 0x20;
      Process = (unsigned __int8)v12;
      LOBYTE(Process) = v12 & 0x20;
      if ( (v12 & 0x20) == 0 )
        Flink = v9;
      v9 = Flink;
      if ( (v12 & 0x42) != 0 )
        v9 = Flink | 0x42;
    }
  }
  v13 = HIBYTE(v9) & 0xF | (16 * ((v9 >> 60) & 7));
  v14 = *a3;
  if ( (unsigned __int64)a3 >= v8
    && (unsigned __int64)a3 <= v10
    && (unsigned int)MiPteHasShadow(Process, v14, Flink, v10)
    && (v14 & 1) != 0
    && ((v14 & 0x20) == 0 || (v14 & 0x42) == 0) )
  {
    Flink = (unsigned __int64)KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( Flink )
    {
      v15 = *(_QWORD *)(Flink + 8 * (((unsigned __int64)a3 >> 3) & 0x1FF));
      Flink = v14 | 0x20;
      if ( (v15 & 0x20) == 0 )
        Flink = v14;
      v14 = Flink;
      if ( (v15 & 0x42) != 0 )
        v14 = Flink | 0x42;
    }
  }
  v25 = v14;
  if ( (unsigned __int64)&v25 >= v8
    && (unsigned __int64)&v25 <= v10
    && (unsigned int)MiPteHasShadow(&v25, v14, Flink, v10)
    && (v14 & 1) != 0
    && ((v14 & 0x20) == 0 || (v14 & 0x42) == 0) )
  {
    v16 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( v16 )
    {
      v17 = *((_QWORD *)&v16->Flink + (((unsigned __int64)&v25 >> 3) & 0x1FF));
      v18 = v14 | 0x20;
      if ( (v17 & 0x20) == 0 )
        v18 = v14;
      v14 = v18;
      if ( (v17 & 0x42) != 0 )
        v14 = v18 | 0x42;
    }
  }
  v19 = (unsigned int)MI_PFN_IS_PROTO(48 * ((v14 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL) == 0;
  v20 = *(_QWORD *)(a1 + 8);
  v21 = v19;
  if ( !v20 )
  {
LABEL_42:
    v24 = *(_DWORD *)(a1 + 24) & 0xFFFFFFFE;
    *(_QWORD *)a1 = a2;
    *(_QWORD *)(a1 + 8) = a3;
    *(_DWORD *)(a1 + 24) = v21 | v24;
    *(_QWORD *)(a1 + 16) = 1LL;
    *(_BYTE *)(a1 + 28) = v13;
    return 1LL;
  }
  v22 = *(_QWORD *)(a1 + 16);
  if ( a3 != (unsigned __int64 *)(v20 + 8 * v22) || v13 != *(_BYTE *)(a1 + 28) || v19 != (*(_DWORD *)(a1 + 24) & 1) )
  {
    if ( (*(_DWORD *)(a1 + 24) & 2) != 0 )
      return 0LL;
    MiTerminateWsleCluster(a1);
    goto LABEL_42;
  }
  *(_QWORD *)(a1 + 16) = v22 + 1;
  return 1LL;
}
