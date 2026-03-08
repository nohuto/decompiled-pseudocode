/*
 * XREFs of MiLockPage @ 0x1404647C4
 * Callers:
 *     MiScanPagefileSpace @ 0x140A2FF20 (MiScanPagefileSpace.c)
 *     MmAreMdlPagesLocked @ 0x140AE5198 (MmAreMdlPagesLocked.c)
 * Callees:
 *     MiLockPageInline @ 0x1402A33B0 (MiLockPageInline.c)
 */

__int64 __fastcall MiLockPage(__int64 a1)
{
  return MiLockPageInline(a1);
}
