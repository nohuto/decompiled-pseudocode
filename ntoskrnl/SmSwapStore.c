/*
 * XREFs of SmSwapStore @ 0x14067E484
 * Callers:
 *     MiInSwapStoreWorker @ 0x14067E3D0 (MiInSwapStoreWorker.c)
 *     SmStoreCompressionStart @ 0x1409D4A38 (SmStoreCompressionStart.c)
 *     SmStoreCompressionStop @ 0x1409D4AD8 (SmStoreCompressionStop.c)
 * Callees:
 *     ?SmSwapStore@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@W4_SM_STORE_SWAP_OPERATION@@@Z @ 0x14020031C (-SmSwapStore@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU-$SMKM_STORE@USM_TRAITS@@@@W4_SM_STORE_.c)
 *     SmKmStoreRefFromStoreIndex @ 0x140356594 (SmKmStoreRefFromStoreIndex.c)
 *     SmpKeyedStoreEntryGet @ 0x14035BDC0 (SmpKeyedStoreEntryGet.c)
 */

__int64 __fastcall SmSwapStore(__int64 a1, int a2)
{
  __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD **v5; // rax
  __int64 v6; // rcx
  unsigned int v7; // r8d
  _KPROCESS *Process; // [rsp+30h] [rbp+8h] BYREF

  v3 = *(_QWORD *)(a1 + 24);
  Process = KeGetCurrentThread()->ApcState.Process;
  v4 = SmpKeyedStoreEntryGet(v3 + 2072, &Process, 0, 0);
  if ( !v4 )
    return 3221226021LL;
  v5 = (_DWORD **)SmKmStoreRefFromStoreIndex(v3, *(_WORD *)(v4 + 16) & 0x3FF);
  v7 = 2;
  if ( a2 != 2 )
    v7 = a2 != 0;
  return SMKM_STORE_MGR<SM_TRAITS>::SmSwapStore(v6, *v5, v7);
}
