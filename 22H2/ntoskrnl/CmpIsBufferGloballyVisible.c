/*
 * XREFs of CmpIsBufferGloballyVisible @ 0x140678780
 * Callers:
 *     CmpBounceContextStart @ 0x1405F47B0 (CmpBounceContextStart.c)
 *     NtQueryValueKey @ 0x140645200 (NtQueryValueKey.c)
 *     CmpDoesBufferRequireCapturing @ 0x1406DD3DC (CmpDoesBufferRequireCapturing.c)
 * Callees:
 *     MmIsSessionAddress @ 0x1402C9800 (MmIsSessionAddress.c)
 */

bool __fastcall CmpIsBufferGloballyVisible(unsigned __int64 a1)
{
  return a1 > 0x7FFFFFFEFFFFLL && !MmIsSessionAddress(a1);
}
