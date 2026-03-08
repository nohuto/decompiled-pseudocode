/*
 * XREFs of CmpEnumerateAllHigherLayerKcbs @ 0x140A1CE0C
 * Callers:
 *     CmDeleteKey @ 0x1406B762C (CmDeleteKey.c)
 *     CmpCleanupDiscardReplaceContext @ 0x1406B7DC0 (CmpCleanupDiscardReplaceContext.c)
 *     CmpSaveBootControlSet @ 0x140A078D8 (CmpSaveBootControlSet.c)
 *     CmRestoreKey @ 0x140A08004 (CmRestoreKey.c)
 *     CmRenameKey @ 0x140A1170C (CmRenameKey.c)
 *     CmpCommitDiscardAndReplaceKcbAndUnbackedHigherLayers @ 0x140A1CBE4 (CmpCommitDiscardAndReplaceKcbAndUnbackedHigherLayers.c)
 *     CmpFlushNotifiesOnAllUnbackedHigherLayerKcbs @ 0x140A1CF98 (CmpFlushNotifiesOnAllUnbackedHigherLayerKcbs.c)
 *     CmpInvalidateAllHigherLayerKcbs @ 0x140A1D088 (CmpInvalidateAllHigherLayerKcbs.c)
 *     CmpPrepareDiscardAndReplaceKcbAndUnbackedHigherLayers @ 0x140A1D2A4 (CmpPrepareDiscardAndReplaceKcbAndUnbackedHigherLayers.c)
 *     CmpPrepareToInvalidateAllHigherLayerKcbs @ 0x140A1D3D0 (CmpPrepareToInvalidateAllHigherLayerKcbs.c)
 *     CmpLightWeightCommitDeleteKeyUoW @ 0x140A254B8 (CmpLightWeightCommitDeleteKeyUoW.c)
 *     CmpLightWeightPrepareRenameKeyUoW @ 0x140A266F0 (CmpLightWeightPrepareRenameKeyUoW.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     CmpDereferenceKeyControlBlockWithLock @ 0x1406B7100 (CmpDereferenceKeyControlBlockWithLock.c)
 *     CmpReferenceKeyControlBlock @ 0x14074BF00 (CmpReferenceKeyControlBlock.c)
 *     CmpLockKcbExclusive @ 0x1407AF778 (CmpLockKcbExclusive.c)
 *     CmpLockKcbShared @ 0x140AF20D0 (CmpLockKcbShared.c)
 *     CmpUnlockKcb @ 0x140AF2140 (CmpUnlockKcb.c)
 */

_UNKNOWN **__fastcall CmpEnumerateAllHigherLayerKcbs(
        __int64 a1,
        unsigned int (__fastcall *a2)(ULONG_PTR, __int64),
        unsigned int (__fastcall *a3)(ULONG_PTR, __int64, __int64),
        __int64 a4,
        __int64 a5,
        char a6,
        char a7)
{
  _UNKNOWN **result; // rax
  _QWORD *v8; // rdi
  bool v9; // bp
  unsigned int (__fastcall *v11)(ULONG_PTR, __int64, __int64); // r9
  char v13; // r8
  _QWORD *v14; // rbx
  ULONG_PTR v15; // rsi
  _QWORD *v16; // r15
  ULONG_PTR v17; // rcx
  _UNKNOWN *retaddr; // [rsp+48h] [rbp+0h] BYREF

  result = &retaddr;
  v8 = *(_QWORD **)(a1 + 192);
  v9 = 0;
  v11 = a3;
  if ( v8 )
  {
    result = (_UNKNOWN **)(v8 + 4);
    v13 = 0;
    v14 = (_QWORD *)v8[4];
    if ( v14 != v8 + 4 )
    {
      while ( v14 == v8 + 4 )
      {
        v14 = v8;
        v13 = 1;
        v8 = (_QWORD *)v8[3];
LABEL_18:
        result = (_UNKNOWN **)(*(_QWORD *)(a1 + 192) + 32LL);
        if ( v14 == result )
          return result;
      }
      v15 = v14[2];
      v16 = v14;
      if ( v13 )
      {
        v14 = (_QWORD *)*v14;
        if ( !v9 )
          v9 = v11(v15, a4, a5) == 1;
        if ( a6 )
          CmpDereferenceKeyControlBlockWithLock(v15, a4, 0);
        else
          CmpUnlockKcb(v15);
        if ( v9 )
        {
          v14 = v8;
          v13 = 1;
          v8 = (_QWORD *)v8[3];
          goto LABEL_17;
        }
      }
      else
      {
        v17 = v14[2];
        if ( a6 )
        {
          CmpReferenceKeyControlBlock(v17);
        }
        else if ( a7 )
        {
          CmpLockKcbExclusive(v17);
        }
        else
        {
          CmpLockKcbShared(v17);
        }
        if ( a2(v15, a5) == 1 )
        {
          v14 = (_QWORD *)v14[4];
          v8 = v16;
        }
        else
        {
          v14 = (_QWORD *)*v14;
          if ( a6 )
            CmpDereferenceKeyControlBlockWithLock(v15, a4, 0);
          else
            CmpUnlockKcb(v15);
        }
      }
      v13 = 0;
LABEL_17:
      v11 = a3;
      goto LABEL_18;
    }
  }
  return result;
}
