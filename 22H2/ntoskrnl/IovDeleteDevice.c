/*
 * XREFs of IovDeleteDevice @ 0x140AC2694
 * Callers:
 *     IoDeleteDevice @ 0x140304E10 (IoDeleteDevice.c)
 * Callees:
 *     VfIoDeleteDevice @ 0x140AD3214 (VfIoDeleteDevice.c)
 */

__int64 __fastcall IovDeleteDevice(ULONG_PTR a1)
{
  return VfIoDeleteDevice(a1);
}
