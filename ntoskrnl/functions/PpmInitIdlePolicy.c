__int64 PpmInitIdlePolicy()
{
  ULONGLONG v0; // rax
  __int64 *v1; // r11
  __int64 v2; // rbx
  __int64 v3; // rcx
  __int64 v4; // rax
  __int64 *v5; // r11
  __int64 v6; // rbx
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 result; // rax
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-10h] BYREF
  int v11; // [rsp+60h] [rbp+20h] BYREF
  int v12; // [rsp+68h] [rbp+28h] BYREF
  int v13; // [rsp+70h] [rbp+30h] BYREF

  dword_140C39160 = 50000;
  dword_140C39318 = 50000;
  v0 = 2 * PopQpcFrequency;
  v13 = 0;
  PopIdleTransitionTimeout = 2 * PopQpcFrequency;
  v11 = 0;
  v12 = 0;
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
  v1 = (__int64 *)&PpmIdleIntervalLimits;
  v2 = 26LL;
  do
  {
    v3 = v1[1];
    if ( v3 != -1 )
    {
      v4 = PpmConvertTime(v3, 10000000LL, PopQpcFrequency);
      *v1 = v4;
    }
    v1 += 3;
    --v2;
  }
  while ( v2 );
  v5 = (__int64 *)&PpmPackageIdleIntervalLimits;
  v6 = 37LL;
  do
  {
    v7 = v5[1];
    if ( v7 != -1 )
    {
      v8 = PpmConvertTime(v7, 10000000LL, PopQpcFrequency);
      *v5 = v8;
    }
    v5 += 3;
    --v6;
  }
  while ( v6 );
  RtlInitUnicodeString(&DestinationString, L"Power-IdleStatesMax-Enabled");
  result = ZwQueryLicenseValue(&DestinationString, &v12, &v13, 4LL, &v11);
  if ( (int)result >= 0 && v11 == 4 && v12 == 4 )
    PpmIdleRespectIdleStateMax = v13 != 0;
  if ( PpmIdleDisableStatesAtBoot == -1 )
    PpmIdleDisableStatesAtBoot = 0;
  return result;
}
