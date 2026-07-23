/*
 * XREFs of RtlCapabilityCheck @ 0x1409134B0
 * Callers:
 *     PopCapabilityCheck @ 0x140568EA8 (PopCapabilityCheck.c)
 *     RtlCapabilityCheckForSingleSessionSku @ 0x140913890 (RtlCapabilityCheckForSingleSessionSku.c)
 *     NtSetSystemTime @ 0x14094BEE0 (NtSetSystemTime.c)
 *     ExpCapabilityCheck @ 0x14094F704 (ExpCapabilityCheck.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14026A4C0 (RtlInitUnicodeString.c)
 *     RtlSubAuthoritySid @ 0x14026D6C0 (RtlSubAuthoritySid.c)
 *     RtlCheckTokenMembership @ 0x14026D6E0 (RtlCheckTokenMembership.c)
 *     RtlCheckTokenMembershipEx @ 0x14026D700 (RtlCheckTokenMembershipEx.c)
 *     RtlDeriveCapabilitySidsFromName @ 0x14029E950 (RtlDeriveCapabilitySidsFromName.c)
 *     KeQueryPerformanceCounter @ 0x1402D0BC0 (KeQueryPerformanceCounter.c)
 *     PsIsCurrentThreadInServerSilo @ 0x14035BF80 (PsIsCurrentThreadInServerSilo.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     ZwClose @ 0x1403FA760 (ZwClose.c)
 *     ZwOpenKey @ 0x1403FA7C0 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x1403FA860 (ZwQueryValueKey.c)
 *     RtlCheckTokenCapability @ 0x140586960 (RtlCheckTokenCapability.c)
 *     RtlIsMultiSessionSku @ 0x1405FBEB0 (RtlIsMultiSessionSku.c)
 *     RtlInitializeSid @ 0x1406BC580 (RtlInitializeSid.c)
 *     RtlpCapabilityCheckSystemCapability @ 0x140913DCC (RtlpCapabilityCheckSystemCapability.c)
 *     RtlpLogCapabilityCheckLatency @ 0x14091B7D4 (RtlpLogCapabilityCheckLatency.c)
 */

