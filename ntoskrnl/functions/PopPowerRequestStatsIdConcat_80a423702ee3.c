__int64 __fastcall PopPowerRequestStatsIdConcat(PUNICODE_STRING DestinationString, PCUNICODE_STRING SourceString)
{
  unsigned int v4; // edi
  wchar_t *Pool2; // rax
  wchar_t *v6; // rbp
  wchar_t *Buffer; // rdx
  NTSTATUS v8; // edx
  const wchar_t *v9; // r10
  __int16 v10; // di
  __int64 v11; // r11
  __int16 v12; // r8
  size_t v13; // r9
  char *v14; // rcx
  size_t v16; // [rsp+20h] [rbp-38h]
  ULONG v17; // [rsp+28h] [rbp-30h]
  size_t pcchDest; // [rsp+60h] [rbp+8h] BYREF
  size_t pcchDestLength; // [rsp+70h] [rbp+18h] BYREF
  wchar_t *ppszDest; // [rsp+78h] [rbp+20h] BYREF

  if ( !DestinationString )
    return (unsigned int)-1073741811;
  if ( !SourceString )
    return (unsigned int)-1073741811;
  v4 = DestinationString->Length + SourceString->Length + 8;
  if ( v4 > 0xFFFF )
    return (unsigned int)-1073741811;
  if ( DestinationString->MaximumLength < v4 )
  {
    Pool2 = (wchar_t *)ExAllocatePool2(256LL, v4, 1414616912LL);
    v6 = Pool2;
    if ( !Pool2 )
      return (unsigned int)-1073741670;
    Buffer = DestinationString->Buffer;
    if ( Buffer )
    {
      memmove(Pool2, Buffer, DestinationString->Length);
      ExFreePoolWithTag(DestinationString->Buffer, 0x54515750u);
    }
    DestinationString->Buffer = v6;
    DestinationString->MaximumLength = v4;
  }
  ppszDest = 0LL;
  pcchDest = 0LL;
  pcchDestLength = 0LL;
  v8 = RtlUnicodeStringValidateDestWorker(DestinationString, &ppszDest, &pcchDest, &pcchDestLength, v16, v17);
  if ( v8 >= 0 )
  {
    v9 = L" (";
    v10 = pcchDestLength;
    v11 = 0x7FFFLL;
    v8 = 0;
    v12 = 0;
    v13 = pcchDest - pcchDestLength;
    if ( pcchDest == pcchDestLength )
    {
LABEL_24:
      v8 = -2147483643;
    }
    else
    {
      v14 = (char *)ppszDest + 2 * pcchDestLength - (_QWORD)L" (";
      while ( v11 )
      {
        if ( *v9 )
        {
          *(const wchar_t *)((char *)v9 + (_QWORD)v14) = *v9;
          --v11;
          ++v9;
          ++v12;
          if ( --v13 )
            continue;
        }
        if ( v13 || !v11 || !*v9 )
          break;
        goto LABEL_24;
      }
    }
    DestinationString->Length = 2 * (v10 + v12);
    if ( v8 >= 0 )
    {
      v8 = RtlUnicodeStringCat(DestinationString, SourceString);
      if ( v8 >= 0 )
      {
        v8 = RtlUnicodeStringCatString(DestinationString, L")");
        if ( v8 >= 0 )
          DestinationString->Buffer[(unsigned __int64)DestinationString->Length >> 1] = 0;
      }
    }
  }
  return (unsigned int)v8;
}
