/*
 * XREFs of ?DbgPrintWarning@@YAXPEADZZ @ 0x1C00564C4
 * Callers:
 *     RIMCreateHidDesc @ 0x1C0056014 (RIMCreateHidDesc.c)
 *     RIMAllocateHidDesc @ 0x1C018A2D4 (RIMAllocateHidDesc.c)
 *     RIMVirtAllocateHidDesc @ 0x1C018D358 (RIMVirtAllocateHidDesc.c)
 *     RIMVirtCreateHidDesc @ 0x1C018DB94 (RIMVirtCreateHidDesc.c)
 *     RIMIDECreatePointerDeviceInfo @ 0x1C019B9FC (RIMIDECreatePointerDeviceInfo.c)
 *     rimExtractDigitizerPageButtonUsages @ 0x1C01AF708 (rimExtractDigitizerPageButtonUsages.c)
 * Callees:
 *     <none>
 */

void DbgPrintWarning(PCCH Format, ...)
{
  va_list va; // [rsp+48h] [rbp+10h] BYREF

  va_start(va, Format);
  vDbgPrintEx(0x70u, 1u, Format, va);
}
