/*
 * XREFs of EditionShowSystemCursor @ 0x1C00E11B0
 * Callers:
 *     NtUserShowSystemCursor @ 0x1C01DED10 (NtUserShowSystemCursor.c)
 * Callees:
 *     ?HidePointer@CursorApiRouter@@QEAA_N_N@Z @ 0x1C00E11D0 (-HidePointer@CursorApiRouter@@QEAA_N_N@Z.c)
 */

_BOOL8 __fastcall EditionShowSystemCursor(CursorApiRouter *a1)
{
  return CursorApiRouter::HidePointer(a1, (_DWORD)a1 == 0);
}
