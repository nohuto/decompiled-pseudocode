/*
 * XREFs of RtlAddResourceAttributeAce @ 0x1800E97E0
 * Callers:
 *     <none>
 * Callees:
 *     RtlFreeHeap @ 0x180024760 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18002A9A0 (RtlAllocateHeap.c)
 *     RtlFirstFreeAce @ 0x180037710 (RtlFirstFreeAce.c)
 *     RtlValidAcl @ 0x180037760 (RtlValidAcl.c)
 *     RtlValidSid @ 0x180037950 (RtlValidSid.c)
 *     RtlCopySid @ 0x1800688D0 (RtlCopySid.c)
 *     __security_check_cookie @ 0x18008C910 (__security_check_cookie.c)
 *     memmove @ 0x1800A4340 (memmove.c)
 *     memset @ 0x1800A4600 (memset.c)
 *     RtlUShortAdd @ 0x1800E70F8 (RtlUShortAdd.c)
 *     RtlpConvertAbsoluteToRelativeSecurityAttribute @ 0x1800E9F80 (RtlpConvertAbsoluteToRelativeSecurityAttribute.c)
 *     RtlpValidAttributeInfo @ 0x1800EAC40 (RtlpValidAttributeInfo.c)
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
  __int64 v12; // rdx
  __int64 v13; // r8
  int v14; // ecx
  int AclRevision; // ecx
  _BYTE *Heap; // rax
  size_t v17; // r13
  unsigned __int16 v18; // cx
  unsigned int v19; // r9d
  ULONG v20; // ecx
  unsigned int v21; // r8d
  PACL v22; // rdx
  __int64 v23; // r8
  _WORD *v24; // r15
  ULONG v25; // edx
  char v26; // al
  int v28; // [rsp+28h] [rbp-E0h] BYREF
  unsigned int Size; // [rsp+2Ch] [rbp-DCh] BYREF
  ULONG Size_4; // [rsp+30h] [rbp-D8h]
  int v31; // [rsp+34h] [rbp-D4h]
  PVOID FirstFree; // [rsp+38h] [rbp-D0h] BYREF
  int v33; // [rsp+40h] [rbp-C8h]
  unsigned __int16 v34; // [rsp+44h] [rbp-C4h]
  _BYTE Src[256]; // [rsp+48h] [rbp-C0h] BYREF

  Size_4 = AceFlags;
  FirstFree = 0LL;
  v33 = 0;
  v9 = 0LL;
  v34 = 256;
  memset(Src, 0, sizeof(Src));
  Size = 256;
  if ( !ReturnLength )
    return -1073741811;
  *ReturnLength = 0;
  if ( !Acl )
    return -1073741705;
  if ( !RtlValidSid(Sid) )
    return -1073741704;
  v14 = *(_DWORD *)((char *)Sid + 2) - v33;
  if ( !v14 )
    v14 = *((unsigned __int16 *)Sid + 3) - v34;
  if ( v14 )
    return -1073741811;
  if ( *((_BYTE *)Sid + 1) == 1 && !*((_DWORD *)Sid + 2) )
  {
    if ( Acl->AclRevision > 4u || AceRevision > 4 )
      return -1073741735;
    AclRevision = Acl->AclRevision;
    if ( Acl->AclRevision <= (unsigned __int8)AceRevision )
      AclRevision = (unsigned __int8)AceRevision;
    v31 = AclRevision;
    if ( (Size_4 & 0xFFFFFFE0) == 0
      && !AccessMask
      && (unsigned __int8)RtlpValidAttributeInfo(AttributeInfo, v12, v13, 0LL)
      && AttributeInfo->AttributeCount == 1 )
    {
      v9 = Src;
      v11 = RtlpConvertAbsoluteToRelativeSecurityAttribute(AttributeInfo->Attribute.pAttributeV1, Src, &Size);
      if ( v11 == -1073741789 )
      {
        Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, NtdllBaseTag + 1310720, Size);
        v9 = Heap;
        if ( !Heap )
          return -1073741801;
        v11 = RtlpConvertAbsoluteToRelativeSecurityAttribute(AttributeInfo->Attribute.pAttributeV1, Heap, &Size);
      }
      if ( v11 >= 0 )
      {
        if ( RtlValidAcl(Acl) && RtlFirstFreeAce(Acl, &FirstFree) )
        {
          v17 = Size;
          v18 = 4 * (*((unsigned __int8 *)Sid + 1) + 4);
          LOWORD(v28) = v18;
          if ( Size > 0xFFFF || (int)RtlUShortAdd(v18, Size, (__int16 *)&v28) < 0 )
          {
            v11 = -1073741675;
          }
          else
          {
            v20 = v19 + 8;
            v21 = v19;
            *ReturnLength = v19 + 8;
            v22 = Acl + 1;
            if ( (unsigned __int16)v19 < Acl->AceCount )
            {
              do
              {
                ++v21;
                v20 = *ReturnLength + v22->AclSize;
                *ReturnLength = v20;
                v22 = (PACL)((char *)v22 + v22->AclSize);
              }
              while ( v21 < Acl->AceCount );
            }
            v23 = (unsigned __int16)v28;
            v24 = FirstFree;
            v25 = v20 + (unsigned __int16)v28;
            *ReturnLength = v25;
            if ( v24 && (char *)v24 + v23 <= (char *)Acl + Acl->AclSize )
            {
              v26 = Size_4;
              v24[1] = v23;
              *((_BYTE *)v24 + 1) = v26;
              *(_BYTE *)v24 = 18;
              *((_DWORD *)v24 + 1) = v19;
              RtlCopySid(4 * *((unsigned __int8 *)Sid + 1) + 8, v24 + 4, Sid);
              memmove(&v24[2 * *((unsigned __int8 *)Sid + 1) + 8], v9, v17);
              ++Acl->AceCount;
              Acl->AclRevision = v31;
            }
            else
            {
              v11 = -1073741671;
              *ReturnLength = (v25 + 3) & 0xFFFFFFFC;
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
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v9);
  return v11;
}
