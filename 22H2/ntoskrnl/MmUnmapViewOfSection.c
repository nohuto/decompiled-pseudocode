/*
 * XREFs of MmUnmapViewOfSection @ 0x140691410
 * Callers:
 *     PsDispatchIumService @ 0x140582C34 (PsDispatchIumService.c)
 * Callees:
 *     MiUnmapViewOfSection @ 0x14061E510 (MiUnmapViewOfSection.c)
 */

__int64 __fastcall MmUnmapViewOfSection(ULONG_PTR a1, unsigned __int64 a2)
{
  return MiUnmapViewOfSection(a1, a2, 0, 0LL);
}
