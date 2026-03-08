/*
 * XREFs of CmpTransMgrFreeVolatileData @ 0x1406B617C
 * Callers:
 *     CmRmFinalizeRecovery @ 0x140733440 (CmRmFinalizeRecovery.c)
 *     CmpCleanupTransactionState @ 0x14073526C (CmpCleanupTransactionState.c)
 *     CmpCleanupLightWeightTransaction @ 0x140782064 (CmpCleanupLightWeightTransaction.c)
 *     CmpRmUnDoPhase @ 0x140A1C3B4 (CmpRmUnDoPhase.c)
 * Callees:
 *     CmpDereferenceSecurityNode @ 0x140243994 (CmpDereferenceSecurityNode.c)
 *     CmpInitializeDelayDerefContext @ 0x140262F00 (CmpInitializeDelayDerefContext.c)
 *     CmpDrainDelayDerefContext @ 0x140262F30 (CmpDrainDelayDerefContext.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 *     CmpRundownUnitOfWork @ 0x1406B6040 (CmpRundownUnitOfWork.c)
 *     CmEqualTrans @ 0x1406B6428 (CmEqualTrans.c)
 *     CmpLockRegistryExclusive @ 0x1406B6454 (CmpLockRegistryExclusive.c)
 *     CmpRebuildKcbCache @ 0x1406B6498 (CmpRebuildKcbCache.c)
 *     CmpDereferenceKeyControlBlockWithLock @ 0x1406B7100 (CmpDereferenceKeyControlBlockWithLock.c)
 *     CmpFreeKeyByCell @ 0x1406BA854 (CmpFreeKeyByCell.c)
 *     CmpFreeValue @ 0x1406BAA4C (CmpFreeValue.c)
 *     CmpMarkKeyUnbacked @ 0x14074AD64 (CmpMarkKeyUnbacked.c)
 *     CmpFlushNotifiesOnKeyBodyList @ 0x14074AF50 (CmpFlushNotifiesOnKeyBodyList.c)
 *     CmpDiscardKcb @ 0x14074B098 (CmpDiscardKcb.c)
 *     CmpPrepareForSubtreeInvalidation @ 0x14074C0F0 (CmpPrepareForSubtreeInvalidation.c)
 *     CmpInvalidateSubtree @ 0x14074C208 (CmpInvalidateSubtree.c)
 *     HvFreeCell @ 0x1407A6A90 (HvFreeCell.c)
 *     CmpReferenceKeyControlBlockUnsafe @ 0x1407B05D8 (CmpReferenceKeyControlBlockUnsafe.c)
 *     HvpMarkCellDirty @ 0x1407D2460 (HvpMarkCellDirty.c)
 *     CmpInvalidateAllHigherLayerKcbs @ 0x140A1D088 (CmpInvalidateAllHigherLayerKcbs.c)
 *     CmpPrepareToInvalidateAllHigherLayerKcbs @ 0x140A1D3D0 (CmpPrepareToInvalidateAllHigherLayerKcbs.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 *     CmpUnlockRegistry @ 0x140AF22C0 (CmpUnlockRegistry.c)
 */

