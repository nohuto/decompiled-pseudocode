/*
 * XREFs of ??$swprintf_s@$0CI@@@YAHAEAY0CI@_WPEB_WZZ @ 0x1C00C7768
 * Callers:
 *     ?netsetupBuildBindingRegistryPath@@YAXW4NetSetupStoreType@@W4NetSetupSubkeyType@@AEBU_GUID@@PEBU3@33PEA_W@Z @ 0x1C012A87C (-netsetupBuildBindingRegistryPath@@YAXW4NetSetupStoreType@@W4NetSetupSubkeyType@@AEBU_GUID@@PEBU.c)
 * Callees:
 *     <none>
 */

int swprintf_s<40>(wchar_t *a1, const wchar_t *a2, ...)
{
  va_list va; // [rsp+50h] [rbp+18h] BYREF

  va_start(va, a2);
  return vswprintf_s(a1, 0x28uLL, a2, va);
}
