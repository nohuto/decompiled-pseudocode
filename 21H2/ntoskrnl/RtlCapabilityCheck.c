/*
 * XREFs of RtlCapabilityCheck @ 0x140660AF0
 * Callers:
 *     PopCapabilityCheck @ 0x1405C9FA8 (PopCapabilityCheck.c)
 *     RtlCapabilityCheckForSingleSessionSku @ 0x1409B8F60 (RtlCapabilityCheckForSingleSessionSku.c)
 *     NtSetSystemTime @ 0x1409F8350 (NtSetSystemTime.c)
 *     ExpCapabilityCheck @ 0x1409FB924 (ExpCapabilityCheck.c)
 * Callees:
 *     RtlCheckTokenCapability @ 0x140201400 (RtlCheckTokenCapability.c)
 *     PsIsCurrentThreadInServerSilo @ 0x1402DF580 (PsIsCurrentThreadInServerSilo.c)
 *     RtlDeriveCapabilitySidsFromName @ 0x1402E0B30 (RtlDeriveCapabilitySidsFromName.c)
 *     RtlCheckTokenMembership @ 0x1402E0C80 (RtlCheckTokenMembership.c)
 *     RtlCheckTokenMembershipEx @ 0x1402E0CA0 (RtlCheckTokenMembershipEx.c)
 *     RtlSubAuthoritySid @ 0x1402EF430 (RtlSubAuthoritySid.c)
 *     KeQueryPerformanceCounter @ 0x1403027F0 (KeQueryPerformanceCounter.c)
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     ZwOpenKey @ 0x14041B9A0 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x14041BA40 (ZwQueryValueKey.c)
 *     RtlpLogCapabilityCheckLatency @ 0x140660E0C (RtlpLogCapabilityCheckLatency.c)
 *     RtlpCapabilityCheckSystemCapability @ 0x140660EF4 (RtlpCapabilityCheckSystemCapability.c)
 *     RtlInitializeSid @ 0x14078DDC0 (RtlInitializeSid.c)
 *     RtlIsMultiSessionSku @ 0x1407F4B80 (RtlIsMultiSessionSku.c)
 */

