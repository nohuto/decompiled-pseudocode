/*
 * XREFs of RawUnload @ 0x1409B5320
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 */

LONG_PTR RawUnload()
{
  ObfDereferenceObject(RawDeviceTapeObject);
  ObfDereferenceObject(RawDeviceCdRomObject);
  return ObfDereferenceObject(RawDeviceDiskObject);
}
