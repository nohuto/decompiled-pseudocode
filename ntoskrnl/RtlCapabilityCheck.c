/*
 * XREFs of RtlCapabilityCheck @ 0x140741730
 * Callers:
 *     PopCapabilityCheck @ 0x140584CB8 (PopCapabilityCheck.c)
 *     RtlCapabilityCheckForSingleSessionSku @ 0x1409B9140 (RtlCapabilityCheckForSingleSessionSku.c)
 *     NtSetSystemTime @ 0x1409F54B0 (NtSetSystemTime.c)
 *     ExpCapabilityCheck @ 0x1409F8C54 (ExpCapabilityCheck.c)
 * Callees:
 *     RtlDeriveCapabilitySidsFromName @ 0x140204A10 (RtlDeriveCapabilitySidsFromName.c)
 *     RtlCheckTokenMembershipEx @ 0x140204B90 (RtlCheckTokenMembershipEx.c)
 *     KeQueryPerformanceCounter @ 0x14022B950 (KeQueryPerformanceCounter.c)
 *     PsIsCurrentThreadInServerSilo @ 0x1402459D0 (PsIsCurrentThreadInServerSilo.c)
 *     RtlCheckTokenMembership @ 0x1402BDFD0 (RtlCheckTokenMembership.c)
 *     RtlSubAuthoritySid @ 0x1402BE740 (RtlSubAuthoritySid.c)
 *     RtlCheckTokenCapability @ 0x1402BE920 (RtlCheckTokenCapability.c)
 *     RtlInitUnicodeString @ 0x14030EBB0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     ZwClose @ 0x1404124F0 (ZwClose.c)
 *     ZwOpenKey @ 0x140412550 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x1404125F0 (ZwQueryValueKey.c)
 *     RtlInitializeSid @ 0x14068E3A0 (RtlInitializeSid.c)
 *     RtlpCapabilityCheckSystemCapability @ 0x1407445E8 (RtlpCapabilityCheckSystemCapability.c)
 *     RtlIsMultiSessionSku @ 0x1407447E0 (RtlIsMultiSessionSku.c)
 *     RtlpLogCapabilityCheckLatency @ 0x14074480C (RtlpLogCapabilityCheckLatency.c)
 */