__int64 __fastcall RtlCapabilityCheck(HANDLE ExistingTokenHandle, UNICODE_STRING *SourceString, char *a3)
{
  char v4; // r12
  int v7; // ebx
  PULONG v8; // r13
  int v9; // eax
  int v10; // r8d
  int v11; // r9d
  PULONG v13; // r13
  char v14; // [rsp+32h] [rbp-CEh] BYREF
  char v15; // [rsp+33h] [rbp-CDh] BYREF
  char v16; // [rsp+34h] [rbp-CCh] BYREF
  char v17; // [rsp+35h] [rbp-CBh]
  struct _SID_IDENTIFIER_AUTHORITY IdentifierAuthority; // [rsp+38h] [rbp-C8h] BYREF
  ULONG ResultLength; // [rsp+40h] [rbp-C0h] BYREF
  HANDLE KeyHandle; // [rsp+48h] [rbp-B8h] BYREF
  PCUNICODE_STRING Source; // [rsp+50h] [rbp-B0h] BYREF
  LARGE_INTEGER PerformanceCounter; // [rsp+58h] [rbp-A8h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp-A0h] BYREF
  UNICODE_STRING DestinationString; // [rsp+90h] [rbp-70h] BYREF
  __int128 KeyValueInformation; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE Sid[16]; // [rsp+B0h] [rbp-50h] BYREF
  _OWORD Owner[3]; // [rsp+C0h] [rbp-40h] BYREF
  _OWORD v28[3]; // [rsp+F0h] [rbp-10h] BYREF

  Source = SourceString;
  ResultLength = 0;
  KeyHandle = 0LL;
  v17 = 0;
  DestinationString = 0LL;
  *(_DWORD *)IdentifierAuthority.Value = 0;
  memset(&ObjectAttributes, 0, 44);
  v16 = 0;
  v4 = 0;
  KeyValueInformation = 0LL;
  v14 = 0;
  v15 = 0;
  *(_WORD *)&IdentifierAuthority.Value[4] = 1280;
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  if ( !SourceString || !a3 )
  {
    v7 = -1073741811;
    goto LABEL_17;
  }
  *a3 = 0;
  v7 = RtlDeriveCapabilitySidsFromName(SourceString, Owner, v28);
  if ( v7 < 0 )
    goto LABEL_17;
  if ( (unsigned __int8)RtlIsMultiSessionSku()
    && (RtlInitUnicodeString(
          &DestinationString,
          L"\\Registry\\Machine\\Software\\Microsoft\\SecurityManager\\AdminCapabilities"),
        ObjectAttributes.RootDirectory = 0LL,
        ObjectAttributes.ObjectName = &DestinationString,
        ObjectAttributes.Length = 48,
        ObjectAttributes.Attributes = 576,
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL,
        ZwOpenKey(&KeyHandle, 0x80000000, &ObjectAttributes) >= 0)
    && ZwQueryValueKey(KeyHandle, SourceString, KeyValuePartialInformation, &KeyValueInformation, 0x10u, &ResultLength) >= 0 )
  {
    v17 = 1;
    RtlInitializeSid(Sid, &IdentifierAuthority, 1u);
    v13 = RtlSubAuthoritySid(Sid, 0);
    *v13 = 18;
    v7 = RtlCheckTokenMembership(ExistingTokenHandle, Sid);
    if ( v7 < 0 )
      goto LABEL_17;
    RtlInitializeSid(Sid, &IdentifierAuthority, 2u);
    *v13 = 32;
    *RtlSubAuthoritySid(Sid, 1u) = 544;
    v7 = RtlCheckTokenMembership(ExistingTokenHandle, Sid);
    if ( v7 < 0 )
      goto LABEL_17;
  }
  else
  {
    v7 = RtlCheckTokenMembershipEx(ExistingTokenHandle, Owner, 2, &v15);
    if ( v7 < 0 )
      goto LABEL_17;
    if ( v15 )
      goto LABEL_13;
    RtlInitializeSid(Sid, &IdentifierAuthority, 1u);
    v8 = RtlSubAuthoritySid(Sid, 0);
    *v8 = 18;
    v7 = RtlCheckTokenMembership(ExistingTokenHandle, Sid);
    if ( v7 < 0 )
      goto LABEL_17;
    RtlInitializeSid(Sid, &IdentifierAuthority, 2u);
    *v8 = 32;
    *RtlSubAuthoritySid(Sid, 1u) = 544;
    v7 = RtlCheckTokenMembership(ExistingTokenHandle, Sid);
    if ( v7 < 0 )
      goto LABEL_17;
    RtlInitializeSid(Sid, &IdentifierAuthority, 1u);
    *v8 = 4;
    v9 = RtlCheckTokenMembershipEx(ExistingTokenHandle, Sid, 2, &v14);
    v4 = v14;
    v7 = v9;
    if ( v9 < 0 )
      goto LABEL_17;
    if ( v14 )
    {
LABEL_13:
      v7 = RtlCheckTokenCapability(ExistingTokenHandle, v28, &v16);
      if ( v7 < 0 )
        goto LABEL_17;
      *a3 = v16;
    }
  }
  if ( *a3 )
    v7 = RtlpCapabilityCheckSystemCapability(ExistingTokenHandle, Source);
LABEL_17:
  if ( KeyHandle )
    ZwClose(KeyHandle);
  Source = (PCUNICODE_STRING)KeQueryPerformanceCounter(0LL).QuadPart;
  if ( !PsIsCurrentThreadInServerSilo() )
  {
    LOBYTE(v11) = v4;
    LOBYTE(v10) = 0;
    RtlpLogCapabilityCheckLatency((unsigned int)&PerformanceCounter, (unsigned int)&Source, v10, v11, v17, *a3);
  }
  return (unsigned int)v7;
}
