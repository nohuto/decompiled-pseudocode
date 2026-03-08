/*
 * XREFs of MiAppendWsleCluster @ 0x14031D6E0
 * Callers:
 *     MiDeleteSystemPagableVm @ 0x1402B04B0 (MiDeleteSystemPagableVm.c)
 *     MiRemoveMappedPtes @ 0x1403474D0 (MiRemoveMappedPtes.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x14031B450 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x14031B4C0 (MiPteInShadowRange.c)
 *     MiTerminateWsleCluster @ 0x1403234E0 (MiTerminateWsleCluster.c)
 */

__int64 __fastcall MiAppendWsleCluster(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v6; // rdi
  unsigned __int64 v7; // rbx
  char v8; // di
  __int64 v9; // rbx
  __int64 v10; // rbx
  __int64 v11; // rax
  BOOL v12; // ebx
  __int64 v13; // rcx
  unsigned int v15; // eax
  struct _LIST_ENTRY *Flink; // rax
  __int64 v17; // rdx
  __int64 v18; // rax
  struct _LIST_ENTRY *v19; // rdx
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // [rsp+40h] [rbp+8h] BYREF

  v6 = ((((__int64)(a3 << 25) >> 16) & 0xFFFFFFFFF000uLL) >> 9) - 0x98000000000LL;
  v7 = *(_QWORD *)v6;
  if ( MiPteInShadowRange(v6)
    && (MiFlags & 0x600000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v7 & 1) != 0
    && ((v7 & 0x20) == 0 || (v7 & 0x42) == 0) )
  {
    Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( Flink )
    {
      v17 = v7 | 0x20;
      v18 = *((_QWORD *)&Flink->Flink + ((v6 >> 3) & 0x1FF));
      if ( (v18 & 0x20) == 0 )
        v17 = v7;
      v7 = v17;
      if ( (v18 & 0x42) != 0 )
        v7 = v17 | 0x42;
    }
  }
  v8 = HIBYTE(v7) & 0xF | (16 * ((v7 >> 60) & 7));
  v9 = *(_QWORD *)a3;
  if ( MiPteInShadowRange(a3)
    && (MiFlags & 0x600000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v9 & 1) != 0
    && ((v9 & 0x20) == 0 || (v9 & 0x42) == 0) )
  {
    v19 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( v19 )
    {
      v20 = *((_QWORD *)&v19->Flink + ((a3 >> 3) & 0x1FF));
      v21 = v9 | 0x20;
      if ( (v20 & 0x20) == 0 )
        v21 = v9;
      v9 = v21;
      if ( (v20 & 0x42) != 0 )
        v9 = v21 | 0x42;
    }
  }
  v22 = v9;
  v10 = *(_QWORD *)(48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v22) >> 12) & 0xFFFFFFFFFFLL)
                  - 0x21FFFFFFFFD8LL);
  v11 = *(_QWORD *)(a1 + 8);
  v12 = v10 >= 0;
  if ( !v11 )
    goto LABEL_11;
  v13 = *(_QWORD *)(a1 + 16);
  if ( a3 == v11 + 8 * v13 && v8 == *(_BYTE *)(a1 + 28) && v12 == (*(_DWORD *)(a1 + 24) & 1) )
  {
    *(_QWORD *)(a1 + 16) = v13 + 1;
    return 1LL;
  }
  if ( (*(_DWORD *)(a1 + 24) & 2) == 0 )
  {
    MiTerminateWsleCluster(a1);
LABEL_11:
    v15 = *(_DWORD *)(a1 + 24) & 0xFFFFFFFE;
    *(_QWORD *)a1 = a2;
    *(_QWORD *)(a1 + 8) = a3;
    *(_DWORD *)(a1 + 24) = v12 | v15;
    *(_QWORD *)(a1 + 16) = 1LL;
    *(_BYTE *)(a1 + 28) = v8;
    return 1LL;
  }
  return 0LL;
}
