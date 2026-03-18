/*
 * XREFs of RtlDeriveCapabilitySidsFromName @ 0x14031CE90
 * Callers:
 *     PiUEventInitClientRegistrationContext @ 0x1407821E4 (PiUEventInitClientRegistrationContext.c)
 *     PopCreateNotificationName @ 0x1407E3790 (PopCreateNotificationName.c)
 *     RtlCapabilityCheck @ 0x1407ED2D0 (RtlCapabilityCheck.c)
 *     CmpHiveRootSecurityDescriptor @ 0x14080E690 (CmpHiveRootSecurityDescriptor.c)
 *     DbgkpCreateNotificationEvent @ 0x140858FD0 (DbgkpCreateNotificationEvent.c)
 *     SepVariableInitialization @ 0x140B57F18 (SepVariableInitialization.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D7680 (__security_check_cookie.c)
 *     SymCryptSha256 @ 0x1403F2E1C (SymCryptSha256.c)
 *     RtlPrefixUnicodeString @ 0x1406D9ED0 (RtlPrefixUnicodeString.c)
 *     RtlEqualUnicodeString @ 0x1406DA3A0 (RtlEqualUnicodeString.c)
 *     RtlFreeUnicodeString @ 0x14076F8E0 (RtlFreeUnicodeString.c)
 *     RtlUpcaseUnicodeString @ 0x140774000 (RtlUpcaseUnicodeString.c)
 *     RtlInitializeSid @ 0x140782560 (RtlInitializeSid.c)
 */

NTSTATUS __fastcall RtlDeriveCapabilitySidsFromName(PCUNICODE_STRING String2, _OWORD *Sid, _OWORD *a3)
{
  NTSTATUS result; // eax
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  unsigned int v9; // edi
  unsigned int v10; // esi
  __int128 v11; // xmm1
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-58h] BYREF
  __int128 v13; // [rsp+30h] [rbp-48h] BYREF
  __int128 v14; // [rsp+40h] [rbp-38h]

  DestinationString = 0LL;
  if ( !String2 || !Sid || !a3 )
    __fastfail(5u);
  *a3 = 0LL;
  a3[1] = 0LL;
  a3[2] = 0LL;
  *Sid = 0LL;
  Sid[1] = 0LL;
  *((_QWORD *)Sid + 4) = 0LL;
  *((_DWORD *)Sid + 10) = 0;
  result = RtlUpcaseUnicodeString(&DestinationString, String2, 1u);
  if ( result >= 0 )
  {
    SymCryptSha256(DestinationString.Buffer, DestinationString.Length, &v13);
    RtlInitializeSid(Sid, (PSID_IDENTIFIER_AUTHORITY)&RtlpNtAuthority, 9u);
    v7 = v13;
    *((_DWORD *)Sid + 2) = 32;
    v8 = v14;
    *(_OWORD *)((char *)Sid + 12) = v7;
    *(_OWORD *)((char *)Sid + 28) = v8;
    v9 = 0;
    while ( 1 )
    {
      v10 = v9 + 1;
      if ( RtlEqualUnicodeString(&DestinationString, (PCUNICODE_STRING)&RtlpLegacyApplicationCapabilityNames[2 * v9], 0) )
        break;
      ++v9;
      if ( v10 >= 0xC )
        goto LABEL_8;
    }
    RtlInitializeSid(a3, (PSID_IDENTIFIER_AUTHORITY)&RtlpAppPackageAuthority, 2u);
    *((_DWORD *)a3 + 2) = 3;
    *((_DWORD *)a3 + 3) = v10;
LABEL_8:
    RtlFreeUnicodeString(&DestinationString);
    if ( v9 == 12 )
    {
      RtlInitializeSid(a3, (PSID_IDENTIFIER_AUTHORITY)&RtlpAppPackageAuthority, 0xAu);
      *((_DWORD *)a3 + 2) = 3;
      *((_DWORD *)a3 + 3) = RtlPrefixUnicodeString(&String1, String2, 1u) != 0 ? 0x10000 : 1024;
      v11 = v14;
      a3[1] = v13;
      a3[2] = v11;
    }
    return 0;
  }
  return result;
}
