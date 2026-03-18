/*
 * XREFs of VfDifAllocateCallbackStorage @ 0x1405FE9C4
 * Callers:
 *     IovAttachDeviceToDeviceStack @ 0x140A800C4 (IovAttachDeviceToDeviceStack.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 VfDifAllocateCallbackStorage()
{
  return ExAllocatePool2(64LL, 256LL, 1229940310LL);
}
