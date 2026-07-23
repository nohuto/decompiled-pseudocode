/*
 * XREFs of RtlGetUmsContextExtendedSize @ 0x14059342C
 * Callers:
 *     PspAttachThreadToUmsCompletionList @ 0x140581994 (PspAttachThreadToUmsCompletionList.c)
 *     PspBuildCreateProcessContext @ 0x1406986F4 (PspBuildCreateProcessContext.c)
 *     PspUmsInitializeContext @ 0x14090A994 (PspUmsInitializeContext.c)
 * Callees:
 *     <none>
 */

__int64 RtlGetUmsContextExtendedSize()
{
  unsigned int v0; // ecx

  v0 = 1312;
  if ( MEMORY[0xFFFFF780000003E8] )
    return (unsigned int)(MEMORY[0xFFFFF780000003E8] + 1375);
  return v0;
}
