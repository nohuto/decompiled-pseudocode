/*
 * XREFs of CmpMarkKeyUnbacked @ 0x14074AD64
 * Callers:
 *     CmpRemoveHiveFromNamespace @ 0x1402BFC14 (CmpRemoveHiveFromNamespace.c)
 *     CmDeleteLayeredKey @ 0x1406144A0 (CmDeleteLayeredKey.c)
 *     CmpInvalidateSubtreeWorker @ 0x14067F320 (CmpInvalidateSubtreeWorker.c)
 *     CmpTransMgrFreeVolatileData @ 0x1406B617C (CmpTransMgrFreeVolatileData.c)
 *     CmDeleteKey @ 0x1406B762C (CmDeleteKey.c)
 *     CmpCompleteUnloadKey @ 0x14074A958 (CmpCompleteUnloadKey.c)
 *     CmpRefreshWorkerRoutine @ 0x140A0A1C0 (CmpRefreshWorkerRoutine.c)
 *     CmRenameKey @ 0x140A1170C (CmRenameKey.c)
 *     CmpCommitDiscardReplacePost @ 0x140A1CC50 (CmpCommitDiscardReplacePost.c)
 *     CmpInvalidateAllHigherLayerKcbsPostCallback @ 0x140A1D0D0 (CmpInvalidateAllHigherLayerKcbsPostCallback.c)
 *     CmpLightWeightCommitDeleteKeyUoW @ 0x140A254B8 (CmpLightWeightCommitDeleteKeyUoW.c)
 *     CmpLightWeightCommitRenameKeyUoW @ 0x140A25828 (CmpLightWeightCommitRenameKeyUoW.c)
 * Callees:
 *     CmpCleanUpKcbCachedSymlink @ 0x1407A751C (CmpCleanUpKcbCachedSymlink.c)
 */

__int64 __fastcall CmpMarkKeyUnbacked(__int64 a1, __int64 a2)
{
  char v2; // al
  __int64 v4; // rcx
  __int64 result; // rax

  *(_DWORD *)(a1 + 40) = -1;
  v2 = 1;
  ++*(_QWORD *)(a1 + 304);
  v4 = *(_QWORD *)(a1 + 72);
  if ( !v4 || *(_BYTE *)(v4 + 65) != 3 )
    v2 = 0;
  *(_BYTE *)(a1 + 65) = v2;
  result = CmpCleanUpKcbCachedSymlink(a1, a2);
  *(_DWORD *)(a1 + 100) = -1;
  *(_WORD *)(a1 + 186) &= 4u;
  *(_DWORD *)(a1 + 184) &= 0xFFFFFF00;
  *(_BYTE *)(a1 + 185) = 0;
  *(_DWORD *)(a1 + 96) = 0;
  *(_DWORD *)(a1 + 112) = 0;
  *(_QWORD *)(a1 + 168) = 0LL;
  *(_QWORD *)(a1 + 176) = 0LL;
  return result;
}
