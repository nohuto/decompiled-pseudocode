/*
 * XREFs of SepIsCapabilitySid @ 0x140208AF4
 * Callers:
 *     SepMaximumAccessCheck @ 0x140208450 (SepMaximumAccessCheck.c)
 *     SepNormalAccessCheckEx @ 0x140208E18 (SepNormalAccessCheckEx.c)
 *     SepNormalAccessCheck @ 0x140267220 (SepNormalAccessCheck.c)
 *     SepMaximumAccessCheckEx @ 0x1403C8AF0 (SepMaximumAccessCheckEx.c)
 * Callees:
 *     RtlCompareMemory @ 0x140420DD0 (RtlCompareMemory.c)
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
