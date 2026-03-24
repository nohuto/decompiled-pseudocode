/*
 * XREFs of IovDeleteDevice @ 0x1409C51A8
 * Callers:
 *     IoDeleteDevice @ 0x140360200 (IoDeleteDevice.c)
 * Callees:
 *     VfIoDeleteDevice @ 0x1409D6154 (VfIoDeleteDevice.c)
 */

__int64 __fastcall IovDeleteDevice(ULONG_PTR a1)
{
  return VfIoDeleteDevice(a1);
}
