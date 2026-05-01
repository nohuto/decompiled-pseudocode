/*
 * XREFs of ?IsWebSearchProviderInstalledLatest@@YA_NXZ @ 0x1800A7EA8
 * Callers:
 *     ?ShouldInstallDefaultWebSearchProvider@SearchAppExperienceManager@@AEAA_NXZ @ 0x1800A9BB8 (-ShouldInstallDefaultWebSearchProvider@SearchAppExperienceManager@@AEAA_NXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 *     ?ComparePackageVersion@Update@Shell@Internal@Windows@@YAHAEBUPackageVersion@ApplicationModel@4winrt@@0@Z @ 0x1800A283C (-ComparePackageVersion@Update@Shell@Internal@Windows@@YAHAEBUPackageVersion@ApplicationModel@4wi.c)
 *     ?ParsePackageVersion@Update@Shell@Internal@Windows@@YA_NPEBGGPEAUPackageVersion@ApplicationModel@4winrt@@@Z @ 0x1800A8184 (-ParsePackageVersion@Update@Shell@Internal@Windows@@YA_NPEBGGPEAUPackageVersion@ApplicationModel.c)
 */

bool IsWebSearchProviderInstalledLatest(void)
{
  LSTATUS ValueW; // eax
  const unsigned __int16 *v1; // rdx
  struct winrt::Windows::ApplicationModel::PackageVersion *v2; // r9
  bool v3; // sf
  LSTATUS v4; // eax
  const unsigned __int16 *v5; // rdx
  struct winrt::Windows::ApplicationModel::PackageVersion *v6; // r9
  bool v7; // sf
  const struct winrt::Windows::ApplicationModel::PackageVersion *v8; // r8
  DWORD pcbData; // [rsp+40h] [rbp-29h] BYREF
  unsigned __int16 v11[4]; // [rsp+48h] [rbp-21h] BYREF
  unsigned __int16 v12[4]; // [rsp+50h] [rbp-19h] BYREF
  _OWORD pvData[3]; // [rsp+58h] [rbp-11h] BYREF
  _OWORD v14[3]; // [rsp+88h] [rbp+1Fh] BYREF

  pcbData = 48;
  *(_QWORD *)v12 = 0LL;
  memset(pvData, 0, sizeof(pvData));
  ValueW = RegGetValueW(
             HKEY_LOCAL_MACHINE,
             L"Software\\Microsoft\\Windows\\CurrentVersion\\Explorer\\Advanced",
             L"WebSearchProviderPackageVersion",
             2u,
             0LL,
             pvData,
             &pcbData);
  v3 = ValueW < 0;
  if ( ValueW )
  {
    LOWORD(pvData[0]) = 0;
    if ( ValueW > 0 )
      v3 = 1;
  }
  if ( v3
    || !Windows::Internal::Shell::Update::ParsePackageVersion(
          (Windows::Internal::Shell::Update *)pvData,
          v1,
          (unsigned __int16)v12,
          v2) )
  {
    return 1;
  }
  *(_QWORD *)v11 = 0LL;
  pcbData = 48;
  memset(v14, 0, sizeof(v14));
  v4 = RegGetValueW(
         HKEY_CURRENT_USER,
         L"Software\\Microsoft\\Windows\\CurrentVersion\\SearchSettings",
         L"WebSearchInstalledVersion",
         2u,
         0LL,
         v14,
         &pcbData);
  v7 = v4 < 0;
  if ( v4 )
  {
    LOWORD(v14[0]) = 0;
    if ( v4 > 0 )
      v7 = 1;
  }
  return !v7
      && Windows::Internal::Shell::Update::ParsePackageVersion(
           (Windows::Internal::Shell::Update *)v14,
           v5,
           (unsigned __int16)v11,
           v6)
      && (int)Windows::Internal::Shell::Update::ComparePackageVersion(
                (Windows::Internal::Shell::Update *)v12,
                (const struct winrt::Windows::ApplicationModel::PackageVersion *)v11,
                v8) <= 0;
}
