/*
 * XREFs of EditionShowSystemCursor @ 0x1C007A400
 * Callers:
 *     NtUserShowSystemCursor @ 0x1C01FFAD0 (NtUserShowSystemCursor.c)
 * Callees:
 *     ?HidePointer@CursorApiRouter@@QEAA_N_N@Z @ 0x1C007A358 (-HidePointer@CursorApiRouter@@QEAA_N_N@Z.c)
 */

__int64 __fastcall EditionShowSystemCursor(CursorApiRouter *a1)
{
  return (unsigned __int8)CursorApiRouter::HidePointer(a1, (_DWORD)a1 == 0);
}
