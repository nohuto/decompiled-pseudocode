/*
 * XREFs of HvFreeCell @ 0x1407A6A90
 * Callers:
 *     CmpDereferenceSecurityNode @ 0x140243994 (CmpDereferenceSecurityNode.c)
 *     CmpGetSecurityDescriptorNodeEx @ 0x14067D1C8 (CmpGetSecurityDescriptorNodeEx.c)
 *     CmpUndoDeleteKeyForTransEx @ 0x14067D5F4 (CmpUndoDeleteKeyForTransEx.c)
 *     CmpTransMgrFreeVolatileData @ 0x1406B617C (CmpTransMgrFreeVolatileData.c)
 *     CmpSetSecurityDescriptorInfo @ 0x1406B845C (CmpSetSecurityDescriptorInfo.c)
 *     CmDeleteValueKey @ 0x1406B9764 (CmDeleteValueKey.c)
 *     CmpFreeKeyByCell @ 0x1406BA854 (CmpFreeKeyByCell.c)
 *     CmpFreeValue @ 0x1406BAA4C (CmpFreeValue.c)
 *     CmpFreeValueData @ 0x1406BAAE0 (CmpFreeValueData.c)
 *     CmpSetValueKeyExisting @ 0x1406BAE08 (CmpSetValueKeyExisting.c)
 *     CmpFreeKeyBody @ 0x1406BB2C8 (CmpFreeKeyBody.c)
 *     CmpRemoveSubKeyFromList @ 0x1406BB424 (CmpRemoveSubKeyFromList.c)
 *     CmpRemoveValueFromList @ 0x1406BB75C (CmpRemoveValueFromList.c)
 *     CmpCopyKeyPartial @ 0x14078ECB4 (CmpCopyKeyPartial.c)
 *     CmpSetValueDataExisting @ 0x140796AA4 (CmpSetValueDataExisting.c)
 *     CmpAddSubKeyEx @ 0x1407A4094 (CmpAddSubKeyEx.c)
 *     CmpAddToLeaf @ 0x1407A4520 (CmpAddToLeaf.c)
 *     CmpSetValueDataNew @ 0x1407A4E40 (CmpSetValueDataNew.c)
 *     HvReallocateCell @ 0x1407A5D90 (HvReallocateCell.c)
 *     CmpAddValueKeyNew @ 0x1407A5F18 (CmpAddValueKeyNew.c)
 *     CmpCreateChild @ 0x1407A7590 (CmpCreateChild.c)
 *     CmSetValueKey @ 0x1407A9870 (CmSetValueKey.c)
 *     CmpCreateHiveRootCell @ 0x140871A9C (CmpCreateHiveRootCell.c)
 *     CmpCopyValue @ 0x1408A6FF4 (CmpCopyValue.c)
 *     CmRenameKey @ 0x140A1170C (CmRenameKey.c)
 *     CmpConcatenateValueLists @ 0x140A1E25C (CmpConcatenateValueLists.c)
 *     CmpFreeKeyValueList @ 0x140A1F10C (CmpFreeKeyValueList.c)
 *     CmpFreeKeyValues @ 0x140A1F1C0 (CmpFreeKeyValues.c)
 *     CmpSyncKeyValues @ 0x140A20124 (CmpSyncKeyValues.c)
 *     CmpDuplicateIndex @ 0x140A20550 (CmpDuplicateIndex.c)
 *     CmpFreeIndexByCell @ 0x140A207B4 (CmpFreeIndexByCell.c)
 *     CmpRemoveSubKeyCellNoCellRef @ 0x140A21A3C (CmpRemoveSubKeyCellNoCellRef.c)
 *     CmpSplitLeaf @ 0x140A21D7C (CmpSplitLeaf.c)
 *     CmpFullPromoteSingleKeyFromKeyNodeStacks @ 0x140A23124 (CmpFullPromoteSingleKeyFromKeyNodeStacks.c)
 *     CmpLightWeightCleanupSetValueKeyUoW @ 0x140A252DC (CmpLightWeightCleanupSetValueKeyUoW.c)
 *     CmpLightWeightCommitRenameKeyUoW @ 0x140A25828 (CmpLightWeightCommitRenameKeyUoW.c)
 *     CmpLightWeightCreateSetValueData @ 0x140A25E14 (CmpLightWeightCreateSetValueData.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140238F40 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1402411C0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x1402627F0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 *     HvpRemoveFreeCellHint @ 0x1407A6200 (HvpRemoveFreeCellHint.c)
 *     HvpIsFreeNeighbor @ 0x1407A6CB0 (HvpIsFreeNeighbor.c)
 *     HvpEnlistFreeCell @ 0x1407A6D78 (HvpEnlistFreeCell.c)
 *     HvpGetBinContextInitialize @ 0x140AF2644 (HvpGetBinContextInitialize.c)
 *     HvpMapEntryGetBinAddress @ 0x140AF2654 (HvpMapEntryGetBinAddress.c)
 *     HvpGetCellMap @ 0x140AF2670 (HvpGetCellMap.c)
 */