NTSTATUS __cdecl RtlCapabilityCheck(HANDLE TokenHandle, PUNICODE_STRING CapabilityName, PBOOLEAN HasCapability)
{
  BOOLEAN v4; // di
  BOOLEAN v5; // si
  BOOLEAN v6; // r12
  int v9; // ebx
  NTSTATUS v10; // eax
  NTSTATUS v11; // eax
  NTSTATUS v12; // eax
  NTSTATUS v13; // eax
  NTSTATUS v14; // eax
  LARGE_INTEGER v15; // rdx
  LARGE_INTEGER v16; // rcx
  int v17; // r8d
  int v18; // r9d
  BOOLEAN v20; // [rsp+30h] [rbp-D0h] BYREF
  BOOLEAN IsMember; // [rsp+31h] [rbp-CFh] BYREF
  BOOLEAN v22; // [rsp+32h] [rbp-CEh] BYREF
  BOOLEAN v23; // [rsp+33h] [rbp-CDh] BYREF
  BOOLEAN HasCapabilitya; // [rsp+34h] [rbp-CCh] BYREF
  char v25; // [rsp+35h] [rbp-CBh]
  _SID_IDENTIFIER_AUTHORITY IdentifierAuthority; // [rsp+38h] [rbp-C8h] BYREF
  PULONG QuadPart; // [rsp+40h] [rbp-C0h] BYREF
  ULONG ResultLength; // [rsp+48h] [rbp-B8h] BYREF
  HANDLE KeyHandle; // [rsp+50h] [rbp-B0h] BYREF
  LARGE_INTEGER PerformanceCounter; // [rsp+58h] [rbp-A8h] BYREF
  UNICODE_STRING DestinationString; // [rsp+60h] [rbp-A0h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+70h] [rbp-90h] BYREF
  __int128 KeyValueInformation; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE Sid[16]; // [rsp+B0h] [rbp-50h] BYREF
  _BYTE CapabilityGroupSid[48]; // [rsp+C0h] [rbp-40h] BYREF
  _BYTE CapabilitySid[48]; // [rsp+F0h] [rbp-10h] BYREF

  *(_WORD *)&IdentifierAuthority.Value[4] = 1280;
  ResultLength = 0;
  KeyHandle = 0LL;
  v25 = 0;
  *(_DWORD *)IdentifierAuthority.Value = 0;
  DestinationString = 0LL;
  HasCapabilitya = 0;
  v4 = 0;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  v20 = 0;
  v5 = 0;
  IsMember = 0;
  v6 = 0;
  v22 = 0;
  KeyValueInformation = 0LL;
  v23 = 0;
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  if ( !CapabilityName || !HasCapability )
  {
    v9 = -1073741811;
    goto LABEL_27;
  }
  *HasCapability = 0;
  v9 = RtlDeriveCapabilitySidsFromName(CapabilityName, CapabilityGroupSid, CapabilitySid);
  if ( v9 < 0 )
    goto LABEL_27;
  if ( !RtlIsMultiSessionSku()
    || (RtlInitUnicodeString(
          &DestinationString,
          L"\\Registry\\Machine\\Software\\Microsoft\\SecurityManager\\AdminCapabilities"),
        ObjectAttributes.RootDirectory = 0LL,
        ObjectAttributes.ObjectName = &DestinationString,
        ObjectAttributes.Length = 48,
        ObjectAttributes.Attributes = 576,
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL,
        ZwOpenKey(&KeyHandle, 0x80000000, &ObjectAttributes) < 0)
    || ZwQueryValueKey(
         KeyHandle,
         CapabilityName,
         KeyValuePartialInformation,
         &KeyValueInformation,
         0x10u,
         &ResultLength) < 0 )
  {
    v9 = RtlCheckTokenMembershipEx(TokenHandle, CapabilityGroupSid, 2u, &v23);
    if ( v9 < 0 )
      goto LABEL_27;
    if ( !v23 )
    {
      RtlInitializeSid(Sid, &IdentifierAuthority, 1u);
      QuadPart = RtlSubAuthoritySid(Sid, 0);
      *QuadPart = 18;
      v12 = RtlCheckTokenMembership(TokenHandle, Sid, &IsMember);
      v5 = IsMember;
      v9 = v12;
      if ( v12 < 0 )
        goto LABEL_27;
      if ( !IsMember )
      {
        RtlInitializeSid(Sid, &IdentifierAuthority, 2u);
        *QuadPart = 32;
        *RtlSubAuthoritySid(Sid, 1u) = 544;
        v13 = RtlCheckTokenMembership(TokenHandle, Sid, &v20);
        v4 = v20;
        v9 = v13;
        if ( v13 < 0 )
          goto LABEL_27;
        if ( !v20 )
        {
          RtlInitializeSid(Sid, &IdentifierAuthority, 1u);
          *QuadPart = 4;
          v14 = RtlCheckTokenMembershipEx(TokenHandle, Sid, 2u, &v22);
          v6 = v22;
          v9 = v14;
          if ( v14 < 0 )
            goto LABEL_27;
          if ( !v22 )
            goto LABEL_22;
        }
      }
    }
LABEL_20:
    v9 = RtlCheckTokenCapability(TokenHandle, CapabilitySid, &HasCapabilitya);
    if ( v9 < 0 )
      goto LABEL_27;
    *HasCapability = HasCapabilitya;
    goto LABEL_22;
  }
  v25 = 1;
  RtlInitializeSid(Sid, &IdentifierAuthority, 1u);
  QuadPart = RtlSubAuthoritySid(Sid, 0);
  *QuadPart = 18;
  v10 = RtlCheckTokenMembership(TokenHandle, Sid, &IsMember);
  v5 = IsMember;
  v9 = v10;
  if ( v10 < 0 )
    goto LABEL_27;
  if ( IsMember )
    goto LABEL_20;
  RtlInitializeSid(Sid, &IdentifierAuthority, 2u);
  *QuadPart = 32;
  *RtlSubAuthoritySid(Sid, 1u) = 544;
  v11 = RtlCheckTokenMembership(TokenHandle, Sid, &v20);
  v4 = v20;
  v9 = v11;
  if ( v11 < 0 )
    goto LABEL_27;
  if ( v20 )
    goto LABEL_20;
LABEL_22:
  if ( *HasCapability && !v4 && !v5 )
    v9 = RtlpCapabilityCheckSystemCapability(TokenHandle, CapabilityName);
LABEL_27:
  if ( KeyHandle )
    ZwClose(KeyHandle);
  QuadPart = (PULONG)KeQueryPerformanceCounter(0LL).QuadPart;
  if ( !v5 && !PsIsCurrentThreadInServerSilo(v16.QuadPart, v15.QuadPart) )
  {
    LOBYTE(v18) = v6;
    LOBYTE(v17) = v4;
    RtlpLogCapabilityCheckLatency(
      (unsigned int)&PerformanceCounter,
      (unsigned int)&QuadPart,
      v17,
      v18,
      v25,
      *HasCapability);
  }
  return v9;
}
