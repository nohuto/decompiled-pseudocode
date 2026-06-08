/*
 * XREFs of PopulateEnergyEstimationModel @ 0x1C003C728
 * Callers:
 *     ProcLibGlobalInit @ 0x1C003C8F0 (ProcLibGlobalInit.c)
 * Callees:
 *     RtlStringCchPrintfW @ 0x1C0001F6C (RtlStringCchPrintfW.c)
 *     __security_check_cookie @ 0x1C00044F0 (__security_check_cookie.c)
 *     memset @ 0x1C0004AC0 (memset.c)
 *     GetRegistryDwordValueNoDefault @ 0x1C0021C74 (GetRegistryDwordValueNoDefault.c)
 *     ReadEnergyEquation @ 0x1C003C818 (ReadEnergyEquation.c)
 *     ReadPowerCurve @ 0x1C003D5B4 (ReadPowerCurve.c)
 *     IsValidPowerCurve @ 0x1C003D764 (IsValidPowerCurve.c)
 *     ProcLibTraceInvalidPowerCurve @ 0x1C003DB84 (ProcLibTraceInvalidPowerCurve.c)
 */

int __fastcall PopulateEnergyEstimationModel(unsigned __int8 a1, int *a2)
{
  int v3; // edi
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // rcx
  int v9; // r9d
  int result; // eax
  int v11; // ecx
  int v12; // [rsp+20h] [rbp-1B8h]
  int v13[4]; // [rsp+30h] [rbp-1A8h] BYREF
  wchar_t pszDest[192]; // [rsp+40h] [rbp-198h] BYREF

  v13[0] = 0;
  v3 = a1;
  memset(a2, 0, 0x100uLL);
  LOBYTE(v4) = v3;
  ReadEnergyEquation(v4, a2);
  LOBYTE(v5) = v3;
  if ( (int)ReadPowerCurve(v5, a2) >= 0 )
  {
    if ( (unsigned __int8)IsValidPowerCurve(a2, v6, v7, (unsigned int)a2[1]) )
    {
      a2[1] = v9 | 1;
    }
    else
    {
      LOBYTE(v8) = v3;
      ProcLibTraceInvalidPowerCurve(v8, (unsigned __int8)v9 >> 1, a2 + 2);
    }
  }
  v12 = v3;
  result = RtlStringCchPrintfW(
             pszDest,
             0xC0uLL,
             L"%s\\EfficiencyClass\\%d",
             L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Power\\EnergyEstimation\\CPU",
             v12);
  if ( result < 0
    || (result = GetRegistryDwordValueNoDefault((__int64)pszDest, (__int64)L"PowerEnvelope", (__int64)v13), result < 0)
    || (v11 = v13[0], result = v13[0] - 1, (unsigned int)(v13[0] - 1) > 0x3E7F) )
  {
    v11 = 750;
  }
  *a2 = v11;
  return result;
}
