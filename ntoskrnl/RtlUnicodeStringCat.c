NTSTATUS __stdcall RtlUnicodeStringCat(PUNICODE_STRING DestinationString, PCUNICODE_STRING SourceString)
{
  int v4; // r8d
  size_t v5; // r9
  __int16 v6; // dx
  __int16 v7; // bx
  size_t v8; // r9
  wchar_t *v9; // r11
  size_t v10; // r10
  char *v11; // rcx
  size_t v13; // [rsp+20h] [rbp-30h]
  ULONG v14; // [rsp+20h] [rbp-30h]
  ULONG v15; // [rsp+28h] [rbp-28h]
  size_t pcchDest; // [rsp+30h] [rbp-20h] BYREF
  size_t pcchDestLength; // [rsp+38h] [rbp-18h] BYREF
  wchar_t *ppszDest; // [rsp+40h] [rbp-10h] BYREF
  size_t pcchSrcLength; // [rsp+70h] [rbp+20h] BYREF
  wchar_t *ppszSrc; // [rsp+78h] [rbp+28h] BYREF

  ppszDest = 0LL;
  pcchDest = 0LL;
  pcchDestLength = 0LL;
  v4 = RtlUnicodeStringValidateDestWorker(DestinationString, &ppszDest, &pcchDest, &pcchDestLength, v13, v15);
  if ( v4 >= 0 )
  {
    ppszSrc = 0LL;
    pcchSrcLength = 0LL;
    v4 = RtlUnicodeStringValidateSrcWorker(SourceString, &ppszSrc, &pcchSrcLength, v5, v14);
    if ( v4 >= 0 )
    {
      v6 = 0;
      v7 = pcchDestLength;
      v4 = 0;
      v8 = pcchSrcLength;
      v9 = ppszSrc;
      v10 = pcchDest - pcchDestLength;
      if ( pcchDest == pcchDestLength )
      {
LABEL_7:
        if ( v8 )
          v4 = -2147483643;
      }
      else
      {
        v11 = (char *)ppszDest + 2 * pcchDestLength - (_QWORD)ppszSrc;
        while ( v8 )
        {
          --v8;
          *(wchar_t *)((char *)v9 + (_QWORD)v11) = *v9;
          ++v6;
          ++v9;
          if ( !--v10 )
            goto LABEL_7;
        }
      }
      DestinationString->Length = 2 * (v7 + v6);
    }
  }
  return v4;
}
