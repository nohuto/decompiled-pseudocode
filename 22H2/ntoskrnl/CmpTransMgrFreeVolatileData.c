/*
 * XREFs of CmpTransMgrFreeVolatileData @ 0x14071C8A0
 * Callers:
 *     CmpCleanupLightWeightTransaction @ 0x14066DB30 (CmpCleanupLightWeightTransaction.c)
 *     CmRmFinalizeRecovery @ 0x1406A24AC (CmRmFinalizeRecovery.c)
 *     CmpCleanupTransactionState @ 0x140770144 (CmpCleanupTransactionState.c)
 *     CmpRmUnDoPhase @ 0x140875A44 (CmpRmUnDoPhase.c)
 * Callees:
 *     CmpInitializeDelayDerefContext @ 0x1402D1878 (CmpInitializeDelayDerefContext.c)
 *     CmpDrainDelayDerefContext @ 0x1402D1890 (CmpDrainDelayDerefContext.c)
 *     CmpRemoveSecurityCellList @ 0x140326A74 (CmpRemoveSecurityCellList.c)
 *     KeBugCheckEx @ 0x1403FD570 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x140407C30 (_guard_dispatch_icall.c)
 *     CmpReferenceKeyControlBlockUnsafe @ 0x1405EF620 (CmpReferenceKeyControlBlockUnsafe.c)
 *     CmpUnlockRegistry @ 0x1406435F0 (CmpUnlockRegistry.c)
 *     HvFreeCell @ 0x140656BC4 (HvFreeCell.c)
 *     CmpDereferenceKeyControlBlockWithLock @ 0x1406778F0 (CmpDereferenceKeyControlBlockWithLock.c)
 *     CmpFreeKeyByCell @ 0x1406E4070 (CmpFreeKeyByCell.c)
 *     CmpFreeValue @ 0x1406E4228 (CmpFreeValue.c)
 *     CmpDiscardKcb @ 0x1406E5718 (CmpDiscardKcb.c)
 *     CmpMarkKeyUnbacked @ 0x1406E5970 (CmpMarkKeyUnbacked.c)
 *     CmpFlushNotifiesOnKeyBodyList @ 0x1406E59F0 (CmpFlushNotifiesOnKeyBodyList.c)
 *     CmpLockRegistryExclusive @ 0x1406EB57C (CmpLockRegistryExclusive.c)
 *     CmpRundownUnitOfWork @ 0x14071CBAC (CmpRundownUnitOfWork.c)
 *     CmEqualTrans @ 0x14071CD40 (CmEqualTrans.c)
 *     CmpRebuildKcbCache @ 0x14071CD6C (CmpRebuildKcbCache.c)
 *     CmpPrepareForSubtreeInvalidation @ 0x140772784 (CmpPrepareForSubtreeInvalidation.c)
 *     CmpInvalidateSubtree @ 0x1407729A0 (CmpInvalidateSubtree.c)
 *     CmpInvalidateAllHigherLayerKcbs @ 0x1408762A8 (CmpInvalidateAllHigherLayerKcbs.c)
 *     CmpPrepareToInvalidateAllHigherLayerKcbs @ 0x140876570 (CmpPrepareToInvalidateAllHigherLayerKcbs.c)
 *     HvMarkCellDirty @ 0x14087BD38 (HvMarkCellDirty.c)
 *     CmpFreeUnitOfWork @ 0x14087EAF8 (CmpFreeUnitOfWork.c)
 */

