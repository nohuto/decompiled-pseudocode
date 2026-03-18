/*
 * XREFs of CmpPerformKeyBodyDeletionCheck @ 0x140AF6160
 * Callers:
 *     CmpDoQueryKeyName @ 0x140208F88 (CmpDoQueryKeyName.c)
 *     CmpLoadKeyCommon @ 0x1402F659C (CmpLoadKeyCommon.c)
 *     CmQueryLayeredKey @ 0x14035D634 (CmQueryLayeredKey.c)
 *     CmpPerformUnloadKey @ 0x140699394 (CmpPerformUnloadKey.c)
 *     CmpQueryKeySecurity @ 0x1406D5C50 (CmpQueryKeySecurity.c)
 *     CmEnumerateKey @ 0x1406DC4F0 (CmEnumerateKey.c)
 *     CmKeyBodyRemapToVirtualForEnum @ 0x1406E23B0 (CmKeyBodyRemapToVirtualForEnum.c)
 *     CmpSetKeySecurity @ 0x14070C46C (CmpSetKeySecurity.c)
 *     CmEnumerateValueKey @ 0x14070E8F0 (CmEnumerateValueKey.c)
 *     NtFlushKey @ 0x1407ACA70 (NtFlushKey.c)
 *     CmLockKeyForWrite @ 0x14084905C (CmLockKeyForWrite.c)
 *     CmpAssignKeySecurity @ 0x1408593F0 (CmpAssignKeySecurity.c)
 *     CmpSaveBootControlSet @ 0x140A0A5C8 (CmpSaveBootControlSet.c)
 *     CmSaveKey @ 0x140A0BA40 (CmSaveKey.c)
 *     CmpLoadHiveVolatile @ 0x140A0C3E0 (CmpLoadHiveVolatile.c)
 *     CmpRefreshHive @ 0x140A0C940 (CmpRefreshHive.c)
 *     CmOpenKeyForBugCheckRecovery @ 0x140A0D150 (CmOpenKeyForBugCheckRecovery.c)
 *     NtCompactKeys @ 0x140A0D420 (NtCompactKeys.c)
 *     NtCompressKey @ 0x140A0D6F0 (NtCompressKey.c)
 *     NtQueryOpenSubKeys @ 0x140A0DAD0 (NtQueryOpenSubKeys.c)
 *     NtQueryOpenSubKeysEx @ 0x140A0DD10 (NtQueryOpenSubKeysEx.c)
 *     CmQueryMultipleValueForLayeredKey @ 0x140A13F50 (CmQueryMultipleValueForLayeredKey.c)
 *     CmRenameKey @ 0x140A1445C (CmRenameKey.c)
 *     CmSetKeyFlags @ 0x140A15A64 (CmSetKeyFlags.c)
 *     CmSetLastWriteTimeKey @ 0x140A15F98 (CmSetLastWriteTimeKey.c)
 *     CmpEnumerateLayeredKey @ 0x140A164C4 (CmpEnumerateLayeredKey.c)
 *     CmKeyBodyRemapToVirtual @ 0x140A18024 (CmKeyBodyRemapToVirtual.c)
 *     CmKeyBodyReplicateToVirtual @ 0x140A182E8 (CmKeyBodyReplicateToVirtual.c)
 *     CmpIsKeyBodyEligibleForDump @ 0x140AF6AE0 (CmpIsKeyBodyEligibleForDump.c)
 *     CmpAcquireSystemDriverHiveContext @ 0x140B430E4 (CmpAcquireSystemDriverHiveContext.c)
 * Callees:
 *     CmEqualTrans @ 0x1407696D0 (CmEqualTrans.c)
 *     CmListGetNextElement @ 0x140AF66A8 (CmListGetNextElement.c)
 */

__int64 __fastcall CmpPerformKeyBodyDeletionCheck(__int64 a1, __int64 a2)
{
  __int64 v3; // rcx
  __int64 result; // rax
  __int64 v5; // r9
  __int64 v6; // r10
  int v7; // ecx
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  v8 = 0LL;
  v3 = *(_QWORD *)(a1 + 8);
  if ( (*(_DWORD *)(a1 + 48) & 9) != 0 )
    goto LABEL_9;
  if ( !a2 )
    return 0LL;
  result = CmListGetNextElement(v3 + 208, &v8, 32LL);
  if ( !result )
    return 0LL;
  do
  {
    v7 = *(_DWORD *)(result + 68);
    if ( v7 == 2 || v7 == 11 )
      break;
    result = CmListGetNextElement(v6, &v8, 32LL);
  }
  while ( result );
  if ( !CmEqualTrans(*(_QWORD *)(result + 56), v5) )
    return 0LL;
LABEL_9:
  result = 3221225852LL;
  if ( (*(_DWORD *)(a1 + 48) & 1) != 0 )
    return 3221226533LL;
  return result;
}
