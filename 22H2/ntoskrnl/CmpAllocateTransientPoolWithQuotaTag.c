/*
 * XREFs of CmpAllocateTransientPoolWithQuotaTag @ 0x140347F68
 * Callers:
 *     CmpBounceContextStart @ 0x1405F47B0 (CmpBounceContextStart.c)
 *     NtQueryValueKey @ 0x140645200 (NtQueryValueKey.c)
 *     CmUnloadKey @ 0x14066C6BC (CmUnloadKey.c)
 *     NtSetValueKey @ 0x1406DCBB0 (NtSetValueKey.c)
 *     CmpCaptureKeyValueArray @ 0x1406DFEF0 (CmpCaptureKeyValueArray.c)
 *     NtDeleteValueKey @ 0x1406E1EF0 (NtDeleteValueKey.c)
 *     CmLoadDifferencingKey @ 0x1406E737C (CmLoadDifferencingKey.c)
 *     CmCreateKey @ 0x1406E8480 (CmCreateKey.c)
 *     NtCompactKeys @ 0x140868050 (NtCompactKeys.c)
 *     NtQueryOpenSubKeysEx @ 0x140868940 (NtQueryOpenSubKeysEx.c)
 *     NtRenameKey @ 0x140868C80 (NtRenameKey.c)
 * Callees:
 *     ExAllocatePoolWithQuotaTag @ 0x1402D37D0 (ExAllocatePoolWithQuotaTag.c)
 */

PVOID __fastcall CmpAllocateTransientPoolWithQuotaTag(__int64 a1, SIZE_T a2, ULONG a3)
{
  return ExAllocatePoolWithQuotaTag((POOL_TYPE)9, a2, a3);
}
