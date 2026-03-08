/*
 * XREFs of RtlGetHpatEntryAddress @ 0x1406786F0
 * Callers:
 *     RtlApplyHotPatch @ 0x140AAA600 (RtlApplyHotPatch.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlGetHpatEntryAddress(__int64 a1, unsigned int a2)
{
  return (a2 >> 9 << 13) + a1 + 8LL * (a2 & 0x1FF);
}
