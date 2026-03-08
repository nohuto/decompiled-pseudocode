/*
 * XREFs of ObpGetDosDevicesProtection @ 0x140855400
 * Callers:
 *     ObpCreateDosDevicesDirectory @ 0x140855150 (ObpCreateDosDevicesDirectory.c)
 * Callees:
 *     RtlLengthSid @ 0x140245EC0 (RtlLengthSid.c)
 *     RtlGetAce @ 0x140245EE0 (RtlGetAce.c)
 *     RtlSetDaclSecurityDescriptor @ 0x1406D26A0 (RtlSetDaclSecurityDescriptor.c)
 *     RtlpAddKnownAce @ 0x1406D3290 (RtlpAddKnownAce.c)
 *     RtlCreateSecurityDescriptor @ 0x1406DB5A0 (RtlCreateSecurityDescriptor.c)
 *     RtlCreateAcl @ 0x1406DB640 (RtlCreateAcl.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 */

__int64 __fastcall ObpGetDosDevicesProtection(PSECURITY_DESCRIPTOR SecurityDescriptor)
{
  ULONG v2; // ebx
  ULONG v3; // ebx
  ULONG v4; // esi
  ULONG v5; // esi
  ACL *Pool2; // rax
  ACL *v7; // rbx
  ULONG v8; // edx
  ULONG v10; // ebx
  ULONG v11; // esi
  ACL *v12; // rax
  PVOID Ace; // [rsp+48h] [rbp+10h] BYREF

  Ace = 0LL;
  RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
  if ( (ObpProtectionMode & 1) != 0 )
  {
    v2 = RtlLengthSid(SeLocalSystemSid);
    v3 = RtlLengthSid(SeWorldSid) + v2;
    v4 = RtlLengthSid(SeCreatorOwnerSid) + 80 + 2 * v3;
    v5 = RtlLengthSid(SeAliasAdminsSid) + v4;
    Pool2 = (ACL *)ExAllocatePool2(256LL, v5, 1818452292LL);
    v7 = Pool2;
    if ( Pool2 )
    {
      RtlCreateAcl(Pool2, v5, 2u);
      RtlpAddKnownAce((__int64)v7, 2u, 0, -1610612736, (unsigned __int8 *)SeWorldSid, 0);
      RtlpAddKnownAce((__int64)v7, 2u, 0, 0x10000000, (unsigned __int8 *)SeLocalSystemSid, 0);
      RtlpAddKnownAce((__int64)v7, 2u, 0, 0x20000000, (unsigned __int8 *)SeWorldSid, 0);
      RtlGetAce(v7, 2u, &Ace);
      *((_BYTE *)Ace + 1) |= 0xBu;
      RtlpAddKnownAce((__int64)v7, 2u, 0, 0x10000000, (unsigned __int8 *)SeAliasAdminsSid, 0);
      RtlGetAce(v7, 3u, &Ace);
      *((_BYTE *)Ace + 1) |= 0xBu;
      RtlpAddKnownAce((__int64)v7, 2u, 0, 0x10000000, (unsigned __int8 *)SeLocalSystemSid, 0);
      RtlGetAce(v7, 4u, &Ace);
      *((_BYTE *)Ace + 1) |= 0xBu;
      RtlpAddKnownAce((__int64)v7, 2u, 0, 0x10000000, (unsigned __int8 *)SeCreatorOwnerSid, 0);
      v8 = 5;
LABEL_4:
      RtlGetAce(v7, v8, &Ace);
      *((_BYTE *)Ace + 1) |= 0xBu;
      RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, v7, 0);
      return 0LL;
    }
  }
  else
  {
    v10 = RtlLengthSid(SeWorldSid);
    v11 = RtlLengthSid(SeLocalSystemSid) + 44 + 2 * v10;
    v12 = (ACL *)ExAllocatePool2(256LL, v11, 1818452292LL);
    v7 = v12;
    if ( v12 )
    {
      RtlCreateAcl(v12, v11, 2u);
      RtlpAddKnownAce((__int64)v7, 2u, 0, -536870912, (unsigned __int8 *)SeWorldSid, 0);
      RtlpAddKnownAce((__int64)v7, 2u, 0, 0x10000000, (unsigned __int8 *)SeLocalSystemSid, 0);
      RtlpAddKnownAce((__int64)v7, 2u, 0, 0x10000000, (unsigned __int8 *)SeWorldSid, 0);
      v8 = 2;
      goto LABEL_4;
    }
  }
  return 3221225495LL;
}
