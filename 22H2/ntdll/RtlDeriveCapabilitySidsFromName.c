/*
 * XREFs of RtlDeriveCapabilitySidsFromName @ 0x18001FD40
 * Callers:
 *     RtlCapabilityCheck @ 0x18003FC90 (RtlCapabilityCheck.c)
 * Callees:
 *     RtlUpcaseUnicodeString @ 0x180015D20 (RtlUpcaseUnicodeString.c)
 *     RtlFreeAnsiString @ 0x180016760 (RtlFreeAnsiString.c)
 *     RtlEqualUnicodeString @ 0x180020D10 (RtlEqualUnicodeString.c)
 *     RtlInitializeSid @ 0x180040070 (RtlInitializeSid.c)
 *     SHA256Final @ 0x18004034C (SHA256Final.c)
 *     SHA256Update @ 0x180040498 (SHA256Update.c)
 *     __security_check_cookie @ 0x18008C910 (__security_check_cookie.c)
 */

NTSTATUS __cdecl RtlDeriveCapabilitySidsFromName(
        PUNICODE_STRING UnicodeString,
        PSID CapabilityGroupSid,
        PSID CapabilitySid)
{
  NTSTATUS result; // eax
  __int128 v6; // xmm0
  unsigned int v7; // edi
  unsigned int v8; // esi
  __int128 v9; // xmm0
  _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-69h] BYREF
  _DWORD v11[28]; // [rsp+30h] [rbp-59h] BYREF
  __int128 v12; // [rsp+A0h] [rbp+17h] BYREF
  __int128 v13; // [rsp+B0h] [rbp+27h]

  if ( !UnicodeString || !CapabilityGroupSid || !CapabilitySid )
    __fastfail(5u);
  *(_OWORD *)CapabilitySid = 0LL;
  *((_OWORD *)CapabilitySid + 1) = 0LL;
  *((_OWORD *)CapabilitySid + 2) = 0LL;
  *(_OWORD *)CapabilityGroupSid = 0LL;
  *((_OWORD *)CapabilityGroupSid + 1) = 0LL;
  *((_QWORD *)CapabilityGroupSid + 4) = 0LL;
  *((_DWORD *)CapabilityGroupSid + 10) = 0;
  result = RtlUpcaseUnicodeString(&DestinationString, UnicodeString, 1u);
  if ( result >= 0 )
  {
    v11[8] = 0;
    v11[9] = 0;
    v11[0] = 1779033703;
    v11[1] = -1150833019;
    v11[2] = 1013904242;
    v11[3] = -1521486534;
    v11[4] = 1359893119;
    v11[5] = -1694144372;
    v11[6] = 528734635;
    v11[7] = 1541459225;
    SHA256Update(v11, DestinationString.Buffer, DestinationString.Length);
    SHA256Final(v11, &v12);
    RtlInitializeSid(CapabilityGroupSid, (PSID_IDENTIFIER_AUTHORITY)&RtlpNtAuthority, 9u);
    v6 = v12;
    *((_DWORD *)CapabilityGroupSid + 2) = 32;
    *(_OWORD *)((char *)CapabilityGroupSid + 12) = v6;
    *(_OWORD *)((char *)CapabilityGroupSid + 28) = v13;
    v7 = 0;
    while ( 1 )
    {
      v8 = v7 + 1;
      if ( RtlEqualUnicodeString(&DestinationString, (PUNICODE_STRING)&RtlpLegacyApplicationCapabilityNames + v7, 0) )
        break;
      ++v7;
      if ( v8 >= 0xC )
        goto LABEL_8;
    }
    RtlInitializeSid(CapabilitySid, (PSID_IDENTIFIER_AUTHORITY)&RtlpAppPackageAuthority, 2u);
    *((_DWORD *)CapabilitySid + 2) = 3;
    *((_DWORD *)CapabilitySid + 3) = v8;
LABEL_8:
    RtlFreeAnsiString(&DestinationString);
    if ( v7 == 12 )
    {
      RtlInitializeSid(CapabilitySid, (PSID_IDENTIFIER_AUTHORITY)&RtlpAppPackageAuthority, 0xAu);
      v9 = v12;
      *((_DWORD *)CapabilitySid + 2) = 3;
      *((_DWORD *)CapabilitySid + 3) = 1024;
      *((_OWORD *)CapabilitySid + 1) = v9;
      *((_OWORD *)CapabilitySid + 2) = v13;
    }
    return 0;
  }
  return result;
}
