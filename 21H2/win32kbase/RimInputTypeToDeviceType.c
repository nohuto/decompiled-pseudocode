/*
 * XREFs of RimInputTypeToDeviceType @ 0x1C00A6530
 * Callers:
 *     rimCompleteReads @ 0x1C0053548 (rimCompleteReads.c)
 *     rimIssueReads @ 0x1C0054368 (rimIssueReads.c)
 *     RIMRemoveInputOfType @ 0x1C00A6300 (RIMRemoveInputOfType.c)
 *     RIMDiscoverSpecificDevice @ 0x1C017305C (RIMDiscoverSpecificDevice.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RimInputTypeToDeviceType(int a1)
{
  __int64 result; // rax

  result = 1LL;
  if ( a1 == 1 )
    return 0LL;
  if ( a1 == 2 )
    return result;
  if ( (a1 & 0x3C) == 0 )
    return 0LL;
  return 2LL;
}
