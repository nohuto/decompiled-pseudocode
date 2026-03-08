/*
 * XREFs of SddlAddAccessFilterAce @ 0x1409CF6F0
 * Callers:
 *     LocalGetAclForString @ 0x14074F18C (LocalGetAclForString.c)
 * Callees:
 *     RtlLengthSid @ 0x140245EC0 (RtlLengthSid.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     RtlCopySid @ 0x1406D4890 (RtlCopySid.c)
 *     RtlFirstFreeAce @ 0x140740C70 (RtlFirstFreeAce.c)
 *     RtlValidAcl @ 0x1407BB670 (RtlValidAcl.c)
 *     RtlValidSid @ 0x1407C92A0 (RtlValidSid.c)
 */

__int64 __fastcall SddlAddAccessFilterAce(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 a4,
        __int64 a5,
        int a6,
        _DWORD *Src,
        unsigned __int16 a8)
{
  __int64 result; // rax
  char v12; // r15
  int v13; // ecx
  bool v14; // zf
  int v15; // ecx
  unsigned int v16; // ebx
  ULONG v17; // edx
  __int64 v18; // r14
  ULONG v19; // eax
  ULONG v20; // eax
  char v21; // [rsp+20h] [rbp-30h]
  __int64 v22; // [rsp+28h] [rbp-28h] BYREF
  int v23; // [rsp+30h] [rbp-20h]
  unsigned __int16 v24; // [rsp+34h] [rbp-1Ch]
  int v25; // [rsp+38h] [rbp-18h]
  unsigned __int16 v26; // [rsp+3Ch] [rbp-14h]

  v22 = 0LL;
  v21 = a3;
  v25 = 0;
  v26 = 256;
  v23 = 0;
  v24 = 4864;
  if ( !a1 || !RtlValidAcl(a1) )
    return 3221225591LL;
  if ( !Src || (unsigned __int16)(a8 - 6) > 0xFFF8u || *Src != 2020897377 )
    return 3221225485LL;
  if ( !RtlValidSid((PSID)a4) )
    return 3221225592LL;
  v12 = 2;
  if ( (a3 & 0x40) != 0 )
  {
    if ( *(_BYTE *)(a4 + 1) != 2 )
      return 3221225485LL;
    v13 = *(_DWORD *)(a4 + 2) - v23;
    if ( !v13 )
      v13 = *(unsigned __int16 *)(a4 + 6) - v24;
    if ( v13 )
      return 3221225485LL;
    if ( *(_DWORD *)(a4 + 8) )
      goto LABEL_21;
    v14 = *(_DWORD *)(a4 + 12) == 0;
  }
  else
  {
    v15 = *(_DWORD *)(a4 + 2) - v25;
    if ( !v15 )
      v15 = *(unsigned __int16 *)(a4 + 6) - v26;
    if ( v15 || *(_BYTE *)(a4 + 1) != 1 )
      return 3221225485LL;
    v14 = *(_DWORD *)(a4 + 8) == 0;
  }
  if ( !v14 )
    return 3221225485LL;
LABEL_21:
  if ( *(_BYTE *)a1 > 4u )
    return 3221225561LL;
  if ( *(_BYTE *)a1 > 2u )
    v12 = *(_BYTE *)a1;
  if ( (a3 & 0xFFFFFFA0) != 0 || (a6 & 0xFF000000) != 0 )
    return 3221225485LL;
  if ( !RtlFirstFreeAce(a1, &v22) )
    return 3221225591LL;
  v16 = (a8 + 3) & 0xFFFFFFFC;
  v17 = RtlLengthSid((PSID)a4) + v16 + 8;
  if ( v17 < v16 )
    return 534LL;
  if ( v17 > 0xFFFF )
    return 3221225485LL;
  v18 = v22;
  if ( !v22 || v22 + (unsigned __int64)v17 > a1 + (unsigned __int64)*(unsigned __int16 *)(a1 + 2) )
    return 3221225625LL;
  *(_BYTE *)(v22 + 1) = v21;
  *(_BYTE *)v18 = 21;
  *(_WORD *)(v18 + 2) = v17;
  *(_DWORD *)(v18 + 4) = a6;
  v19 = RtlLengthSid((PSID)a4);
  RtlCopySid(v19, (PSID)(v18 + 8), (PSID)a4);
  v20 = RtlLengthSid((PSID)a4);
  memmove((void *)(v20 + v18 + 8), Src, a8);
  ++*(_WORD *)(a1 + 4);
  result = 0LL;
  *(_BYTE *)a1 = v12;
  return result;
}
