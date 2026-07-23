/*
 * XREFs of SepIsPackageSid @ 0x14022EED0
 * Callers:
 *     SepNormalAccessCheck @ 0x14035B720 (SepNormalAccessCheck.c)
 *     SepMaximumAccessCheck @ 0x14035BFF0 (SepMaximumAccessCheck.c)
 *     SepMaximumAccessCheckEx @ 0x140373714 (SepMaximumAccessCheckEx.c)
 *     SepNormalAccessCheckEx @ 0x14037383C (SepNormalAccessCheckEx.c)
 * Callees:
 *     RtlCompareMemory @ 0x140408390 (RtlCompareMemory.c)
 */

bool __fastcall SepIsPackageSid(__int64 a1)
{
  __int64 v2; // rdi

  v2 = SePackagePrefixSid;
  return *(_BYTE *)(a1 + 1) >= 2u
      && *(_BYTE *)a1 == *(_BYTE *)SePackagePrefixSid
      && RtlCompareMemory((const void *)(a1 + 2), (const void *)(SePackagePrefixSid + 2), 6uLL) == 6
      && *(_DWORD *)(a1 + 8) == *(_DWORD *)(v2 + 8);
}
