/*
 * XREFs of ?DbgPrintGDI@@YAXPEADZZ @ 0x1C013AA80
 * Callers:
 *     RIMWatchDog @ 0x1C0048040 (RIMWatchDog.c)
 *     RIMDeviceClassNotify @ 0x1C0053EC0 (RIMDeviceClassNotify.c)
 *     RIMStartDeviceSpecificRead @ 0x1C006AD98 (RIMStartDeviceSpecificRead.c)
 *     ?dumpRimDevLeaksAndCleanup@@YAHPEAU_LIST_ENTRY@@PEAD@Z @ 0x1C0075DA8 (-dumpRimDevLeaksAndCleanup@@YAHPEAU_LIST_ENTRY@@PEAD@Z.c)
 *     RIMOpenDev @ 0x1C00AD520 (RIMOpenDev.c)
 *     RIMVirtDeviceClassNotify @ 0x1C016C954 (RIMVirtDeviceClassNotify.c)
 *     rimInputApc @ 0x1C01745D0 (rimInputApc.c)
 *     rimProcessDeviceBufferAndStartRead @ 0x1C0175060 (rimProcessDeviceBufferAndStartRead.c)
 *     rimStackAttachAndProcessInput @ 0x1C01760E4 (rimStackAttachAndProcessInput.c)
 * Callees:
 *     <none>
 */

void DbgPrintGDI(PCCH Format, ...)
{
  va_list va; // [rsp+48h] [rbp+10h] BYREF

  va_start(va, Format);
  vDbgPrintEx(0x70u, 0, Format, va);
}
