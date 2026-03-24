/*
 * XREFs of RtlAddProcessTrustLabelAce @ 0x14079DD90
 * Callers:
 *     SepSetProcessTrustLabelAceForToken @ 0x1403F8C44 (SepSetProcessTrustLabelAceForToken.c)
 *     RtlpNewSecurityObject @ 0x1406FF5F0 (RtlpNewSecurityObject.c)
 *     SeMakeSystemToken @ 0x140A47F10 (SeMakeSystemToken.c)
 * Callees:
 *     RtlIsValidProcessTrustLabelSid @ 0x14027E770 (RtlIsValidProcessTrustLabelSid.c)
 *     RtlFirstFreeAce @ 0x14065B880 (RtlFirstFreeAce.c)
 *     RtlValidAcl @ 0x14065C5C0 (RtlValidAcl.c)
 *     RtlValidSid @ 0x14065C720 (RtlValidSid.c)
 *     RtlCopySid @ 0x140706ED0 (RtlCopySid.c)
 */

__int64 __fastcall RtlAddProcessTrustLabelAce(
        unsigned __int8 *a1,
        unsigned int a2,
        int a3,
        unsigned __int8 *a4,
        char a5,
        int a6)
{
  unsigned int v10; // esi
  int v11; // r14d
  __int64 v12; // r8
  unsigned __int16 v13; // dx
  unsigned __int8 v14; // cl
  __int64 result; // rax
  __int64 v16; // [rsp+50h] [rbp+8h] BYREF

  v16 = 0LL;
  if ( !a1 || !RtlValidAcl((__int64)a1) )
    return 3221225591LL;
  if ( a5 != 20 )
    return 3221225485LL;
  if ( !RtlValidSid(a4) )
    return 3221225592LL;
  if ( !RtlIsValidProcessTrustLabelSid((__int64)a4) )
    return 3221225485LL;
  v10 = *a1;
  if ( (unsigned __int8)v10 > 4u || a2 > 4 )
    return 3221225561LL;
  if ( (a3 & 0xFFFFFFE0) != 0 )
    return 3221225485LL;
  v11 = a6;
  if ( (a6 & 0xFF000000) != 0 )
    return 3221225485LL;
  if ( !RtlFirstFreeAce((__int64)a1, &v16) )
    return 3221225591LL;
  v12 = v16;
  v13 = 4 * (a4[1] + 4);
  if ( !v16 || v16 + (unsigned __int64)v13 > (unsigned __int64)&a1[*((unsigned __int16 *)a1 + 1)] )
    return 3221225625LL;
  *(_WORD *)(v16 + 2) = v13;
  *(_BYTE *)(v12 + 1) = a3;
  *(_BYTE *)v12 = 20;
  *(_DWORD *)(v12 + 4) = v11;
  RtlCopySid(4 * a4[1] + 8, (PSID)(v12 + 8), a4);
  ++*((_WORD *)a1 + 2);
  v14 = v10;
  if ( v10 <= a2 )
    v14 = a2;
  result = 0LL;
  *a1 = v14;
  return result;
}
