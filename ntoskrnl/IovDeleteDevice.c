/*
 * XREFs of IovDeleteDevice @ 0x140ABE694
 * Callers:
 *     IoDeleteDevice @ 0x140368010 (IoDeleteDevice.c)
 * Callees:
 *     VfIoDeleteDevice @ 0x140ACF214 (VfIoDeleteDevice.c)
 */

__int64 __fastcall IovDeleteDevice(ULONG_PTR a1)
{
  return VfIoDeleteDevice(a1);
}
