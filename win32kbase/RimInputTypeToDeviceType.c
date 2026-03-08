/*
 * XREFs of RimInputTypeToDeviceType @ 0x1C0039D00
 * Callers:
 *     rimCompleteReads @ 0x1C0039B74 (rimCompleteReads.c)
 *     rimIssueReads @ 0x1C0039C14 (rimIssueReads.c)
 *     RIMRemoveInputOfType @ 0x1C00C9690 (RIMRemoveInputOfType.c)
 *     RIMDiscoverSpecificDevice @ 0x1C01D1704 (RIMDiscoverSpecificDevice.c)
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
    return (a1 & 0x3C) != 0 ? 2 : 0;
  return result;
}
