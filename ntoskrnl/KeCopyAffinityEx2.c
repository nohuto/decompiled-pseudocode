/*
 * XREFs of KeCopyAffinityEx2 @ 0x140296060
 * Callers:
 *     <none>
 * Callees:
 *     KiCopyAffinityEx @ 0x1402337D0 (KiCopyAffinityEx.c)
 */

unsigned __int16 __fastcall KeCopyAffinityEx2(__int64 a1, unsigned __int16 *a2)
{
  return KiCopyAffinityEx(a1, *(_WORD *)(a1 + 2), a2);
}
