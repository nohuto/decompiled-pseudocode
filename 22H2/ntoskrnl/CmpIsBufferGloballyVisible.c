/*
 * XREFs of CmpIsBufferGloballyVisible @ 0x14073EBA0
 * Callers:
 *     CmpDoesBufferRequireCapturing @ 0x1406D327C (CmpDoesBufferRequireCapturing.c)
 *     CmpBounceContextStart @ 0x1406DC3D0 (CmpBounceContextStart.c)
 *     NtQueryValueKey @ 0x1406E2F20 (NtQueryValueKey.c)
 * Callees:
 *     MmIsSessionAddress @ 0x1402BC7B0 (MmIsSessionAddress.c)
 */

bool __fastcall CmpIsBufferGloballyVisible(unsigned __int64 a1)
{
  return a1 > 0x7FFFFFFEFFFFLL && !MmIsSessionAddress(a1);
}
