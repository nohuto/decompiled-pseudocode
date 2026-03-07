NTSTATUS __stdcall RtlUnicodeStringCatString(PUNICODE_STRING DestinationString, NTSTRSAFE_PCWSTR pszSrc)
{
  int v4; // r8d
  __int64 v5; // r10
  __int16 v6; // r11
  __int16 v7; // dx
  size_t v8; // r9
  char *v9; // rcx
  size_t v11; // [rsp+20h] [rbp-28h]
  ULONG v12; // [rsp+28h] [rbp-20h]
  wchar_t *v13; // [rsp+30h] [rbp-18h] BYREF
  size_t v14; // [rsp+60h] [rbp+18h] BYREF
  size_t v15; // [rsp+68h] [rbp+20h] BYREF

  v13 = 0LL;
  v14 = 0LL;
  v15 = 0LL;
  v4 = RtlUnicodeStringValidateDestWorker(DestinationString, &v13, &v14, &v15, v11, v12);
  if ( v4 >= 0 )
  {
    v5 = 0x7FFFLL;
    v6 = v15;
    v4 = 0;
    v7 = 0;
    v8 = v14 - v15;
    if ( v14 == v15 )
    {
LABEL_11:
      if ( *pszSrc )
        v4 = -2147483643;
    }
    else
    {
      v9 = (char *)v13 + 2 * v15 - (_QWORD)pszSrc;
      while ( v5 )
      {
        if ( *pszSrc )
        {
          *(NTSTRSAFE_PCWSTR)((char *)pszSrc + (_QWORD)v9) = *pszSrc;
          --v5;
          ++pszSrc;
          ++v7;
          if ( --v8 )
            continue;
        }
        if ( v8 || !v5 )
          break;
        goto LABEL_11;
      }
    }
    DestinationString->Length = 2 * (v6 + v7);
  }
  return v4;
}
