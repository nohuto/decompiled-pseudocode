/*
 * XREFs of RtlAvlInsertNodeEx @ 0x140316550
 * Callers:
 *     MiZeroLargePages @ 0x140232520 (MiZeroLargePages.c)
 *     MiReferenceIoPages @ 0x140295A24 (MiReferenceIoPages.c)
 *     MiDereferenceIoPages @ 0x140297968 (MiDereferenceIoPages.c)
 *     MiInsertSubsectionNode @ 0x1402A15FC (MiInsertSubsectionNode.c)
 *     MiInsertMappingNode @ 0x1402C2818 (MiInsertMappingNode.c)
 *     MiUpdatePerSessionProto @ 0x1402CF0B8 (MiUpdatePerSessionProto.c)
 *     MiFlowThroughInsertNode @ 0x1402D006C (MiFlowThroughInsertNode.c)
 *     MiUpdateSystemProtoPtesTree @ 0x1402F8260 (MiUpdateSystemProtoPtesTree.c)
 *     MiInsertInSystemSpace @ 0x1402FADE0 (MiInsertInSystemSpace.c)
 *     MiBeginPageAccessor @ 0x140314E48 (MiBeginPageAccessor.c)
 *     MiInsertVad @ 0x140316330 (MiInsertVad.c)
 *     MiCombiningInProgress @ 0x140366CB8 (MiCombiningInProgress.c)
 *     MiSharePages @ 0x140368360 (MiSharePages.c)
 *     MiProcessLoaderEntry @ 0x140372360 (MiProcessLoaderEntry.c)
 *     MmManageFaultRange @ 0x14039DB08 (MmManageFaultRange.c)
 *     MiSessionInsertImage @ 0x1403A2974 (MiSessionInsertImage.c)
 *     MiInsertSessionWorkingSet @ 0x1403A6BD0 (MiInsertSessionWorkingSet.c)
 *     MiUpdatePageFileList @ 0x1403BFAAC (MiUpdatePageFileList.c)
 *     MiMarkHugePfnBad @ 0x1403F39F4 (MiMarkHugePfnBad.c)
 *     MiAddMdlTracker @ 0x140530854 (MiAddMdlTracker.c)
 *     MmUpdateMdlTrackerForMdlSwitch @ 0x140531398 (MmUpdateMdlTrackerForMdlSwitch.c)
 *     MiHotRemoveHugeRange @ 0x140532CF8 (MiHotRemoveHugeRange.c)
 *     MiReleasePartitionHugeIoSpace @ 0x140533888 (MiReleasePartitionHugeIoSpace.c)
 *     MiCreateKernelStackNode @ 0x140535D48 (MiCreateKernelStackNode.c)
 *     MiMakeIoRangePermanent @ 0x140536BB8 (MiMakeIoRangePermanent.c)
 *     MiReplaceSystemProtoPtesNode @ 0x140557EB0 (MiReplaceSystemProtoPtesNode.c)
 *     MiInsertClone @ 0x14055B274 (MiInsertClone.c)
 *     MiActOnPartitionNodePages @ 0x1405608A0 (MiActOnPartitionNodePages.c)
 *     MiAddRangeToPartitionTree @ 0x14056116C (MiAddRangeToPartitionTree.c)
 *     MiDeletePartitionResources @ 0x140561918 (MiDeletePartitionResources.c)
 *     MiFreePartitionTree @ 0x14056233C (MiFreePartitionTree.c)
 *     MiInsertPartitionPages @ 0x140562540 (MiInsertPartitionPages.c)
 *     MiMergePageNodes @ 0x140562AE4 (MiMergePageNodes.c)
 *     PsAdjustBasicEnclaveThreadList @ 0x1405843D4 (PsAdjustBasicEnclaveThreadList.c)
 *     PsLoadVsmEnclaveData @ 0x140584B3C (PsLoadVsmEnclaveData.c)
 *     RtlAddDynamicEnforcedAddressRange @ 0x1405CFDB0 (RtlAddDynamicEnforcedAddressRange.c)
 *     ExpWnfCreateNameInstance @ 0x14060DA34 (ExpWnfCreateNameInstance.c)
 *     MiInsertSharedCommitNode @ 0x1406EB750 (MiInsertSharedCommitNode.c)
 *     MiFinishCreateSection @ 0x140705C20 (MiFinishCreateSection.c)
 *     MiProcessCrcList @ 0x140726B20 (MiProcessCrcList.c)
 *     MiInsertHotPatchRecord @ 0x1408CA9A0 (MiInsertHotPatchRecord.c)
 *     MiInsertSecureImageActivePatch @ 0x1408CAAF4 (MiInsertSecureImageActivePatch.c)
 *     MiLoadHotPatchForUserSid @ 0x1408CAF30 (MiLoadHotPatchForUserSid.c)
 *     MiAllocateEntireImageFileExtents @ 0x1408CF2A4 (MiAllocateEntireImageFileExtents.c)
 *     MiAweViewInserter @ 0x1408D56DC (MiAweViewInserter.c)
 *     MiFindLargePageMemory @ 0x1408DA0E4 (MiFindLargePageMemory.c)
 *     PsCallEnclave @ 0x14090D1D0 (PsCallEnclave.c)
 *     RtlAddDynamicEHContinuationTarget @ 0x14091A8E8 (RtlAddDynamicEHContinuationTarget.c)
 *     MiCreateEnclaveRegions @ 0x140A54ED8 (MiCreateEnclaveRegions.c)
 *     MiInitializeDriverPtes @ 0x140A66EF8 (MiInitializeDriverPtes.c)
 * Callees:
 *     RtlpTreeDoubleRotateNodes @ 0x140318450 (RtlpTreeDoubleRotateNodes.c)
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
