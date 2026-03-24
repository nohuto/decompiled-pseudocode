/*
 * XREFs of MiIsPfnTradable @ 0x14054EF1C
 * Callers:
 *     MiMarkNonPagedHiberPhasePte @ 0x1409B0660 (MiMarkNonPagedHiberPhasePte.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiIsPfnTradable(_BYTE *a1)
{
  return *a1 & 1;
}
