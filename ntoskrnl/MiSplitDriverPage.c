/*
 * XREFs of MiSplitDriverPage @ 0x140A289BC
 * Callers:
 *     MiProbeLeafPteAccess @ 0x140269620 (MiProbeLeafPteAccess.c)
 * Callees:
 *     MiMakeDriverPagesPrivate @ 0x1402A6440 (MiMakeDriverPagesPrivate.c)
 */

__int64 __fastcall MiSplitDriverPage(__int64 a1, ULONG_PTR *a2)
{
  return MiMakeDriverPagesPrivate(a1, a2, (unsigned __int64)a2, 0);
}
