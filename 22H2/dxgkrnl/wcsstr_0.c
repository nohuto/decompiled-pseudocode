/*
 * XREFs of wcsstr_0 @ 0x1C0023EC3
 * Callers:
 *     DpiGetDriverStorePath @ 0x1C039913C (DpiGetDriverStorePath.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
wchar_t *__cdecl wcsstr_0(const wchar_t *Str, const wchar_t *SubStr)
{
  return wcsstr(Str, SubStr);
}
