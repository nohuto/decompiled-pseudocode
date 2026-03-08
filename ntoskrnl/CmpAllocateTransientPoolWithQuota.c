/*
 * XREFs of CmpAllocateTransientPoolWithQuota @ 0x140243978
 * Callers:
 *     NtDeleteValueKey @ 0x1406B9280 (NtDeleteValueKey.c)
 *     CmCreateKey @ 0x1406BBA60 (CmCreateKey.c)
 *     CmLoadDifferencingKey @ 0x1406BC49C (CmLoadDifferencingKey.c)
 *     NtQueryValueKey @ 0x1406E6C50 (NtQueryValueKey.c)
 *     CmUnloadKey @ 0x140749BD8 (CmUnloadKey.c)
 *     CmpCaptureKeyValueArray @ 0x1407A8A44 (CmpCaptureKeyValueArray.c)
 *     NtSetValueKey @ 0x1407A9030 (NtSetValueKey.c)
 *     CmpBounceContextStart @ 0x1407AC9C0 (CmpBounceContextStart.c)
 *     NtCompactKeys @ 0x140A0A710 (NtCompactKeys.c)
 *     NtQueryOpenSubKeysEx @ 0x140A0B000 (NtQueryOpenSubKeysEx.c)
 *     NtRenameKey @ 0x140A0B350 (NtRenameKey.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 */

__int64 __fastcall CmpAllocateTransientPoolWithQuota(__int64 a1, __int64 a2, __int64 a3)
{
  return ExAllocatePool2(257LL, a2, a3);
}
