/*
 * XREFs of ObpGetDosDevicesProtection @ 0x1407A14C4
 * Callers:
 *     ObpCreateDosDevicesDirectory @ 0x1407A1228 (ObpCreateDosDevicesDirectory.c)
 * Callees:
 *     RtlGetAce @ 0x140347A20 (RtlGetAce.c)
 *     RtlLengthSid @ 0x140347A80 (RtlLengthSid.c)
 *     RtlCreateSecurityDescriptor @ 0x140603560 (RtlCreateSecurityDescriptor.c)
 *     RtlpAddKnownAce @ 0x1406D5220 (RtlpAddKnownAce.c)
 *     RtlSetDaclSecurityDescriptor @ 0x1406D92C0 (RtlSetDaclSecurityDescriptor.c)
 *     RtlCreateAcl @ 0x1406D9330 (RtlCreateAcl.c)
 *     ExAllocatePoolWithTag @ 0x1409B4160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall ObpGetDosDevicesProtection(PSECURITY_DESCRIPTOR SecurityDescriptor)
{
  ULONG v2; // ebx
  ULONG v3; // ebx
  ULONG v4; // ebx
  ULONG v5; // ebx
  ACL *PoolWithTag; // rax
  ACL *v7; // rsi
  unsigned __int8 *Src; // rbx
  unsigned __int8 *v9; // rdi
  ULONG v11; // ebx
  ULONG v12; // ebx
  ACL *v13; // rax
  unsigned __int8 *v14; // rbx
  PVOID Ace; // [rsp+58h] [rbp+10h] BYREF

  Ace = 0LL;
  RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
  if ( (ObpProtectionMode & 1) != 0 )
  {
    v2 = RtlLengthSid(SeLocalSystemSid);
    v3 = RtlLengthSid(SeWorldSid) + v2;
    v4 = RtlLengthSid(SeCreatorOwnerSid) + 80 + 2 * v3;
    v5 = RtlLengthSid(SeAliasAdminsSid) + v4;
    PoolWithTag = (ACL *)ExAllocatePoolWithTag(PagedPool, v5, 0x6C636144u);
    v7 = PoolWithTag;
    if ( PoolWithTag )
    {
      RtlCreateAcl(PoolWithTag, v5, 2u);
      Src = (unsigned __int8 *)SeWorldSid;
      RtlpAddKnownAce(v7, 2u, 0, -1610612736, (unsigned __int8 *)SeWorldSid, 0);
      v9 = (unsigned __int8 *)SeLocalSystemSid;
      RtlpAddKnownAce(v7, 2u, 0, 0x10000000, (unsigned __int8 *)SeLocalSystemSid, 0);
      RtlpAddKnownAce(v7, 2u, 0, 0x20000000, Src, 0);
      RtlGetAce(v7, 2u, &Ace);
      *((_BYTE *)Ace + 1) |= 0xBu;
      RtlpAddKnownAce(v7, 2u, 0, 0x10000000, (unsigned __int8 *)SeAliasAdminsSid, 0);
      RtlGetAce(v7, 3u, &Ace);
      *((_BYTE *)Ace + 1) |= 0xBu;
      RtlpAddKnownAce(v7, 2u, 0, 0x10000000, v9, 0);
      RtlGetAce(v7, 4u, &Ace);
      *((_BYTE *)Ace + 1) |= 0xBu;
      RtlpAddKnownAce(v7, 2u, 0, 0x10000000, (unsigned __int8 *)SeCreatorOwnerSid, 0);
      RtlGetAce(v7, 5u, &Ace);
LABEL_4:
      *((_BYTE *)Ace + 1) |= 0xBu;
      RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, v7, 0);
      return 0LL;
    }
  }
  else
  {
    v11 = RtlLengthSid(SeWorldSid);
    v12 = RtlLengthSid(SeLocalSystemSid) + 44 + 2 * v11;
    v13 = (ACL *)ExAllocatePoolWithTag(PagedPool, v12, 0x6C636144u);
    v7 = v13;
    if ( v13 )
    {
      RtlCreateAcl(v13, v12, 2u);
      v14 = (unsigned __int8 *)SeWorldSid;
      RtlpAddKnownAce(v7, 2u, 0, -536870912, (unsigned __int8 *)SeWorldSid, 0);
      RtlpAddKnownAce(v7, 2u, 0, 0x10000000, (unsigned __int8 *)SeLocalSystemSid, 0);
      RtlpAddKnownAce(v7, 2u, 0, 0x10000000, v14, 0);
      RtlGetAce(v7, 2u, &Ace);
      goto LABEL_4;
    }
  }
  return 3221225495LL;
}