void __fastcall CmpTransMgrFreeVolatileData(ULONG_PTR BugCheckParameter2, int a2)
{
  ULONG_PTR v4; // rdi
  int v5; // eax
  ULONG_PTR v6; // rdx
  ULONG_PTR v7; // rcx
  unsigned int v8; // r14d
  __int64 v9; // rbx
  __int64 v10; // r8
  __int64 v11; // r15
  int v12; // eax
  ULONG_PTR v13; // rdx
  ULONG_PTR v14; // rbx
  ULONG_PTR v15; // rdx
  __int128 v16; // [rsp+30h] [rbp-10h] BYREF
  int v17; // [rsp+70h] [rbp+30h] BYREF
  int v18; // [rsp+74h] [rbp+34h]

  v16 = 0LL;
  CmpInitializeDelayDerefContext(&v16);
  while ( *(_QWORD *)(BugCheckParameter2 + 16) != BugCheckParameter2 + 16 )
  {
    v4 = *(_QWORD *)(BugCheckParameter2 + 24);
    if ( !*(_QWORD *)(*(_QWORD *)(v4 + 48) + 32LL) )
      goto LABEL_22;
    CmpLockRegistryExclusive();
    v5 = *(_DWORD *)(v4 + 68);
    if ( !v5 )
    {
      v13 = *(unsigned int *)(v4 + 88);
      if ( (unsigned int)(v13 - 1) <= 0xFFFFFFFD )
        CmpFreeKeyByCell(*(_QWORD *)(*(_QWORD *)(v4 + 48) + 32LL), v13, 0);
      goto LABEL_21;
    }
    if ( v5 > 3 )
    {
      if ( v5 <= 5 )
      {
        CmpFreeValue(*(_QWORD *)(*(_QWORD *)(v4 + 48) + 32LL), *(unsigned int *)(v4 + 92));
        goto LABEL_21;
      }
      if ( v5 == 9 )
      {
        v17 = -1;
        v8 = *(_DWORD *)(v4 + 96);
        v18 = 0;
        v9 = *(_QWORD *)(*(_QWORD *)(v4 + 48) + 32LL);
        v11 = (*(__int64 (__fastcall **)(__int64, _QWORD, int *))(v9 + 8))(v9, v8, &v17);
        if ( !v11 )
          goto LABEL_21;
        LOBYTE(v10) = 1;
        if ( !(unsigned __int8)HvMarkCellDirty(v9, v8, v10) )
          goto LABEL_17;
        v12 = *(_DWORD *)(v11 + 12);
        if ( v12 != 1 )
        {
          *(_DWORD *)(v11 + 12) = v12 - 1;
LABEL_17:
          (*(void (__fastcall **)(__int64, int *))(v9 + 16))(v9, &v17);
          goto LABEL_21;
        }
        (*(void (__fastcall **)(__int64, int *))(v9 + 16))(v9, &v17);
        CmpRemoveSecurityCellList(v9, v8);
        v6 = v8;
        v7 = v9;
      }
      else
      {
        if ( v5 != 12 )
          goto LABEL_21;
        v6 = *(unsigned int *)(v4 + 96);
        if ( (unsigned int)(v6 - 1) > 0xFFFFFFFD )
          goto LABEL_21;
        v7 = *(_QWORD *)(*(_QWORD *)(v4 + 48) + 32LL);
      }
      HvFreeCell(v7, v6);
    }
LABEL_21:
    CmpUnlockRegistry();
LABEL_22:
    CmpLockRegistryExclusive();
    v14 = *(_QWORD *)(v4 + 48);
    if ( *(_QWORD *)(v14 + 288) == BugCheckParameter2 )
    {
      v15 = *(unsigned int *)(v14 + 284);
      if ( (_DWORD)v15 != -1 )
      {
        HvFreeCell(*(_QWORD *)(v14 + 32), v15);
        *(_DWORD *)(v14 + 280) = 0;
        *(_DWORD *)(v14 + 284) = -1;
      }
      *(_QWORD *)(v14 + 288) = 0LL;
    }
    if ( (unsigned __int8)CmEqualTrans(*(_QWORD *)(v14 + 240), BugCheckParameter2) && !*(_DWORD *)(v4 + 68) )
    {
      if ( a2 == 8 )
      {
        if ( (int)CmpPrepareToInvalidateAllHigherLayerKcbs(v14, 6LL, 0LL) < 0 )
          KeBugCheckEx(0x51u, 0x33uLL, BugCheckParameter2, v14, 0x10000uLL);
        if ( (int)CmpPrepareForSubtreeInvalidation(v14, 4LL, 0LL) < 0 )
          KeBugCheckEx(0x51u, 0x33uLL, BugCheckParameter2, v14, 0x10100uLL);
        CmpInvalidateAllHigherLayerKcbs(v14, 8LL, 6LL, &v16);
        CmpInvalidateSubtree(v14, 8, 4, (unsigned int)&v16, 0LL);
        CmpFlushNotifiesOnKeyBodyList(v14, 8LL, (__int64)&v16, 0);
        *(_WORD *)(v14 + 8) |= 0x20u;
        CmpMarkKeyUnbacked(v14);
        if ( (*(_DWORD *)(v14 + 8) & 0x20000) == 0 )
          CmpDiscardKcb(v14);
      }
      *(_QWORD *)(v14 + 240) = 0LL;
    }
    if ( *(_DWORD *)(v14 + 40) != -1 )
    {
      if ( *(_QWORD *)(v14 + 32) )
        CmpRebuildKcbCache(v14, &v16);
    }
    CmpReferenceKeyControlBlockUnsafe((volatile signed __int64 *)v14);
    CmpRundownUnitOfWork(v4);
    CmpFreeUnitOfWork(v4);
    CmpDereferenceKeyControlBlockWithLock(v14, (__int64)&v16, 1);
    CmpDrainDelayDerefContext((_QWORD **)&v16);
    CmpUnlockRegistry();
  }
}
