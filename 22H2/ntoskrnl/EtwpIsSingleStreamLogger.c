/*
 * XREFs of EtwpIsSingleStreamLogger @ 0x14032F3D4
 * Callers:
 *     EtwpFlushActiveBuffers @ 0x1406BC9F0 (EtwpFlushActiveBuffers.c)
 * Callees:
 *     <none>
 */

bool __fastcall EtwpIsSingleStreamLogger(__int64 a1)
{
  return (*(_DWORD *)(a1 + 12) & 0x10000000) != 0;
}
