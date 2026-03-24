/*
 * XREFs of RtlGetUmsContextExtendedSize @ 0x1405931FC
 * Callers:
 *     PspAttachThreadToUmsCompletionList @ 0x1405816E4 (PspAttachThreadToUmsCompletionList.c)
 *     PspBuildCreateProcessContext @ 0x140608C44 (PspBuildCreateProcessContext.c)
 *     PspUmsInitializeContext @ 0x14090A834 (PspUmsInitializeContext.c)
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
