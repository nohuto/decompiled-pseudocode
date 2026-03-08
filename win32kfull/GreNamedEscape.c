/*
 * XREFs of GreNamedEscape @ 0x1C02B5C58
 * Callers:
 *     NtGdiExtEscape @ 0x1C00BB120 (NtGdiExtEscape.c)
 * Callees:
 *     AtmDrvFontManagementRedirector @ 0x1C02A9F64 (AtmDrvFontManagementRedirector.c)
 */

__int64 __fastcall GreNamedEscape(const wchar_t *a1, int a2, int a3, int *a4, int a5, __int64 a6)
{
  __int64 v9; // rdx
  __int64 v10; // rcx

  if ( _wcsicmp(a1, L"atmfd.dll") )
    return 0LL;
  else
    return AtmDrvFontManagementRedirector(v10, v9, a2, a3, a4, a5, a6);
}
