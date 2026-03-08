/*
 * XREFs of CmpFlushNotifiesOnKeyBodyList @ 0x14074AF50
 * Callers:
 *     CmpRemoveHiveFromNamespace @ 0x1402BFC14 (CmpRemoveHiveFromNamespace.c)
 *     CmDeleteLayeredKey @ 0x1406144A0 (CmDeleteLayeredKey.c)
 *     CmpLightWeightCommitRecreateKeyUoW @ 0x14067DB14 (CmpLightWeightCommitRecreateKeyUoW.c)
 *     CmpInvalidateSubtreeWorker @ 0x14067F320 (CmpInvalidateSubtreeWorker.c)
 *     CmpTransMgrFreeVolatileData @ 0x1406B617C (CmpTransMgrFreeVolatileData.c)
 *     CmDeleteKey @ 0x1406B762C (CmDeleteKey.c)
 *     CmpPerformUnloadKey @ 0x14074A194 (CmpPerformUnloadKey.c)
 *     CmpCompleteUnloadKey @ 0x14074A958 (CmpCompleteUnloadKey.c)
 *     CmpRefreshHive @ 0x140A09C50 (CmpRefreshHive.c)
 *     CmpRefreshWorkerRoutine @ 0x140A0A1C0 (CmpRefreshWorkerRoutine.c)
 *     CmRenameKey @ 0x140A1170C (CmRenameKey.c)
 *     CmpFlushNotifiesPostCallback @ 0x140A1CFF0 (CmpFlushNotifiesPostCallback.c)
 *     CmpInvalidateAllHigherLayerKcbsPostCallback @ 0x140A1D0D0 (CmpInvalidateAllHigherLayerKcbsPostCallback.c)
 *     CmpLightWeightCommitDeleteKeyUoW @ 0x140A254B8 (CmpLightWeightCommitDeleteKeyUoW.c)
 *     CmpLightWeightCommitRenameKeyUoW @ 0x140A25828 (CmpLightWeightCommitRenameKeyUoW.c)
 * Callees:
 *     CmpFlushNotify @ 0x14074B6C4 (CmpFlushNotify.c)
 *     CmpKeyEnumStackFreeResumeContext @ 0x140A21354 (CmpKeyEnumStackFreeResumeContext.c)
 */

__int64 __fastcall CmpFlushNotifiesOnKeyBodyList(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  __int64 *v4; // rdi
  __int64 *v6; // rbx
  __int16 v7; // r12
  __int64 v9; // rdi
  signed __int64 *v10; // rsi
  signed __int64 v11; // rbx
  __int64 result; // rax
  struct _PRIVILEGE_SET *v13; // rcx
  struct _PRIVILEGE_SET *v14; // rcx

  v4 = (__int64 *)(a1 + 120);
  v6 = *(__int64 **)(a1 + 120);
  v7 = a2;
  while ( v6 != v4 )
  {
    if ( *(v6 - 2) )
    {
      LOBYTE(a2) = a4;
      result = CmpFlushNotify(v6 - 4, a2, 0LL);
    }
    v14 = (struct _PRIVILEGE_SET *)_InterlockedExchange64(v6 + 7, 0LL);
    if ( v14 )
      result = CmpKeyEnumStackFreeResumeContext(v14);
    *((_WORD *)v6 + 8) |= v7;
    v6 = (__int64 *)*v6;
  }
  v9 = 0LL;
  v10 = (signed __int64 *)(a1 + 136);
  do
  {
    v11 = *v10;
    if ( (unsigned __int64)*v10 >= 3 )
    {
      result = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 8 * v9 + 136), 2LL, v11);
      if ( v11 == result )
      {
        if ( *(_QWORD *)(v11 + 16) )
        {
          LOBYTE(a2) = a4;
          CmpFlushNotify(v11, a2, 0LL);
        }
        v13 = (struct _PRIVILEGE_SET *)_InterlockedExchange64((volatile __int64 *)(v11 + 88), 0LL);
        if ( v13 )
          CmpKeyEnumStackFreeResumeContext(v13);
        *(_WORD *)(v11 + 48) |= v7;
        result = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 8 * v9 + 136), v11, 2LL);
      }
    }
    v9 = (unsigned int)(v9 + 1);
    ++v10;
  }
  while ( (unsigned int)v9 < 4 );
  return result;
}
