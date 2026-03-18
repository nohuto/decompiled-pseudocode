/*
 * XREFs of MmUnmapViewOfSection @ 0x1407D7950
 * Callers:
 *     PsDispatchIumService @ 0x1405A4EF4 (PsDispatchIumService.c)
 * Callees:
 *     MiUnmapViewOfSection @ 0x14071F030 (MiUnmapViewOfSection.c)
 */

__int64 __fastcall MmUnmapViewOfSection(__int64 a1, unsigned __int64 a2)
{
  return MiUnmapViewOfSection(a1, a2, 0, 0);
}
