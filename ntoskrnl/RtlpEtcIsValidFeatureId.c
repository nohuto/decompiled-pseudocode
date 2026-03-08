/*
 * XREFs of RtlpEtcIsValidFeatureId @ 0x14040BEC0
 * Callers:
 *     RtlpIsEnterpriseTemporaryControl @ 0x14040C090 (RtlpIsEnterpriseTemporaryControl.c)
 * Callees:
 *     RtlStringCchPrintfW @ 0x140208BFC (RtlStringCchPrintfW.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     RtlpEtcGetDwordFromRegistry @ 0x14040BE44 (RtlpEtcGetDwordFromRegistry.c)
 *     memset @ 0x14042CFC0 (memset.c)
 */

bool __fastcall RtlpEtcIsValidFeatureId(unsigned int a1, int a2)
{
  char v4; // di
  int v6; // [rsp+20h] [rbp-1A8h]
  _DWORD v7[4]; // [rsp+30h] [rbp-198h] BYREF
  wchar_t v8[32]; // [rsp+40h] [rbp-188h] BYREF
  wchar_t pszDest[152]; // [rsp+80h] [rbp-148h] BYREF

  v4 = 0;
  v7[0] = 0;
  memset(pszDest, 0, 0x12CuLL);
  memset(v8, 0, sizeof(v8));
  v6 = a2;
  if ( RtlStringCchPrintfW(
         pszDest,
         0x96uLL,
         L"%s\\%d",
         L"\\Registry\\Machine\\SYSTEM\\CurrentControlSet\\Control\\FeatureManagement\\EnterpriseTempControls",
         v6) >= 0
    && RtlStringCchPrintfW(v8, 0x20uLL, L"%lu", a1) >= 0
    && (int)RtlpEtcGetDwordFromRegistry((__int64)pszDest, (__int64)v8, (__int64)v7) >= 0 )
  {
    return v7[0] != 0;
  }
  return v4;
}
