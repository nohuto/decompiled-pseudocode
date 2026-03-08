/*
 * XREFs of SeQuerySigningPolicyWorker @ 0x14070BBF8
 * Callers:
 *     SeQuerySigningPolicy @ 0x14070DD2C (SeQuerySigningPolicy.c)
 * Callees:
 *     AppModelPolicy_GetPolicy_Internal @ 0x140298B38 (AppModelPolicy_GetPolicy_Internal.c)
 *     SepIsNgenImage @ 0x14078E8D4 (SepIsNgenImage.c)
 *     SeQueryInformationToken @ 0x1407B9760 (SeQueryInformationToken.c)
 *     SepIsLockedDown @ 0x1409C5D5C (SepIsLockedDown.c)
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
  unsigned __int8 *v15; // rax
  unsigned __int8 v17; // al
  unsigned __int8 v18; // cl
  unsigned __int8 v19; // dl
  NTSTATUS v20; // eax
  char v21[4]; // [rsp+30h] [rbp-20h] BYREF
  PVOID TokenInformation; // [rsp+34h] [rbp-1Ch] BYREF
  __int64 v23; // [rsp+40h] [rbp-10h] BYREF
  __int64 v24; // [rsp+48h] [rbp-8h] BYREF

  v21[0] = 0;
  v23 = 0LL;
  HIDWORD(TokenInformation) = 0;
  v24 = 0LL;
  LODWORD(v12) = AppModelPolicy_GetPolicy_Internal((int)Token, a2, (int *)&TokenInformation + 1, (int *)&v23, &v24);
  if ( (int)v12 >= 0 )
  {
    if ( (unsigned int)(HIDWORD(TokenInformation) - 3014657) > 1
      || HIDWORD(TokenInformation) == 3014658 && (unsigned int)BYTE4(v23) - 4 > 1 )
    {
      v13 = a3 & 1;
    }
    else
    {
      v13 = a3 & 1;
      if ( !v13 )
      {
        if ( !BYTE4(v23) || BYTE4(v23) == 1 )
        {
          v14 = a5;
        }
        else
        {
          switch ( BYTE4(v23) )
          {
            case 2u:
              *a6 = 8;
              *a7 = a5;
              goto LABEL_10;
            case 3u:
              v14 = 6;
              break;
            case 4u:
            case 5u:
              v19 = a5 != 0 ? 3 : 0;
              *a6 = v19;
              *a7 = v19;
              goto LABEL_10;
            case 6u:
              v14 = a5 != 2 ? 0 : 2;
              break;
            default:
              goto LABEL_11;
          }
        }
        v15 = a6;
        goto LABEL_8;
      }
      if ( !a4 )
      {
        *a6 = 4;
        *a7 = 4;
        *a8 = 18;
        goto LABEL_11;
      }
    }
    if ( a2 && (unsigned __int8)SepIsNgenImage(a2) )
    {
      LODWORD(TokenInformation) = 0;
      v20 = SeQueryInformationToken(Token, TokenIsAppContainer, &TokenInformation);
      v12 = (unsigned int)v20;
      if ( v20 < 0 )
        return (unsigned int)v12;
      *a6 = 11;
      if ( !v13 )
      {
        LOBYTE(v12) = a5;
        if ( !(_DWORD)TokenInformation )
        {
          *a7 = a5;
          *a8 = a5 >= 2u ? 0x21 : 0;
          goto LABEL_11;
        }
        LODWORD(v12) = SepIsLockedDown(v12, v21);
        if ( (int)v12 < 0 )
          return (unsigned int)v12;
        if ( v21[0] )
          v14 = 6;
        else
          v14 = a5 != 2 ? 0 : 2;
        goto LABEL_9;
      }
      if ( !a4 )
      {
        *a7 = (_DWORD)TokenInformation != 0 ? 6 : 8;
        *a8 = 33;
        goto LABEL_11;
      }
    }
    else if ( !v13 )
    {
      v14 = a5;
      v15 = a6;
LABEL_8:
      *v15 = v14;
LABEL_9:
      *a7 = v14;
LABEL_10:
      *a8 = 0;
LABEL_11:
      LODWORD(v12) = 0;
      return (unsigned int)v12;
    }
    v17 = a4;
    if ( !a4 )
      v17 = 18;
    *a8 = v17;
    *a6 = *((_BYTE *)&SeProtectedMapping + 2 * ((unsigned __int64)v17 >> 4));
    *a7 = *((_BYTE *)&SeProtectedMapping + 2 * ((unsigned __int64)*a8 >> 4) + 1);
    v18 = *a6;
    if ( a5 > *a6 )
      v18 = a5;
    *a6 = v18;
    if ( a5 > *a7 )
      *a7 = a5;
    goto LABEL_11;
  }
  return (unsigned int)v12;
}
