/*
 * XREFs of RtlAvlInsertNodeEx @ 0x1403212A0
 * Callers:
 *     MiReferenceIoPages @ 0x1402176E4 (MiReferenceIoPages.c)
 *     MiDereferenceIoPages @ 0x1402183E8 (MiDereferenceIoPages.c)
 *     MiInsertSubsectionNode @ 0x14021EB7C (MiInsertSubsectionNode.c)
 *     MiInsertMappingNode @ 0x140240CB8 (MiInsertMappingNode.c)
 *     MiUpdatePerSessionProto @ 0x14024D5B8 (MiUpdatePerSessionProto.c)
 *     MiFlowThroughInsertNode @ 0x14024E3EC (MiFlowThroughInsertNode.c)
 *     MiZeroLargePages @ 0x1402D6D70 (MiZeroLargePages.c)
 *     MiUpdateSystemProtoPtesTree @ 0x140302FB0 (MiUpdateSystemProtoPtesTree.c)
 *     MiInsertInSystemSpace @ 0x140305B30 (MiInsertInSystemSpace.c)
 *     MiBeginPageAccessor @ 0x14031FB98 (MiBeginPageAccessor.c)
 *     MiInsertVad @ 0x140321080 (MiInsertVad.c)
 *     MiCombiningInProgress @ 0x140366E68 (MiCombiningInProgress.c)
 *     MiSharePages @ 0x140368510 (MiSharePages.c)
 *     MiProcessLoaderEntry @ 0x140371EB0 (MiProcessLoaderEntry.c)
 *     MmManageFaultRange @ 0x14039DC58 (MmManageFaultRange.c)
 *     MiSessionInsertImage @ 0x1403A2AC4 (MiSessionInsertImage.c)
 *     MiInsertSessionWorkingSet @ 0x1403A6D20 (MiInsertSessionWorkingSet.c)
 *     MiUpdatePageFileList @ 0x1403BFED8 (MiUpdatePageFileList.c)
 *     MiMarkHugePfnBad @ 0x1403F39F4 (MiMarkHugePfnBad.c)
 *     MiAddMdlTracker @ 0x140530A94 (MiAddMdlTracker.c)
 *     MmUpdateMdlTrackerForMdlSwitch @ 0x1405315D8 (MmUpdateMdlTrackerForMdlSwitch.c)
 *     MiHotRemoveHugeRange @ 0x140532F38 (MiHotRemoveHugeRange.c)
 *     MiReleasePartitionHugeIoSpace @ 0x140533AC8 (MiReleasePartitionHugeIoSpace.c)
 *     MiCreateKernelStackNode @ 0x140535F88 (MiCreateKernelStackNode.c)
 *     MiMakeIoRangePermanent @ 0x140536DF8 (MiMakeIoRangePermanent.c)
 *     MiReplaceSystemProtoPtesNode @ 0x1405580F0 (MiReplaceSystemProtoPtesNode.c)
 *     MiInsertClone @ 0x14055B4B4 (MiInsertClone.c)
 *     MiActOnPartitionNodePages @ 0x140560AE0 (MiActOnPartitionNodePages.c)
 *     MiAddRangeToPartitionTree @ 0x1405613AC (MiAddRangeToPartitionTree.c)
 *     MiDeletePartitionResources @ 0x140561B58 (MiDeletePartitionResources.c)
 *     MiFreePartitionTree @ 0x14056257C (MiFreePartitionTree.c)
 *     MiInsertPartitionPages @ 0x140562780 (MiInsertPartitionPages.c)
 *     MiMergePageNodes @ 0x140562D24 (MiMergePageNodes.c)
 *     PsAdjustBasicEnclaveThreadList @ 0x140584604 (PsAdjustBasicEnclaveThreadList.c)
 *     PsLoadVsmEnclaveData @ 0x140584D6C (PsLoadVsmEnclaveData.c)
 *     RtlAddDynamicEnforcedAddressRange @ 0x1405CFDB0 (RtlAddDynamicEnforcedAddressRange.c)
 *     ExpWnfCreateNameInstance @ 0x14069D4E4 (ExpWnfCreateNameInstance.c)
 *     MiInsertSharedCommitNode @ 0x140702B30 (MiInsertSharedCommitNode.c)
 *     MiFinishCreateSection @ 0x14071D000 (MiFinishCreateSection.c)
 *     MiProcessCrcList @ 0x140726FD0 (MiProcessCrcList.c)
 *     MiInsertHotPatchRecord @ 0x1408CAB00 (MiInsertHotPatchRecord.c)
 *     MiInsertSecureImageActivePatch @ 0x1408CAC54 (MiInsertSecureImageActivePatch.c)
 *     MiLoadHotPatchForUserSid @ 0x1408CB090 (MiLoadHotPatchForUserSid.c)
 *     MiAllocateEntireImageFileExtents @ 0x1408CF404 (MiAllocateEntireImageFileExtents.c)
 *     MiAweViewInserter @ 0x1408D583C (MiAweViewInserter.c)
 *     MiFindLargePageMemory @ 0x1408DA244 (MiFindLargePageMemory.c)
 *     PsCallEnclave @ 0x14090D330 (PsCallEnclave.c)
 *     RtlAddDynamicEHContinuationTarget @ 0x14091AA48 (RtlAddDynamicEHContinuationTarget.c)
 *     MiCreateEnclaveRegions @ 0x140A55ED8 (MiCreateEnclaveRegions.c)
 *     MiInitializeDriverPtes @ 0x140A67EF8 (MiInitializeDriverPtes.c)
 * Callees:
 *     RtlpTreeDoubleRotateNodes @ 0x1403231A0 (RtlpTreeDoubleRotateNodes.c)
 */

