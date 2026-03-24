/*
 * XREFs of NtIsOneCoreTransformMode @ 0x1C00965D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall NtIsOneCoreTransformMode(__int64 a1)
{
  return (*(_DWORD *)(PsGetCurrentProcessWin32Process(a1) + 820) >> 23) & 1;
}
