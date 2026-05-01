/*
 * XREFs of WINRT_GetLastError @ 0x180090C96
 * Callers:
 *     ?throw_last_error@winrt@@YAXXZ @ 0x180264468 (-throw_last_error@winrt@@YAXXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
DWORD __stdcall WINRT_GetLastError()
{
  return GetLastError();
}
