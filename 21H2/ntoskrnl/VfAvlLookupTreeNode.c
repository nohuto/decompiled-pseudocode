/*
 * XREFs of VfAvlLookupTreeNode @ 0x14037E744
 * Callers:
 *     VfTargetDriversRemove @ 0x14037E4E0 (VfTargetDriversRemove.c)
 *     VfTargetDriversGetNode @ 0x1405A1FCC (VfTargetDriversGetNode.c)
 *     VfDevObjIsDeviceRemoved @ 0x1409D6FD8 (VfDevObjIsDeviceRemoved.c)
 *     VfDevObjMarkDeviceRemoved @ 0x1409D7048 (VfDevObjMarkDeviceRemoved.c)
 *     ViDevObjRemove @ 0x1409D734C (ViDevObjRemove.c)
 *     VfRemLockDeleteMemoryRange @ 0x1409D770C (VfRemLockDeleteMemoryRange.c)
 *     ViRemLockDeleteFirstTreeNode @ 0x1409D7804 (ViRemLockDeleteFirstTreeNode.c)
 *     ViRemLockFindSurrogate @ 0x1409D78B0 (ViRemLockFindSurrogate.c)
 *     VfTargetDriversEnableVerifier @ 0x1409D7D94 (VfTargetDriversEnableVerifier.c)
 *     VfTargetEtwRegister @ 0x1409D7F64 (VfTargetEtwRegister.c)
 *     VfTargetEtwUnregister @ 0x1409D8054 (VfTargetEtwUnregister.c)
 *     ViTargetAddToCounter @ 0x1409D82B0 (ViTargetAddToCounter.c)
 *     ViTargetFreeContiguousMemory @ 0x1409D83E4 (ViTargetFreeContiguousMemory.c)
 *     ViTargetIncrementCounter @ 0x1409D850C (ViTargetIncrementCounter.c)
 *     ViTargetTrackContiguousMemory @ 0x1409D86B0 (ViTargetTrackContiguousMemory.c)
 *     ViTargetWMIDeregister @ 0x1409D87EC (ViTargetWMIDeregister.c)
 *     ViTargetWMIRegister @ 0x1409D88B4 (ViTargetWMIRegister.c)
 *     VfCheckForLookaside @ 0x1409E2518 (VfCheckForLookaside.c)
 *     ViLookasideAdd @ 0x1409E25B4 (ViLookasideAdd.c)
 *     ViLookasideDelete @ 0x1409E26DC (ViLookasideDelete.c)
 *     VerifierExDeleteResourceLite @ 0x1409E2E20 (VerifierExDeleteResourceLite.c)
 *     VerifierExInitializeResourceLite @ 0x1409E3200 (VerifierExInitializeResourceLite.c)
 *     VfCheckForResource @ 0x1409E348C (VfCheckForResource.c)
 *     VerifierIoWMIRegistrationControl @ 0x1409E8F60 (VerifierIoWMIRegistrationControl.c)
 * Callees:
 *     RtlLookupElementGenericTableFullAvl @ 0x1402527A0 (RtlLookupElementGenericTableFullAvl.c)
 *     ViAvlReleaseTableLockFromDpcLevel @ 0x14037175C (ViAvlReleaseTableLockFromDpcLevel.c)
 *     ViAvlAcquireTableLockAtDpcLevelSafe @ 0x140371790 (ViAvlAcquireTableLockAtDpcLevelSafe.c)
 *     ViAvlRaiseIrqlSafe @ 0x1403717EC (ViAvlRaiseIrqlSafe.c)
 *     ViAvlTableIndex @ 0x140371824 (ViAvlTableIndex.c)
 *     ViAvlNodeInitializeSessionId @ 0x1403718CC (ViAvlNodeInitializeSessionId.c)
 */

PVOID __fastcall VfAvlLookupTreeNode(__int64 *a1, __int64 a2, unsigned __int64 a3, __int64 a4)
{
  PVOID v4; // rbx
  __int64 v5; // r14
  unsigned __int64 v9; // rdi
  unsigned __int64 v10; // rsi
  unsigned __int64 v11; // r12
  unsigned __int64 i; // r14
  unsigned __int64 v13; // rbx
  __int64 v14; // rdi
  __int64 v15; // rcx
  __int64 v17; // rax
  unsigned __int64 v18; // rbx
  __int64 v19; // rcx
  unsigned __int64 v20; // [rsp+20h] [rbp-20h]
  __int64 v21; // [rsp+20h] [rbp-20h]
  unsigned __int64 Buffer; // [rsp+28h] [rbp-18h] BYREF
  __int64 v23; // [rsp+30h] [rbp-10h]
  __int64 v24; // [rsp+38h] [rbp-8h]
  TABLE_SEARCH_RESULT SearchResult; // [rsp+90h] [rbp+50h] BYREF
  PVOID NodeOrParent; // [rsp+98h] [rbp+58h] BYREF

  v24 = 0LL;
  v4 = 0LL;
  v5 = a4;
  if ( !a4 )
    v5 = *a1;
  v9 = a3 & 0xFFFFFFFFFFFFF000uLL;
  v10 = (v5 + (a3 & 0xFFF) + 4095) >> 12;
  if ( (a3 & 0xFFFFFFFFFFFFF000uLL) == a3 )
    goto LABEL_4;
  Buffer = a3;
  v17 = v5;
  if ( v10 > 1 )
    v17 = 4096LL;
  v23 = v17;
  ViAvlNodeInitializeSessionId((__int64)a1, (__int64)&Buffer);
  v18 = ViAvlTableIndex((__int64)a1, Buffer);
  ViAvlRaiseIrqlSafe(a2);
  v21 = 192 * v18;
  ViAvlAcquireTableLockAtDpcLevelSafe(192 * v18 + a1[2], a2);
  v19 = a1[2];
  NodeOrParent = 0LL;
  SearchResult = TableEmptyTree;
  v4 = RtlLookupElementGenericTableFullAvl((PRTL_AVL_TABLE)(192 * v18 + v19), &Buffer, &NodeOrParent, &SearchResult);
  if ( !v4 )
  {
    ViAvlReleaseTableLockFromDpcLevel(v21 + a1[2], a2);
    --v10;
    v9 += 4096LL;
LABEL_4:
    v11 = v5 + a3;
    for ( i = 0LL; i < v10; ++i )
    {
      Buffer = v9;
      v20 = v9 + 4096;
      if ( v9 + 4096 <= v11 )
        v23 = 4096LL;
      else
        v23 = v11 - v9;
      ViAvlNodeInitializeSessionId((__int64)a1, (__int64)&Buffer);
      v13 = ViAvlTableIndex((__int64)a1, Buffer);
      ViAvlRaiseIrqlSafe(a2);
      v14 = 192 * v13;
      ViAvlAcquireTableLockAtDpcLevelSafe(192 * v13 + a1[2], a2);
      v15 = a1[2];
      NodeOrParent = 0LL;
      SearchResult = TableEmptyTree;
      v4 = RtlLookupElementGenericTableFullAvl((PRTL_AVL_TABLE)(192 * v13 + v15), &Buffer, &NodeOrParent, &SearchResult);
      if ( v4 )
        break;
      ViAvlReleaseTableLockFromDpcLevel(v14 + a1[2], a2);
      v9 = v20;
    }
  }
  return v4;
}
