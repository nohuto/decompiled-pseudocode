/*
 * XREFs of RtlAvlInsertNodeEx @ 0x140287FA0
 * Callers:
 *     MiSessionInsertImage @ 0x14020AE84 (MiSessionInsertImage.c)
 *     MiInsertInSystemSpace @ 0x140213D30 (MiInsertInSystemSpace.c)
 *     MiUpdateSystemProtoPtesTree @ 0x14021BF50 (MiUpdateSystemProtoPtesTree.c)
 *     MiInsertVad @ 0x140287B70 (MiInsertVad.c)
 *     MiProcessLoaderEntry @ 0x1402908A8 (MiProcessLoaderEntry.c)
 *     MiZeroLocalPages @ 0x1402CF540 (MiZeroLocalPages.c)
 *     MiInsertSubsectionNode @ 0x1402E3E28 (MiInsertSubsectionNode.c)
 *     MiBeginPageAccessor @ 0x1402E8034 (MiBeginPageAccessor.c)
 *     MiActivateCombineBlock @ 0x1402ED230 (MiActivateCombineBlock.c)
 *     MiReferenceIoPages @ 0x140336360 (MiReferenceIoPages.c)
 *     MiUpdatePerSessionProto @ 0x14033E908 (MiUpdatePerSessionProto.c)
 *     MiFlowThroughInsertNode @ 0x140369588 (MiFlowThroughInsertNode.c)
 *     MiInsertSessionWorkingSet @ 0x14036DD7C (MiInsertSessionWorkingSet.c)
 *     MiCombiningInProgress @ 0x14036EBEC (MiCombiningInProgress.c)
 *     MiUpdatePageFileList @ 0x140394280 (MiUpdatePageFileList.c)
 *     MmManageFaultRange @ 0x1403983D8 (MmManageFaultRange.c)
 *     MiInsertMappingNode @ 0x1403C2114 (MiInsertMappingNode.c)
 *     IopMcAddMdlPagesToTable @ 0x14055EBD0 (IopMcAddMdlPagesToTable.c)
 *     PsAdjustBasicEnclaveThreadList @ 0x1405A6710 (PsAdjustBasicEnclaveThreadList.c)
 *     PsLoadVsmEnclaveData @ 0x1405A6AE0 (PsLoadVsmEnclaveData.c)
 *     MiAddMdlTracker @ 0x14061C55C (MiAddMdlTracker.c)
 *     MmUpdateMdlTrackerForMdlSwitch @ 0x14061D458 (MmUpdateMdlTrackerForMdlSwitch.c)
 *     MiHotRemoveHugeRange @ 0x140620144 (MiHotRemoveHugeRange.c)
 *     MiMarkHugePfnBad @ 0x140621688 (MiMarkHugePfnBad.c)
 *     MiAddPendingBadPageNode @ 0x140629758 (MiAddPendingBadPageNode.c)
 *     MiCheckLostBadPageNode @ 0x140629914 (MiCheckLostBadPageNode.c)
 *     MiCreateKernelStackNode @ 0x14062CC38 (MiCreateKernelStackNode.c)
 *     MiMakeIoRangePermanent @ 0x14062E4CC (MiMakeIoRangePermanent.c)
 *     MiInsertExtentList @ 0x14063DF38 (MiInsertExtentList.c)
 *     MiActOnPartitionNodePages @ 0x1406580F0 (MiActOnPartitionNodePages.c)
 *     MiAddRangeToPartitionTree @ 0x140658B8C (MiAddRangeToPartitionTree.c)
 *     MiDeletePartitionResources @ 0x1406594F8 (MiDeletePartitionResources.c)
 *     MiFreePartitionTree @ 0x140659F08 (MiFreePartitionTree.c)
 *     MiInsertPartitionPages @ 0x14065A4F0 (MiInsertPartitionPages.c)
 *     MiMergePageNodes @ 0x14065AF80 (MiMergePageNodes.c)
 *     MiInsertClone @ 0x14066517C (MiInsertClone.c)
 *     MiReplaceSystemProtoPtesNode @ 0x140669DB8 (MiReplaceSystemProtoPtesNode.c)
 *     MiProcessCrcList @ 0x1406B02D0 (MiProcessCrcList.c)
 *     ExpWnfCreateNameInstance @ 0x1407118A4 (ExpWnfCreateNameInstance.c)
 *     MiInsertSharedCommitNode @ 0x140722090 (MiInsertSharedCommitNode.c)
 *     MiFinishCreateSection @ 0x140722DA0 (MiFinishCreateSection.c)
 *     PsCallEnclave @ 0x1409B68B0 (PsCallEnclave.c)
 *     RtlAddDynamicEHContinuationTarget @ 0x1409C260C (RtlAddDynamicEHContinuationTarget.c)
 *     RtlAddDynamicEnforcedAddressRange @ 0x1409C26B8 (RtlAddDynamicEnforcedAddressRange.c)
 *     MiInsertHotPatchRecord @ 0x140A37BB0 (MiInsertHotPatchRecord.c)
 *     MiInsertPreviouslyRegisteredHotPatchRecord @ 0x140A37D40 (MiInsertPreviouslyRegisteredHotPatchRecord.c)
 *     MiInsertSecureImageActivePatch @ 0x140A37E54 (MiInsertSecureImageActivePatch.c)
 *     MiLoadHotPatchForUserSid @ 0x140A38368 (MiLoadHotPatchForUserSid.c)
 *     MiAweViewInserter @ 0x140A4132C (MiAweViewInserter.c)
 *     MiFindLargePageMemory @ 0x140A497D8 (MiFindLargePageMemory.c)
 *     MiCreateEnclaveRegions @ 0x140B48B44 (MiCreateEnclaveRegions.c)
 *     MiInitializeDriverPtes @ 0x140B60F90 (MiInitializeDriverPtes.c)
 * Callees:
 *     RtlpTreeDoubleRotateNodes @ 0x14024FF20 (RtlpTreeDoubleRotateNodes.c)
 */

