/*
 * XREFs of EngGetDriverName @ 0x1C028EB90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

LPWSTR __stdcall EngGetDriverName(HDEV hdev)
{
  return *(LPWSTR *)(*(_QWORD *)(*((_QWORD *)hdev + 220) + 16LL) + 8LL);
}
