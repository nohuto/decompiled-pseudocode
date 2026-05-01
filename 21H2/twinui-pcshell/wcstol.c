/*
 * XREFs of wcstol @ 0x180090954
 * Callers:
 *     ?LoadFont@MultitaskingViewUtils@@YA_NAEAUtagLOGFONTW@@IIII@Z @ 0x1804059B8 (-LoadFont@MultitaskingViewUtils@@YA_NAEAUtagLOGFONTW@@IIII@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
int __cdecl wcstol(const wchar_t *String, wchar_t **EndPtr, int Radix)
{
  return __imp_wcstol(String, EndPtr, Radix);
}
