/*
 * XREFs of IoUpdateIrpIoAttributionHandle @ 0x1402B1DB0
 * Callers:
 *     <none>
 * Callees:
 *     IopSetDiskIoAttributionExtension @ 0x1402B1E30 (IopSetDiskIoAttributionExtension.c)
 */

__int64 __fastcall IoUpdateIrpIoAttributionHandle(__int64 a1, __int64 a2)
{
  return IopSetDiskIoAttributionExtension(a1, a2, KeGetCurrentThread(), 1LL);
}
