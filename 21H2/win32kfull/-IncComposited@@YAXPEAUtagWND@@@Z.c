/*
 * XREFs of ?IncComposited@@YAXPEAUtagWND@@@Z @ 0x1C023DC70
 * Callers:
 *     <none>
 * Callees:
 *     IncrementCompositedCount @ 0x1C01E7F40 (IncrementCompositedCount.c)
 */

void __fastcall IncComposited(struct tagWND *a1)
{
  if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 27LL) & 2) != 0 )
    IncrementCompositedCount((__int64)a1);
}
