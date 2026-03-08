/*
 * XREFs of RtlAvlInsertNodeEx @ 0x140331710
 * Callers:
 *     MiInsertInSystemSpace @ 0x14020EB30 (MiInsertInSystemSpace.c)
 *     MiInsertSubsectionNode @ 0x140214E00 (MiInsertSubsectionNode.c)
 *     MiZeroLocalPages @ 0x140273BB0 (MiZeroLocalPages.c)
 *     MiReferenceIoPages @ 0x14029BA60 (MiReferenceIoPages.c)
 *     MiActivateCombineBlock @ 0x14029D8F8 (MiActivateCombineBlock.c)
 *     MiProcessLoaderEntry @ 0x1402B2790 (MiProcessLoaderEntry.c)
 *     MiUpdatePerSessionProto @ 0x1402CF620 (MiUpdatePerSessionProto.c)
 *     MiFlowThroughInsertNode @ 0x1402FE598 (MiFlowThroughInsertNode.c)
 *     MiInsertSessionWorkingSet @ 0x1403023FC (MiInsertSessionWorkingSet.c)
 *     MiInsertVad @ 0x1403312E0 (MiInsertVad.c)
 *     MiBeginPageAccessor @ 0x140350290 (MiBeginPageAccessor.c)
 *     MiUpdateSystemProtoPtesTree @ 0x140368AE0 (MiUpdateSystemProtoPtesTree.c)
 *     MiSessionInsertImage @ 0x14036BEC4 (MiSessionInsertImage.c)
 *     MiCombiningInProgress @ 0x14036CCC0 (MiCombiningInProgress.c)
 *     MiUpdatePageFileList @ 0x140392600 (MiUpdatePageFileList.c)
 *     MmManageFaultRange @ 0x1403A58F8 (MmManageFaultRange.c)
 *     MiInsertMappingNode @ 0x1403BC7E4 (MiInsertMappingNode.c)
 *     IopMcAddMdlPagesToTable @ 0x14055C730 (IopMcAddMdlPagesToTable.c)
 *     PsAdjustBasicEnclaveThreadList @ 0x1405A4260 (PsAdjustBasicEnclaveThreadList.c)
 *     PsLoadVsmEnclaveData @ 0x1405A4630 (PsLoadVsmEnclaveData.c)
 *     MiAddMdlTracker @ 0x14061A0AC (MiAddMdlTracker.c)
 *     MmUpdateMdlTrackerForMdlSwitch @ 0x14061AFA8 (MmUpdateMdlTrackerForMdlSwitch.c)
 *     MiHotRemoveHugeRange @ 0x14061DC8C (MiHotRemoveHugeRange.c)
 *     MiMarkHugePfnBad @ 0x14061F1D0 (MiMarkHugePfnBad.c)
 *     MiAddPendingBadPageNode @ 0x1406272C8 (MiAddPendingBadPageNode.c)
 *     MiCheckLostBadPageNode @ 0x140627484 (MiCheckLostBadPageNode.c)
 *     MiCreateKernelStackNode @ 0x14062A7B8 (MiCreateKernelStackNode.c)
 *     MiMakeIoRangePermanent @ 0x14062C04C (MiMakeIoRangePermanent.c)
 *     MiInsertExtentList @ 0x14063BAC8 (MiInsertExtentList.c)
 *     MiActOnPartitionNodePages @ 0x140655AB0 (MiActOnPartitionNodePages.c)
 *     MiAddRangeToPartitionTree @ 0x14065654C (MiAddRangeToPartitionTree.c)
 *     MiDeletePartitionResources @ 0x140656EBC (MiDeletePartitionResources.c)
 *     MiFreePartitionTree @ 0x1406578D0 (MiFreePartitionTree.c)
 *     MiInsertPartitionPages @ 0x140657EB8 (MiInsertPartitionPages.c)
 *     MiMergePageNodes @ 0x14065893C (MiMergePageNodes.c)
 *     MiInsertClone @ 0x140662B2C (MiInsertClone.c)
 *     MiReplaceSystemProtoPtesNode @ 0x140667768 (MiReplaceSystemProtoPtesNode.c)
 *     MiProcessCrcList @ 0x1406A8670 (MiProcessCrcList.c)
 *     ExpWnfCreateNameInstance @ 0x140718994 (ExpWnfCreateNameInstance.c)
 *     MiFinishCreateSection @ 0x1407D0800 (MiFinishCreateSection.c)
 *     MiInsertSharedCommitNode @ 0x1407D63F0 (MiInsertSharedCommitNode.c)
 *     PsCallEnclave @ 0x1409B3880 (PsCallEnclave.c)
 *     RtlAddDynamicEHContinuationTarget @ 0x1409BF5DC (RtlAddDynamicEHContinuationTarget.c)
 *     RtlAddDynamicEnforcedAddressRange @ 0x1409BF688 (RtlAddDynamicEnforcedAddressRange.c)
 *     MiInsertHotPatchRecord @ 0x140A34E80 (MiInsertHotPatchRecord.c)
 *     MiInsertPreviouslyRegisteredHotPatchRecord @ 0x140A35010 (MiInsertPreviouslyRegisteredHotPatchRecord.c)
 *     MiInsertSecureImageActivePatch @ 0x140A35124 (MiInsertSecureImageActivePatch.c)
 *     MiLoadHotPatchForUserSid @ 0x140A35638 (MiLoadHotPatchForUserSid.c)
 *     MiAweViewInserter @ 0x140A3E64C (MiAweViewInserter.c)
 *     MiFindLargePageMemory @ 0x140A46B08 (MiFindLargePageMemory.c)
 *     MiCreateEnclaveRegions @ 0x140B3A434 (MiCreateEnclaveRegions.c)
 *     MiInitializeDriverPtes @ 0x140B5E7C8 (MiInitializeDriverPtes.c)
 * Callees:
 *     RtlpTreeDoubleRotateNodes @ 0x14024E910 (RtlpTreeDoubleRotateNodes.c)
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
