/*
 * XREFs of CmDeleteLayeredKey @ 0x1404ECFB8
 * Callers:
 *     CmDeleteKey @ 0x1406E47E4 (CmDeleteKey.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140407C30 (_guard_dispatch_icall.c)
 *     CmpCreateTombstone @ 0x1404ED49C (CmpCreateTombstone.c)
 *     CmpReportNotifyForKcbStack @ 0x1405ED300 (CmpReportNotifyForKcbStack.c)
 *     CmpFindSubKeyByNumber @ 0x1405F34E0 (CmpFindSubKeyByNumber.c)
 *     CmpUnlockRegistry @ 0x1406435F0 (CmpUnlockRegistry.c)
 *     CmpCleanupKcbStack @ 0x140648A80 (CmpCleanupKcbStack.c)
 *     CmpUnlockKcbStack @ 0x140648B60 (CmpUnlockKcbStack.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x140649D20 (CmpIsKeyDeletedForKeyBody.c)
 *     CmpInitializeKcbStack @ 0x1406A6630 (CmpInitializeKcbStack.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x1406DEB20 (CmpStartKcbStackForTopLayerKcb.c)
 *     CmpLockKcbStackTopExclusiveRestShared @ 0x1406E1E60 (CmpLockKcbStackTopExclusiveRestShared.c)
 *     CmpRebuildKcbCacheFromNode @ 0x1406E2D94 (CmpRebuildKcbCacheFromNode.c)
 *     CmpHashUnicodeComponent @ 0x1406E3014 (CmpHashUnicodeComponent.c)
 *     CmpMarkKeyDirty @ 0x1406E3088 (CmpMarkKeyDirty.c)
 *     CmpFreeKeyByCell @ 0x1406E4070 (CmpFreeKeyByCell.c)
 *     CmpUnlockHashEntryByKcb @ 0x1406E4E40 (CmpUnlockHashEntryByKcb.c)
 *     CmpCleanupDiscardReplaceContext @ 0x1406E4EF0 (CmpCleanupDiscardReplaceContext.c)
 *     CmpLockKcbStackExclusive @ 0x1406E4F28 (CmpLockKcbStackExclusive.c)
 *     CmpLockHashEntryExclusiveByKcb @ 0x1406E4F6C (CmpLockHashEntryExclusiveByKcb.c)
 *     CmpDiscardKcb @ 0x1406E5718 (CmpDiscardKcb.c)
 *     CmpMarkKeyUnbacked @ 0x1406E5970 (CmpMarkKeyUnbacked.c)
 *     CmpFlushNotifiesOnKeyBodyList @ 0x1406E59F0 (CmpFlushNotifiesOnKeyBodyList.c)
 *     CmpLockRegistryExclusive @ 0x1406EB57C (CmpLockRegistryExclusive.c)
 *     CmpFlushNotifiesOnAllUnbackedHigherLayerKcbs @ 0x140734DA4 (CmpFlushNotifiesOnAllUnbackedHigherLayerKcbs.c)
 *     CmpHashCompressedComponent @ 0x140765D24 (CmpHashCompressedComponent.c)
 *     CmpFindKcbInHashEntryByCellIndex @ 0x14086EF08 (CmpFindKcbInHashEntryByCellIndex.c)
 *     CmpIncrementKcbSequenceNumber @ 0x14086F06C (CmpIncrementKcbSequenceNumber.c)
 *     HvpGetCellContextInitialize @ 0x140875D48 (HvpGetCellContextInitialize.c)
 *     CmpCommitDiscardAndReplaceKcbAndUnbackedHigherLayers @ 0x140876004 (CmpCommitDiscardAndReplaceKcbAndUnbackedHigherLayers.c)
 *     CmpInitializeDiscardReplaceContext @ 0x140876280 (CmpInitializeDiscardReplaceContext.c)
 *     CmpPrepareDiscardAndReplaceKcbAndUnbackedHigherLayers @ 0x140876448 (CmpPrepareDiscardAndReplaceKcbAndUnbackedHigherLayers.c)
 *     CmpFreeKeyValues @ 0x1408790F0 (CmpFreeKeyValues.c)
 *     CmpGetSubKeyCountForKcbStack @ 0x14087A6B8 (CmpGetSubKeyCountForKcbStack.c)
 *     CmpPromoteKey @ 0x140880318 (CmpPromoteKey.c)
 */

