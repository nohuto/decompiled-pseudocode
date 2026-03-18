/*
 * XREFs of CmpMarkKeyUnbacked @ 0x1407108AC
 * Callers:
 *     CmpRemoveHiveFromNamespace @ 0x140207A94 (CmpRemoveHiveFromNamespace.c)
 *     CmDeleteLayeredKey @ 0x14061695C (CmDeleteLayeredKey.c)
 *     CmpInvalidateSubtreeWorker @ 0x140682700 (CmpInvalidateSubtreeWorker.c)
 *     CmpCompleteUnloadKey @ 0x140688D18 (CmpCompleteUnloadKey.c)
 *     CmDeleteKey @ 0x14071009C (CmDeleteKey.c)
 *     CmpTransMgrFreeVolatileData @ 0x140769424 (CmpTransMgrFreeVolatileData.c)
 *     CmpRefreshWorkerRoutine @ 0x140A0CED0 (CmpRefreshWorkerRoutine.c)
 *     CmRenameKey @ 0x140A1445C (CmRenameKey.c)
 *     CmpCommitDiscardReplacePost @ 0x140A1F9B0 (CmpCommitDiscardReplacePost.c)
 *     CmpInvalidateAllHigherLayerKcbsPostCallback @ 0x140A1FE30 (CmpInvalidateAllHigherLayerKcbsPostCallback.c)
 *     CmpLightWeightCommitDeleteKeyUoW @ 0x140A28218 (CmpLightWeightCommitDeleteKeyUoW.c)
 *     CmpLightWeightCommitRenameKeyUoW @ 0x140A28588 (CmpLightWeightCommitRenameKeyUoW.c)
 * Callees:
 *     CmpCleanUpKcbCachedSymlink @ 0x1406D0FB0 (CmpCleanUpKcbCachedSymlink.c)
 */

__int64 __fastcall CmpMarkKeyUnbacked(__int64 a1)
{
  char v1; // al
  __int64 v3; // rcx
  __int64 result; // rax

  *(_DWORD *)(a1 + 40) = -1;
  v1 = 1;
  ++*(_QWORD *)(a1 + 304);
  v3 = *(_QWORD *)(a1 + 72);
  if ( !v3 || *(_BYTE *)(v3 + 65) != 3 )
    v1 = 0;
  *(_BYTE *)(a1 + 65) = v1;
  result = CmpCleanUpKcbCachedSymlink(a1);
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
