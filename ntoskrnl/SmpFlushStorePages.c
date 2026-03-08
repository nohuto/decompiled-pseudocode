/*
 * XREFs of SmpFlushStorePages @ 0x1409D58C0
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x14025C2C0 (KeSetEvent.c)
 *     MiFlushAllStoreSwapPages @ 0x1406379DC (MiFlushAllStoreSwapPages.c)
 */

LONG __fastcall SmpFlushStorePages(__int64 a1)
{
  MiFlushAllStoreSwapPages(**(_QWORD **)(*(_QWORD *)a1 + 1936LL));
  return KeSetEvent((PRKEVENT)(a1 + 8), 0, 0);
}
