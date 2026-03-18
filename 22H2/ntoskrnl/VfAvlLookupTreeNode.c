/*
 * XREFs of VfAvlLookupTreeNode @ 0x14020A004
 * Callers:
 *     VfTargetDriversGetNode @ 0x140209FAC (VfTargetDriversGetNode.c)
 *     VfTargetDriversRemove @ 0x14020A7FC (VfTargetDriversRemove.c)
 *     VfTargetRecoverIoCallbacks @ 0x1405CF294 (VfTargetRecoverIoCallbacks.c)
 *     VfTargetReplaceIoCallbacks @ 0x1405CF2E8 (VfTargetReplaceIoCallbacks.c)
 *     VfRemLockDeleteMemoryRange @ 0x140AC11C2 (VfRemLockDeleteMemoryRange.c)
 *     VfTargetDriversDisableVerifier @ 0x140ACC410 (VfTargetDriversDisableVerifier.c)
 *     VfTargetDriversEnableVerifier @ 0x140ACC480 (VfTargetDriversEnableVerifier.c)
 *     VfTargetEtwRegister @ 0x140ACC648 (VfTargetEtwRegister.c)
 *     VfTargetEtwUnregister @ 0x140ACC734 (VfTargetEtwUnregister.c)
 *     ViTargetAddToCounter @ 0x140ACC994 (ViTargetAddToCounter.c)
 *     ViTargetFreeContiguousMemory @ 0x140ACCAC0 (ViTargetFreeContiguousMemory.c)
 *     ViTargetIncrementCounter @ 0x140ACCBDC (ViTargetIncrementCounter.c)
 *     ViTargetTrackContiguousMemory @ 0x140ACCD80 (ViTargetTrackContiguousMemory.c)
 *     ViTargetWMIDeregister @ 0x140ACCEB8 (ViTargetWMIDeregister.c)
 *     ViTargetWMIRegister @ 0x140ACCF84 (ViTargetWMIRegister.c)
 *     VfDevObjIsDeviceRemoved @ 0x140AD30A8 (VfDevObjIsDeviceRemoved.c)
 *     VfDevObjMarkDeviceRemoved @ 0x140AD3118 (VfDevObjMarkDeviceRemoved.c)
 *     ViDevObjRemove @ 0x140AD34C0 (ViDevObjRemove.c)
 *     ViRemLockDeleteFirstTreeNode @ 0x140AD38CC (ViRemLockDeleteFirstTreeNode.c)
 *     ViRemLockFindSurrogate @ 0x140AD3978 (ViRemLockFindSurrogate.c)
 *     VfCheckForLookaside @ 0x140AE3178 (VfCheckForLookaside.c)
 *     VfLookasideAdd @ 0x140AE3240 (VfLookasideAdd.c)
 *     VfLookasideDelete @ 0x140AE335C (VfLookasideDelete.c)
 *     VerifierIoWMIRegistrationControl @ 0x140AE5080 (VerifierIoWMIRegistrationControl.c)
 *     VfCheckForResource @ 0x140AE538C (VfCheckForResource.c)
 *     VfDeleteResource @ 0x140AE54D0 (VfDeleteResource.c)
 *     VfTrackResource @ 0x140AE55E4 (VfTrackResource.c)
 * Callees:
 *     ViAvlNodeInitializeSessionId @ 0x14020A320 (ViAvlNodeInitializeSessionId.c)
 *     ViAvlTableIndex @ 0x14020A468 (ViAvlTableIndex.c)
 *     ViAvlReleaseTableLockFromDpcLevel @ 0x14020A484 (ViAvlReleaseTableLockFromDpcLevel.c)
 *     ViAvlRaiseIrqlSafe @ 0x14020A4B8 (ViAvlRaiseIrqlSafe.c)
 *     ViAvlAcquireTableLockAtDpcLevelSafe @ 0x14020A4F0 (ViAvlAcquireTableLockAtDpcLevelSafe.c)
 *     RtlLookupElementGenericTableFullAvl @ 0x14031E6C0 (RtlLookupElementGenericTableFullAvl.c)
 */

PVOID __fastcall VfAvlLookupTreeNode(__int64 *a1, __int64 a2, unsigned __int64 a3, __int64 a4)
{
  PVOID v4; // rbx
  __int64 v5; // r15
  unsigned __int64 v9; // rdi
  unsigned __int64 v10; // rsi
  __int64 v11; // rax
  __int64 v12; // rbx
  __int64 v13; // rcx
  unsigned __int64 v15; // r12
  unsigned __int64 i; // r15
  __int64 v17; // rbx
  __int64 v18; // rdi
  __int64 v19; // rcx
  __int64 v20; // [rsp+20h] [rbp-20h]
  unsigned __int64 v21; // [rsp+20h] [rbp-20h]
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
    goto LABEL_9;
  Buffer = a3;
  v11 = v5;
  if ( v10 > 1 )
    v11 = 4096LL;
  v23 = v11;
  ViAvlNodeInitializeSessionId(a1, &Buffer);
  v12 = ViAvlTableIndex(a1, Buffer);
  ViAvlRaiseIrqlSafe(a2);
  v20 = 192 * v12;
  ViAvlAcquireTableLockAtDpcLevelSafe(192 * v12 + a1[2], a2);
  v13 = a1[2];
  NodeOrParent = 0LL;
  SearchResult = TableEmptyTree;
  v4 = RtlLookupElementGenericTableFullAvl((PRTL_AVL_TABLE)(192 * v12 + v13), &Buffer, &NodeOrParent, &SearchResult);
  if ( !v4 )
  {
    ViAvlReleaseTableLockFromDpcLevel(v20 + a1[2], a2);
    --v10;
    v9 += 4096LL;
LABEL_9:
    v15 = v5 + a3;
    for ( i = 0LL; i < v10; ++i )
    {
      Buffer = v9;
      v21 = v9 + 4096;
      if ( v9 + 4096 <= v15 )
        v23 = 4096LL;
      else
        v23 = v15 - v9;
      ViAvlNodeInitializeSessionId(a1, &Buffer);
      v17 = ViAvlTableIndex(a1, Buffer);
      ViAvlRaiseIrqlSafe(a2);
      v18 = 192 * v17;
      ViAvlAcquireTableLockAtDpcLevelSafe(192 * v17 + a1[2], a2);
      v19 = a1[2];
      NodeOrParent = 0LL;
      SearchResult = TableEmptyTree;
      v4 = RtlLookupElementGenericTableFullAvl((PRTL_AVL_TABLE)(192 * v17 + v19), &Buffer, &NodeOrParent, &SearchResult);
      if ( v4 )
        break;
      ViAvlReleaseTableLockFromDpcLevel(v18 + a1[2], a2);
      v9 = v21;
    }
  }
  return v4;
}
