/*
 * XREFs of RtlGetExtendedFeaturesMask @ 0x1800F5C20
 * Callers:
 *     <none>
 * Callees:
 *     RtlpLocateXStateChunk @ 0x1800F62B8 (RtlpLocateXStateChunk.c)
 */

ULONG64 __cdecl RtlGetExtendedFeaturesMask(PCONTEXT_EX ContextEx)
{
  return *(_QWORD *)RtlpLocateXStateChunk(ContextEx) & 0xFFFFFFFFFFFFFFFCuLL;
}
