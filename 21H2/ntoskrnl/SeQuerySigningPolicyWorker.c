/*
 * XREFs of SeQuerySigningPolicyWorker @ 0x1406718F8
 * Callers:
 *     SeQuerySigningPolicy @ 0x14066F4C0 (SeQuerySigningPolicy.c)
 * Callees:
 *     AppModelPolicy_GetPolicy_Internal @ 0x140203E24 (AppModelPolicy_GetPolicy_Internal.c)
 *     SepIsNgenImage @ 0x140671B34 (SepIsNgenImage.c)
 *     SeQueryInformationToken @ 0x14079F290 (SeQueryInformationToken.c)
 *     SepIsLockedDown @ 0x1409C599C (SepIsLockedDown.c)
 */

__int64 __fastcall SeQuerySigningPolicyWorker(
        PACCESS_TOKEN Token,
        __int64 a2,
        char a3,
        unsigned __int8 a4,
        unsigned __int8 a5,
        unsigned __int8 *a6,
        unsigned __int8 *a7,
        _BYTE *a8)
{
  int Policy_Internal; // eax
  NTSTATUS IsLockedDown; // edx
  unsigned __int8 v14; // cl
  unsigned __int8 *v15; // rax
  unsigned __int8 v17; // al
  unsigned __int8 v18; // dl
  char v19; // cl
  unsigned __int8 v20; // dl
  __int64 v21; // rcx
  char v22[4]; // [rsp+30h] [rbp-20h] BYREF
  PVOID TokenInformation; // [rsp+34h] [rbp-1Ch] BYREF
  __int64 v24; // [rsp+40h] [rbp-10h] BYREF
  __int64 v25; // [rsp+48h] [rbp-8h] BYREF

  v22[0] = 0;
  v24 = 0LL;
  HIDWORD(TokenInformation) = 0;
  v25 = 0LL;
  Policy_Internal = AppModelPolicy_GetPolicy_Internal(
                      (__int64)Token,
                      a2,
                      (int *)&TokenInformation + 1,
                      (int *)&v24,
                      &v25);
  IsLockedDown = Policy_Internal;
  if ( Policy_Internal >= 0 )
  {
    if ( (unsigned int)(HIDWORD(TokenInformation) - 3014657) <= 1
      && (HIDWORD(TokenInformation) != 3014658 || (unsigned int)BYTE4(v24) - 4 <= 1) )
    {
      if ( (a3 & 1) == 0 )
      {
        if ( BYTE4(v24) <= 1u )
        {
          v14 = a5;
        }
        else
        {
          if ( BYTE4(v24) == 2 )
          {
            *a6 = 8;
            *a7 = a5;
            goto LABEL_9;
          }
          if ( BYTE4(v24) == 3 )
          {
            v14 = 6;
          }
          else
          {
            if ( BYTE4(v24) <= 3u )
              return 0;
            if ( BYTE4(v24) <= 5u )
            {
              v20 = a5 != 0 ? 3 : 0;
              *a6 = v20;
              *a7 = v20;
              goto LABEL_9;
            }
            if ( BYTE4(v24) != 6 )
              return 0;
            v14 = a5 != 2 ? 0 : 2;
          }
        }
        v15 = a6;
        goto LABEL_7;
      }
      if ( !a4 )
      {
        v19 = 18;
        *a6 = 4;
        *a7 = 4;
        goto LABEL_32;
      }
    }
    if ( a2 && (unsigned __int8)SepIsNgenImage(a2, (unsigned int)Policy_Internal) )
    {
      LODWORD(TokenInformation) = 0;
      IsLockedDown = SeQueryInformationToken(Token, TokenIsAppContainer, &TokenInformation);
      if ( IsLockedDown < 0 )
        return (unsigned int)IsLockedDown;
      *a6 = 11;
      if ( (a3 & 1) == 0 )
      {
        LOBYTE(v21) = a5;
        if ( (_DWORD)TokenInformation )
        {
          IsLockedDown = SepIsLockedDown(v21, v22);
          if ( IsLockedDown < 0 )
            return (unsigned int)IsLockedDown;
          if ( v22[0] )
            v14 = 6;
          else
            v14 = a5 != 2 ? 0 : 2;
          goto LABEL_8;
        }
        *a7 = a5;
        v19 = a5 >= 2u ? 0x21 : 0;
LABEL_32:
        *a8 = v19;
        return 0;
      }
      if ( !a4 )
      {
        *a7 = (_DWORD)TokenInformation != 0 ? 6 : 8;
        *a8 = 33;
        return 0;
      }
    }
    else if ( (a3 & 1) == 0 )
    {
      v14 = a5;
      v15 = a6;
LABEL_7:
      *v15 = v14;
LABEL_8:
      *a7 = v14;
LABEL_9:
      *a8 = 0;
      return 0;
    }
    v17 = a4;
    if ( !a4 )
      v17 = 18;
    *a8 = v17;
    *a6 = *((_BYTE *)&SeProtectedMapping + 2 * ((unsigned __int64)v17 >> 4));
    v18 = *((_BYTE *)&SeProtectedMapping + 2 * ((unsigned __int64)(unsigned __int8)*a8 >> 4) + 1);
    *a7 = v18;
    if ( a5 > *a6 )
    {
      *a6 = a5;
      v18 = *a7;
    }
    if ( a5 > v18 )
      *a7 = a5;
    return 0;
  }
  return (unsigned int)IsLockedDown;
}