void __fastcall CmpTransMgrFreeVolatileData(ULONG_PTR BugCheckParameter2, int a2)
{
  __int64 v4; // rdi
  ULONG_PTR v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rcx
  int v9; // ecx
  int v10; // ecx
  unsigned int v11; // ebp
  ULONG_PTR v12; // rbx
  ULONG_PTR v13; // rbx
  ULONG_PTR v14; // rdx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  _OWORD v19[2]; // [rsp+30h] [rbp-28h] BYREF

  v19[0] = 0LL;
  CmpInitializeDelayDerefContext(v19);
  while ( *(_QWORD *)(BugCheckParameter2 + 16) != BugCheckParameter2 + 16 )
  {
    v4 = *(_QWORD *)(BugCheckParameter2 + 24);
    if ( *(_QWORD *)(*(_QWORD *)(v4 + 48) + 32LL) )
    {
      CmpLockRegistryExclusive();
      v8 = *(unsigned int *)(v4 + 68);
      if ( (_DWORD)v8 )
      {
        v9 = v8 - 4;
        if ( v9 && (v10 = v9 - 1) != 0 )
        {
          v8 = (unsigned int)(v10 - 4);
          if ( (_DWORD)v8 )
          {
            if ( (_DWORD)v8 == 3 )
            {
              v5 = *(unsigned int *)(v4 + 96);
              if ( (unsigned int)(v5 - 1) <= 0xFFFFFFFD )
                HvFreeCell(*(_QWORD *)(*(_QWORD *)(v4 + 48) + 32LL), v5);
            }
          }
          else
          {
            v11 = *(_DWORD *)(v4 + 96);
            v12 = *(_QWORD *)(*(_QWORD *)(v4 + 48) + 32LL);
            if ( (int)HvpMarkCellDirty(v12, v11) >= 0 )
              CmpDereferenceSecurityNode(v12, v11);
          }
        }
        else
        {
          CmpFreeValue(*(_QWORD *)(*(_QWORD *)(v4 + 48) + 32LL), *(unsigned int *)(v4 + 92));
        }
      }
      else
      {
        v5 = *(unsigned int *)(v4 + 88);
        if ( (unsigned int)(v5 - 1) <= 0xFFFFFFFD )
          CmpFreeKeyByCell(*(_QWORD *)(*(_QWORD *)(v4 + 48) + 32LL), v5);
      }
      CmpUnlockRegistry(v8, v5, v6, v7);
    }
    CmpLockRegistryExclusive();
    v13 = *(_QWORD *)(v4 + 48);
    if ( *(_QWORD *)(v13 + 288) == BugCheckParameter2 )
    {
      v14 = *(unsigned int *)(v13 + 284);
      if ( (_DWORD)v14 != -1 )
      {
        HvFreeCell(*(_QWORD *)(v13 + 32), v14);
        *(_DWORD *)(v13 + 280) = 0;
        *(_DWORD *)(v13 + 284) = -1;
      }
      *(_QWORD *)(v13 + 288) = 0LL;
    }
    if ( (unsigned __int8)CmEqualTrans(*(_QWORD *)(v13 + 240), BugCheckParameter2) && !*(_DWORD *)(v4 + 68) )
    {
      if ( a2 == 8 )
      {
        if ( (int)CmpPrepareToInvalidateAllHigherLayerKcbs(v13, 6LL, 0LL) < 0 )
          KeBugCheckEx(0x51u, 0x33uLL, BugCheckParameter2, v13, 0x10000uLL);
        if ( (int)CmpPrepareForSubtreeInvalidation(v13, 4LL, 0LL) < 0 )
          KeBugCheckEx(0x51u, 0x33uLL, BugCheckParameter2, v13, 0x10100uLL);
        CmpInvalidateAllHigherLayerKcbs(v13, 8LL, 6LL, v19);
        CmpInvalidateSubtree(v13, 8, 4, (unsigned int)v19, 0LL);
        CmpFlushNotifiesOnKeyBodyList(v13, 8LL, v19);
        *(_WORD *)(v13 + 8) |= 0x20u;
        CmpMarkKeyUnbacked(v13, v19);
        if ( (*(_DWORD *)(v13 + 8) & 0x20000) == 0 )
          CmpDiscardKcb(v13);
      }
      *(_QWORD *)(v13 + 240) = 0LL;
    }
    if ( *(_DWORD *)(v13 + 40) != -1 )
    {
      if ( *(_QWORD *)(v13 + 32) )
        CmpRebuildKcbCache(v13, v19);
    }
    CmpReferenceKeyControlBlockUnsafe(v13);
    CmpRundownUnitOfWork((_QWORD *)v4);
    ExFreePoolWithTag((PVOID)v4, 0x77554D43u);
    CmpDereferenceKeyControlBlockWithLock(v13);
    CmpDrainDelayDerefContext((_QWORD **)v19);
    CmpUnlockRegistry(v16, v15, v17, v18);
  }
}
