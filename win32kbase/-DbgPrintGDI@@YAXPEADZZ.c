/*
 * XREFs of ?DbgPrintGDI@@YAXPEADZZ @ 0x1C017D810
 * Callers:
 *     rimProcessDeviceBufferAndStartRead @ 0x1C0003AE4 (rimProcessDeviceBufferAndStartRead.c)
 *     rimStackAttachAndProcessInput @ 0x1C00044C4 (rimStackAttachAndProcessInput.c)
 *     RIMWatchDog @ 0x1C0039810 (RIMWatchDog.c)
 *     RIMStartDeviceSpecificRead @ 0x1C0087454 (RIMStartDeviceSpecificRead.c)
 *     RIMOpenDevWorker @ 0x1C0089188 (RIMOpenDevWorker.c)
 *     rimInputApc @ 0x1C00CB830 (rimInputApc.c)
 *     ?dumpRimDevLeaksAndCleanup@@YAHPEAU_LIST_ENTRY@@PEAD@Z @ 0x1C00D1B5C (-dumpRimDevLeaksAndCleanup@@YAHPEAU_LIST_ENTRY@@PEAD@Z.c)
 * Callees:
 *     <none>
 */

void DbgPrintGDI(PCCH Format, ...)
{
  va_list va; // [rsp+48h] [rbp+10h] BYREF

  va_start(va, Format);
  vDbgPrintEx(0x70u, 0, Format, va);
}
