/*
 * XREFs of CmEqualTrans @ 0x1406B6428
 * Callers:
 *     CmpIsKeyStackDeleted @ 0x1406B5978 (CmpIsKeyStackDeleted.c)
 *     CmpTransMgrFreeVolatileData @ 0x1406B617C (CmpTransMgrFreeVolatileData.c)
 *     CmpLockIXLockIntent @ 0x1406B7020 (CmpLockIXLockIntent.c)
 *     CmpLockIXLockExclusive @ 0x1406B70A0 (CmpLockIXLockExclusive.c)
 *     CmDeleteKey @ 0x1406B762C (CmDeleteKey.c)
 *     CmGetVisibleSubkeyCount @ 0x1406B7D28 (CmGetVisibleSubkeyCount.c)
 *     CmpDoParseKey @ 0x1406E1D90 (CmpDoParseKey.c)
 *     CmRmIsKCBVisible @ 0x14075E0B0 (CmRmIsKCBVisible.c)
 *     CmGetKeyFlags @ 0x14079C210 (CmGetKeyFlags.c)
 *     CmGetKeyLastWriteTime @ 0x1407ABE44 (CmGetKeyLastWriteTime.c)
 *     CmGetVisibleMaxNameLenAndClassLen @ 0x1407ABF48 (CmGetVisibleMaxNameLenAndClassLen.c)
 *     CmpFindSubKeyByNumberEx @ 0x1407ACFB0 (CmpFindSubKeyByNumberEx.c)
 *     CmpQueryKeyDataFromNode @ 0x1407AD510 (CmpQueryKeyDataFromNode.c)
 *     CmGetKCBCacheSecurity @ 0x1407AF620 (CmGetKCBCacheSecurity.c)
 *     CmpGetSymbolicLinkTarget @ 0x1407B0EF0 (CmpGetSymbolicLinkTarget.c)
 *     CmpWalkOneLevel @ 0x1407B1C90 (CmpWalkOneLevel.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x140AF21E0 (CmpIsKeyDeletedForKeyBody.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x140AF24F0 (CmpPerformKeyBodyDeletionCheck.c)
 * Callees:
 *     CmpTransUowIsEqual @ 0x140A19630 (CmpTransUowIsEqual.c)
 */

char __fastcall CmEqualTrans(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // r8

  if ( !a1 || !a2 )
    return 0;
  if ( a1 == a2 )
    return 1;
  v3 = *(_QWORD *)(a1 + 56);
  if ( v3 && (v4 = *(_QWORD *)(a2 + 56)) != 0 )
    return v3 == v4;
  else
    return CmpTransUowIsEqual(a1 + 88, a2 + 88);
}