signed __int32 __fastcall HvFreeCell(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter3)
{
  ULONG_PTR v2; // rdi
  __int64 v4; // r13
  __int64 v5; // rax
  __int64 v6; // rbx
  __int64 CellMap; // rax
  __int64 v8; // rcx
  unsigned int v9; // r12d
  __int64 BinAddress; // rax
  _QWORD *v11; // r10
  __int64 v12; // rdx
  __int64 v13; // r14
  int *v14; // rbx
  int v15; // edi
  int *v17; // rdx
  int v18; // ecx
  __int64 v19; // r9
  int v20; // r8d
  int v21; // eax
  __int64 v22; // r14
  unsigned int v23; // r8d
  __int64 v24; // r8
  unsigned int v25; // r8d
  unsigned int v26; // eax
  unsigned int v27; // r8d
  unsigned int v28; // r11d
  __int64 v29; // rax
  int v30; // r8d
  _DWORD v31[2]; // [rsp+30h] [rbp-10h]
  ULONG_PTR BugCheckParameter3a; // [rsp+38h] [rbp-8h]
  __int16 v33; // [rsp+80h] [rbp+40h] BYREF
  unsigned int v34; // [rsp+90h] [rbp+50h]
  int *v35; // [rsp+98h] [rbp+58h]

  v2 = (unsigned int)BugCheckParameter3;
  v33 = 0;
  v35 = 0LL;
  v4 = 0LL;
  HvpGetBinContextInitialize(&v33);
  v5 = KeAbPreAcquire(BugCheckParameter2 + 80, 0LL);
  v6 = v5;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(BugCheckParameter2 + 80), 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(BugCheckParameter2 + 80), v5, BugCheckParameter2 + 80);
  if ( v6 )
    *(_BYTE *)(v6 + 18) = 1;
  CellMap = HvpGetCellMap(BugCheckParameter2, (unsigned int)v2);
  if ( !CellMap )
    KeBugCheckEx(0x51u, 1uLL, BugCheckParameter2, v2, 0x654uLL);
  v9 = (unsigned int)v2 >> 31;
  BinAddress = HvpMapEntryGetBinAddress(v8, CellMap, &v33);
  v13 = BinAddress;
  if ( (*(_BYTE *)(v12 + 8) & 4) != 0 )
  {
    v27 = *(_DWORD *)(BinAddress + 4);
    v28 = v27 + *(_DWORD *)(BinAddress + 8);
    while ( v27 < v28 )
    {
      v29 = HvpGetCellMap(BugCheckParameter2, v27);
      *(_QWORD *)(v29 + 8) &= ~4uLL;
      v27 = v30 + 4096;
    }
  }
  v14 = (int *)(v13 + *v11 + (v2 & 0xFFF));
  *v14 = -*v14;
  do
  {
    if ( (unsigned __int8)HvpIsFreeNeighbor(BugCheckParameter2, (unsigned int)v2 >> 31) != 1 )
      break;
    v17 = v35;
    v18 = *v14;
    v19 = (unsigned int)v4;
    v4 = (unsigned int)(v4 + 1);
    v20 = *v35;
    if ( v35 <= v14 )
    {
      *v35 = v20 + v18;
      v21 = v2 - v20;
      v14 = v17;
    }
    else
    {
      *v14 = v18 + v20;
      v21 = v18 + v2;
    }
    v31[v19] = v20;
    *((_DWORD *)&BugCheckParameter3a + v19) = v21;
  }
  while ( (unsigned int)v4 < 2 );
  v15 = (_DWORD)v14 + *(_DWORD *)(v13 + 4) + (v9 << 31) - v13;
  if ( (_DWORD)v4 )
  {
    v22 = 0LL;
    do
    {
      v23 = v31[v22];
      v34 = 0;
      v24 = (v23 >> 3) - 1;
      if ( (unsigned int)v24 >= 0x10 )
      {
        v25 = (unsigned int)v24 >> 4;
        if ( v25 > 0xFF )
        {
          v24 = 23LL;
        }
        else
        {
          _BitScanReverse(&v26, v25);
          v34 = v26;
          v24 = v26 + 16;
        }
      }
      HvpRemoveFreeCellHint(BugCheckParameter2, *(unsigned int *)((char *)&BugCheckParameter3a + v22 * 4), v24, v9, v15);
      ++v22;
      --v4;
    }
    while ( v4 );
  }
  HvpEnlistFreeCell(BugCheckParameter2);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(BugCheckParameter2 + 80), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(BugCheckParameter2 + 80));
  return KeAbPostRelease(BugCheckParameter2 + 80);
}
