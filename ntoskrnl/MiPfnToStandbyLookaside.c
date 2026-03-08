/*
 * XREFs of MiPfnToStandbyLookaside @ 0x140288780
 * Callers:
 *     MiSharedInsertPfnChainInList @ 0x140288400 (MiSharedInsertPfnChainInList.c)
 *     MiReplaceStandbyLookaside @ 0x1402C6D1C (MiReplaceStandbyLookaside.c)
 *     MiRebuildStandbyLookasideList @ 0x1402C6EB0 (MiRebuildStandbyLookasideList.c)
 *     MiUnlinkNumaStandbyPage @ 0x1402C77BC (MiUnlinkNumaStandbyPage.c)
 *     MiExclusiveInsertPfnChainInList @ 0x1402D3138 (MiExclusiveInsertPfnChainInList.c)
 *     MiInsertNumaStandbyPage @ 0x14064E1CC (MiInsertNumaStandbyPage.c)
 * Callees:
 *     MiGetPfnPriority @ 0x14028A3F8 (MiGetPfnPriority.c)
 *     MiSearchNumaNodeTable @ 0x140319DD0 (MiSearchNumaNodeTable.c)
 *     MiPageToChannel @ 0x140370C10 (MiPageToChannel.c)
 */

__int64 __fastcall MiPfnToStandbyLookaside(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 v4; // rsi
  __int64 v6; // rbp
  __int64 v7; // rax
  __int64 v8; // rcx
  ULONG_PTR v9; // rsi
  int PfnPriority; // eax
  bool v11; // zf
  unsigned int v12; // eax
  __int64 v13; // rdx
  __int64 result; // rax

  v4 = 48 * a1;
  v6 = 48 * a1 - 0x220000000000LL;
  v7 = qword_140C67048;
  v8 = (*(_QWORD *)(v6 + 40) >> 43) & 0x3FFLL;
  a3[2] = v6;
  v9 = 0xAAAAAAAAAAAAAAABuLL * (v4 >> 4);
  *a3 = *(_QWORD *)(v7 + 8 * v8);
  *((_DWORD *)a3 + 2) = *(_DWORD *)(MiSearchNumaNodeTable(v9) + 8);
  if ( a2 )
    PfnPriority = 5;
  else
    PfnPriority = MiGetPfnPriority(v6);
  v11 = qword_140C65750 == 0LL;
  *((_DWORD *)a3 + 6) = PfnPriority;
  if ( v11 )
    v12 = 0;
  else
    v12 = MiPageToChannel(v9);
  *((_DWORD *)a3 + 7) = v12;
  v13 = 88 * (*((unsigned int *)a3 + 6) + 8LL * v12 + 37);
  result = *a3;
  a3[4] = *(_QWORD *)(*a3 + 16) + 25408LL * *((unsigned int *)a3 + 2) + v13;
  return result;
}
