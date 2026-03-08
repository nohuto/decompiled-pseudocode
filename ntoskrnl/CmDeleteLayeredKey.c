/*
 * XREFs of CmDeleteLayeredKey @ 0x1406144A0
 * Callers:
 *     CmDeleteKey @ 0x1406B762C (CmDeleteKey.c)
 * Callees:
 *     CmpDrainDelayDerefContext @ 0x140262F30 (CmpDrainDelayDerefContext.c)
 *     CmpCreateTombstone @ 0x140614A00 (CmpCreateTombstone.c)
 *     CmpLockRegistryExclusive @ 0x1406B6454 (CmpLockRegistryExclusive.c)
 *     CmpUnlockHashEntryByKcb @ 0x1406B6550 (CmpUnlockHashEntryByKcb.c)
 *     CmpCleanupDiscardReplaceContext @ 0x1406B7DC0 (CmpCleanupDiscardReplaceContext.c)
 *     CmpLockKcbStackExclusive @ 0x1406B7DF8 (CmpLockKcbStackExclusive.c)
 *     CmpLockKcbStackTopExclusiveRestShared @ 0x1406BA388 (CmpLockKcbStackTopExclusiveRestShared.c)
 *     CmpFreeKeyByCell @ 0x1406BA854 (CmpFreeKeyByCell.c)
 *     CmpMarkKeyDirty @ 0x1406BAB64 (CmpMarkKeyDirty.c)
 *     CmpMarkKeyUnbacked @ 0x14074AD64 (CmpMarkKeyUnbacked.c)
 *     CmpFlushNotifiesOnKeyBodyList @ 0x14074AF50 (CmpFlushNotifiesOnKeyBodyList.c)
 *     CmpDiscardKcb @ 0x14074B098 (CmpDiscardKcb.c)
 *     CmpHashCompressedComponent @ 0x14074BDE4 (CmpHashCompressedComponent.c)
 *     CmpInitializeKcbStack @ 0x14078361C (CmpInitializeKcbStack.c)
 *     CmpCleanupKcbStack @ 0x1407836C4 (CmpCleanupKcbStack.c)
 *     HvpReleaseCellFlat @ 0x14078B2A0 (HvpReleaseCellFlat.c)
 *     CmpHashUnicodeComponent @ 0x1407A480C (CmpHashUnicodeComponent.c)
 *     CmpRebuildKcbCacheFromNode @ 0x1407A5468 (CmpRebuildKcbCacheFromNode.c)
 *     CmpLockHashEntryExclusiveByKcb @ 0x1407AB174 (CmpLockHashEntryExclusiveByKcb.c)
 *     CmpUnlockKcbStack @ 0x1407ABFF8 (CmpUnlockKcbStack.c)
 *     CmpFindSubKeyByNumber @ 0x1407AD320 (CmpFindSubKeyByNumber.c)
 *     CmpReportNotifyForKcbStack @ 0x1407AEF5C (CmpReportNotifyForKcbStack.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x1407AF294 (CmpStartKcbStackForTopLayerKcb.c)
 *     HvpGetCellPaged @ 0x1407B45C0 (HvpGetCellPaged.c)
 *     HvpReleaseCellPaged @ 0x1407B46D0 (HvpReleaseCellPaged.c)
 *     HvpGetCellContextReinitialize @ 0x1407B470C (HvpGetCellContextReinitialize.c)
 *     HvpGetCellFlat @ 0x1407F9410 (HvpGetCellFlat.c)
 *     CmpFindKcbInHashEntryByCellIndex @ 0x140A14668 (CmpFindKcbInHashEntryByCellIndex.c)
 *     CmpIncrementKcbSequenceNumber @ 0x140A147D0 (CmpIncrementKcbSequenceNumber.c)
 *     CmpCommitDiscardAndReplaceKcbAndUnbackedHigherLayers @ 0x140A1CBE4 (CmpCommitDiscardAndReplaceKcbAndUnbackedHigherLayers.c)
 *     CmpFlushNotifiesOnAllUnbackedHigherLayerKcbs @ 0x140A1CF98 (CmpFlushNotifiesOnAllUnbackedHigherLayerKcbs.c)
 *     CmpInitializeDiscardReplaceContext @ 0x140A1D060 (CmpInitializeDiscardReplaceContext.c)
 *     CmpPrepareDiscardAndReplaceKcbAndUnbackedHigherLayers @ 0x140A1D2A4 (CmpPrepareDiscardAndReplaceKcbAndUnbackedHigherLayers.c)
 *     CmpFreeKeyValues @ 0x140A1F1C0 (CmpFreeKeyValues.c)
 *     CmpGetSubKeyCountForKcbStack @ 0x140A20860 (CmpGetSubKeyCountForKcbStack.c)
 *     CmpPromoteKey @ 0x140A238FC (CmpPromoteKey.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x140AF21E0 (CmpIsKeyDeletedForKeyBody.c)
 *     CmpUnlockRegistry @ 0x140AF22C0 (CmpUnlockRegistry.c)
 */

