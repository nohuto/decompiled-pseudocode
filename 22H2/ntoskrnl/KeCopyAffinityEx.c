/*
 * XREFs of KeCopyAffinityEx @ 0x14056F460
 * Callers:
 *     <none>
 * Callees:
 *     KiCopyAffinityEx @ 0x1402544A0 (KiCopyAffinityEx.c)
 */

unsigned __int16 __fastcall KeCopyAffinityEx(__int64 a1, unsigned __int16 *a2)
{
  return KiCopyAffinityEx(a1, 0x14u, a2);
}
