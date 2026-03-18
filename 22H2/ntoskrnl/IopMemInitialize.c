/*
 * XREFs of IopMemInitialize @ 0x140816A54
 * Callers:
 *     IopInitializePlugPlayServices @ 0x140B42004 (IopInitializePlugPlayServices.c)
 * Callees:
 *     ArbAddInaccessibleAllocationRange @ 0x140815AD4 (ArbAddInaccessibleAllocationRange.c)
 *     ArbInitializeArbiterInstance @ 0x140815CC8 (ArbInitializeArbiterInstance.c)
 *     ArbAddMmConfigRangeAsBootReserved @ 0x140816844 (ArbAddMmConfigRangeAsBootReserved.c)
 *     RtlAddRange @ 0x140816E70 (RtlAddRange.c)
 */

NTSTATUS __fastcall IopMemInitialize(__int64 a1, __int64 a2)
{
  NTSTATUS result; // eax
  __int64 v3; // [rsp+20h] [rbp-28h]

  qword_140C5C7D8 = (__int64)&IopGenericUnpackRequirement;
  qword_140C5C7E0 = (__int64)IopGenericPackResource;
  qword_140C5C7E8 = (__int64)IopGenericUnpackResource;
  qword_140C5C7F0 = (__int64)IopGenericScoreRequirement;
  qword_140C5C858 = (__int64)IopMemFindSuitableRange;
  qword_140C5C828 = (__int64)IopMemQueryConflict;
  result = ArbInitializeArbiterInstance(
             (__int64)&IopRootMemArbiter,
             a2,
             3,
             (__int64)L"RootMemory",
             v3,
             (__int64)IopGenericTranslateOrdering);
  if ( result >= 0 )
  {
    result = RtlAddRange(qword_140C5C788, 0, 4095, 0, 0, 0LL, 0LL);
    if ( result >= 0 )
    {
      result = ArbAddInaccessibleAllocationRange((__int64)&IopRootMemArbiter, qword_140C5C788);
      if ( result >= 0 )
        return ArbAddMmConfigRangeAsBootReserved((__int64)&IopRootMemArbiter, qword_140C5C788);
    }
  }
  return result;
}
