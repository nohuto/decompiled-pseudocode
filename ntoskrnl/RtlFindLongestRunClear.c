/*
 * XREFs of RtlFindLongestRunClear @ 0x1405A5BE0
 * Callers:
 *     <none>
 * Callees:
 *     RtlFindClearRuns @ 0x14029A680 (RtlFindClearRuns.c)
 */

ULONG __stdcall RtlFindLongestRunClear(PRTL_BITMAP BitMapHeader, PULONG StartingIndex)
{
  RTL_BITMAP_RUN RunArray; // [rsp+40h] [rbp+18h] BYREF

  if ( RtlFindClearRuns(BitMapHeader, &RunArray, 1u, 1u) == 1 )
  {
    *StartingIndex = RunArray.StartingIndex;
    return RunArray.NumberOfBits;
  }
  else
  {
    *StartingIndex = 0;
    return 0;
  }
}
