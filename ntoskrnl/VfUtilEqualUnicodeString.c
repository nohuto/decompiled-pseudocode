/*
 * XREFs of VfUtilEqualUnicodeString @ 0x140ABF66C
 * Callers:
 *     ViDifCheckCallbackInterception @ 0x140303BC8 (ViDifCheckCallbackInterception.c)
 *     ViFaultsIsAppTarget @ 0x140AD3A00 (ViFaultsIsAppTarget.c)
 * Callees:
 *     RtlCompareMemory @ 0x140420DD0 (RtlCompareMemory.c)
 */

_BOOL8 __fastcall VfUtilEqualUnicodeString(const void **a1, __int64 a2)
{
  return *(_WORD *)a1 == *(_WORD *)a2
      && RtlCompareMemory(a1[1], *(const void **)(a2 + 8), *(unsigned __int16 *)a1) == *(unsigned __int16 *)a1;
}
