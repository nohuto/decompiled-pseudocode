/*
 * XREFs of IoCallDriver @ 0x1405543F0
 * Callers:
 *     IoCancelFileOpen @ 0x140943D90 (IoCancelFileOpen.c)
 * Callees:
 *     IofCallDriver @ 0x140312640 (IofCallDriver.c)
 */

NTSTATUS __fastcall IoCallDriver(struct _DEVICE_OBJECT *a1, IRP *a2)
{
  return IofCallDriver(a1, a2);
}