__int64 __fastcall RtlCapabilityCheck(HANDLE ExistingTokenHandle, UNICODE_STRING *String2, char *a3)
{
  char v4; // di
  char v5; // si
  char v6; // r12
  int v9; // ebx
  PULONG v10; // r13
  int v11; // eax
  int v12; // eax
  int v13; // eax
  LARGE_INTEGER v14; // rdx
  LARGE_INTEGER v15; // rcx
  int v16; // r8d
  int v17; // r9d
  PULONG v19; // r13
  int v20; // eax
  int v21; // eax
  char v22; // [rsp+30h] [rbp-D0h] BYREF
  char v23; // [rsp+31h] [rbp-CFh] BYREF
  char v24; // [rsp+32h] [rbp-CEh] BYREF
  char v25; // [rsp+33h] [rbp-CDh] BYREF
  char v26; // [rsp+34h] [rbp-CCh] BYREF
  char v27; // [rsp+35h] [rbp-CBh]
  struct _SID_IDENTIFIER_AUTHORITY IdentifierAuthority; // [rsp+38h] [rbp-C8h] BYREF
  ULONG ResultLength; // [rsp+40h] [rbp-C0h] BYREF
  HANDLE KeyHandle; // [rsp+48h] [rbp-B8h] BYREF
  UNICODE_STRING *QuadPart; // [rsp+50h] [rbp-B0h] BYREF
  LARGE_INTEGER PerformanceCounter; // [rsp+58h] [rbp-A8h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp-A0h] BYREF
  UNICODE_STRING DestinationString; // [rsp+90h] [rbp-70h] BYREF
  __int128 KeyValueInformation; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE Sid[16]; // [rsp+B0h] [rbp-50h] BYREF
  _OWORD Group[3]; // [rsp+C0h] [rbp-40h] BYREF
  _OWORD v38[3]; // [rsp+F0h] [rbp-10h] BYREF

  QuadPart = String2;
  ResultLength = 0;
  KeyHandle = 0LL;
  v27 = 0;
  DestinationString = 0LL;
  *(_DWORD *)IdentifierAuthority.Value = 0;
  v4 = 0;
  memset(&ObjectAttributes, 0, 44);
  v26 = 0;
  v5 = 0;
  v22 = 0;
  v6 = 0;
  KeyValueInformation = 0LL;
  v23 = 0;
  v24 = 0;
  v25 = 0;
  *(_WORD *)&IdentifierAuthority.Value[4] = 1280;
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  if ( !String2 || !a3 )
  {
    v9 = -1073741811;
    goto LABEL_21;
  }
  *a3 = 0;
  v9 = RtlDeriveCapabilitySidsFromName(String2, Group, v38);
  if ( v9 < 0 )
    goto LABEL_21;
  if ( (unsigned __int8)RtlIsMultiSessionSku() )
  {
    RtlInitUnicodeString(
      &DestinationString,
      L"\\Registry\\Machine\\Software\\Microsoft\\SecurityManager\\AdminCapabilities");
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( ZwOpenKey(&KeyHandle, 0x80000000, &ObjectAttributes) >= 0
      && ZwQueryValueKey(KeyHandle, String2, KeyValuePartialInformation, &KeyValueInformation, 0x10u, &ResultLength) >= 0 )
    {
      v27 = 1;
      RtlInitializeSid(Sid, &IdentifierAuthority, 1u);
      v19 = RtlSubAuthoritySid(Sid, 0);
      *v19 = 18;
      v20 = RtlCheckTokenMembership(ExistingTokenHandle, Sid, &v23);
      v5 = v23;
      v9 = v20;
      if ( v20 < 0 )
        goto LABEL_21;
      if ( !v23 )
      {
        RtlInitializeSid(Sid, &IdentifierAuthority, 2u);
        *v19 = 32;
        *RtlSubAuthoritySid(Sid, 1u) = 544;
        v21 = RtlCheckTokenMembership(ExistingTokenHandle, Sid, &v22);
        v4 = v22;
        v9 = v21;
        if ( v21 < 0 )
          goto LABEL_21;
        if ( !v22 )
          goto LABEL_17;
      }
      goto LABEL_15;
    }
  }
  v9 = RtlCheckTokenMembershipEx(ExistingTokenHandle, Group, 2, &v25);
  if ( v9 < 0 )
    goto LABEL_21;
  if ( v25 )
    goto LABEL_15;
  RtlInitializeSid(Sid, &IdentifierAuthority, 1u);
  v10 = RtlSubAuthoritySid(Sid, 0);
  *v10 = 18;
  v11 = RtlCheckTokenMembership(ExistingTokenHandle, Sid, &v23);
  v5 = v23;
  v9 = v11;
  if ( v11 < 0 )
    goto LABEL_21;
  if ( v23 )
    goto LABEL_15;
  RtlInitializeSid(Sid, &IdentifierAuthority, 2u);
  *v10 = 32;
  *RtlSubAuthoritySid(Sid, 1u) = 544;
  v12 = RtlCheckTokenMembership(ExistingTokenHandle, Sid, &v22);
  v4 = v22;
  v9 = v12;
  if ( v12 < 0 )
    goto LABEL_21;
  if ( v22 )
    goto LABEL_15;
  RtlInitializeSid(Sid, &IdentifierAuthority, 1u);
  *v10 = 4;
  v13 = RtlCheckTokenMembershipEx(ExistingTokenHandle, Sid, 2, &v24);
  v6 = v24;
  v9 = v13;
  if ( v13 < 0 )
    goto LABEL_21;
  if ( v24 )
  {
LABEL_15:
    v9 = RtlCheckTokenCapability(ExistingTokenHandle, v38, &v26);
    if ( v9 < 0 )
      goto LABEL_21;
    *a3 = v26;
  }
LABEL_17:
  if ( *a3 && !v4 && !v5 )
    v9 = RtlpCapabilityCheckSystemCapability(ExistingTokenHandle);
LABEL_21:
  if ( KeyHandle )
    ZwClose(KeyHandle);
  QuadPart = (UNICODE_STRING *)KeQueryPerformanceCounter(0LL).QuadPart;
  if ( !v5 && !PsIsCurrentThreadInServerSilo(v15.QuadPart, v14.QuadPart) )
  {
    LOBYTE(v17) = v6;
    LOBYTE(v16) = v4;
    RtlpLogCapabilityCheckLatency((unsigned int)&PerformanceCounter, (unsigned int)&QuadPart, v16, v17, v27, *a3);
  }
  return (unsigned int)v9;
}
