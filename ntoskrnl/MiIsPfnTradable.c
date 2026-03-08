/*
 * XREFs of MiIsPfnTradable @ 0x14064B348
 * Callers:
 *     MiMarkNonPagedHiberPhasePte @ 0x140AA93D0 (MiMarkNonPagedHiberPhasePte.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiIsPfnTradable(_DWORD *a1)
{
  return *a1 & 1;
}
