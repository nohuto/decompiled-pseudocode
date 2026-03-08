/*
 * XREFs of MiHotAddBootDeferredDescriptors @ 0x14084E170
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x14025C2C0 (KeSetEvent.c)
 *     MiHotAddBootDeferredDescriptorsDiscardable @ 0x140B6625C (MiHotAddBootDeferredDescriptorsDiscardable.c)
 */

LONG MiHotAddBootDeferredDescriptors()
{
  MiHotAddBootDeferredDescriptorsDiscardable();
  return KeSetEvent(&stru_140C66F68, 0, 0);
}
