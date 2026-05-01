/*
 * XREFs of ?IsWindowsLite@ToastSettingsHelper@@CA_NXZ @ 0x18009B028
 * Callers:
 *     ?IsPlatformDesktop@ToastSettingsHelper@@SA_NXZ @ 0x18009AE6C (-IsPlatformDesktop@ToastSettingsHelper@@SA_NXZ.c)
 * Callees:
 *     <none>
 */

bool ToastSettingsHelper::IsWindowsLite(void)
{
  int v1; // [rsp+50h] [rbp+8h] BYREF
  DWORD v2; // [rsp+58h] [rbp+10h] BYREF

  v1 = 0;
  v2 = 4;
  return !RegGetValueW(
            HKEY_LOCAL_MACHINE,
            L"SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Control Center",
            L"UseLiteLayout",
            0x10u,
            0LL,
            &v1,
            &v2)
      && v1 != 0;
}