__int64 __fastcall CmDeleteLayeredKey(__int64 a1, __int64 a2, __int64 a3)
{
  ULONG_PTR v5; // rdi
  char v6; // dl
  char v7; // si
  __int64 v8; // r12
  char v9; // dl
  char v10; // r13
  int started; // ebx
  int SubKeyCountForKcbStack; // eax
  _QWORD *v13; // rcx
  __int64 v14; // r8
  __int64 v15; // rax
  _QWORD *v16; // rax
  __int64 v17; // rdx
  __int64 v18; // r8
  int v19; // eax
  __int64 v20; // rdx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rdx
  __int64 v27; // rsi
  unsigned int v28; // r15d
  unsigned int i; // r15d
  __int64 v30; // rax
  __int64 v31; // rdx
  int v32; // eax
  int v33; // ebx
  __int64 v34; // rdx
  ULONG_PTR v35; // rbx
  __int64 KcbInHashEntryByCellIndex; // rax
  char v37; // al
  ULONG_PTR v38; // rcx
  __int64 v39; // r9
  __int64 v40; // rdx
  __int64 v41; // [rsp+20h] [rbp-59h] BYREF
  __int64 v42; // [rsp+28h] [rbp-51h] BYREF
  _OWORD v43[2]; // [rsp+30h] [rbp-49h] BYREF
  _OWORD v44[2]; // [rsp+50h] [rbp-29h] BYREF
  __int128 v45; // [rsp+70h] [rbp-9h] BYREF
  _OWORD v46[5]; // [rsp+80h] [rbp+7h] BYREF
  ULONG_PTR BugCheckParameter3; // [rsp+E0h] [rbp+67h] BYREF
  __int64 v48; // [rsp+E8h] [rbp+6Fh]
  int v49; // [rsp+F8h] [rbp+7Fh] BYREF

  v48 = a2;
  v49 = 0;
  memset(v43, 0, sizeof(v43));
  v41 = 0LL;
  LODWORD(BugCheckParameter3) = 0;
  memset(v44, 0, sizeof(v44));
  v42 = 0LL;
  v45 = 0LL;
  memset(v46, 0, 32);
  CmpInitializeKcbStack(v43);
  CmpInitializeKcbStack(v44);
  v5 = *(_QWORD *)(a1 + 8);
  v7 = v6;
  v8 = *(_QWORD *)(v5 + 72);
  HvpGetCellContextInitialize(&v42);
  HvpGetCellContextInitialize(&v41);
  CmpInitializeDiscardReplaceContext(v46);
  v10 = v9;
  if ( (*(_DWORD *)(v5 + 184) & 0x80000) != 0 )
  {
    started = -1073741535;
    goto LABEL_28;
  }
  started = CmpStartKcbStackForTopLayerKcb(v43, v5);
  if ( started >= 0 )
  {
    started = CmpStartKcbStackForTopLayerKcb(v44, v8);
    if ( started >= 0 )
    {
LABEL_23:
      CmpLockHashEntryExclusiveByKcb(v5);
      CmpLockKcbStackTopExclusiveRestShared(v44);
      CmpLockKcbStackExclusive(v43);
      while ( !(unsigned __int8)CmpIsKeyDeletedForKeyBody(a1, 0LL) )
      {
        SubKeyCountForKcbStack = CmpGetSubKeyCountForKcbStack(v43, v25, &v49);
        v14 = 0LL;
        started = SubKeyCountForKcbStack;
        if ( SubKeyCountForKcbStack < 0 )
          goto LABEL_26;
        if ( v49 )
        {
          started = -1073741535;
          goto LABEL_26;
        }
        v15 = *(_QWORD *)(v5 + 192);
        if ( v15 )
        {
          v16 = (_QWORD *)(v15 + 32);
          v13 = (_QWORD *)*v16;
          if ( (_QWORD *)*v16 != v16 )
          {
            if ( !v7 )
              goto LABEL_22;
            if ( v13 != v16 )
            {
              v10 = 1;
              started = CmpPrepareDiscardAndReplaceKcbAndUnbackedHigherLayers(v5, v46, 0LL);
              if ( started < 0 )
                goto LABEL_26;
            }
          }
        }
        v17 = *(unsigned int *)(v5 + 40);
        if ( (_DWORD)v17 != -1 )
        {
          if ( !v7 )
          {
LABEL_22:
            CmpUnlockKcbStack(v43);
            CmpUnlockKcbStack(v44);
            CmpUnlockHashEntryByKcb(v5);
            CmpUnlockRegistry(v22, v21);
            CmpLockRegistryExclusive(v24, v23);
            v7 = 1;
            goto LABEL_23;
          }
          v27 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64 *))(*(_QWORD *)(v5 + 32) + 8LL))(
                  *(_QWORD *)(v5 + 32),
                  v17,
                  &v42);
          v28 = 0;
          if ( *(_DWORD *)(v27 + 24) + *(_DWORD *)(v27 + 20) )
          {
            while ( 1 )
            {
              started = CmpFindSubKeyByNumber(*(_QWORD *)(v5 + 32), v27, v28, &BugCheckParameter3, v41, v42);
              if ( started < 0 )
                break;
              if ( !(unsigned __int8)CmpMarkKeyDirty(*(_QWORD *)(v5 + 32), (unsigned int)BugCheckParameter3) )
                goto LABEL_40;
              if ( ++v28 >= *(_DWORD *)(v27 + 24) + *(_DWORD *)(v27 + 20) )
                goto LABEL_36;
            }
          }
          else
          {
LABEL_36:
            if ( (unsigned __int8)CmpMarkKeyDirty(*(_QWORD *)(v5 + 32), *(unsigned int *)(v5 + 40)) )
            {
              CmpFindSubKeyByNumber(*(_QWORD *)(v5 + 32), v27, 0LL, &BugCheckParameter3, v41, v42);
              for ( i = BugCheckParameter3; (_DWORD)BugCheckParameter3 != -1; i = BugCheckParameter3 )
              {
                v30 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64 *))(*(_QWORD *)(v5 + 32) + 8LL))(
                        *(_QWORD *)(v5 + 32),
                        i,
                        &v41);
                v31 = *(unsigned __int16 *)(v30 + 72);
                if ( (*(_BYTE *)(v30 + 2) & 0x20) != 0 )
                {
                  v32 = CmpHashCompressedComponent(v30 + 76, v31);
                }
                else
                {
                  *((_QWORD *)&v45 + 1) = v30 + 76;
                  LOWORD(v45) = v31;
                  WORD1(v45) = v31;
                  v32 = CmpHashUnicodeComponent(&v45);
                }
                v33 = v32;
                (*(void (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)(v5 + 32) + 16LL))(*(_QWORD *)(v5 + 32), &v41);
                v34 = (unsigned int)(v33 + 37 * *(_DWORD *)(v5 + 16));
                v35 = *(_QWORD *)(v5 + 32);
                KcbInHashEntryByCellIndex = CmpFindKcbInHashEntryByCellIndex(v35, v34, i);
                if ( KcbInHashEntryByCellIndex )
                {
                  *(_DWORD *)(KcbInHashEntryByCellIndex + 40) = -1;
                  v35 = *(_QWORD *)(v5 + 32);
                }
                CmpFreeKeyByCell(v35, i);
                CmpFindSubKeyByNumber(*(_QWORD *)(v5 + 32), v27, 0LL, &BugCheckParameter3, v41, v42);
              }
              CmpFreeKeyValues(*(_QWORD *)(v5 + 32));
              v37 = *(_BYTE *)(v27 + 13);
              *(_WORD *)(v27 + 2) &= 0x20u;
              *(_BYTE *)(v27 + 55) = 0;
              *(_DWORD *)(v27 + 52) &= 0xFF00FFFF;
              *(_BYTE *)(v27 + 13) = v37 & 0xFC | 1;
              *(_QWORD *)(v27 + 4) = 0LL;
              *(_QWORD *)(v27 + 56) = 0LL;
              *(_DWORD *)(v27 + 64) = 0;
              *(_WORD *)(v27 + 52) = 0;
              CmpIncrementKcbSequenceNumber(v5);
              CmpRebuildKcbCacheFromNode(v38);
              CmpReportNotifyForKcbStack(v44, 0LL, 1LL, v48);
              LOBYTE(v39) = 1;
              CmpFlushNotifiesOnAllUnbackedHigherLayerKcbs(v5, v40, a3, v39);
              CmpFlushNotifiesOnKeyBodyList(v5, 8LL, a3);
              if ( v10 )
              {
                CmpCommitDiscardAndReplaceKcbAndUnbackedHigherLayers(v5);
              }
              else
              {
                CmpMarkKeyUnbacked(v5, a3);
                CmpDiscardKcb(v5);
              }
              started = 0;
            }
            else
            {
LABEL_40:
              started = -1073741670;
            }
          }
          (*(void (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)(v5 + 32) + 16LL))(*(_QWORD *)(v5 + 32), &v42);
          goto LABEL_26;
        }
        if ( *(_DWORD *)(v8 + 40) != -1 )
          goto LABEL_18;
        CmpUnlockKcbStack(v43);
        CmpUnlockKcbStack(v44);
        LOBYTE(v18) = 1;
        v19 = CmpPromoteKey(v44, 0LL, v18);
        started = v19;
        if ( v19 == -1073741444 )
        {
          started = 0;
LABEL_27:
          CmpUnlockHashEntryByKcb(v5);
          goto LABEL_28;
        }
        if ( v19 < 0 )
          goto LABEL_27;
        CmpLockKcbStackExclusive(v43);
        if ( v7 )
        {
LABEL_18:
          started = CmpCreateTombstone(v13, v43, v14);
          if ( started >= 0 )
          {
            CmpReportNotifyForKcbStack(v44, 0LL, 1LL, v48);
            CmpFlushNotifiesOnAllUnbackedHigherLayerKcbs(v5, v20, a3, 0LL);
            CmpFlushNotifiesOnKeyBodyList(v5, 8LL, a3);
            if ( v10 )
            {
              CmpCommitDiscardAndReplaceKcbAndUnbackedHigherLayers(v5);
            }
            else
            {
              CmpMarkKeyUnbacked(v5, a3);
              CmpDiscardKcb(v5);
            }
            started = 0;
          }
          goto LABEL_26;
        }
      }
      started = 0;
LABEL_26:
      CmpUnlockKcbStack(v43);
      CmpUnlockKcbStack(v44);
      goto LABEL_27;
    }
  }
LABEL_28:
  CmpCleanupDiscardReplaceContext(v46, a3);
  CmpCleanupKcbStack(v43);
  CmpCleanupKcbStack(v44);
  return (unsigned int)started;
}
