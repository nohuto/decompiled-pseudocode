/*
 * XREFs of RtlAddAccessFilterAce @ 0x1409B8030
 * Callers:
 *     <none>
 * Callees:
 *     RtlIsValidProcessTrustLabelSid @ 0x1402480E0 (RtlIsValidProcessTrustLabelSid.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     RtlCopySid @ 0x1406D4890 (RtlCopySid.c)
 *     RtlFirstFreeAce @ 0x140740C70 (RtlFirstFreeAce.c)
 *     RtlValidAcl @ 0x1407BB670 (RtlValidAcl.c)
 *     RtlValidSid @ 0x1407C92A0 (RtlValidSid.c)
 */

__int64 __fastcall RtlAddAccessFilterAce(
        unsigned __int8 *a1,
        unsigned int a2,
        int a3,
        __int64 a4,
        char a5,
        int a6,
        _DWORD *Src,
        unsigned __int16 a8)
{
  __int64 result; // rax
  int v13; // ecx
  unsigned int v14; // eax
  unsigned __int8 v15; // r15
  unsigned int v16; // ecx
  unsigned int v17; // r8d
  __int64 v18; // rsi
  void *v19; // rdx
  char v20; // [rsp+20h] [rbp-20h]
  __int64 v21; // [rsp+28h] [rbp-18h] BYREF
  int v22; // [rsp+30h] [rbp-10h]
  unsigned __int16 v23; // [rsp+34h] [rbp-Ch]

  v20 = a3;
  v21 = 0LL;
  v22 = 0;
  v23 = 256;
  if ( !a1 || !RtlValidAcl((__int64)a1) )
    return 3221225591LL;
  if ( !Src || (unsigned __int16)(a8 - 6) > 0xFFF8u || *Src != 2020897377 || a5 != 21 )
    return 3221225485LL;
  if ( !RtlValidSid((PSID)a4) )
    return 3221225592LL;
  if ( (a3 & 0x40) != 0 )
  {
    if ( !RtlIsValidProcessTrustLabelSid(a4) )
      return 3221225485LL;
  }
  else
  {
    v13 = *(_DWORD *)(a4 + 2) - v22;
    if ( !v13 )
      v13 = *(unsigned __int16 *)(a4 + 6) - v23;
    if ( v13 || *(_BYTE *)(a4 + 1) != 1 || *(_DWORD *)(a4 + 8) )
      return 3221225485LL;
  }
  v14 = *a1;
  if ( (unsigned __int8)v14 > 4u || a2 > 4 )
    return 3221225561LL;
  v15 = *a1;
  if ( v14 <= a2 )
    v15 = a2;
  if ( (a3 & 0xFFFFFFA0) != 0 || (a6 & 0xFF000000) != 0 )
    return 3221225485LL;
  if ( !RtlFirstFreeAce((__int64)a1, &v21) )
    return 3221225591LL;
  v16 = (a8 + 3) & 0xFFFFFFFC;
  v17 = v16 + 4 * (*(unsigned __int8 *)(a4 + 1) + 4);
  if ( v17 < v16 )
    return 3221225621LL;
  if ( v17 > 0xFFFF )
    return 3221225485LL;
  v18 = v21;
  if ( !v21 || v21 + (unsigned __int64)v17 > (unsigned __int64)&a1[*((unsigned __int16 *)a1 + 1)] )
    return 3221225625LL;
  v19 = (void *)(v21 + 8);
  *(_WORD *)(v21 + 2) = v17;
  *(_BYTE *)(v18 + 1) = v20;
  *(_BYTE *)v18 = 21;
  *(_DWORD *)(v18 + 4) = a6;
  RtlCopySid(4 * *(unsigned __int8 *)(a4 + 1) + 8, v19, (PSID)a4);
  memmove((void *)(v18 + 4 * (*(unsigned __int8 *)(a4 + 1) + 4LL)), Src, a8);
  ++*((_WORD *)a1 + 2);
  result = 0LL;
  *a1 = v15;
  return result;
}
