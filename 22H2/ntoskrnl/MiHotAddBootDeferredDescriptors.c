/*
 * XREFs of MiHotAddBootDeferredDescriptors @ 0x1408515B0
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x14023C5C0 (KeSetEvent.c)
 *     MiHotAddBootDeferredDescriptorsDiscardable @ 0x140B69B38 (MiHotAddBootDeferredDescriptorsDiscardable.c)
 */

LONG MiHotAddBootDeferredDescriptors()
{
  MiHotAddBootDeferredDescriptorsDiscardable();
  return KeSetEvent(&stru_140C673E8, 0, 0);
}
