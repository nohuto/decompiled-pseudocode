/*
 * XREFs of VfUtilEqualUnicodeString @ 0x140AC366C
 * Callers:
 *     ViDifCheckCallbackInterception @ 0x14020A54C (ViDifCheckCallbackInterception.c)
 *     ViFaultsIsAppTarget @ 0x140AD7A00 (ViFaultsIsAppTarget.c)
 * Callees:
 *     RtlCompareMemory @ 0x140429160 (RtlCompareMemory.c)
 */

_BOOL8 __fastcall VfUtilEqualUnicodeString(const void **a1, __int64 a2)
{
  return *(_WORD *)a1 == *(_WORD *)a2
      && RtlCompareMemory(a1[1], *(const void **)(a2 + 8), *(unsigned __int16 *)a1) == *(unsigned __int16 *)a1;
}
