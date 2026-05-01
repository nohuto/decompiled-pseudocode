/*
 * XREFs of ??$swprintf_s@$0CI@@@YAHAEAY0CI@GPEBGZZ @ 0x1800A0690
 * Callers:
 *     ?to_hstring@winrt@@YA?AUhstring@1@AEBUguid@1@@Z @ 0x1800AEFD8 (-to_hstring@winrt@@YA-AUhstring@1@AEBUguid@1@@Z.c)
 * Callees:
 *     vswprintf_s @ 0x1800909D4 (vswprintf_s.c)
 */

int swprintf_s<40>(wchar_t *a1, const wchar_t *a2, ...)
{
  va_list va; // [rsp+40h] [rbp+18h] BYREF

  va_start(va, a2);
  return vswprintf_s(a1, 0x28uLL, a2, va);
}
