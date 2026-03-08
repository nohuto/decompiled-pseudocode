/*
 * XREFs of MmUnmapViewOfSection @ 0x1406A07B0
 * Callers:
 *     PsDispatchIumService @ 0x1405A2A44 (PsDispatchIumService.c)
 * Callees:
 *     MiUnmapViewOfSection @ 0x1406A2570 (MiUnmapViewOfSection.c)
 */

__int64 __fastcall MmUnmapViewOfSection(struct _KPROCESS *a1)
{
  return MiUnmapViewOfSection(a1);
}
