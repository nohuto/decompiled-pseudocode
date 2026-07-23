/*
 * XREFs of RtlAddResourceAttributeAce @ 0x1409125C0
 * Callers:
 *     <none>
 * Callees:
 *     ExAllocatePoolWithQuotaTag @ 0x1402D37D0 (ExAllocatePoolWithQuotaTag.c)
 *     RtlUShortAdd @ 0x140309CBC (RtlUShortAdd.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     memmove @ 0x140413540 (memmove.c)
 *     memset @ 0x140413800 (memset.c)
 *     RtlCopySid @ 0x140654560 (RtlCopySid.c)
 *     RtlFirstFreeAce @ 0x1406D4640 (RtlFirstFreeAce.c)
 *     RtlValidAcl @ 0x1406D5380 (RtlValidAcl.c)
 *     RtlValidSid @ 0x1406D54E0 (RtlValidSid.c)
 *     RtlpConvertAbsoluteToRelativeSecurityAttribute @ 0x140912A80 (RtlpConvertAbsoluteToRelativeSecurityAttribute.c)
 *     RtlpValidAttributeInfo @ 0x140912F68 (RtlpValidAttributeInfo.c)
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 */

NTSTATUS __cdecl RtlAddResourceAttributeAce(
        PACL Acl,
        ULONG AceRevision,
        ULONG AceFlags,
        ULONG AccessMask,
        PSID Sid,
        PCLAIM_SECURITY_ATTRIBUTES_INFORMATION AttributeInfo,
        PULONG ReturnLength)
{
  _BYTE *v9; // rdi
  NTSTATUS v11; // ebx
  __int64 v12; // r8
  int v13; // ecx
  __int64 AclRevision; // rdx
  _BYTE *PoolWithQuotaTag; // rax
  size_t v16; // r13
  USHORT v17; // cx
  unsigned int v18; // r9d
  ULONG v19; // ecx
  unsigned int v20; // r8d
  PACL v21; // rdx
  __int64 v22; // r8
  _WORD *v23; // r15
  ULONG v24; // edx
  char v25; // al
  USHORT pusResult[2]; // [rsp+28h] [rbp-E0h] BYREF
  unsigned int NumberOfBytes; // [rsp+2Ch] [rbp-DCh] BYREF
  ULONG NumberOfBytes_4; // [rsp+30h] [rbp-D8h]
  PVOID FirstFree; // [rsp+38h] [rbp-D0h] BYREF
  int v31; // [rsp+40h] [rbp-C8h]
  unsigned __int16 v32; // [rsp+44h] [rbp-C4h]
  _BYTE Src[256]; // [rsp+48h] [rbp-C0h] BYREF

  NumberOfBytes_4 = AceFlags;
  FirstFree = 0LL;
  v31 = 0;
  v9 = 0LL;
  v32 = 256;
  memset(Src, 0, sizeof(Src));
  NumberOfBytes = 256;
  if ( !ReturnLength )
    return -1073741811;
  *ReturnLength = 0;
  if ( !Acl )
    return -1073741705;
  if ( !RtlValidSid(Sid) )
    return -1073741704;
  v13 = *(_DWORD *)((char *)Sid + 2) - v31;
  if ( !v13 )
    v13 = *((unsigned __int16 *)Sid + 3) - v32;
  if ( v13 )
    return -1073741811;
  if ( *((_BYTE *)Sid + 1) == 1 && !*((_DWORD *)Sid + 2) )
  {
    if ( Acl->AclRevision > 4u || AceRevision > 4 )
      return -1073741735;
    AclRevision = Acl->AclRevision;
    if ( Acl->AclRevision <= (unsigned __int8)AceRevision )
      AclRevision = (unsigned __int8)AceRevision;
    v31 = AclRevision;
    if ( (NumberOfBytes_4 & 0xFFFFFFE0) == 0
      && !AccessMask
      && (unsigned __int8)RtlpValidAttributeInfo(AttributeInfo, AclRevision, v12, 0LL)
      && AttributeInfo->AttributeCount == 1 )
    {
      v9 = Src;
      v11 = RtlpConvertAbsoluteToRelativeSecurityAttribute(AttributeInfo->Attribute.pAttributeV1, Src, &NumberOfBytes);
      if ( v11 == -1073741789 )
      {
        PoolWithQuotaTag = ExAllocatePoolWithQuotaTag((POOL_TYPE)520, NumberOfBytes, 0x62507452u);
        v9 = PoolWithQuotaTag;
        if ( !PoolWithQuotaTag )
          return -1073741801;
        v11 = RtlpConvertAbsoluteToRelativeSecurityAttribute(
                AttributeInfo->Attribute.pAttributeV1,
                PoolWithQuotaTag,
                &NumberOfBytes);
      }
      if ( v11 >= 0 )
      {
        if ( RtlValidAcl(Acl) && RtlFirstFreeAce(Acl, &FirstFree) )
        {
          v16 = NumberOfBytes;
          v17 = 4 * (*((unsigned __int8 *)Sid + 1) + 4);
          pusResult[0] = v17;
          if ( NumberOfBytes > 0xFFFF || RtlUShortAdd(v17, NumberOfBytes, pusResult) < 0 )
          {
            v11 = -1073741675;
          }
          else
          {
            v19 = v18 + 8;
            v20 = v18;
            *ReturnLength = v18 + 8;
            v21 = Acl + 1;
            if ( (unsigned __int16)v18 < Acl->AceCount )
            {
              do
              {
                ++v20;
                v19 = *ReturnLength + v21->AclSize;
                *ReturnLength = v19;
                v21 = (PACL)((char *)v21 + v21->AclSize);
              }
              while ( v20 < Acl->AceCount );
            }
            v22 = pusResult[0];
            v23 = FirstFree;
            v24 = v19 + pusResult[0];
            *ReturnLength = v24;
            if ( v23 && (char *)v23 + v22 <= (char *)Acl + Acl->AclSize )
            {
              v25 = NumberOfBytes_4;
              v23[1] = v22;
              *((_BYTE *)v23 + 1) = v25;
              *(_BYTE *)v23 = 18;
              *((_DWORD *)v23 + 1) = v18;
              RtlCopySid(4 * *((unsigned __int8 *)Sid + 1) + 8, v23 + 4, Sid);
              memmove(&v23[2 * *((unsigned __int8 *)Sid + 1) + 8], v9, v16);
              ++Acl->AceCount;
              Acl->AclRevision = v31;
            }
            else
            {
              v11 = -1073741671;
              *ReturnLength = (v24 + 3) & 0xFFFFFFFC;
            }
          }
        }
        else
        {
          v11 = -1073741705;
        }
      }
      goto LABEL_39;
    }
    return -1073741811;
  }
  v11 = -1073741811;
LABEL_39:
  if ( v9 && v9 != Src )
    ExFreePoolWithTag(v9, 0);
  return v11;
}
