/*
 * XREFs of ?reset@?$unique_storage@U?$resource_policy@PEAXP6APEAXPEAX@Z$1?LocalFree@@YAPEAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x180267990
 * Callers:
 *     ?AddAceToKeyRecursively@SearchSettingsHelper@SearchSettings@@CAJPEBGPEAU_EXPLICIT_ACCESS_W@@@Z @ 0x1800A1FA0 (-AddAceToKeyRecursively@SearchSettingsHelper@SearchSettings@@CAJPEBGPEAU_EXPLICIT_ACCESS_W@@@Z.c)
 *     ?CreateKeyAndSetSecurityDescriptor@SearchSettingsHelper@SearchSettings@@SAJPEBG@Z @ 0x1800A2A24 (-CreateKeyAndSetSecurityDescriptor@SearchSettingsHelper@SearchSettings@@SAJPEBG@Z.c)
 *     ?EnsureAppContainerAccesses@ShellFeedsEncryptionHelper@1@AEAAJXZ @ 0x1800B27E4 (-EnsureAppContainerAccesses@ShellFeedsEncryptionHelper@1@AEAAJXZ.c)
 *     ?PrecreateStartMenuConfigRegKey@StartRegHelpers@StartUI@@YAXXZ @ 0x1800CC0D8 (-PrecreateStartMenuConfigRegKey@StartRegHelpers@StartUI@@YAXXZ.c)
 *     ?CreateEventWithSDDL@@YAJPEBG0HPEAPEAX@Z @ 0x18033A414 (-CreateEventWithSDDL@@YAJPEBG0HPEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall wil::details::unique_storage<wil::details::resource_policy<void *,void * (*)(void *),&void * LocalFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::reset(
        void **a1,
        void *a2)
{
  void *v2; // rsi
  DWORD LastError; // ebx

  v2 = *a1;
  if ( *a1 )
  {
    LastError = GetLastError();
    LocalFree(v2);
    SetLastError(LastError);
  }
  *a1 = a2;
}
