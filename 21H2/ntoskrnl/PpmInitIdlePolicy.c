/*
 * XREFs of PpmInitIdlePolicy @ 0x140A6C6A4
 * Callers:
 *     PoInitSystem @ 0x140A3F948 (PoInitSystem.c)
 * Callees:
 *     PpmConvertTime @ 0x14027C22C (PpmConvertTime.c)
 *     RtlInitUnicodeString @ 0x14027C520 (RtlInitUnicodeString.c)
 *     ZwQueryLicenseValue @ 0x1403FCE20 (ZwQueryLicenseValue.c)
 */

__int64 PpmInitIdlePolicy()
{
  ULONGLONG v0; // rax
  ULONGLONG *v1; // rbx
  __int64 v2; // rdi
  ULONGLONG v3; // rcx
  __int64 result; // rax
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-10h] BYREF
  int v6; // [rsp+68h] [rbp+28h] BYREF
  int v7; // [rsp+70h] [rbp+30h]

  dword_140C1EF40 = 50000;
  dword_140C1F9F0 = 50000;
  v0 = 2 * PopQpcFrequency;
  v7 = 0;
  PopIdleTransitionTimeout = 2 * PopQpcFrequency;
  v6 = 0;
  DestinationString = 0LL;
  word_140C1EF3C = 0;
  word_140C1F9EC = 0;
  word_140C1EF45 = 60;
  word_140C1F9F5 = 60;
  byte_140C1EF44 = 40;
  byte_140C1F9F4 = 40;
  if ( !KdPitchDebugger )
    v0 = 90 * PopQpcFrequency;
  PopCoordinatedIdleExitTimeout = v0;
  v1 = (ULONGLONG *)&PpmIdleIntervalLimits;
  v2 = 26LL;
  do
  {
    v3 = v1[1];
    if ( v3 != -1LL )
      *v1 = PpmConvertTime(v3, 10000000LL, PopQpcFrequency);
    v1 += 3;
    --v2;
  }
  while ( v2 );
  RtlInitUnicodeString(&DestinationString, L"Power-IdleStatesMax-Enabled");
  result = ZwQueryLicenseValue((__int64)&DestinationString, (__int64)&v6);
  if ( PpmIdleDisableStatesAtBoot == -1 )
    PpmIdleDisableStatesAtBoot = 0;
  return result;
}
