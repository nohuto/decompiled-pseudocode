/*
 * XREFs of RtlAddResourceAttributeAce @ 0x1409B8170
 * Callers:
 *     <none>
 * Callees:
 *     RtlUShortAdd @ 0x1402DE190 (RtlUShortAdd.c)
 *     ExAllocatePoolWithQuotaTag @ 0x140367B10 (ExAllocatePoolWithQuotaTag.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 *     RtlCopySid @ 0x14066A4E0 (RtlCopySid.c)
 *     RtlFirstFreeAce @ 0x140724CE0 (RtlFirstFreeAce.c)
 *     RtlValidSid @ 0x1407B4660 (RtlValidSid.c)
 *     RtlValidAcl @ 0x1407B4A50 (RtlValidAcl.c)
 *     RtlpConvertAbsoluteToRelativeSecurityAttribute @ 0x1409B863C (RtlpConvertAbsoluteToRelativeSecurityAttribute.c)
 *     RtlpValidAttributeInfo @ 0x1409B8B20 (RtlpValidAttributeInfo.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall RtlAddResourceAttributeAce(
        unsigned __int8 *a1,
        unsigned int a2,
        int a3,
        int a4,
        char *Sid,
        __int64 a6,
        _DWORD *a7)
{
  int v11; // ebx
  int v12; // ecx
  __int64 v13; // rdx
  _BYTE *v14; // rdi
  _BYTE *PoolWithQuotaTag; // rax
  size_t v16; // r13
  USHORT v17; // cx
  int v18; // ecx
  unsigned __int8 *v19; // rdx
  unsigned int i; // r8d
  __int64 v21; // r8
  __int64 v22; // r15
  int v23; // edx
  char v24; // al
  USHORT pusResult[2]; // [rsp+28h] [rbp-E0h] BYREF
  unsigned int NumberOfBytes; // [rsp+2Ch] [rbp-DCh] BYREF
  int NumberOfBytes_4; // [rsp+30h] [rbp-D8h]
  __int64 v29; // [rsp+38h] [rbp-D0h] BYREF
  int v30; // [rsp+40h] [rbp-C8h]
  unsigned __int16 v31; // [rsp+44h] [rbp-C4h]
  _BYTE Src[256]; // [rsp+48h] [rbp-C0h] BYREF

  NumberOfBytes_4 = a3;
  v29 = 0LL;
  v30 = 0;
  v31 = 256;
  memset(Src, 0, sizeof(Src));
  NumberOfBytes = 256;
  if ( !a7 )
    return (unsigned int)-1073741811;
  *a7 = 0;
  if ( !a1 )
    return (unsigned int)-1073741705;
  if ( !RtlValidSid(Sid) )
    return (unsigned int)-1073741704;
  v12 = *(_DWORD *)(Sid + 2) - v30;
  if ( !v12 )
    v12 = *((unsigned __int16 *)Sid + 3) - v31;
  if ( v12 || Sid[1] != 1 || *((_DWORD *)Sid + 2) )
    return (unsigned int)-1073741811;
  if ( *a1 > 4u || a2 > 4 )
    return (unsigned int)-1073741735;
  v13 = *a1;
  if ( *a1 <= (unsigned __int8)a2 )
    v13 = (unsigned __int8)a2;
  v30 = v13;
  if ( (a3 & 0xFFFFFFE0) != 0
    || a4
    || !(unsigned __int8)RtlpValidAttributeInfo(a6, v13, 0LL)
    || *(_DWORD *)(a6 + 4) != 1 )
  {
    return (unsigned int)-1073741811;
  }
  v14 = Src;
  v11 = RtlpConvertAbsoluteToRelativeSecurityAttribute(*(_QWORD *)(a6 + 8), Src, &NumberOfBytes);
  if ( v11 == -1073741789 )
  {
    PoolWithQuotaTag = ExAllocatePoolWithQuotaTag((POOL_TYPE)520, NumberOfBytes, 0x62507452u);
    v14 = PoolWithQuotaTag;
    if ( !PoolWithQuotaTag )
      return (unsigned int)-1073741801;
    v11 = RtlpConvertAbsoluteToRelativeSecurityAttribute(*(_QWORD *)(a6 + 8), PoolWithQuotaTag, &NumberOfBytes);
  }
  if ( v11 >= 0 )
  {
    if ( RtlValidAcl((__int64)a1) && RtlFirstFreeAce((__int64)a1, &v29) )
    {
      v16 = NumberOfBytes;
      v17 = 4 * ((unsigned __int8)Sid[1] + 4);
      pusResult[0] = v17;
      if ( NumberOfBytes > 0xFFFF || RtlUShortAdd(v17, NumberOfBytes, pusResult) < 0 )
      {
        v11 = -1073741675;
      }
      else
      {
        v18 = 8;
        v19 = a1 + 8;
        *a7 = 8;
        for ( i = 0; i < *((unsigned __int16 *)a1 + 2); v19 += *((unsigned __int16 *)v19 + 1) )
        {
          ++i;
          v18 = *a7 + *((unsigned __int16 *)v19 + 1);
          *a7 = v18;
        }
        v21 = pusResult[0];
        v22 = v29;
        v23 = v18 + pusResult[0];
        *a7 = v23;
        if ( v22 && v22 + v21 <= (unsigned __int64)&a1[*((unsigned __int16 *)a1 + 1)] )
        {
          v24 = NumberOfBytes_4;
          *(_WORD *)(v22 + 2) = v21;
          *(_BYTE *)(v22 + 1) = v24;
          *(_BYTE *)v22 = 18;
          *(_DWORD *)(v22 + 4) = 0;
          RtlCopySid(4 * (unsigned __int8)Sid[1] + 8, (PSID)(v22 + 8), Sid);
          memmove((void *)(v22 + 16 + 4LL * (unsigned __int8)Sid[1]), v14, v16);
          ++*((_WORD *)a1 + 2);
          *a1 = v30;
        }
        else
        {
          v11 = -1073741671;
          *a7 = (v23 + 3) & 0xFFFFFFFC;
        }
      }
    }
    else
    {
      v11 = -1073741705;
    }
  }
  if ( v14 && v14 != Src )
    ExFreePoolWithTag(v14, 0);
  return (unsigned int)v11;
}
