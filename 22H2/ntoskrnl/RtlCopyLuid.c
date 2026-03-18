/*
 * XREFs of RtlCopyLuid @ 0x140886170
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __stdcall RtlCopyLuid(PLUID DestinationLuid, PLUID SourceLuid)
{
  *DestinationLuid = *SourceLuid;
}
