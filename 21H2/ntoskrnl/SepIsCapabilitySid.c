/*
 * XREFs of SepIsCapabilitySid @ 0x1402B635C
 * Callers:
 *     SepNormalAccessCheck @ 0x1403509D0 (SepNormalAccessCheck.c)
 *     SepMaximumAccessCheck @ 0x1403512A0 (SepMaximumAccessCheck.c)
 *     SepMaximumAccessCheckEx @ 0x140373BC4 (SepMaximumAccessCheckEx.c)
 *     SepNormalAccessCheckEx @ 0x140373CEC (SepNormalAccessCheckEx.c)
 * Callees:
 *     RtlCompareMemory @ 0x1404081B0 (RtlCompareMemory.c)
 */

bool __fastcall SepIsCapabilitySid(__int64 a1)
{
  __int64 v2; // rdi

  v2 = SeCapabilityPrefixSid;
  return *(_BYTE *)(a1 + 1) >= 2u
      && *(_BYTE *)a1 == *(_BYTE *)SeCapabilityPrefixSid
      && RtlCompareMemory((const void *)(a1 + 2), (const void *)(SeCapabilityPrefixSid + 2), 6uLL) == 6
      && *(_DWORD *)(a1 + 8) == *(_DWORD *)(v2 + 8);
}
