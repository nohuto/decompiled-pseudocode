/*
 * XREFs of RtlCapabilityCheck @ 0x140913350
 * Callers:
 *     PopCapabilityCheck @ 0x140568C68 (PopCapabilityCheck.c)
 *     RtlCapabilityCheckForSingleSessionSku @ 0x140913730 (RtlCapabilityCheckForSingleSessionSku.c)
 *     NtSetSystemTime @ 0x14094BD10 (NtSetSystemTime.c)
 *     ExpCapabilityCheck @ 0x14094F534 (ExpCapabilityCheck.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14022C340 (KeQueryPerformanceCounter.c)
 *     RtlInitUnicodeString @ 0x14027C520 (RtlInitUnicodeString.c)
 *     RtlSubAuthoritySid @ 0x14027F290 (RtlSubAuthoritySid.c)
 *     RtlCheckTokenMembership @ 0x14027F430 (RtlCheckTokenMembership.c)
 *     RtlCheckTokenMembershipEx @ 0x14027F450 (RtlCheckTokenMembershipEx.c)
 *     RtlDeriveCapabilitySidsFromName @ 0x1402ED600 (RtlDeriveCapabilitySidsFromName.c)
 *     PsIsCurrentThreadInServerSilo @ 0x140351230 (PsIsCurrentThreadInServerSilo.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 *     ZwClose @ 0x1403FA580 (ZwClose.c)
 *     ZwOpenKey @ 0x1403FA5E0 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x1403FA680 (ZwQueryValueKey.c)
 *     RtlCheckTokenCapability @ 0x140586730 (RtlCheckTokenCapability.c)
 *     RtlIsMultiSessionSku @ 0x14069CDE0 (RtlIsMultiSessionSku.c)
 *     RtlInitializeSid @ 0x1406E52A0 (RtlInitializeSid.c)
 *     RtlpCapabilityCheckSystemCapability @ 0x140913C6C (RtlpCapabilityCheckSystemCapability.c)
 *     RtlpLogCapabilityCheckLatency @ 0x14091B674 (RtlpLogCapabilityCheckLatency.c)
 */

__int64 __fastcall RtlCapabilityCheck(HANDLE ExistingTokenHandle, UNICODE_STRING *SourceString, char *a3)
{
  char v4; // r12
  __int64 v7; // rdx
  __int64 v8; // rcx
  int v9; // ebx
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  int v13; // r8d
  int v14; // r9d
  char v16; // [rsp+32h] [rbp-CEh] BYREF
  char v17; // [rsp+33h] [rbp-CDh] BYREF
  char v18; // [rsp+34h] [rbp-CCh] BYREF
  char v19; // [rsp+35h] [rbp-CBh]
  struct _SID_IDENTIFIER_AUTHORITY IdentifierAuthority; // [rsp+38h] [rbp-C8h] BYREF
  PULONG QuadPart; // [rsp+40h] [rbp-C0h] BYREF
  ULONG ResultLength; // [rsp+48h] [rbp-B8h] BYREF
  HANDLE KeyHandle; // [rsp+50h] [rbp-B0h] BYREF
  LARGE_INTEGER PerformanceCounter; // [rsp+58h] [rbp-A8h] BYREF
  UNICODE_STRING DestinationString; // [rsp+60h] [rbp-A0h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+70h] [rbp-90h] BYREF
  __int128 KeyValueInformation; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE Sid[16]; // [rsp+B0h] [rbp-50h] BYREF
  _OWORD Owner[3]; // [rsp+C0h] [rbp-40h] BYREF
  _OWORD v30[3]; // [rsp+F0h] [rbp-10h] BYREF

  *(_WORD *)&IdentifierAuthority.Value[4] = 1280;
  ResultLength = 0;
  KeyHandle = 0LL;
  v19 = 0;
  *(_DWORD *)IdentifierAuthority.Value = 0;
  DestinationString = 0LL;
  v18 = 0;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  v4 = 0;
  v16 = 0;
  KeyValueInformation = 0LL;
  v17 = 0;
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  if ( !SourceString || !a3 )
  {
    v9 = -1073741811;
    goto LABEL_21;
  }
  *a3 = 0;
  v9 = RtlDeriveCapabilitySidsFromName(SourceString, Owner, v30);
  if ( v9 < 0 )
    goto LABEL_21;
  if ( RtlIsMultiSessionSku(v8, v7)
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
    v19 = 1;
    RtlInitializeSid(Sid, &IdentifierAuthority, 1u);
    QuadPart = RtlSubAuthoritySid(Sid, 0);
    *QuadPart = 18;
    v9 = RtlCheckTokenMembership(ExistingTokenHandle, Sid);
    if ( v9 < 0 )
      goto LABEL_21;
    RtlInitializeSid(Sid, &IdentifierAuthority, 2u);
    *QuadPart = 32;
    *RtlSubAuthoritySid(Sid, 1u) = 544;
    v9 = RtlCheckTokenMembership(ExistingTokenHandle, Sid);
    if ( v9 < 0 )
      goto LABEL_21;
  }
  else
  {
    v9 = RtlCheckTokenMembershipEx(ExistingTokenHandle, Owner, 2, &v17);
    if ( v9 < 0 )
      goto LABEL_21;
    if ( v17 )
      goto LABEL_16;
    RtlInitializeSid(Sid, &IdentifierAuthority, 1u);
    QuadPart = RtlSubAuthoritySid(Sid, 0);
    *QuadPart = 18;
    v9 = RtlCheckTokenMembership(ExistingTokenHandle, Sid);
    if ( v9 < 0 )
      goto LABEL_21;
    RtlInitializeSid(Sid, &IdentifierAuthority, 2u);
    *QuadPart = 32;
    *RtlSubAuthoritySid(Sid, 1u) = 544;
    v9 = RtlCheckTokenMembership(ExistingTokenHandle, Sid);
    if ( v9 < 0 )
      goto LABEL_21;
    RtlInitializeSid(Sid, &IdentifierAuthority, 1u);
    *QuadPart = 4;
    v10 = RtlCheckTokenMembershipEx(ExistingTokenHandle, Sid, 2, &v16);
    v4 = v16;
    v9 = v10;
    if ( v10 < 0 )
      goto LABEL_21;
    if ( v16 )
    {
LABEL_16:
      v9 = RtlCheckTokenCapability(ExistingTokenHandle, v30, &v18);
      if ( v9 < 0 )
        goto LABEL_21;
      *a3 = v18;
    }
  }
  if ( *a3 )
    v9 = RtlpCapabilityCheckSystemCapability(ExistingTokenHandle, SourceString);
LABEL_21:
  if ( KeyHandle )
    ZwClose(KeyHandle);
  QuadPart = (PULONG)KeQueryPerformanceCounter(0LL).QuadPart;
  if ( !PsIsCurrentThreadInServerSilo(v12, v11) )
  {
    LOBYTE(v14) = v4;
    LOBYTE(v13) = 0;
    RtlpLogCapabilityCheckLatency((unsigned int)&PerformanceCounter, (unsigned int)&QuadPart, v13, v14, v19, *a3);
  }
  return (unsigned int)v9;
}
