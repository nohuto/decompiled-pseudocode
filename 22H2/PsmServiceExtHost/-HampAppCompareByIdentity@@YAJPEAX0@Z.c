/*
 * XREFs of ?HampAppCompareByIdentity@@YAJPEAX0@Z @ 0x180036D70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __fastcall HampAppCompareByIdentity(const wchar_t *a1, const wchar_t *a2)
{
  return _wcsicmp(a1, a2 + 48);
}
