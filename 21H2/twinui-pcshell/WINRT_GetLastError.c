/*
 * XREFs of WINRT_GetLastError @ 0x180090CB6
 * Callers:
 *     ?throw_last_error@winrt@@YAXXZ @ 0x180264618 (-throw_last_error@winrt@@YAXXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
DWORD __stdcall WINRT_GetLastError()
{
  return GetLastError();
}
