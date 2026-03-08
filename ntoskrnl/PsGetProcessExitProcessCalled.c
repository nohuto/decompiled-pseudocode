/*
 * XREFs of PsGetProcessExitProcessCalled @ 0x1402FAB80
 * Callers:
 *     VfMiscMmUnmapLockedPages_Entry @ 0x140ADD2B0 (VfMiscMmUnmapLockedPages_Entry.c)
 * Callees:
 *     <none>
 */

bool __fastcall PsGetProcessExitProcessCalled(__int64 a1)
{
  return (*(_DWORD *)(a1 + 1124) & 4) != 0;
}
