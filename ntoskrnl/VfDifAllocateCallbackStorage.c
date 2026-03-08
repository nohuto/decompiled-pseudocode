/*
 * XREFs of VfDifAllocateCallbackStorage @ 0x1405CC8AC
 * Callers:
 *     IovAttachDeviceToDeviceStack @ 0x140ABDFA4 (IovAttachDeviceToDeviceStack.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 */

__int64 VfDifAllocateCallbackStorage()
{
  return ExAllocatePool2(64LL, 256LL, 1229940310LL);
}
