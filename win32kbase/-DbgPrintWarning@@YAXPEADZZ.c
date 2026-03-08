/*
 * XREFs of ?DbgPrintWarning@@YAXPEADZZ @ 0x1C0034DB0
 * Callers:
 *     RIMCreateHidDesc @ 0x1C0035100 (RIMCreateHidDesc.c)
 *     RIMAllocateHidDesc @ 0x1C01AC4D4 (RIMAllocateHidDesc.c)
 *     RIMVirtAllocateHidDesc @ 0x1C01B0738 (RIMVirtAllocateHidDesc.c)
 *     RIMVirtCreateHidDesc @ 0x1C01B10CC (RIMVirtCreateHidDesc.c)
 *     RIMIDECreatePointerDeviceInfo @ 0x1C01C21B8 (RIMIDECreatePointerDeviceInfo.c)
 *     rimExtractDigitizerPageButtonUsages @ 0x1C01D6EB4 (rimExtractDigitizerPageButtonUsages.c)
 * Callees:
 *     <none>
 */

void DbgPrintWarning(PCCH Format, ...)
{
  va_list va; // [rsp+48h] [rbp+10h] BYREF

  va_start(va, Format);
  vDbgPrintEx(0x70u, 1u, Format, va);
}
