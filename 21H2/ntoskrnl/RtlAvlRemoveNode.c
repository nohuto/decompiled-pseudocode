/*
 * XREFs of RtlAvlRemoveNode @ 0x140234B20
 * Callers:
 *     MiDeleteVad @ 0x14021BFF0 (MiDeleteVad.c)
 *     MiZeroPage @ 0x140233310 (MiZeroPage.c)
 *     MiDeleteStaleCacheMaps @ 0x140271BD0 (MiDeleteStaleCacheMaps.c)
 *     MiDereferenceIoPages @ 0x140297968 (MiDereferenceIoPages.c)
 *     MiRemoveUnmappedIoNode @ 0x140297F50 (MiRemoveUnmappedIoNode.c)
 *     MiRemoveFaultNode @ 0x1402C71BC (MiRemoveFaultNode.c)
 *     MiUpdatePerSessionProto @ 0x1402CF0B8 (MiUpdatePerSessionProto.c)
 *     MiUpdateSystemProtoPtesTree @ 0x1402F8260 (MiUpdateSystemProtoPtesTree.c)
 *     MiRemoveFromSystemSpace @ 0x140304E4C (MiRemoveFromSystemSpace.c)
 *     MiWaitForInPageComplete @ 0x14031B1F0 (MiWaitForInPageComplete.c)
 *     MiCombiningInProgress @ 0x140366CB8 (MiCombiningInProgress.c)
 *     MiFreeCombineBlock @ 0x14036B730 (MiFreeCombineBlock.c)
 *     MiProcessLoaderEntry @ 0x140372360 (MiProcessLoaderEntry.c)
 *     MiRemoveMappingNode @ 0x14037A5F0 (MiRemoveMappingNode.c)
 *     MiSessionRemoveImage @ 0x14038AFF8 (MiSessionRemoveImage.c)
 *     MmManageFaultRange @ 0x14039DB08 (MmManageFaultRange.c)
 *     MiUpdatePageFileList @ 0x1403BFAAC (MiUpdatePageFileList.c)
 *     MiMakeEntireHugePfnGood @ 0x1403F394C (MiMakeEntireHugePfnGood.c)
 *     MiMarkHugePfnGood @ 0x1403F3DA8 (MiMarkHugePfnGood.c)
 *     MiFreeMdlTracker @ 0x140530B30 (MiFreeMdlTracker.c)
 *     MmUpdateMdlTrackerForMdlSwitch @ 0x140531398 (MmUpdateMdlTrackerForMdlSwitch.c)
 *     MiHotRemoveHugeRange @ 0x140532CF8 (MiHotRemoveHugeRange.c)
 *     MiReleasePartitionHugeIoSpace @ 0x140533888 (MiReleasePartitionHugeIoSpace.c)
 *     MiDeleteKernelStackNode @ 0x140535E6C (MiDeleteKernelStackNode.c)
 *     MiMakeIoRangePermanent @ 0x140536BB8 (MiMakeIoRangePermanent.c)
 *     MiUnlinkSessionList @ 0x14053E120 (MiUnlinkSessionList.c)
 *     MiRemoveVad @ 0x1405555C0 (MiRemoveVad.c)
 *     MiReplaceSystemProtoPtesNode @ 0x140557EB0 (MiReplaceSystemProtoPtesNode.c)
 *     MiCloneVads @ 0x140559328 (MiCloneVads.c)
 *     MiDeleteDeferredCloneDescriptors @ 0x14055A0C0 (MiDeleteDeferredCloneDescriptors.c)
 *     MiAllocateLargeZeroPages @ 0x14055DA5C (MiAllocateLargeZeroPages.c)
 *     MiActOnPartitionNodePages @ 0x1405608A0 (MiActOnPartitionNodePages.c)
 *     MiClearRangeInPartitionTree @ 0x140561770 (MiClearRangeInPartitionTree.c)
 *     MiDeletePartitionResources @ 0x140561918 (MiDeletePartitionResources.c)
 *     MiFreePartitionTree @ 0x14056233C (MiFreePartitionTree.c)
 *     MiInsertPartitionPages @ 0x140562540 (MiInsertPartitionPages.c)
 *     PsAdjustBasicEnclaveThreadList @ 0x1405843D4 (PsAdjustBasicEnclaveThreadList.c)
 *     RtlRemoveDynamicEnforcedAddressRange @ 0x1405CFF24 (RtlRemoveDynamicEnforcedAddressRange.c)
 *     ExpWnfDeleteNameInstance @ 0x140610DD0 (ExpWnfDeleteNameInstance.c)
 *     MiSectionDelete @ 0x1406EAB00 (MiSectionDelete.c)
 *     MiRemoveSharedCommitNode @ 0x1406EB4E0 (MiRemoveSharedCommitNode.c)
 *     MiProcessCrcList @ 0x140726B20 (MiProcessCrcList.c)
 *     MiDeleteHotPatchRecord @ 0x1408C99FC (MiDeleteHotPatchRecord.c)
 *     MiInsertHotPatchRecord @ 0x1408CA9A0 (MiInsertHotPatchRecord.c)
 *     MiInsertSecureImageActivePatch @ 0x1408CAAF4 (MiInsertSecureImageActivePatch.c)
 *     MiUnloadHotPatch @ 0x1408CE7C8 (MiUnloadHotPatch.c)
 *     MiUnloadHotPatchForUserSid @ 0x1408CE914 (MiUnloadHotPatchForUserSid.c)
 *     MiAllocateEntireImageFileExtents @ 0x1408CF2A4 (MiAllocateEntireImageFileExtents.c)
 *     MiDeleteImageExtentList @ 0x1408D0010 (MiDeleteImageExtentList.c)
 *     MiRemoveUserPhysicalPagesView @ 0x1408D644C (MiRemoveUserPhysicalPagesView.c)
 *     MiHotAddPartitionMemory @ 0x1408DB27C (MiHotAddPartitionMemory.c)
 *     PspProcessDynamicEHContinuationTargets @ 0x140907D04 (PspProcessDynamicEHContinuationTargets.c)
 *     PsCallEnclave @ 0x14090D1D0 (PsCallEnclave.c)
 *     MiInitializeDriverPtes @ 0x140A66EF8 (MiInitializeDriverPtes.c)
 * Callees:
 *     RtlpTreeDoubleRotateNodes @ 0x140318450 (RtlpTreeDoubleRotateNodes.c)
 */

