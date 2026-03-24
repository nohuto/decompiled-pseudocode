/*
 * XREFs of IopMemInitialize @ 0x1407A2064
 * Callers:
 *     IopInitializePlugPlayServices @ 0x140A52280 (IopInitializePlugPlayServices.c)
 * Callees:
 *     RtlAddRange @ 0x140763A30 (RtlAddRange.c)
 *     ArbAddMmConfigRangeAsBootReserved @ 0x1407A2290 (ArbAddMmConfigRangeAsBootReserved.c)
 *     ArbAddInaccessibleAllocationRange @ 0x1407A249C (ArbAddInaccessibleAllocationRange.c)
 *     ArbInitializeArbiterInstance @ 0x1407A2690 (ArbInitializeArbiterInstance.c)
 */

__int64 __fastcall IopMemInitialize(__int64 a1, int a2)
{
  __int64 result; // rax

  qword_140C44758 = (__int64)&IopGenericUnpackRequirement;
  qword_140C44760 = (__int64)IopGenericPackResource;
  qword_140C44768 = (__int64)IopGenericUnpackResource;
  qword_140C44770 = (__int64)IopGenericScoreRequirement;
  qword_140C447D8 = (__int64)IopMemFindSuitableRange;
  qword_140C447A8 = (__int64)IopMemQueryConflict;
  result = ArbInitializeArbiterInstance((unsigned int)&IopRootMemArbiter, a2, 3, (unsigned int)L"RootMemory");
  if ( (int)result >= 0 )
  {
    result = RtlAddRange(qword_140C44708, 0LL, 0xFFFuLL, 0, 0, 0LL, 0LL);
    if ( (int)result >= 0 )
    {
      result = ArbAddInaccessibleAllocationRange(&IopRootMemArbiter, qword_140C44708);
      if ( (int)result >= 0 )
        return ArbAddMmConfigRangeAsBootReserved(&IopRootMemArbiter, qword_140C44708);
    }
  }
  return result;
}
