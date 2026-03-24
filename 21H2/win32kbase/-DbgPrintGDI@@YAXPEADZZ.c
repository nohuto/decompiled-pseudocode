/*
 * XREFs of ?DbgPrintGDI@@YAXPEADZZ @ 0x1C013A7B0
 * Callers:
 *     RIMWatchDog @ 0x1C0046BD0 (RIMWatchDog.c)
 *     RIMDeviceClassNotify @ 0x1C0052EC0 (RIMDeviceClassNotify.c)
 *     RIMStartDeviceSpecificRead @ 0x1C006A2E8 (RIMStartDeviceSpecificRead.c)
 *     ?dumpRimDevLeaksAndCleanup@@YAHPEAU_LIST_ENTRY@@PEAD@Z @ 0x1C0074738 (-dumpRimDevLeaksAndCleanup@@YAHPEAU_LIST_ENTRY@@PEAD@Z.c)
 *     RIMOpenDev @ 0x1C00AD020 (RIMOpenDev.c)
 *     RIMVirtDeviceClassNotify @ 0x1C016CA24 (RIMVirtDeviceClassNotify.c)
 *     rimInputApc @ 0x1C01746A0 (rimInputApc.c)
 *     rimProcessDeviceBufferAndStartRead @ 0x1C0175130 (rimProcessDeviceBufferAndStartRead.c)
 *     rimStackAttachAndProcessInput @ 0x1C01761B4 (rimStackAttachAndProcessInput.c)
 * Callees:
 *     <none>
 */

void DbgPrintGDI(PCCH Format, ...)
{
  va_list va; // [rsp+48h] [rbp+10h] BYREF

  va_start(va, Format);
  vDbgPrintEx(0x70u, 0, Format, va);
}
