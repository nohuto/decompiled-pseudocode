__int64 __fastcall SeQuerySecureBootPlatformManifest(const void *a1, int a2)
{
  if ( !g_SecureBootActivePlatformManifest )
    return 3236626438LL;
  if ( !a1 )
    return 3221226021LL;
  if ( a2 == 32 )
    return bsearch_s(
             a1,
             *((const void **)g_SecureBootActivePlatformManifest + 2),
             *((unsigned int *)g_SecureBootActivePlatformManifest + 1),
             0x20uLL,
             SepSecureBootManifestCompareElements,
             0LL) != 0LL
         ? 0
         : 0xC0000225;
  return 3221225485LL;
}
