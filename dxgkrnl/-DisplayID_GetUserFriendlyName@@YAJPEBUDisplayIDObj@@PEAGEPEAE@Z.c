__int64 __fastcall DisplayID_GetUserFriendlyName(
        const struct DisplayIDObj *a1,
        unsigned __int16 *a2,
        __int64 a3,
        unsigned __int8 *a4)
{
  __int64 result; // rax
  __int64 v7; // rdx
  unsigned __int8 v8; // bl
  unsigned __int8 v9; // al
  unsigned __int16 *v10; // rsi
  __int64 v11; // rbp
  PUCHAR SourceCharacter; // [rsp+20h] [rbp-28h] BYREF
  const struct _DISPLAYID_PRODUCT_IDENTIFICATION_BLOCK *v13; // [rsp+58h] [rbp+10h] BYREF

  if ( a2 && a4 )
  {
    *a4 = 0;
    v13 = 0LL;
    result = DisplayID_Get_PRODUCT_IDENTIFICATION_BLOCK(a1, &v13);
    if ( (int)result < 0 )
      return result;
    if ( !DisplayID_ProductId_Parser::IsValidBlock((DisplayID_ProductId_Parser *)&v13) )
      return 3221225659LL;
    v8 = *(_BYTE *)(v7 + 14);
    SourceCharacter = (PUCHAR)((v7 + 15) & -(__int64)(v8 != 0));
    if ( v8 <= 0xDu )
    {
      v9 = v8;
      if ( !v8 )
      {
LABEL_11:
        *a4 = v8;
        a2[v8] = 0;
        return 0LL;
      }
    }
    else
    {
      v8 = 13;
      v9 = 13;
    }
    v10 = a2;
    v11 = v9;
    do
    {
      *v10++ = RtlAnsiCharToUnicodeChar(&SourceCharacter);
      --v11;
    }
    while ( v11 );
    goto LABEL_11;
  }
  return 3221225485LL;
}
