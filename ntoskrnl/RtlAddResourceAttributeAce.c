/*
 * XREFs of RtlAddResourceAttributeAce @ 0x1409B8350
 * Callers:
 *     <none>
 * Callees:
 *     RtlUShortAdd @ 0x140202574 (RtlUShortAdd.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     RtlCopySid @ 0x1406D4890 (RtlCopySid.c)
 *     RtlFirstFreeAce @ 0x140740C70 (RtlFirstFreeAce.c)
 *     RtlValidAcl @ 0x1407BB670 (RtlValidAcl.c)
 *     RtlValidSid @ 0x1407C92A0 (RtlValidSid.c)
 *     RtlpConvertAbsoluteToRelativeSecurityAttribute @ 0x1409B8828 (RtlpConvertAbsoluteToRelativeSecurityAttribute.c)
 *     RtlpValidAttributeInfo @ 0x1409B8D10 (RtlpValidAttributeInfo.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
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
  __int64 Pool2; // rax
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
  unsigned int Size; // [rsp+2Ch] [rbp-DCh] BYREF
  int Size_4; // [rsp+30h] [rbp-D8h]
  __int64 v29; // [rsp+38h] [rbp-D0h] BYREF
  int v30; // [rsp+40h] [rbp-C8h]
  unsigned __int16 v31; // [rsp+44h] [rbp-C4h]
  _BYTE Src[256]; // [rsp+48h] [rbp-C0h] BYREF

  Size_4 = a3;
  v29 = 0LL;
  v30 = 0;
  v31 = 256;
  memset(Src, 0, sizeof(Src));
  Size = 256;
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
  v11 = RtlpConvertAbsoluteToRelativeSecurityAttribute(*(_QWORD *)(a6 + 8), Src, &Size);
  if ( v11 == -1073741789 )
  {
    Pool2 = ExAllocatePool2(65LL, Size, 1649439826LL);
    v14 = (_BYTE *)Pool2;
    if ( !Pool2 )
      return (unsigned int)-1073741801;
    v11 = RtlpConvertAbsoluteToRelativeSecurityAttribute(*(_QWORD *)(a6 + 8), Pool2, &Size);
  }
  if ( v11 >= 0 )
  {
    if ( RtlValidAcl((__int64)a1) && RtlFirstFreeAce((__int64)a1, &v29) )
    {
      v16 = Size;
      v17 = 4 * ((unsigned __int8)Sid[1] + 4);
      pusResult[0] = v17;
      if ( Size > 0xFFFF || RtlUShortAdd(v17, Size, pusResult) < 0 )
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
          v18 += *((unsigned __int16 *)v19 + 1);
          *a7 = v18;
        }
        v21 = pusResult[0];
        v22 = v29;
        v23 = v18 + pusResult[0];
        *a7 = v23;
        if ( v22 && v22 + v21 <= (unsigned __int64)&a1[*((unsigned __int16 *)a1 + 1)] )
        {
          v24 = Size_4;
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
