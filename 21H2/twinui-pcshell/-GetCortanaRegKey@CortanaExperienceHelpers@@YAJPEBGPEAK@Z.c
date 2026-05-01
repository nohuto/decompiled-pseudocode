/*
 * XREFs of ?GetCortanaRegKey@CortanaExperienceHelpers@@YAJPEBGPEAK@Z @ 0x18026233C
 * Callers:
 *     ?IsCortanaAvailable@CortanaExperienceHelpers@@YAJPEAE@Z @ 0x180263030 (-IsCortanaAvailable@CortanaExperienceHelpers@@YAJPEAE@Z.c)
 *     ?CheckCortanaAvailability@CortanaAvailability@@YAJPEAE@Z @ 0x180269F48 (-CheckCortanaAvailability@CortanaAvailability@@YAJPEAE@Z.c)
 *     ?IsDeveloperOverrideEnabled@CortanaAvailability@@YAJPEAE@Z @ 0x18027517C (-IsDeveloperOverrideEnabled@CortanaAvailability@@YAJPEAE@Z.c)
 * Callees:
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x1801B1218 (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUHKEY__@@@Z @ 0x1801B1EA4 (-reset@-$unique_storage@U-$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1-RegCloseKey@@YAJ0@ZU-$inte.c)
 */

__int64 __fastcall CortanaExperienceHelpers::GetCortanaRegKey(LPCWSTR lpValueName, BYTE *a2, unsigned int *a3)
{
  unsigned int v5; // eax
  __int64 v6; // rdx
  unsigned int v7; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  DWORD cbData; // [rsp+48h] [rbp+10h] BYREF
  HKEY hKey; // [rsp+50h] [rbp+18h] BYREF

  *(_DWORD *)a2 = 0;
  hKey = 0LL;
  wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>::reset(
    &hKey,
    0LL);
  v5 = RegOpenKeyExW(HKEY_CURRENT_USER, L"Software\\Microsoft\\Windows\\CurrentVersion\\Cortana", 0, 0x20019u, &hKey);
  if ( v5 )
  {
    v6 = 68LL;
LABEL_5:
    v7 = wil::details::in1diag3::Return_Win32(
           retaddr,
           v6,
           (__int64)"internal\\shellcommonshell\\inc\\cortana\\CortanaAvailabilityHelpers.h",
           (const char *)v5);
    goto LABEL_7;
  }
  cbData = 4;
  v5 = RegQueryValueExW(hKey, lpValueName, 0LL, 0LL, a2, &cbData);
  if ( v5 )
  {
    v6 = 78LL;
    goto LABEL_5;
  }
  v7 = 0;
LABEL_7:
  if ( hKey )
    RegCloseKey(hKey);
  return v7;
}
