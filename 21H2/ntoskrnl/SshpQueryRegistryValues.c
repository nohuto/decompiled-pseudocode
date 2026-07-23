/*
 * XREFs of SshpQueryRegistryValues @ 0x140796AF0
 * Callers:
 *     SshpWnfCallback @ 0x1408FBCB0 (SshpWnfCallback.c)
 *     SshInitialize @ 0x140A41584 (SshInitialize.c)
 * Callees:
 *     RtlStringCchCatW @ 0x1403714B0 (RtlStringCchCatW.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     memset @ 0x140414300 (memset.c)
 *     RtlGetPersistedStateLocation @ 0x1406347D0 (RtlGetPersistedStateLocation.c)
 *     RtlpQueryRegistryValues @ 0x140635878 (RtlpQueryRegistryValues.c)
 */

__int64 SshpQueryRegistryValues()
{
  wchar_t *v0; // rcx
  __int64 v1; // rdx
  wchar_t v2; // ax
  wchar_t *v3; // rax
  bool v4; // sf
  int v5; // eax
  __int64 v6; // r9
  wchar_t *v7; // rcx
  wchar_t v8; // ax
  wchar_t *v9; // rax
  __int64 result; // rax
  unsigned int v11; // [rsp+48h] [rbp-C0h] BYREF
  ULONG BufferLengthOut[3]; // [rsp+4Ch] [rbp-BCh] BYREF
  _QWORD v13[14]; // [rsp+58h] [rbp-B0h] BYREF
  wchar_t pszDest[264]; // [rsp+C8h] [rbp-40h] BYREF
  WCHAR pszSrc[264]; // [rsp+2D8h] [rbp+1D0h] BYREF

  v11 = 0;
  if ( RtlGetPersistedStateLocation(
         L"SleepStudySettings",
         0LL,
         L"SYSTEM\\CurrentControlSet\\Control\\Session Manager\\Power",
         LocationTypeRegistry,
         pszSrc,
         0x208u,
         BufferLengthOut) < 0 )
    goto LABEL_11;
  v0 = pszDest;
  v1 = 260LL;
  do
  {
    if ( v1 == -2147483386 )
      break;
    v2 = *(wchar_t *)((char *)v0 + (char *)L"\\Registry\\Machine\\" - (char *)pszDest);
    if ( !v2 )
      break;
    *v0++ = v2;
    --v1;
  }
  while ( v1 );
  v3 = v0 - 1;
  if ( v1 )
    v3 = v0;
  *v3 = 0;
  if ( !v1
    || RtlStringCchCatW(pszDest, 0x104uLL, pszSrc) < 0
    || (memset(v13, 0, sizeof(v13)),
        LODWORD(v13[1]) = 292,
        v13[2] = L"SleepstudyActiveThresholdPercent",
        LODWORD(v13[4]) = 0x4000000,
        v13[3] = &v11,
        v4 = (int)RtlpQueryRegistryValues(0LL, pszDest, (__int64)v13, 0LL) < 0,
        v5 = v11,
        v4) )
  {
LABEL_11:
    v5 = 1;
  }
  SshpActiveThresholdPercent = v5;
  v11 = 0;
  if ( RtlGetPersistedStateLocation(
         L"SleepStudySettings",
         0LL,
         L"SYSTEM\\CurrentControlSet\\Control\\Session Manager\\Power",
         LocationTypeRegistry,
         pszSrc,
         0x208u,
         BufferLengthOut) < 0 )
    goto LABEL_22;
  v6 = 260LL;
  v7 = pszDest;
  do
  {
    if ( v6 == -2147483386 )
      break;
    v8 = *(wchar_t *)((char *)v7 + (char *)L"\\Registry\\Machine\\" - (char *)pszDest);
    if ( !v8 )
      break;
    *v7++ = v8;
    --v6;
  }
  while ( v6 );
  v9 = v7 - 1;
  if ( v6 )
    v9 = v7;
  *v9 = 0;
  if ( !v6
    || RtlStringCchCatW(pszDest, 0x104uLL, pszSrc) < 0
    || (memset(v13, 0, sizeof(v13)),
        LODWORD(v13[1]) = 292,
        v13[2] = L"SleepStudySessionThresholdSeconds",
        LODWORD(v13[4]) = 0x4000000,
        v13[3] = &v11,
        v4 = (int)RtlpQueryRegistryValues(0LL, pszDest, (__int64)v13, 0LL) < 0,
        result = v11,
        v4) )
  {
LABEL_22:
    result = 600LL;
  }
  SshpSessionThresholdHns = (unsigned int)(10000000 * result);
  return result;
}
