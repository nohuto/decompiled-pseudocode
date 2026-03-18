/*
 * XREFs of CmEqualTrans @ 0x1407696D0
 * Callers:
 *     CmpGetSymbolicLinkTarget @ 0x14068FC80 (CmpGetSymbolicLinkTarget.c)
 *     CmpIsKeyStackDeleted @ 0x1406D3F5C (CmpIsKeyStackDeleted.c)
 *     CmGetKeyLastWriteTime @ 0x1406D5264 (CmGetKeyLastWriteTime.c)
 *     CmGetVisibleMaxNameLenAndClassLen @ 0x1406D5368 (CmGetVisibleMaxNameLenAndClassLen.c)
 *     CmGetKCBCacheSecurity @ 0x1406D5870 (CmGetKCBCacheSecurity.c)
 *     CmpQueryKeyDataFromNode @ 0x1406DAB00 (CmpQueryKeyDataFromNode.c)
 *     CmpFindSubKeyByNumberEx @ 0x1406DB080 (CmpFindSubKeyByNumberEx.c)
 *     CmpWalkOneLevel @ 0x1406DD8D0 (CmpWalkOneLevel.c)
 *     CmpDoParseKey @ 0x1406E91B0 (CmpDoParseKey.c)
 *     CmDeleteKey @ 0x14071009C (CmDeleteKey.c)
 *     CmGetVisibleSubkeyCount @ 0x140710798 (CmGetVisibleSubkeyCount.c)
 *     CmpTransMgrFreeVolatileData @ 0x140769424 (CmpTransMgrFreeVolatileData.c)
 *     CmpLockIXLockIntent @ 0x14076B140 (CmpLockIXLockIntent.c)
 *     CmpLockIXLockExclusive @ 0x14076B41C (CmpLockIXLockExclusive.c)
 *     CmRmIsKCBVisible @ 0x1407B3F90 (CmRmIsKCBVisible.c)
 *     CmGetKeyFlags @ 0x1407EAFB0 (CmGetKeyFlags.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x140AF6160 (CmpPerformKeyBodyDeletionCheck.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x140AF62F0 (CmpIsKeyDeletedForKeyBody.c)
 * Callees:
 *     CmpTransUowIsEqual @ 0x140A1C380 (CmpTransUowIsEqual.c)
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
