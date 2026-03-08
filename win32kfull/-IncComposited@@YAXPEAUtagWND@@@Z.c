/*
 * XREFs of ?IncComposited@@YAXPEAUtagWND@@@Z @ 0x1C0223340
 * Callers:
 *     <none>
 * Callees:
 *     IncrementCompositedCount @ 0x1C00059EC (IncrementCompositedCount.c)
 */

void __fastcall IncComposited(struct tagWND *a1)
{
  if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 27LL) & 2) != 0 )
    IncrementCompositedCount((__int64)a1);
}
