/*
 * XREFs of CmpPerformKeyBodyDeletionCheck @ 0x140AF24F0
 * Callers:
 *     CmpDoQueryKeyName @ 0x140243A70 (CmpDoQueryKeyName.c)
 *     CmpLoadKeyCommon @ 0x1402B2DEC (CmpLoadKeyCommon.c)
 *     CmQueryLayeredKey @ 0x1402F262C (CmQueryLayeredKey.c)
 *     CmpSetKeySecurity @ 0x1406B7E3C (CmpSetKeySecurity.c)
 *     CmpPerformUnloadKey @ 0x14074A194 (CmpPerformUnloadKey.c)
 *     NtFlushKey @ 0x140758B70 (NtFlushKey.c)
 *     CmEnumerateValueKey @ 0x1407AB770 (CmEnumerateValueKey.c)
 *     CmpQueryKeySecurity @ 0x1407AC310 (CmpQueryKeySecurity.c)
 *     CmEnumerateKey @ 0x1407ACAE0 (CmEnumerateKey.c)
 *     CmKeyBodyRemapToVirtualForEnum @ 0x1407B8FB0 (CmKeyBodyRemapToVirtualForEnum.c)
 *     CmLockKeyForWrite @ 0x140845EFC (CmLockKeyForWrite.c)
 *     CmpAssignKeySecurity @ 0x140854E7C (CmpAssignKeySecurity.c)
 *     CmpSaveBootControlSet @ 0x140A078D8 (CmpSaveBootControlSet.c)
 *     CmSaveKey @ 0x140A08D50 (CmSaveKey.c)
 *     CmpLoadHiveVolatile @ 0x140A096F0 (CmpLoadHiveVolatile.c)
 *     CmpRefreshHive @ 0x140A09C50 (CmpRefreshHive.c)
 *     CmOpenKeyForBugCheckRecovery @ 0x140A0A440 (CmOpenKeyForBugCheckRecovery.c)
 *     NtCompactKeys @ 0x140A0A710 (NtCompactKeys.c)
 *     NtCompressKey @ 0x140A0A9E0 (NtCompressKey.c)
 *     NtQueryOpenSubKeys @ 0x140A0ADC0 (NtQueryOpenSubKeys.c)
 *     NtQueryOpenSubKeysEx @ 0x140A0B000 (NtQueryOpenSubKeysEx.c)
 *     CmQueryMultipleValueForLayeredKey @ 0x140A11200 (CmQueryMultipleValueForLayeredKey.c)
 *     CmRenameKey @ 0x140A1170C (CmRenameKey.c)
 *     CmSetKeyFlags @ 0x140A12D14 (CmSetKeyFlags.c)
 *     CmSetLastWriteTimeKey @ 0x140A13248 (CmSetLastWriteTimeKey.c)
 *     CmpEnumerateLayeredKey @ 0x140A13774 (CmpEnumerateLayeredKey.c)
 *     CmKeyBodyRemapToVirtual @ 0x140A152D4 (CmKeyBodyRemapToVirtual.c)
 *     CmKeyBodyReplicateToVirtual @ 0x140A15598 (CmKeyBodyReplicateToVirtual.c)
 *     CmpIsKeyBodyEligibleForDump @ 0x140AF2AB0 (CmpIsKeyBodyEligibleForDump.c)
 *     CmpAcquireSystemDriverHiveContext @ 0x140B5AAAC (CmpAcquireSystemDriverHiveContext.c)
 * Callees:
 *     CmEqualTrans @ 0x1406B6428 (CmEqualTrans.c)
 *     CmListGetNextElement @ 0x140AF2008 (CmListGetNextElement.c)
 */

__int64 __fastcall CmpPerformKeyBodyDeletionCheck(__int64 a1, __int64 a2)
{
  __int64 v3; // rcx
  __int64 result; // rax
  __int64 v5; // r9
  _QWORD **v6; // r10
  int v7; // ecx
  _QWORD *v8; // [rsp+30h] [rbp+8h] BYREF

  v8 = 0LL;
  v3 = *(_QWORD *)(a1 + 8);
  if ( (*(_DWORD *)(a1 + 48) & 9) != 0 )
    goto LABEL_9;
  if ( !a2 )
    return 0LL;
  result = (__int64)CmListGetNextElement((_QWORD **)(v3 + 208), &v8, 32);
  if ( !result )
    return 0LL;
  do
  {
    v7 = *(_DWORD *)(result + 68);
    if ( v7 == 2 || v7 == 11 )
      break;
    result = (__int64)CmListGetNextElement(v6, &v8, 32);
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
