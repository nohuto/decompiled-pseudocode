/*
 * XREFs of CmpCommitLightWeightTransaction @ 0x14066D9B8
 * Callers:
 *     NtCommitRegistryTransaction @ 0x14066D8A0 (NtCommitRegistryTransaction.c)
 *     CmpTransMgrCommit @ 0x1407684C0 (CmpTransMgrCommit.c)
 * Callees:
 *     CmpInitializeDelayDerefContext @ 0x1402D1878 (CmpInitializeDelayDerefContext.c)
 *     CmpDrainDelayDerefContext @ 0x1402D1890 (CmpDrainDelayDerefContext.c)
 *     ExfUnblockPushLock @ 0x1403F8BE0 (ExfUnblockPushLock.c)
 *     CmpUnlockRegistry @ 0x1406435F0 (CmpUnlockRegistry.c)
 *     CmpCleanupLightWeightTransaction @ 0x14066DB30 (CmpCleanupLightWeightTransaction.c)
 *     CmpCommitPreparedLightWeightTransaction @ 0x14066E164 (CmpCommitPreparedLightWeightTransaction.c)
 *     CmpPrepareLightWeightTransaction @ 0x14066E294 (CmpPrepareLightWeightTransaction.c)
 *     CmpCleanupLightWeightPrepare @ 0x14066E370 (CmpCleanupLightWeightPrepare.c)
 *     CmpLockRegistryExclusive @ 0x1406EB57C (CmpLockRegistryExclusive.c)
 *     CmpAbortLightWeightTransaction @ 0x140770CA4 (CmpAbortLightWeightTransaction.c)
 */

__int64 __fastcall CmpCommitLightWeightTransaction(__int64 a1)
{
  char v2; // bp
  __int64 v3; // rdx
  __int64 v4; // rcx
  signed __int32 v5; // eax
  int v6; // ebx
  ULONG_PTR v7; // rsi
  __int64 v8; // rdx
  __int64 v9; // rdx
  signed __int32 v11[8]; // [rsp+0h] [rbp-48h] BYREF
  _OWORD v12[2]; // [rsp+20h] [rbp-28h] BYREF

  v2 = 0;
  v12[0] = 0LL;
  CmpInitializeDelayDerefContext(v12);
  v5 = _InterlockedCompareExchange((volatile signed __int32 *)a1, 1, 0);
  if ( v5 )
  {
    v6 = -1072103421;
    if ( v5 == 3 )
      return (unsigned int)-1072103403;
  }
  else
  {
    v7 = *(_QWORD *)(a1 + 16);
    if ( v7 )
    {
      v2 = 1;
      CmpLockRegistryExclusive(v4, v3);
    }
    v6 = CmpPrepareLightWeightTransaction(v7, v12);
    if ( v6 >= 0 )
    {
      if ( _InterlockedCompareExchange((volatile signed __int32 *)a1, 2, 1) == 4 )
      {
        CmpCleanupLightWeightPrepare(v7, v8, v12);
        _InterlockedCompareExchange((volatile signed __int32 *)a1, 3, 4);
        _InterlockedOr(v11, 0);
        if ( *(_QWORD *)(a1 + 8) )
          ExfUnblockPushLock((volatile __int64 *)(a1 + 8), 0LL);
        v6 = -1072103421;
      }
      else
      {
        CmpCommitPreparedLightWeightTransaction(v7, v12);
        if ( v2 )
        {
          CmpCleanupLightWeightPrepare(v7, v9, v12);
          CmpDrainDelayDerefContext((_QWORD **)v12);
          CmpUnlockRegistry();
          v2 = 0;
          if ( !*(_BYTE *)(a1 + 24) )
            CmpCleanupLightWeightTransaction(v7);
        }
        v6 = 0;
      }
    }
    else if ( _InterlockedCompareExchange((volatile signed __int32 *)a1, 3, 1) == 1 )
    {
      if ( !*(_BYTE *)(a1 + 24) )
        CmpAbortLightWeightTransaction(a1);
    }
    else
    {
      _InterlockedCompareExchange((volatile signed __int32 *)a1, 3, 4);
      _InterlockedOr(v11, 0);
      if ( *(_QWORD *)(a1 + 8) )
        ExfUnblockPushLock((volatile __int64 *)(a1 + 8), 0LL);
    }
    if ( v2 )
    {
      CmpDrainDelayDerefContext((_QWORD **)v12);
      CmpUnlockRegistry();
    }
  }
  return (unsigned int)v6;
}
