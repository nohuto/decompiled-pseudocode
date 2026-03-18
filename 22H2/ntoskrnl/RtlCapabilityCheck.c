/*
 * XREFs of RtlCapabilityCheck @ 0x1407ED2D0
 * Callers:
 *     PopCapabilityCheck @ 0x1405871E8 (PopCapabilityCheck.c)
 *     RtlCapabilityCheckForSingleSessionSku @ 0x1409BC060 (RtlCapabilityCheckForSingleSessionSku.c)
 *     NtSetSystemTime @ 0x1409F8340 (NtSetSystemTime.c)
 *     ExpCapabilityCheck @ 0x1409FBAE4 (ExpCapabilityCheck.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14022E1D0 (RtlInitUnicodeString.c)
 *     PsIsCurrentThreadInServerSilo @ 0x140287350 (PsIsCurrentThreadInServerSilo.c)
 *     RtlSubAuthoritySid @ 0x1402979B0 (RtlSubAuthoritySid.c)
 *     KeQueryPerformanceCounter @ 0x1402C3240 (KeQueryPerformanceCounter.c)
 *     RtlDeriveCapabilitySidsFromName @ 0x14031CE90 (RtlDeriveCapabilitySidsFromName.c)
 *     RtlCheckTokenMembershipEx @ 0x14031D010 (RtlCheckTokenMembershipEx.c)
 *     RtlCheckTokenMembership @ 0x14036FA40 (RtlCheckTokenMembership.c)
 *     RtlCheckTokenCapability @ 0x14036FFE0 (RtlCheckTokenCapability.c)
 *     __security_check_cookie @ 0x1403D7680 (__security_check_cookie.c)
 *     ZwClose @ 0x14041A880 (ZwClose.c)
 *     ZwOpenKey @ 0x14041A8E0 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x14041A980 (ZwQueryValueKey.c)
 *     RtlInitializeSid @ 0x140782560 (RtlInitializeSid.c)
 *     RtlpLogCapabilityCheckLatency @ 0x1407ED150 (RtlpLogCapabilityCheckLatency.c)
 *     RtlIsMultiSessionSku @ 0x1407ED2A0 (RtlIsMultiSessionSku.c)
 *     RtlpCapabilityCheckSystemCapability @ 0x1407EF4A0 (RtlpCapabilityCheckSystemCapability.c)
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
  PULONG v15; // r13
  int v16; // eax
  int v17; // eax
  char v18; // [rsp+30h] [rbp-D0h] BYREF
  char v19; // [rsp+31h] [rbp-CFh] BYREF
  char v20; // [rsp+32h] [rbp-CEh] BYREF
  char v21; // [rsp+33h] [rbp-CDh] BYREF
  char v22; // [rsp+34h] [rbp-CCh] BYREF
  char v23; // [rsp+35h] [rbp-CBh]
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
  _OWORD v34[3]; // [rsp+F0h] [rbp-10h] BYREF

  QuadPart = String2;
  ResultLength = 0;
  KeyHandle = 0LL;
  v23 = 0;
  DestinationString = 0LL;
  *(_DWORD *)IdentifierAuthority.Value = 0;
  v4 = 0;
  memset(&ObjectAttributes, 0, 44);
  v22 = 0;
  v5 = 0;
  v18 = 0;
  v6 = 0;
  KeyValueInformation = 0LL;
  v19 = 0;
  v20 = 0;
  v21 = 0;
  *(_WORD *)&IdentifierAuthority.Value[4] = 1280;
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  if ( !String2 || !a3 )
  {
    v9 = -1073741811;
    goto LABEL_21;
  }
  *a3 = 0;
  v9 = RtlDeriveCapabilitySidsFromName(String2, Group, v34);
  if ( v9 < 0 )
    goto LABEL_21;
  if ( RtlIsMultiSessionSku() )
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
      v23 = 1;
      RtlInitializeSid(Sid, &IdentifierAuthority, 1u);
      v15 = RtlSubAuthoritySid(Sid, 0);
      *v15 = 18;
      v16 = RtlCheckTokenMembership(ExistingTokenHandle, Sid, &v19);
      v5 = v19;
      v9 = v16;
      if ( v16 < 0 )
        goto LABEL_21;
      if ( !v19 )
      {
        RtlInitializeSid(Sid, &IdentifierAuthority, 2u);
        *v15 = 32;
        *RtlSubAuthoritySid(Sid, 1u) = 544;
        v17 = RtlCheckTokenMembership(ExistingTokenHandle, Sid, &v18);
        v4 = v18;
        v9 = v17;
        if ( v17 < 0 )
          goto LABEL_21;
        if ( !v18 )
          goto LABEL_17;
      }
      goto LABEL_15;
    }
  }
  v9 = RtlCheckTokenMembershipEx(ExistingTokenHandle, Group, 2, &v21);
  if ( v9 < 0 )
    goto LABEL_21;
  if ( v21 )
    goto LABEL_15;
  RtlInitializeSid(Sid, &IdentifierAuthority, 1u);
  v10 = RtlSubAuthoritySid(Sid, 0);
  *v10 = 18;
  v11 = RtlCheckTokenMembership(ExistingTokenHandle, Sid, &v19);
  v5 = v19;
  v9 = v11;
  if ( v11 < 0 )
    goto LABEL_21;
  if ( v19 )
    goto LABEL_15;
  RtlInitializeSid(Sid, &IdentifierAuthority, 2u);
  *v10 = 32;
  *RtlSubAuthoritySid(Sid, 1u) = 544;
  v12 = RtlCheckTokenMembership(ExistingTokenHandle, Sid, &v18);
  v4 = v18;
  v9 = v12;
  if ( v12 < 0 )
    goto LABEL_21;
  if ( v18 )
    goto LABEL_15;
  RtlInitializeSid(Sid, &IdentifierAuthority, 1u);
  *v10 = 4;
  v13 = RtlCheckTokenMembershipEx(ExistingTokenHandle, Sid, 2, &v20);
  v6 = v20;
  v9 = v13;
  if ( v13 < 0 )
    goto LABEL_21;
  if ( v20 )
  {
LABEL_15:
    v9 = RtlCheckTokenCapability(ExistingTokenHandle, v34, &v22);
    if ( v9 < 0 )
      goto LABEL_21;
    *a3 = v22;
  }
LABEL_17:
  if ( *a3 && !v4 && !v5 )
    v9 = RtlpCapabilityCheckSystemCapability(ExistingTokenHandle);
LABEL_21:
  if ( KeyHandle )
    ZwClose(KeyHandle);
  QuadPart = (UNICODE_STRING *)KeQueryPerformanceCounter(0LL).QuadPart;
  if ( !v5 && !PsIsCurrentThreadInServerSilo() )
    RtlpLogCapabilityCheckLatency(&PerformanceCounter, &QuadPart, v4, v6, v23, *a3);
  return (unsigned int)v9;
}
