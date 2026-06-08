/*
 * XREFs of ReadPowerCurve @ 0x1C0038750
 * Callers:
 *     PopulateEnergyEstimationModel @ 0x1C00383DC (PopulateEnergyEstimationModel.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0001E90 (__security_check_cookie.c)
 *     RtlStringCchPrintfW @ 0x1C000D25C (RtlStringCchPrintfW.c)
 *     RtlStringCopyWorkerW @ 0x1C000D2E0 (RtlStringCopyWorkerW.c)
 *     GetRegistryDwordValueNoDefault @ 0x1C001FFE4 (GetRegistryDwordValueNoDefault.c)
 */

__int64 __fastcall ReadPowerCurve(unsigned __int8 a1, __int64 a2)
{
  int RegistryDwordValueNoDefault; // edx
  size_t *v4; // r8
  unsigned int v6; // esi
  _BYTE *v7; // rdi
  size_t cchToCopy; // [rsp+20h] [rbp-E0h]
  size_t cchToCopya; // [rsp+20h] [rbp-E0h]
  unsigned int v10; // [rsp+30h] [rbp-D0h] BYREF
  int v11; // [rsp+34h] [rbp-CCh] BYREF
  int v12; // [rsp+38h] [rbp-C8h] BYREF
  wchar_t pszDest[192]; // [rsp+40h] [rbp-C0h] BYREF
  wchar_t v14[192]; // [rsp+1C0h] [rbp+C0h] BYREF

  v11 = 0;
  v10 = 0;
  v12 = 0;
  LODWORD(cchToCopy) = a1;
  RegistryDwordValueNoDefault = RtlStringCchPrintfW(
                                  pszDest,
                                  0xC0uLL,
                                  L"%s\\EfficiencyClass\\%d\\PowerCurve",
                                  L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Power\\EnergyEstimation\\CPU");
  if ( RegistryDwordValueNoDefault < 0 )
    goto LABEL_5;
  RegistryDwordValueNoDefault = GetRegistryDwordValueNoDefault((__int64)pszDest, (__int64)L"PointCount", (__int64)&v10);
  if ( RegistryDwordValueNoDefault < 0 )
    goto LABEL_5;
  if ( !v10 )
  {
    RegistryDwordValueNoDefault = -1073741807;
LABEL_5:
    *(_DWORD *)(a2 + 4) &= 0xFFFFFF01;
    *(_OWORD *)(a2 + 8) = 0LL;
    *(_OWORD *)(a2 + 24) = 0LL;
    return (unsigned int)RegistryDwordValueNoDefault;
  }
  if ( v10 > 8 )
    RegistryDwordValueNoDefault = -2147483643;
  if ( RegistryDwordValueNoDefault < 0 )
    goto LABEL_5;
  RegistryDwordValueNoDefault = RtlStringCopyWorkerW(v14, 0xC0uLL, v4, pszDest, cchToCopy);
  if ( RegistryDwordValueNoDefault < 0 )
    goto LABEL_5;
  v6 = 0;
  v7 = (_BYTE *)(a2 + 8);
  while ( v6 < v10 )
  {
    LODWORD(cchToCopya) = v6;
    RegistryDwordValueNoDefault = RtlStringCchPrintfW(pszDest, 0xC0uLL, L"%s\\%d", v14, cchToCopya);
    if ( RegistryDwordValueNoDefault < 0 )
      goto LABEL_5;
    RegistryDwordValueNoDefault = GetRegistryDwordValueNoDefault(
                                    (__int64)pszDest,
                                    (__int64)L"FrequencyPercent",
                                    (__int64)&v11);
    if ( RegistryDwordValueNoDefault < 0 )
      goto LABEL_5;
    *v7 = v11;
    RegistryDwordValueNoDefault = GetRegistryDwordValueNoDefault(
                                    (__int64)pszDest,
                                    (__int64)L"PowerEnvelope",
                                    (__int64)&v12);
    if ( RegistryDwordValueNoDefault < 0 )
      goto LABEL_5;
    ++v6;
    *(_DWORD *)v7 = (v12 << 8) | (unsigned __int8)*(_DWORD *)v7;
    v7 += 4;
  }
  *(_DWORD *)(a2 + 4) ^= (*(_DWORD *)(a2 + 4) ^ (2 * v10)) & 0xFE;
  return (unsigned int)RegistryDwordValueNoDefault;
}