char __fastcall RtlAvlInsertNodeEx(unsigned __int64 *a1, unsigned __int64 a2, bool a3, unsigned __int64 a4)
{
  __int64 v5; // rax
  bool v6; // r9
  char v8; // r8
  char v9; // bl
  unsigned int v10; // r9d
  __int64 v11; // r10
  _QWORD *v12; // r9
  unsigned __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // rdx
  char v16; // r9
  __int64 v17; // rcx

  LOBYTE(v5) = 0;
  v6 = a3;
  *(_QWORD *)a4 = 0LL;
  *(_QWORD *)(a4 + 8) = 0LL;
  *(_QWORD *)(a4 + 16) = a2;
  if ( !a2 )
  {
    *a1 = a4;
    return v5;
  }
  LOBYTE(v5) = 2 * a3;
  *(_QWORD *)(a2 + 8LL * a3) = a4;
  v8 = (-1 - 2 * a3) & 3;
  v9 = *(_BYTE *)(a2 + 16) & 3;
  if ( v9 )
  {
LABEL_5:
    if ( v9 != v8 )
    {
      *(_BYTE *)(a2 + 16) &= 0xFCu;
      return v5;
    }
    if ( (*(_BYTE *)(a4 + 16) & 3) != v9 )
    {
      v5 = RtlpTreeDoubleRotateNodes(a1, a2, a4, v6);
      *(_BYTE *)(v15 + 16) &= 0xFCu;
      v16 = *(_BYTE *)(a4 + 16) & 0xFC;
      *(_BYTE *)(a4 + 16) = v16;
      if ( v9 == (*(_BYTE *)(v5 + 16) & 3) )
      {
        *(_BYTE *)(v15 + 16) ^= (*(_BYTE *)(v15 + 16) ^ v9 ^ 0xFE) & 3;
        *(_BYTE *)(v5 + 16) &= 0xFCu;
      }
      else
      {
        if ( v9 == ((*(_BYTE *)(v5 + 16) ^ 0xFE) & 3) )
          *(_BYTE *)(a4 + 16) = v9 | v16;
        *(_BYTE *)(v5 + 16) &= 0xFCu;
      }
      return v5;
    }
    v10 = !v6;
    if ( (*(_QWORD *)(a4 + 16) & 0xFFFFFFFFFFFFFFFCuLL) == a2 )
    {
      v11 = v10;
      v12 = (_QWORD *)(a2 + 8 * (v10 ^ 1LL));
      if ( *v12 == a4 )
      {
        v13 = *(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
        if ( v13 )
        {
          if ( *(_QWORD *)(v13 + 8) == a2 )
          {
            *(_QWORD *)(v13 + 8) = a4;
          }
          else
          {
            if ( *(_QWORD *)v13 != a2 )
              goto LABEL_28;
            *(_QWORD *)v13 = a4;
          }
        }
        else
        {
          if ( *a1 != a2 )
            goto LABEL_28;
          *a1 = a4;
        }
        *(_QWORD *)(a4 + 16) = v13 | *(_DWORD *)(a4 + 16) & 3;
        v14 = *(_QWORD *)(a4 + 8 * v11);
        if ( !v14 )
        {
LABEL_13:
          *v12 = v14;
          *(_QWORD *)(a4 + 8 * v11) = a2;
          v5 = a4 | *(_DWORD *)(a2 + 16) & 3;
          *(_QWORD *)(a2 + 16) = v5;
          *(_BYTE *)(a4 + 16) &= 0xFCu;
          *(_BYTE *)(a2 + 16) &= 0xFCu;
          return v5;
        }
        v17 = *(_QWORD *)(v14 + 16);
        if ( (v17 & 0xFFFFFFFFFFFFFFFCuLL) == a4 )
        {
          *(_QWORD *)(v14 + 16) = a2 | v17 & 3;
          goto LABEL_13;
        }
      }
    }
LABEL_28:
    __fastfail(0x1Du);
  }
  while ( 1 )
  {
    a4 = a2;
    LOBYTE(v5) = v8 | *(_BYTE *)(a2 + 16) & 0xFC;
    *(_BYTE *)(a2 + 16) = v5;
    a2 = *(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
    if ( !a2 )
      return v5;
    v6 = *(_QWORD *)a2 != a4;
    LOBYTE(v5) = 2 * v6;
    v8 = (-1 - 2 * v6) & 3;
    v9 = *(_BYTE *)(a2 + 16) & 3;
    if ( v9 )
      goto LABEL_5;
  }
}
