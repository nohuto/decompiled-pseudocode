/*
 * XREFs of ViDifAllocateCallbackStorage @ 0x1405A0E68
 * Callers:
 *     VfDifCaptureDriverEntry @ 0x14037DAB4 (VfDifCaptureDriverEntry.c)
 *     IovAttachDeviceToDeviceStack @ 0x1409C5A4C (IovAttachDeviceToDeviceStack.c)
 * Callees:
 *     memset @ 0x140414300 (memset.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

PVOID ViDifAllocateCallbackStorage()
{
  PVOID PoolWithTag; // rax
  PVOID v1; // rbx

  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x100uLL, 0x494F6656u);
  v1 = PoolWithTag;
  if ( PoolWithTag )
    memset(PoolWithTag, 0, 0x100uLL);
  return v1;
}
