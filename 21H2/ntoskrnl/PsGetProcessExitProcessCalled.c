/*
 * XREFs of PsGetProcessExitProcessCalled @ 0x1402CB0E0
 * Callers:
 *     VerifierMmUnmapLockedPages @ 0x1409E71D0 (VerifierMmUnmapLockedPages.c)
 * Callees:
 *     <none>
 */

bool __fastcall PsGetProcessExitProcessCalled(__int64 a1)
{
  return (*(_DWORD *)(a1 + 1124) & 4) != 0;
}
