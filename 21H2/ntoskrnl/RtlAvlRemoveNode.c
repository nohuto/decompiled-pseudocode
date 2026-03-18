/*
 * XREFs of RtlAvlRemoveNode @ 0x1402C66C0
 * Callers:
 *     MiFreeCombineBlock @ 0x140239A98 (MiFreeCombineBlock.c)
 *     MiUpdatePerSessionProto @ 0x140255870 (MiUpdatePerSessionProto.c)
 *     MiCombiningInProgress @ 0x14025B5E0 (MiCombiningInProgress.c)
 *     MiRemoveFaultNode @ 0x14025CE80 (MiRemoveFaultNode.c)
 *     MiRemoveFromSystemSpace @ 0x14026D048 (MiRemoveFromSystemSpace.c)
 *     MiUpdateSystemProtoPtesTree @ 0x14026EA80 (MiUpdateSystemProtoPtesTree.c)
 *     MiWaitForInPageComplete @ 0x14027AA30 (MiWaitForInPageComplete.c)
 *     MiZeroPage @ 0x1402C4E50 (MiZeroPage.c)
 *     MiProcessLoaderEntry @ 0x1402D8C20 (MiProcessLoaderEntry.c)
 *     MiSessionRemoveImage @ 0x1402DBD88 (MiSessionRemoveImage.c)
 *     MiRemoveVad @ 0x14030DA80 (MiRemoveVad.c)
 *     MmManageFaultRange @ 0x140372224 (MmManageFaultRange.c)
 *     MiRemoveMappingNode @ 0x1403864DC (MiRemoveMappingNode.c)
 *     MiUpdatePageFileList @ 0x1403CF758 (MiUpdatePageFileList.c)
 *     MiFreeMdlTracker @ 0x140584374 (MiFreeMdlTracker.c)
 *     MmUpdateMdlTrackerForMdlSwitch @ 0x14058503C (MmUpdateMdlTrackerForMdlSwitch.c)
 *     MiHotRemoveHugeRange @ 0x140586A44 (MiHotRemoveHugeRange.c)
 *     MiMakeEntireHugePfnGood @ 0x140587900 (MiMakeEntireHugePfnGood.c)
 *     MiMarkHugePfnGood @ 0x1405882D0 (MiMarkHugePfnGood.c)
 *     MiReleasePartitionHugeIoSpace @ 0x140588C48 (MiReleasePartitionHugeIoSpace.c)
 *     MiRemovePendingBadPageNode @ 0x14058E7F4 (MiRemovePendingBadPageNode.c)
 *     MiDeleteKernelStackNode @ 0x140590C24 (MiDeleteKernelStackNode.c)
 *     MiDeleteStaleCacheMaps @ 0x1405910C0 (MiDeleteStaleCacheMaps.c)
 *     MiUnlinkSessionList @ 0x140599658 (MiUnlinkSessionList.c)
 *     MiInsertCopyExtents @ 0x14059F6F4 (MiInsertCopyExtents.c)
 *     MiMergeCopyExtents @ 0x14059FC8C (MiMergeCopyExtents.c)
 *     MiCloneVads @ 0x1405B99AC (MiCloneVads.c)
 *     MiDeleteDeferredCloneDescriptors @ 0x1405BA6F0 (MiDeleteDeferredCloneDescriptors.c)
 *     MiActOnPartitionNodePages @ 0x1405BCBC4 (MiActOnPartitionNodePages.c)
 *     MiClearRangeInPartitionTree @ 0x1405BDDAC (MiClearRangeInPartitionTree.c)
 *     MiDeletePartitionPageNodes @ 0x1405BDF64 (MiDeletePartitionPageNodes.c)
 *     MiDeletePartitionResources @ 0x1405BDFF8 (MiDeletePartitionResources.c)
 *     MiFreePartitionTree @ 0x1405BE614 (MiFreePartitionTree.c)
 *     MiInsertPartitionPages @ 0x1405BE81C (MiInsertPartitionPages.c)
 *     MiMergePageNodes @ 0x1405BF028 (MiMergePageNodes.c)
 *     MiPartitionDeleteMemoryNode @ 0x1405BF2A0 (MiPartitionDeleteMemoryNode.c)
 *     MiAllocateLargeZeroPages @ 0x1405C0D40 (MiAllocateLargeZeroPages.c)
 *     MiReplaceSystemProtoPtesNode @ 0x1405C350C (MiReplaceSystemProtoPtesNode.c)
 *     PsAdjustBasicEnclaveThreadList @ 0x1405E2E00 (PsAdjustBasicEnclaveThreadList.c)
 *     MiProcessCrcList @ 0x1406F2C30 (MiProcessCrcList.c)
 *     MiSectionDelete @ 0x1406FC070 (MiSectionDelete.c)
 *     MiRemoveSharedCommitNode @ 0x1406FC2F0 (MiRemoveSharedCommitNode.c)
 *     ExpWnfDeleteNameInstance @ 0x140791CAC (ExpWnfDeleteNameInstance.c)
 *     MiDeleteFileExtentList @ 0x140970668 (MiDeleteFileExtentList.c)
 *     MiDeleteHotPatchRecord @ 0x140972E78 (MiDeleteHotPatchRecord.c)
 *     MiInsertHotPatchRecord @ 0x140973D6C (MiInsertHotPatchRecord.c)
 *     MiInsertSecureImageActivePatch @ 0x140973EA4 (MiInsertSecureImageActivePatch.c)
 *     MiUnloadHotPatch @ 0x140977B70 (MiUnloadHotPatch.c)
 *     MiUnloadHotPatchForUserSid @ 0x140977CBC (MiUnloadHotPatchForUserSid.c)
 *     MiRemoveUserPhysicalPagesView @ 0x14097D5F0 (MiRemoveUserPhysicalPagesView.c)
 *     MiHotAddPartitionMemory @ 0x140981BB0 (MiHotAddPartitionMemory.c)
 *     PspProcessDynamicEHContinuationTargets @ 0x1409ADDA4 (PspProcessDynamicEHContinuationTargets.c)
 *     PsCallEnclave @ 0x1409B35D0 (PsCallEnclave.c)
 *     RtlRemoveDynamicEnforcedAddressRange @ 0x1409BFEC8 (RtlRemoveDynamicEnforcedAddressRange.c)
 *     MiInitializeDriverPtes @ 0x140B1A80C (MiInitializeDriverPtes.c)
 * Callees:
 *     RtlpTreeDoubleRotateNodes @ 0x14034FD50 (RtlpTreeDoubleRotateNodes.c)
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
  _QWORD *v29; // rax
  __int64 v30; // rax
  __int64 v31; // rdi
  char v32; // r9
  unsigned __int8 v33; // cl

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
        goto LABEL_76;
      *(_QWORD *)(v5 + 16) = v8;
    }
    if ( v8 )
    {
      if ( *(unsigned __int64 **)(v8 + 8) == a2 )
      {
        v9 = 3;
        *(_QWORD *)(v8 + 8) = v5;
        goto LABEL_16;
      }
      if ( *(unsigned __int64 **)v8 == a2 )
      {
        v9 = 1;
        *(_QWORD *)v8 = v5;
        goto LABEL_16;
      }
    }
    else if ( (unsigned __int64 *)*a1 == a2 )
    {
      *a1 = v5;
      return v7;
    }
LABEL_76:
    __fastfail(0x1Du);
  }
  if ( (a2[2] & 3) == 3 )
  {
    v29 = *(_QWORD **)(v2 + 8);
    v18 = 0;
    v17 = *a2;
    v8 = *a2;
    if ( v29 )
    {
      v18 = 1;
      do
      {
        v8 = v17;
        v17 = (unsigned __int64)v29;
        v29 = (_QWORD *)v29[1];
      }
      while ( v29 );
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
    goto LABEL_76;
  *(_QWORD *)(v2 + 16) = v17 | v20 & 3;
  v21 = *(_QWORD *)(v4 + 16);
  if ( (unsigned __int64 *)(v21 & 0xFFFFFFFFFFFFFFFCuLL) != a2 )
    goto LABEL_76;
  *(_QWORD *)(v4 + 16) = v17 | v21 & 3;
  if ( (*(_QWORD *)(v17 + 16) & 0xFFFFFFFFFFFFFFFCuLL) != v8 )
    goto LABEL_76;
  *(_QWORD *)(v8 + 8LL * v18) = v19;
  if ( v19 )
  {
    if ( *(_QWORD *)(v19 + 16) != v17 )
      goto LABEL_76;
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
      goto LABEL_16;
    }
    goto LABEL_76;
  }
  v30 = 0LL;
  if ( *(unsigned __int64 **)(v22 + 8) == a2 )
    v30 = 8LL;
  if ( *(unsigned __int64 **)(v30 + v22) != a2 )
    goto LABEL_76;
  *(_QWORD *)(v30 + v22) = v17;
  while ( 1 )
  {
LABEL_16:
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
    v32 = *(_BYTE *)(v23 + 16) & 0xFC;
    *(_BYTE *)(v23 + 16) = v32;
    v33 = *(_BYTE *)(v7 + 16);
    LODWORD(v7) = v33 & 3;
    if ( v12 == (_DWORD)v7 )
    {
      LOBYTE(v7) = (v12 ^ *v11 ^ 0xFE) & 3;
      *v11 ^= v7;
      *(_BYTE *)(v8 + 16) &= 0xFCu;
    }
    else
    {
      if ( v12 == ((v33 ^ 0xFE) & 3) )
        *(_BYTE *)(v23 + 16) = v12 | v32;
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
    goto LABEL_76;
  v25 = 0LL;
  if ( v9 == 1 )
    v25 = 8LL;
  v26 = (_QWORD *)(v25 + v8);
  if ( *(_QWORD *)(v25 + v8) != v23 )
    goto LABEL_76;
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
        goto LABEL_76;
      *(_QWORD *)v27 = v23;
    }
  }
  else
  {
    if ( *a1 != v8 )
      goto LABEL_76;
    *a1 = v23;
  }
  *(_QWORD *)(v23 + 16) = v27 | *(_DWORD *)(v23 + 16) & 3;
  v7 = 0LL;
  if ( v9 != 1 )
    v7 = 8LL;
  v28 = *(_QWORD *)(v7 + v23);
  if ( v28 )
  {
    v31 = *(_QWORD *)(v28 + 16);
    if ( (v31 & 0xFFFFFFFFFFFFFFFCuLL) != v23 )
      goto LABEL_76;
    *(_QWORD *)(v28 + 16) = v8 | v31 & 3;
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