char __fastcall RtlAvlRemoveNode(unsigned __int64 *a1, unsigned __int64 *a2)
{
  unsigned __int64 v2; // r10
  unsigned __int64 v4; // r11
  unsigned __int64 v5; // r9
  __int64 v7; // rax
  unsigned __int64 v8; // rdx
  char v9; // r10
  char v10; // al
  _BYTE *v11; // rsi
  unsigned __int8 v12; // di
  __int64 v13; // rbp
  unsigned __int64 v14; // rbp
  bool v15; // zf
  _QWORD *v16; // r9
  unsigned __int64 v17; // rcx
  unsigned int v18; // esi
  __int64 v19; // rdi
  __int64 v20; // r9
  __int64 v21; // r9
  unsigned __int64 v22; // r9
  unsigned __int64 v23; // r15
  char v24; // r8
  __int64 v25; // rax
  _QWORD *v26; // r11
  unsigned __int64 v27; // rcx
  __int64 v28; // rcx
  __int64 v29; // rax
  _QWORD *v30; // rax
  char v31; // r9
  unsigned __int8 v32; // cl
  __int64 v33; // rdi

  v2 = *a2;
  v4 = a2[1];
  v5 = v4;
  if ( *a2 )
    v5 = *a2;
  v7 = 0LL;
  if ( v2 )
    v7 = a2[1];
  if ( !v7 )
  {
    v8 = a2[2] & 0xFFFFFFFFFFFFFFFCuLL;
    if ( v5 )
    {
      if ( *(unsigned __int64 **)(v5 + 16) != a2 )
        goto LABEL_77;
      *(_QWORD *)(v5 + 16) = v8;
    }
    if ( v8 )
    {
      if ( *(unsigned __int64 **)(v8 + 8) == a2 )
      {
        v9 = 3;
        *(_QWORD *)(v8 + 8) = v5;
        goto LABEL_14;
      }
      if ( *(unsigned __int64 **)v8 == a2 )
      {
        v9 = 1;
        *(_QWORD *)v8 = v5;
        goto LABEL_14;
      }
    }
    else if ( (unsigned __int64 *)*a1 == a2 )
    {
      *a1 = v5;
      return v7;
    }
LABEL_77:
    __fastfail(0x1Du);
  }
  if ( (a2[2] & 3) == 3 )
  {
    v30 = *(_QWORD **)(v2 + 8);
    v18 = 0;
    v17 = *a2;
    v8 = *a2;
    if ( v30 )
    {
      v18 = 1;
      do
      {
        v8 = v17;
        v17 = (unsigned __int64)v30;
        v30 = (_QWORD *)v30[1];
      }
      while ( v30 );
    }
    v19 = *(_QWORD *)v17;
  }
  else
  {
    v16 = *(_QWORD **)v4;
    v17 = a2[1];
    v8 = v17;
    v18 = 1;
    if ( *(_QWORD *)v4 )
    {
      v18 = 0;
      do
      {
        v8 = v17;
        v17 = (unsigned __int64)v16;
        v16 = (_QWORD *)*v16;
      }
      while ( v16 );
    }
    v19 = *(_QWORD *)(v17 + 8);
  }
  *(_QWORD *)v17 = v2;
  *(_QWORD *)(v17 + 8) = v4;
  v20 = *(_QWORD *)(v2 + 16);
  if ( (unsigned __int64 *)(v20 & 0xFFFFFFFFFFFFFFFCuLL) != a2 )
    goto LABEL_77;
  *(_QWORD *)(v2 + 16) = v17 | v20 & 3;
  v21 = *(_QWORD *)(v4 + 16);
  if ( (unsigned __int64 *)(v21 & 0xFFFFFFFFFFFFFFFCuLL) != a2 )
    goto LABEL_77;
  *(_QWORD *)(v4 + 16) = v17 | v21 & 3;
  if ( (*(_QWORD *)(v17 + 16) & 0xFFFFFFFFFFFFFFFCuLL) != v8 )
    goto LABEL_77;
  *(_QWORD *)(v8 + 8LL * v18) = v19;
  if ( v19 )
  {
    if ( *(_QWORD *)(v19 + 16) != v17 )
      goto LABEL_77;
    *(_QWORD *)(v19 + 16) = v8;
  }
  *(_QWORD *)(v17 + 16) = a2[2];
  v9 = 3;
  if ( !v18 )
    v9 = 1;
  v22 = a2[2] & 0xFFFFFFFFFFFFFFFCuLL;
  if ( !v22 )
  {
    if ( (unsigned __int64 *)*a1 == a2 )
    {
      *a1 = v17;
      goto LABEL_14;
    }
    goto LABEL_77;
  }
  v29 = 0LL;
  if ( *(unsigned __int64 **)(v22 + 8) == a2 )
    v29 = 8LL;
  if ( *(unsigned __int64 **)(v29 + v22) != a2 )
    goto LABEL_77;
  *(_QWORD *)(v29 + v22) = v17;
  while ( 1 )
  {
LABEL_14:
    v10 = *(_BYTE *)(v8 + 16);
    v11 = (_BYTE *)(v8 + 16);
    v12 = v10 & 3;
    if ( (v10 & 3) == ((unsigned __int8)v9 ^ 2) )
    {
      LOBYTE(v7) = v10 & 0xFC;
      *v11 = v7;
      v13 = *(_QWORD *)v11;
      goto LABEL_20;
    }
    if ( !v12 )
    {
      LOBYTE(v7) = v9 | v10 & 0xFC;
      *(_BYTE *)(v8 + 16) = v7;
      return v7;
    }
    v13 = *(_QWORD *)v11;
    v23 = *(_QWORD *)v8;
    if ( v9 == 1 )
      v23 = *(_QWORD *)(v8 + 8);
    v24 = *(_BYTE *)(v23 + 16) & 3;
    if ( v24 != ((unsigned __int8)v9 ^ 2) )
      break;
    v7 = RtlpTreeDoubleRotateNodes(a1, v8, v23, v9 == 1);
    *v11 &= 0xFCu;
    v8 = v7;
    v31 = *(_BYTE *)(v23 + 16) & 0xFC;
    *(_BYTE *)(v23 + 16) = v31;
    v32 = *(_BYTE *)(v7 + 16);
    LODWORD(v7) = v32 & 3;
    if ( v12 == (_DWORD)v7 )
    {
      LOBYTE(v7) = (v12 ^ *v11 ^ 0xFE) & 3;
      *v11 ^= v7;
      *(_BYTE *)(v8 + 16) &= 0xFCu;
    }
    else
    {
      if ( v12 == ((v32 ^ 0xFE) & 3) )
        *(_BYTE *)(v23 + 16) = v12 | v31;
      *(_BYTE *)(v8 + 16) &= 0xFCu;
    }
LABEL_20:
    v14 = v13 & 0xFFFFFFFFFFFFFFFCuLL;
    if ( !v14 )
      return v7;
    v15 = *(_QWORD *)(v14 + 8) == v8;
    v9 = 3;
    v8 = v14;
    if ( !v15 )
      v9 = 1;
  }
  if ( (*(_QWORD *)(v23 + 16) & 0xFFFFFFFFFFFFFFFCuLL) != v8 )
    goto LABEL_77;
  v25 = 0LL;
  if ( v9 == 1 )
    v25 = 8LL;
  v26 = (_QWORD *)(v25 + v8);
  if ( *(_QWORD *)(v25 + v8) != v23 )
    goto LABEL_77;
  v27 = v13 & 0xFFFFFFFFFFFFFFFCuLL;
  if ( (v13 & 0xFFFFFFFFFFFFFFFCuLL) != 0 )
  {
    if ( *(_QWORD *)(v27 + 8) == v8 )
    {
      *(_QWORD *)(v27 + 8) = v23;
    }
    else
    {
      if ( *(_QWORD *)v27 != v8 )
        goto LABEL_77;
      *(_QWORD *)v27 = v23;
    }
  }
  else
  {
    if ( *a1 != v8 )
      goto LABEL_77;
    *a1 = v23;
  }
  *(_QWORD *)(v23 + 16) = v27 | *(_DWORD *)(v23 + 16) & 3;
  v7 = 0LL;
  if ( v9 != 1 )
    v7 = 8LL;
  v28 = *(_QWORD *)(v7 + v23);
  if ( v28 )
  {
    v33 = *(_QWORD *)(v28 + 16);
    if ( (v33 & 0xFFFFFFFFFFFFFFFCuLL) != v23 )
      goto LABEL_77;
    *(_QWORD *)(v28 + 16) = v8 | v33 & 3;
  }
  *v26 = v28;
  *(_QWORD *)(v7 + v23) = v8;
  *(_QWORD *)v11 = v23 | *(_DWORD *)v11 & 3;
  LOBYTE(v7) = *(_BYTE *)(v23 + 16) & 0xFC;
  if ( v24 )
  {
    *(_BYTE *)(v23 + 16) = v7;
    v8 = v23;
    *v11 &= 0xFCu;
    goto LABEL_20;
  }
  *(_BYTE *)(v23 + 16) = v7 | (v9 ^ 0xFE) & 3;
  return v7;
}
