/*
 * XREFs of wcsstr_0 @ 0x1C00243B3
 * Callers:
 *     DpiGetDriverStorePath @ 0x1C039485C (DpiGetDriverStorePath.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
wchar_t *__cdecl wcsstr_0(const wchar_t *Str, const wchar_t *SubStr)
{
  return wcsstr(Str, SubStr);
}
