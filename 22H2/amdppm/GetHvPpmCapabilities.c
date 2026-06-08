/*
 * XREFs of GetHvPpmCapabilities @ 0x1C00224E8
 * Callers:
 *     RegisterHvPepIdleStatesV2 @ 0x1C002368C (RegisterHvPepIdleStatesV2.c)
 *     InitDriver @ 0x1C003703C (InitDriver.c)
 *     ProcLibGlobalInit @ 0x1C003778C (ProcLibGlobalInit.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0001E90 (__security_check_cookie.c)
 *     GetRegistryDwordValueNoDefault @ 0x1C001FFE4 (GetRegistryDwordValueNoDefault.c)
 */

int __fastcall GetHvPpmCapabilities(bool *a1, char *a2, char *a3)
{
  bool v6; // bl
  char v7; // r12
  char v8; // bp
  int result; // eax
  int v10; // edi
  int v11; // [rsp+20h] [rbp-58h] BYREF
  __int128 SystemInformation; // [rsp+28h] [rbp-50h] BYREF

  v11 = 0;
  v6 = 0;
  v7 = 0;
  v8 = 0;
  SystemInformation = 0LL;
  result = ZwQuerySystemInformation(SystemHypervisorInformation, &SystemInformation, 0x10u, 0LL);
  if ( result >= 0 )
  {
    v10 = DWORD2(SystemInformation);
    v6 = (BYTE8(SystemInformation) & 8) != 0;
    if ( (WORD4(SystemInformation) & 0x400) != 0 )
    {
      result = GetRegistryDwordValueNoDefault(
                 (__int64)L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Processor",
                 (__int64)L"LegacyHvAlgorithm",
                 (__int64)&v11);
      if ( result < 0 || !v11 )
        v7 = 1;
    }
    if ( (*(_QWORD *)&v10 & 0x20000LL) != 0 )
      v8 = 1;
  }
  if ( a1 )
    *a1 = v6;
  if ( a2 )
    *a2 = v7;
  if ( a3 )
    *a3 = v8;
  return result;
}
