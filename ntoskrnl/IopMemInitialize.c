NTSTATUS __fastcall IopMemInitialize(__int64 a1, __int64 a2)
{
  NTSTATUS result; // eax
  __int64 v3; // [rsp+20h] [rbp-28h]

  qword_140C5C258 = (__int64)IopGenericUnpackRequirement;
  qword_140C5C260 = (__int64)IopGenericPackResource;
  qword_140C5C268 = (__int64)IopGenericUnpackResource;
  qword_140C5C270 = (__int64)IopGenericScoreRequirement;
  qword_140C5C2D8 = (__int64)IopMemFindSuitableRange;
  qword_140C5C2A8 = (__int64)IopMemQueryConflict;
  result = ArbInitializeArbiterInstance(
             (__int64)&IopRootMemArbiter,
             a2,
             3,
             (__int64)L"RootMemory",
             v3,
             (__int64)IopGenericTranslateOrdering);
  if ( result >= 0 )
  {
    result = RtlAddRange(qword_140C5C208, 0, 4095, 0, 0, 0LL, 0LL);
    if ( result >= 0 )
    {
      result = ArbAddInaccessibleAllocationRange((__int64)&IopRootMemArbiter, qword_140C5C208);
      if ( result >= 0 )
        return ArbAddMmConfigRangeAsBootReserved((__int64)&IopRootMemArbiter, qword_140C5C208);
    }
  }
  return result;
}