char __fastcall RtlAvlInsertNodeEx(unsigned __int64 *a1, unsigned __int64 a2, bool a3, _QWORD *a4)
{
  __int64 v4; // rax
  bool v5; // r10
  unsigned __int64 v6; // rbx
  _BYTE *v8; // r9
  char v9; // r8
  char v10; // cl
  char v11; // di
  _BOOL8 v12; // r8
  _QWORD *v13; // r9
  unsigned __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // r9
  __int64 v18; // r10

  LOBYTE(v4) = 0;
  v5 = a3;
  *a4 = 0LL;
  v6 = (unsigned __int64)a4;
  a4[1] = 0LL;
  a4[2] = a2;
  if ( !a2 )
  {
    *a1 = (unsigned __int64)a4;
    return v4;
  }
  v8 = (_BYTE *)(a2 + 16);
  *(_QWORD *)(a2 + 8LL * a3) = v6;
  v9 = *(_BYTE *)(a2 + 16);
  LOBYTE(v4) = 2 * v5;
  v10 = (-1 - 2 * v5) & 3;
  v11 = v9 & 3;
  if ( (v9 & 3) != 0 )
  {
LABEL_5:
    if ( v11 != v10 )
    {
      *(_BYTE *)(a2 + 16) &= 0xFCu;
      return v4;
    }
    if ( (*(_BYTE *)(v6 + 16) & 3) != v11 )
    {
      v4 = RtlpTreeDoubleRotateNodes(a1, a2, v6, v5);
      *(_BYTE *)(v16 + 16) &= 0xFCu;
      v17 = v4;
      LOBYTE(v4) = *(_BYTE *)(v6 + 16) & 0xFC;
      *(_BYTE *)(v6 + 16) = v4;
      if ( v11 == (*(_BYTE *)(v17 + 16) & 3) )
      {
        LOBYTE(v4) = (v11 ^ *(_BYTE *)(v16 + 16) ^ 0xFE) & 3;
        *(_BYTE *)(v16 + 16) ^= v4;
        *(_BYTE *)(v17 + 16) &= 0xFCu;
      }
      else
      {
        if ( v11 == ((*(_BYTE *)(v17 + 16) ^ 0xFE) & 3) )
        {
          LOBYTE(v4) = v11 | v4;
          *(_BYTE *)(v6 + 16) = v4;
        }
        *(_BYTE *)(v17 + 16) &= 0xFCu;
      }
      return v4;
    }
    if ( (*(_QWORD *)(v6 + 16) & 0xFFFFFFFFFFFFFFFCuLL) == a2 )
    {
      v12 = !v5;
      v13 = (_QWORD *)(a2 + 8LL * v5);
      if ( *v13 == v6 )
      {
        v14 = *(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
        if ( v14 )
        {
          if ( *(_QWORD *)(v14 + 8) == a2 )
          {
            *(_QWORD *)(v14 + 8) = v6;
          }
          else
          {
            if ( *(_QWORD *)v14 != a2 )
              goto LABEL_28;
            *(_QWORD *)v14 = v6;
          }
        }
        else
        {
          if ( *a1 != a2 )
            goto LABEL_28;
          *a1 = v6;
        }
        *(_QWORD *)(v6 + 16) = v14 | *(_DWORD *)(v6 + 16) & 3;
        v15 = *(_QWORD *)(v6 + 8 * v12);
        if ( !v15 )
        {
LABEL_13:
          *v13 = v15;
          *(_QWORD *)(v6 + 8 * v12) = a2;
          v4 = v6 | *(_DWORD *)(a2 + 16) & 3;
          *(_QWORD *)(a2 + 16) = v4;
          *(_BYTE *)(v6 + 16) &= 0xFCu;
          *(_BYTE *)(a2 + 16) &= 0xFCu;
          return v4;
        }
        v18 = *(_QWORD *)(v15 + 16);
        if ( (v18 & 0xFFFFFFFFFFFFFFFCuLL) == v6 )
        {
          *(_QWORD *)(v15 + 16) = a2 | v18 & 3;
          goto LABEL_13;
        }
      }
    }
LABEL_28:
    __fastfail(0x1Du);
  }
  while ( 1 )
  {
    v6 = a2;
    *v8 = v10 | v9 & 0xFC;
    a2 = *(_QWORD *)v8 & 0xFFFFFFFFFFFFFFFCuLL;
    if ( !a2 )
      return v4;
    v8 = (_BYTE *)(a2 + 16);
    v9 = *(_BYTE *)(a2 + 16);
    v5 = *(_QWORD *)a2 != v6;
    LOBYTE(v4) = 2 * v5;
    v10 = (-1 - 2 * v5) & 3;
    v11 = v9 & 3;
    if ( (v9 & 3) != 0 )
      goto LABEL_5;
  }
}
