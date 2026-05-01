/*
 * XREFs of ?GetInstalledBrowserChannelInfo@@YA_NW4ChannelId@BrowserChannels@@W4InstallationLevel@2@PEAUInfo@2@@Z @ 0x180107D38
 * Callers:
 *     ?IsBrowserReplacementFeaturePresent@@YA_NXZ @ 0x180107EF8 (-IsBrowserReplacementFeaturePresent@@YA_NXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x18008FA50 (__security_check_cookie.c)
 *     ?ReadExePath@Private@BrowserChannels@@YA_NPEAUHKEY__@@PEAGK@Z @ 0x180107F24 (-ReadExePath@Private@BrowserChannels@@YA_NPEAUHKEY__@@PEAGK@Z.c)
 */

bool GetInstalledBrowserChannelInfo()
{
  bool v0; // bl
  unsigned __int16 *v1; // r8
  unsigned int v2; // r9d
  HKEY hKey; // [rsp+30h] [rbp-448h] BYREF
  WCHAR SubKey[264]; // [rsp+40h] [rbp-438h] BYREF
  struct HKEY__ v6; // [rsp+250h] [rbp-228h] BYREF

  _o_wcscpy_s(SubKey, 260LL, L"Software\\Microsoft\\EdgeUpdate\\Clients\\");
  _o_wcscat_s(SubKey, 260LL, L"{56EB18F8-B008-4CBD-B6D2-8C97FE7E9062}");
  v0 = 0;
  if ( !RegOpenKeyExW(HKEY_LOCAL_MACHINE, SubKey, 0, 0x20219u, &hKey) )
  {
    v0 = BrowserChannels::Private::ReadExePath((BrowserChannels::Private *)hKey, &v6, v1, v2);
    RegCloseKey(hKey);
  }
  return v0;
}
