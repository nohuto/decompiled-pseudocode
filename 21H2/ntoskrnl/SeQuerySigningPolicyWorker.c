/*
 * XREFs of SeQuerySigningPolicyWorker @ 0x1406F2F48
 * Callers:
 *     SeQuerySigningPolicy @ 0x14069CAA0 (SeQuerySigningPolicy.c)
 * Callees:
 *     CmIsStateSeparationEnabled @ 0x1402486E8 (CmIsStateSeparationEnabled.c)
 *     AppModelPolicy_GetPolicy_Internal @ 0x1402F4C0C (AppModelPolicy_GetPolicy_Internal.c)
 *     Feature_WCOSDeveloperMode__private_ReportDeviceUsage @ 0x1403F8A80 (Feature_WCOSDeveloperMode__private_ReportDeviceUsage.c)
 *     Feature_WldpDeveloperMode__private_ReportDeviceUsage @ 0x1403F8AE8 (Feature_WldpDeveloperMode__private_ReportDeviceUsage.c)
 *     SeQueryInformationToken @ 0x14064B9F0 (SeQueryInformationToken.c)
 *     SepIsNgenImage @ 0x1406F31D8 (SepIsNgenImage.c)
 *     SepIsLockedDown @ 0x14091C0FC (SepIsLockedDown.c)
 */

__int64 __fastcall SeQuerySigningPolicyWorker(
        PACCESS_TOKEN Token,
        __int64 a2,
        char a3,
        unsigned __int8 a4,
        unsigned __int8 a5,
        unsigned __int8 *a6,
        unsigned __int8 *a7,
        unsigned __int8 *a8)
{
  __int64 v12; // rcx
  int v13; // edi
  unsigned __int8 v14; // cl
  unsigned __int8 v15; // dl
  NTSTATUS v16; // eax
  unsigned __int8 v17; // al
  unsigned __int8 v18; // dl
  char v20[4]; // [rsp+30h] [rbp-30h] BYREF
  PVOID TokenInformation; // [rsp+34h] [rbp-2Ch] BYREF
  _PS_PKG_CLAIM v22; // [rsp+40h] [rbp-20h] BYREF
  unsigned __int64 v23[3]; // [rsp+48h] [rbp-18h] BYREF

  v20[0] = 0;
  v22 = 0LL;
  HIDWORD(TokenInformation) = 0;
  v23[0] = 0LL;
  v23[1] = 0LL;
  LODWORD(v12) = AppModelPolicy_GetPolicy_Internal(Token, a2, (int *)&TokenInformation + 1, &v22, v23);
  if ( (int)v12 < 0 )
    return (unsigned int)v12;
  v13 = HIDWORD(TokenInformation);
  if ( (unsigned int)(HIDWORD(TokenInformation) - 3014657) <= 1 )
  {
    if ( CmIsStateSeparationEnabled() )
      Feature_WCOSDeveloperMode__private_ReportDeviceUsage();
    else
      Feature_WldpDeveloperMode__private_ReportDeviceUsage();
    if ( v13 != 3014658 || (unsigned int)LOBYTE(v22.Origin) - 4 <= 1 )
    {
      if ( (a3 & 1) != 0 )
      {
        if ( !a4 )
        {
          *a6 = 4;
          *a7 = 4;
          *a8 = 18;
LABEL_45:
          LODWORD(v12) = 0;
          return (unsigned int)v12;
        }
        goto LABEL_23;
      }
      if ( LOBYTE(v22.Origin) <= 1u )
      {
        v14 = a5;
      }
      else
      {
        if ( LOBYTE(v22.Origin) == 2 )
        {
          *a6 = 8;
          *a7 = a5;
          goto LABEL_44;
        }
        if ( LOBYTE(v22.Origin) != 3 )
        {
          if ( LOBYTE(v22.Origin) <= 3u )
            goto LABEL_45;
          if ( LOBYTE(v22.Origin) > 5u )
          {
            if ( LOBYTE(v22.Origin) != 6 )
              goto LABEL_45;
            v14 = a5 != 2 ? 0 : 2;
            goto LABEL_22;
          }
          v15 = a5 != 0 ? 3 : 0;
          *a6 = v15;
          *a7 = v15;
LABEL_44:
          *a8 = 0;
          goto LABEL_45;
        }
        v14 = 6;
      }
LABEL_22:
      *a6 = v14;
LABEL_43:
      *a7 = v14;
      goto LABEL_44;
    }
  }
LABEL_23:
  if ( !a2 || !(unsigned __int8)SepIsNgenImage(a2) )
  {
LABEL_35:
    if ( (a3 & 1) != 0 )
    {
      v17 = a4;
      if ( !a4 )
        v17 = 18;
      *a8 = v17;
      *a6 = *((_BYTE *)&SeProtectedMapping + 2 * ((unsigned __int64)v17 >> 4));
      v18 = *((_BYTE *)&SeProtectedMapping + 2 * ((unsigned __int64)*a8 >> 4) + 1);
      *a7 = v18;
      if ( a5 > *a6 )
      {
        *a6 = a5;
        v18 = *a7;
      }
      if ( a5 > v18 )
        *a7 = a5;
      goto LABEL_45;
    }
    v14 = a5;
    *a6 = a5;
    goto LABEL_43;
  }
  LODWORD(TokenInformation) = 0;
  v16 = SeQueryInformationToken(Token, TokenIsAppContainer, &TokenInformation);
  v12 = (unsigned int)v16;
  if ( v16 >= 0 )
  {
    *a6 = 11;
    if ( (a3 & 1) != 0 )
    {
      if ( !a4 )
      {
        *a7 = (_DWORD)TokenInformation != 0 ? 6 : 8;
        *a8 = 33;
        goto LABEL_45;
      }
      goto LABEL_35;
    }
    LOBYTE(v12) = a5;
    if ( !(_DWORD)TokenInformation )
    {
      *a7 = a5;
      *a8 = a5 >= 2u ? 0x21 : 0;
      goto LABEL_45;
    }
    LODWORD(v12) = SepIsLockedDown(v12, v20);
    if ( (int)v12 >= 0 )
    {
      if ( v20[0] )
        v14 = 6;
      else
        v14 = a5 != 2 ? 0 : 2;
      goto LABEL_43;
    }
  }
  return (unsigned int)v12;
}
