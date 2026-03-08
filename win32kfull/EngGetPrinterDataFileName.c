/*
 * XREFs of EngGetPrinterDataFileName @ 0x1C028EBB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

LPWSTR __stdcall EngGetPrinterDataFileName(HDEV hdev)
{
  return (LPWSTR)*((_QWORD *)hdev + 187);
}
