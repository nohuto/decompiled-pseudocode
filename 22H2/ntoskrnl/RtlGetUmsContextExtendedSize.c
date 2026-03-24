/*
 * XREFs of RtlGetUmsContextExtendedSize @ 0x14059313C
 * Callers:
 *     PspAttachThreadToUmsCompletionList @ 0x140581624 (PspAttachThreadToUmsCompletionList.c)
 *     PspBuildCreateProcessContext @ 0x1406090A4 (PspBuildCreateProcessContext.c)
 *     PspUmsInitializeContext @ 0x14090A884 (PspUmsInitializeContext.c)
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
