/*
 * XREFs of VfUtilEqualUnicodeString @ 0x140A81CF4
 * Callers:
 *     ViDifCheckCallbackInterception @ 0x1402D8764 (ViDifCheckCallbackInterception.c)
 *     ViFaultsIsAppTarget @ 0x140A9755C (ViFaultsIsAppTarget.c)
 * Callees:
 *     RtlCompareMemory @ 0x14042A1E0 (RtlCompareMemory.c)
 */

_BOOL8 __fastcall VfUtilEqualUnicodeString(const void **a1, __int64 a2)
{
  return *(_WORD *)a1 == *(_WORD *)a2
      && RtlCompareMemory(a1[1], *(const void **)(a2 + 8), *(unsigned __int16 *)a1) == *(unsigned __int16 *)a1;
}