__int64 __fastcall CmDeleteLayeredKey(__int64 a1, __int64 a2, _QWORD **a3)
{
  char v5; // si
  char v6; // r12
  int started; // ebx
  __int64 v8; // rdx
  int SubKeyCountForKcbStack; // eax
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  ULONG_PTR v16; // rdx
  int v17; // eax
  ULONG_PTR v18; // rdi
  __int64 v19; // r15
  __int64 v21; // rdx
  ULONG_PTR v22; // rcx
  __int64 CellFlat; // rax
  __int64 v24; // rsi
  int v25; // r15d
  __int64 CellPaged; // rax
  __int64 v27; // rdx
  int v28; // eax
  __int64 v29; // rcx
  int v30; // ebx
  __int64 KcbInHashEntryByCellIndex; // rax
  ULONG_PTR v32; // rcx
  __int64 v33; // rcx
  __int64 v34; // [rsp+20h] [rbp-59h] BYREF
  __int64 v35; // [rsp+28h] [rbp-51h] BYREF
  _OWORD v36[2]; // [rsp+30h] [rbp-49h] BYREF
  _OWORD v37[2]; // [rsp+50h] [rbp-29h] BYREF
  __int128 v38; // [rsp+70h] [rbp-9h] BYREF
  _OWORD v39[5]; // [rsp+80h] [rbp+7h] BYREF
  int v41; // [rsp+F8h] [rbp+7Fh] BYREF

  v41 = 0;
  memset(v37, 0, sizeof(v37));
  v34 = 0LL;
  memset(v36, 0, sizeof(v36));
  v35 = 0LL;
  v38 = 0LL;
  memset(v39, 0, 32);
  CmpInitializeKcbStack(v37);
  CmpInitializeKcbStack(v36);
  v5 = 0;
  HvpGetCellContextReinitialize(&v35);
  HvpGetCellContextReinitialize(&v34);
  CmpInitializeDiscardReplaceContext(v39);
  v6 = 0;
  while ( 1 )
  {
    v18 = *(_QWORD *)(a1 + 8);
    v19 = *(_QWORD *)(v18 + 72);
    if ( (*(_DWORD *)(v18 + 184) & 0x80000) != 0 )
    {
      started = -1073741535;
      goto LABEL_24;
    }
    started = CmpStartKcbStackForTopLayerKcb(v37, *(_QWORD *)(a1 + 8));
    if ( started < 0 )
      goto LABEL_24;
    started = CmpStartKcbStackForTopLayerKcb(v36, v19);
    if ( started < 0 )
      goto LABEL_24;
    CmpLockHashEntryExclusiveByKcb(v18);
    CmpLockKcbStackTopExclusiveRestShared(v36);
    CmpLockKcbStackExclusive(v37);
    if ( (unsigned __int8)CmpIsKeyDeletedForKeyBody(a1, 0LL) )
    {
      started = 0;
      goto LABEL_59;
    }
    SubKeyCountForKcbStack = CmpGetSubKeyCountForKcbStack(v37, v8, &v41);
    v10 = 0LL;
    started = SubKeyCountForKcbStack;
    if ( SubKeyCountForKcbStack < 0 )
      goto LABEL_59;
    if ( v41 )
    {
      started = -1073741535;
      goto LABEL_59;
    }
    v11 = *(_QWORD *)(v18 + 192);
    if ( v11 && *(_QWORD *)(v11 + 32) != v11 + 32 )
    {
      if ( !v5 )
      {
        CmpUnlockKcbStack(v37);
        CmpUnlockKcbStack(v36);
        CmpUnlockHashEntryByKcb(v18);
LABEL_20:
        CmpUnlockRegistry(v13, v12, v14, v15, v34, v35);
        CmpCleanupKcbStack(v36);
        CmpCleanupKcbStack(v37);
        CmpLockRegistryExclusive();
        v5 = 1;
        goto LABEL_21;
      }
      v6 = 1;
      started = CmpPrepareDiscardAndReplaceKcbAndUnbackedHigherLayers(v18, v39);
      if ( started < 0 )
        goto LABEL_59;
    }
    v16 = *(unsigned int *)(v18 + 40);
    if ( (_DWORD)v16 != -1 )
      break;
    if ( *(_DWORD *)(v19 + 40) != -1 )
      goto LABEL_27;
    CmpUnlockKcbStack(v37);
    CmpUnlockKcbStack(v36);
    v17 = CmpPromoteKey(v36, 0LL, 0LL);
    started = v17;
    if ( v17 == -1073741444 )
    {
      started = 0;
      goto LABEL_60;
    }
    if ( v17 < 0 )
      goto LABEL_60;
    if ( v5 )
    {
      CmpLockKcbStackTopExclusiveRestShared(v36);
      CmpLockKcbStackExclusive(v37);
LABEL_27:
      started = CmpCreateTombstone(v10, v37);
      if ( started >= 0 )
      {
        ((void (__fastcall *)(_OWORD *, _QWORD, __int64, __int64, __int64, __int64))CmpReportNotifyForKcbStack)(
          v36,
          0LL,
          1LL,
          a2,
          v34,
          v35);
        CmpFlushNotifiesOnAllUnbackedHigherLayerKcbs(v18, v21, a3, 0LL);
        CmpFlushNotifiesOnKeyBodyList(v18, 8LL, a3);
        if ( v6 )
        {
          CmpCommitDiscardAndReplaceKcbAndUnbackedHigherLayers(v18);
        }
        else
        {
          CmpMarkKeyUnbacked(v18, a3);
          CmpDiscardKcb(v18);
        }
        started = 0;
      }
      goto LABEL_59;
    }
    CmpUnlockHashEntryByKcb(v18);
    CmpCleanupKcbStack(v36);
    CmpCleanupKcbStack(v37);
LABEL_21:
    CmpInitializeKcbStack(v36);
    CmpInitializeKcbStack(v37);
  }
  if ( !v5 )
  {
    CmpUnlockKcbStack(v37);
    CmpUnlockKcbStack(v36);
    CmpUnlockHashEntryByKcb(v18);
    CmpCleanupDiscardReplaceContext(v39, a3);
    CmpDrainDelayDerefContext(a3);
    goto LABEL_20;
  }
  v22 = *(_QWORD *)(v18 + 32);
  if ( (*(_BYTE *)(v22 + 140) & 1) != 0 )
    CellFlat = HvpGetCellFlat(v22, v16);
  else
    CellFlat = HvpGetCellPaged(v22);
  v24 = CellFlat;
  v25 = 0;
  if ( *(_DWORD *)(CellFlat + 24) + *(_DWORD *)(CellFlat + 20) )
  {
    while ( 1 )
    {
      started = CmpFindSubKeyByNumber(*(_QWORD *)(v18 + 32));
      if ( started < 0 )
        break;
      started = CmpMarkKeyDirty(*(_QWORD *)(v18 + 32), 0LL);
      if ( started < 0 )
        break;
      if ( ++v25 >= (unsigned int)(*(_DWORD *)(v24 + 24) + *(_DWORD *)(v24 + 20)) )
        goto LABEL_39;
    }
  }
  else
  {
LABEL_39:
    started = CmpMarkKeyDirty(*(_QWORD *)(v18 + 32), *(unsigned int *)(v18 + 40));
    if ( started >= 0 )
    {
      while ( 1 )
      {
        CmpFindSubKeyByNumber(*(_QWORD *)(v18 + 32));
        v32 = *(_QWORD *)(v18 + 32);
        if ( (*(_BYTE *)(v32 + 140) & 1) != 0 )
          CellPaged = HvpGetCellFlat(v32, 0LL);
        else
          CellPaged = HvpGetCellPaged(v32);
        v27 = *(unsigned __int16 *)(CellPaged + 72);
        if ( (*(_BYTE *)(CellPaged + 2) & 0x20) != 0 )
        {
          v28 = CmpHashCompressedComponent(CellPaged + 76, v27);
        }
        else
        {
          *((_QWORD *)&v38 + 1) = CellPaged + 76;
          LOWORD(v38) = v27;
          WORD1(v38) = v27;
          v28 = CmpHashUnicodeComponent(&v38);
        }
        v29 = *(_QWORD *)(v18 + 32);
        v30 = v28;
        if ( (*(_BYTE *)(v29 + 140) & 1) != 0 )
          HvpReleaseCellFlat(v29, &v34);
        else
          HvpReleaseCellPaged(v29, &v34);
        KcbInHashEntryByCellIndex = CmpFindKcbInHashEntryByCellIndex(
                                      *(_QWORD *)(v18 + 32),
                                      (unsigned int)(v30 + 37 * *(_DWORD *)(v18 + 16)),
                                      0LL);
        if ( KcbInHashEntryByCellIndex )
          *(_DWORD *)(KcbInHashEntryByCellIndex + 40) = -1;
        CmpFreeKeyByCell(*(_QWORD *)(v18 + 32), 0LL);
      }
    }
  }
  v33 = *(_QWORD *)(v18 + 32);
  if ( (*(_BYTE *)(v33 + 140) & 1) != 0 )
    HvpReleaseCellFlat(v33, &v35);
  else
    HvpReleaseCellPaged(v33, &v35);
LABEL_59:
  CmpUnlockKcbStack(v37);
  CmpUnlockKcbStack(v36);
LABEL_60:
  CmpUnlockHashEntryByKcb(v18);
LABEL_24:
  CmpCleanupDiscardReplaceContext(v39, a3);
  CmpCleanupKcbStack(v37);
  CmpCleanupKcbStack(v36);
  return (unsigned int)started;
}
