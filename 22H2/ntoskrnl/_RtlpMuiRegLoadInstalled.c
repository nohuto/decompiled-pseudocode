/*
 * XREFs of _RtlpMuiRegLoadInstalled @ 0x14078FBC4
 * Callers:
 *     RtlpMuiRegLoadRegistryInfo @ 0x140790108 (RtlpMuiRegLoadRegistryInfo.c)
 * Callees:
 *     _IsMachineLanguageListInMutableLocation @ 0x1403A7D00 (_IsMachineLanguageListInMutableLocation.c)
 *     _RtlpMuiRegLoadInstalledFromKey @ 0x1403A7D60 (_RtlpMuiRegLoadInstalledFromKey.c)
 *     ZwQueryInstallUILanguage @ 0x1403FC440 (ZwQueryInstallUILanguage.c)
 *     _RtlpMuiRegValidateInstalled @ 0x14078F330 (_RtlpMuiRegValidateInstalled.c)
 *     RtlpMuiRegCreateLanguages @ 0x14078FE00 (RtlpMuiRegCreateLanguages.c)
 *     RtlpMuiRegCreateStringPool @ 0x14078FEC8 (RtlpMuiRegCreateStringPool.c)
 *     RtlpMuiRegFreeRegistryInfo @ 0x14078FF70 (RtlpMuiRegFreeRegistryInfo.c)
 *     RtlpLoadInstallLanguageFallback @ 0x140790254 (RtlpLoadInstallLanguageFallback.c)
 */

NTSTATUS __fastcall RtlpMuiRegLoadInstalled(__int64 a1)
{
  int InstallUILanguage; // edi
  __int64 Languages; // rax
  __int64 StringPool; // rax
  char v5; // al
  const WCHAR *v6; // rdx
  NTSTATUS result; // eax

  InstallUILanguage = 0;
  if ( !a1 )
    return -1073741811;
  if ( PsUILanguageComitted )
  {
    InstallUILanguage = ZwQueryInstallUILanguage((LANGID *)(a1 + 4));
    if ( InstallUILanguage < 0 || ((*(_WORD *)(a1 + 4) - 4096) & 0xFBFF) == 0 )
      goto LABEL_12;
    RtlpLoadInstallLanguageFallback(a1, a1 + 6, a1 + 8);
  }
  RtlpMuiRegFreeRegistryInfo(a1, 1023LL);
  Languages = RtlpMuiRegCreateLanguages();
  *(_QWORD *)(a1 + 24) = Languages;
  if ( !Languages )
  {
    InstallUILanguage = -1073741801;
LABEL_12:
    RtlpMuiRegFreeRegistryInfo(a1, 1023LL);
    return InstallUILanguage;
  }
  *(_DWORD *)a1 |= 1u;
  StringPool = RtlpMuiRegCreateStringPool(0xFFFFFFFFLL, 0xFFFFFFFFLL);
  *(_QWORD *)(a1 + 32) = StringPool;
  if ( !StringPool )
    goto LABEL_12;
  *(_DWORD *)a1 |= 2u;
  v5 = IsMachineLanguageListInMutableLocation();
  v6 = L"\\Registry\\Machine\\OSDATA\\System\\CurrentControlSet\\Control\\MUI\\UILanguages";
  if ( !v5 )
    v6 = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\MUI\\UILanguages";
  InstallUILanguage = RtlpMuiRegLoadInstalledFromKey(a1, v6);
  if ( InstallUILanguage < 0 )
    goto LABEL_12;
  result = RtlpMuiRegValidateInstalled(a1);
  InstallUILanguage = result;
  if ( result < 0 )
    goto LABEL_12;
  return result;
}
