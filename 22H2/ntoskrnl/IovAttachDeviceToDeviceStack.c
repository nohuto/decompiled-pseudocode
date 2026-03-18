/*
 * XREFs of IovAttachDeviceToDeviceStack @ 0x140AC1FA4
 * Callers:
 *     IopAttachDeviceToDeviceStackSafe @ 0x14035F2C4 (IopAttachDeviceToDeviceStackSafe.c)
 * Callees:
 *     ViDifCheckCallbackInterception @ 0x14020A54C (ViDifCheckCallbackInterception.c)
 *     VfDifAllocateCallbackStorage @ 0x1405CED5C (VfDifAllocateCallbackStorage.c)
 *     ViDifCaptureDriverEntry @ 0x1405CEFDC (ViDifCaptureDriverEntry.c)
 *     ViDifCaptureIoCallbacks @ 0x1405CF04C (ViDifCaptureIoCallbacks.c)
 *     IovUtilFlushStackCache @ 0x140AD39CC (IovUtilFlushStackCache.c)
 */

__int64 __fastcall IovAttachDeviceToDeviceStack(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  struct _DRIVER_OBJECT *v4; // rbx
  PDRIVER_EXTENSION DriverExtension; // rdi
  __int64 CallbackStorage; // rax

  result = (unsigned int)VfIoDisabled;
  if ( !VfIoDisabled )
  {
    v4 = *(struct _DRIVER_OBJECT **)(a1 + 8);
    DriverExtension = v4->DriverExtension;
    if ( ViDifCheckCallbackInterception(v4) && !*(_QWORD *)&DriverExtension[1].ServiceKeyName.Length )
    {
      CallbackStorage = VfDifAllocateCallbackStorage();
      if ( CallbackStorage )
      {
        *(_QWORD *)&DriverExtension[1].ServiceKeyName.Length = CallbackStorage;
        if ( ViDifCaptureDriverEntry((__int64)v4) )
          ViDifCaptureIoCallbacks(v4);
      }
    }
    return IovUtilFlushStackCache(a2);
  }
  return result;
}
