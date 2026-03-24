/*
 * XREFs of CmpPerformKeyBodyDeletionCheck @ 0x1405F4700
 * Callers:
 *     CmQueryLayeredKey @ 0x140200A78 (CmQueryLayeredKey.c)
 *     CmpDoQueryKeyName @ 0x140347BE0 (CmpDoQueryKeyName.c)
 *     CmpLoadKeyCommon @ 0x14036102C (CmpLoadKeyCommon.c)
 *     CmpEnumerateLayeredKey @ 0x1405D8520 (CmpEnumerateLayeredKey.c)
 *     CmEnumerateKey @ 0x1405F4350 (CmEnumerateKey.c)
 *     CmEnumerateValueKey @ 0x1405F4EF0 (CmEnumerateValueKey.c)
 *     CmpPerformUnloadKey @ 0x14066CBFC (CmpPerformUnloadKey.c)
 *     CmKeyBodyReplicateToVirtual @ 0x1406852C0 (CmKeyBodyReplicateToVirtual.c)
 *     NtFlushKey @ 0x140696C00 (NtFlushKey.c)
 *     CmKeyBodyRemapToVirtualForEnum @ 0x1406CE470 (CmKeyBodyRemapToVirtualForEnum.c)
 *     CmpQueryKeySecurity @ 0x1406DE150 (CmpQueryKeySecurity.c)
 *     CmpSetKeySecurity @ 0x1406E6CFC (CmpSetKeySecurity.c)
 *     CmSaveKey @ 0x140729A8C (CmSaveKey.c)
 *     CmLockKeyForWrite @ 0x1407C37B0 (CmLockKeyForWrite.c)
 *     CmpAssignKeySecurity @ 0x1407D0370 (CmpAssignKeySecurity.c)
 *     CmpSaveBootControlSet @ 0x140867AD0 (CmpSaveBootControlSet.c)
 *     NtCompactKeys @ 0x140868050 (NtCompactKeys.c)
 *     NtCompressKey @ 0x140868330 (NtCompressKey.c)
 *     NtQueryOpenSubKeys @ 0x140868720 (NtQueryOpenSubKeys.c)
 *     NtQueryOpenSubKeysEx @ 0x140868940 (NtQueryOpenSubKeysEx.c)
 *     CmQueryMultipleValueForLayeredKey @ 0x14086C598 (CmQueryMultipleValueForLayeredKey.c)
 *     CmRenameKey @ 0x14086CA54 (CmRenameKey.c)
 *     CmSetKeyFlags @ 0x14086DCC8 (CmSetKeyFlags.c)
 *     CmSetLastWriteTimeKey @ 0x14086E18C (CmSetLastWriteTimeKey.c)
 *     CmKeyBodyRemapToVirtual @ 0x14086F870 (CmKeyBodyRemapToVirtual.c)
 *     CmDumpKey @ 0x14087BD68 (CmDumpKey.c)
 *     CmpRefreshHive @ 0x14087D448 (CmpRefreshHive.c)
 *     CmpAcquireSystemDriverHiveContext @ 0x140A60258 (CmpAcquireSystemDriverHiveContext.c)
 * Callees:
 *     CmListGetNextElement @ 0x14066EA14 (CmListGetNextElement.c)
 *     CmEqualTrans @ 0x14071CD40 (CmEqualTrans.c)
 */

__int64 __fastcall CmpPerformKeyBodyDeletionCheck(__int64 a1, __int64 a2)
{
  __int64 v3; // rcx
  int v4; // eax
  __int64 result; // rax
  __int64 NextElement; // rcx
  __int64 v7; // r9
  __int64 v8; // r10
  int v9; // eax
  __int64 v10; // [rsp+30h] [rbp+8h] BYREF

  v10 = 0LL;
  v3 = *(_QWORD *)(a1 + 8);
  v4 = *(_DWORD *)(a1 + 48);
  if ( (v4 & 9) == 0 )
  {
    if ( !a2 )
      return 0LL;
    NextElement = CmListGetNextElement(v3 + 208, &v10, 32LL);
    if ( !NextElement )
      return 0LL;
    while ( 1 )
    {
      v9 = *(_DWORD *)(NextElement + 68);
      if ( v9 == 2 || v9 == 11 )
        break;
      result = CmListGetNextElement(v8, &v10, 32LL);
      NextElement = result;
      if ( !result )
        return result;
    }
    if ( !(unsigned __int8)CmEqualTrans(*(_QWORD *)(NextElement + 56), v7) )
      return 0LL;
    v4 = *(_DWORD *)(a1 + 48);
  }
  if ( (v4 & 1) != 0 )
    return 3221226533LL;
  else
    return 3221225852LL;
}
