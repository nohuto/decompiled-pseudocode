/*
 * XREFs of CmpCleanupParseContext @ 0x1406CE840
 * Callers:
 *     CmpParseKey @ 0x140646330 (CmpParseKey.c)
 *     CmUnloadKey @ 0x14066C6BC (CmUnloadKey.c)
 *     CmKeyBodyReplicateToVirtual @ 0x1406852C0 (CmKeyBodyReplicateToVirtual.c)
 *     CmpStartSiloRegistryNamespace @ 0x1406A630C (CmpStartSiloRegistryNamespace.c)
 *     CmOpenKey @ 0x1406CE0F0 (CmOpenKey.c)
 *     CmKeyBodyRemapToVirtualForEnum @ 0x1406CE470 (CmKeyBodyRemapToVirtualForEnum.c)
 *     NtNotifyChangeMultipleKeys @ 0x1406DC020 (NtNotifyChangeMultipleKeys.c)
 *     CmLoadDifferencingKey @ 0x1406E737C (CmLoadDifferencingKey.c)
 *     CmCreateKey @ 0x1406E8480 (CmCreateKey.c)
 *     CmpLinkHiveToMaster @ 0x14071D600 (CmpLinkHiveToMaster.c)
 *     CmpCreatePredefined @ 0x1407A80B8 (CmpCreatePredefined.c)
 *     NtQueryOpenSubKeys @ 0x140868720 (NtQueryOpenSubKeys.c)
 *     NtQueryOpenSubKeysEx @ 0x140868940 (NtQueryOpenSubKeysEx.c)
 *     CmpResolveHiveLoadConflict @ 0x14086E774 (CmpResolveHiveLoadConflict.c)
 *     CmKeyBodyRemapToVirtual @ 0x14086F870 (CmKeyBodyRemapToVirtual.c)
 *     CmpDoBuildVirtualStack @ 0x14086FFEC (CmpDoBuildVirtualStack.c)
 *     CmpDoReOpenTransKey @ 0x140882300 (CmpDoReOpenTransKey.c)
 *     CmInitSystem1 @ 0x140A59F78 (CmInitSystem1.c)
 * Callees:
 *     CmpFreeExtraParameter @ 0x1405D848C (CmpFreeExtraParameter.c)
 *     CmpUnlockRegistry @ 0x1406435F0 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x140643630 (CmpLockRegistry.c)
 *     CmpDereferenceKeyControlBlock @ 0x140648D30 (CmpDereferenceKeyControlBlock.c)
 */

_QWORD *__fastcall CmpCleanupParseContext(__int64 a1, char a2)
{
  ULONG_PTR v4; // rcx
  _QWORD *v5; // rbx
  _QWORD *result; // rax
  __int64 v7; // rcx
  __int64 v8; // rcx

  v4 = *(_QWORD *)(a1 + 88);
  if ( v4 )
  {
    if ( !a2 )
    {
      CmpLockRegistry();
      v4 = *(_QWORD *)(a1 + 88);
    }
    CmpDereferenceKeyControlBlock(v4);
    if ( !a2 )
      CmpUnlockRegistry();
  }
  v5 = (_QWORD *)(a1 + 144);
  result = (_QWORD *)*v5;
  if ( *(_QWORD **)(*v5 + 8LL) != v5 )
    goto LABEL_10;
  v7 = *result;
  if ( *(_QWORD **)(*result + 8LL) != result )
    goto LABEL_10;
  *v5 = v7;
  *(_QWORD *)(v7 + 8) = v5;
  if ( result != v5 )
  {
    while ( 1 )
    {
      CmpFreeExtraParameter(result);
      result = (_QWORD *)*v5;
      if ( *(_QWORD **)(*v5 + 8LL) != v5 )
        break;
      v8 = *result;
      if ( *(_QWORD **)(*result + 8LL) != result )
        break;
      *v5 = v8;
      *(_QWORD *)(v8 + 8) = v5;
      if ( result == v5 )
        return result;
    }
LABEL_10:
    __fastfail(3u);
  }
  return result;
}
