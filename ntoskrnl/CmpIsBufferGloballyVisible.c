/*
 * XREFs of CmpIsBufferGloballyVisible @ 0x1406B18D8
 * Callers:
 *     NtQueryValueKey @ 0x1406E6C50 (NtQueryValueKey.c)
 *     CmpDoesBufferRequireCapturing @ 0x1407A97FC (CmpDoesBufferRequireCapturing.c)
 *     CmpBounceContextStart @ 0x1407AC9C0 (CmpBounceContextStart.c)
 * Callees:
 *     MmIsSessionAddress @ 0x140239ED0 (MmIsSessionAddress.c)
 */

bool __fastcall CmpIsBufferGloballyVisible(unsigned __int64 a1)
{
  return a1 > 0x7FFFFFFEFFFFLL && !MmIsSessionAddress(a1);
}
