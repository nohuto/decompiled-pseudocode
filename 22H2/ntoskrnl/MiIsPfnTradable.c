/*
 * XREFs of MiIsPfnTradable @ 0x14064D964
 * Callers:
 *     MiMarkNonPagedHiberPhasePte @ 0x140AAC600 (MiMarkNonPagedHiberPhasePte.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiIsPfnTradable(_DWORD *a1)
{
  return *a1 & 1;
}
