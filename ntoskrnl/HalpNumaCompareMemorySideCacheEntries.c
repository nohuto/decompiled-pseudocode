/*
 * XREFs of HalpNumaCompareMemorySideCacheEntries @ 0x140B8E1A0
 * Callers:
 *     <none>
 * Callees:
 *     HalpNumaCompareMemorySideCacheNodeAndLevel @ 0x140931B9C (HalpNumaCompareMemorySideCacheNodeAndLevel.c)
 */

__int64 __fastcall HalpNumaCompareMemorySideCacheEntries(const void *a1, const void *a2)
{
  return HalpNumaCompareMemorySideCacheNodeAndLevel(
           *(_DWORD *)a1,
           *((_DWORD *)a1 + 5),
           *(_DWORD *)a2,
           *((_DWORD *)a2 + 5));
}
