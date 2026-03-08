/*
 * XREFs of PpmInitIdlePolicy @ 0x140B64730
 * Callers:
 *     PoInitSystem @ 0x140B45CAC (PoInitSystem.c)
 * Callees:
 *     PpmConvertTime @ 0x140235D70 (PpmConvertTime.c)
 *     RtlInitUnicodeString @ 0x14030EBB0 (RtlInitUnicodeString.c)
 *     ZwQueryLicenseValue @ 0x140414ED0 (ZwQueryLicenseValue.c)
 */

__int64 PpmInitIdlePolicy()
{
  ULONGLONG v0; // rax
  unsigned __int64 *v1; // r11
  __int64 v2; // rbx
  unsigned __int64 v3; // rcx
  unsigned __int64 v4; // rax
  unsigned __int64 *v5; // r11
  __int64 v6; // rbx
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // rax
  __int64 result; // rax
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-10h] BYREF
  int v11; // [rsp+68h] [rbp+28h] BYREF
  int v12; // [rsp+70h] [rbp+30h]

  dword_140C39160 = 50000;
  dword_140C39318 = 50000;
  v0 = 2 * PopQpcFrequency;
  v12 = 0;
  PopIdleTransitionTimeout = 2 * PopQpcFrequency;
  v11 = 0;
  DestinationString = 0LL;
  word_140C3915C = 0;
  word_140C39314 = 0;
  word_140C39165 = 60;
  word_140C3931D = 60;
  byte_140C39164 = 40;
  byte_140C3931C = 40;
  if ( !KdPitchDebugger )
    v0 = 90 * PopQpcFrequency;
  PopCoordinatedIdleExitTimeout = v0;
  v1 = (unsigned __int64 *)&PpmIdleIntervalLimits;
  v2 = 26LL;
  do
  {
    v3 = v1[1];
    if ( v3 != -1LL )
    {
      v4 = PpmConvertTime(v3, 0x989680uLL, PopQpcFrequency);
      *v1 = v4;
    }
    v1 += 3;
    --v2;
  }
  while ( v2 );
  v5 = (unsigned __int64 *)&PpmPackageIdleIntervalLimits;
  v6 = 37LL;
  do
  {
    v7 = v5[1];
    if ( v7 != -1LL )
    {
      v8 = PpmConvertTime(v7, 0x989680uLL, PopQpcFrequency);
      *v5 = v8;
    }
    v5 += 3;
    --v6;
  }
  while ( v6 );
  RtlInitUnicodeString(&DestinationString, L"Power-IdleStatesMax-Enabled");
  result = ZwQueryLicenseValue((__int64)&DestinationString, (__int64)&v11);
  if ( PpmIdleDisableStatesAtBoot == -1 )
    PpmIdleDisableStatesAtBoot = 0;
  return result;
}
