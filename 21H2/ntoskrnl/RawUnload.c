/*
 * XREFs of RawUnload @ 0x1409B4F00
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 */

LONG_PTR RawUnload()
{
  ObfDereferenceObject(RawDeviceTapeObject);
  ObfDereferenceObject(RawDeviceCdRomObject);
  return ObfDereferenceObject(RawDeviceDiskObject);
}
