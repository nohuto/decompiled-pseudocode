/*
 * XREFs of RimInputTypeToDeviceType @ 0x1C00483D0
 * Callers:
 *     rimCompleteReads @ 0x1C0044C40 (rimCompleteReads.c)
 *     rimIssueReads @ 0x1C0044DC0 (rimIssueReads.c)
 *     RIMRemoveInputOfType @ 0x1C00B6F70 (RIMRemoveInputOfType.c)
 *     RIMDiscoverSpecificDevice @ 0x1C01A82F4 (RIMDiscoverSpecificDevice.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RimInputTypeToDeviceType(int a1)
{
  __int64 result; // rax

  result = 1LL;
  if ( a1 == 1 )
    return 0LL;
  if ( a1 != 2 )
  {
    if ( (a1 & 0x3C) != 0 )
      return 2LL;
    return 0LL;
  }
  return result;
}
