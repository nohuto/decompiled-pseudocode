int CmpCreatePerfKeys()
{
  int result; // eax
  unsigned __int16 v1; // cx
  __int64 v2; // r9
  int v3; // eax
  HANDLE KeyHandle; // [rsp+30h] [rbp-50h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+38h] [rbp-48h] BYREF
  wchar_t pszDest[8]; // [rsp+68h] [rbp-18h] BYREF

  KeyHandle = 0LL;
  memset(&ObjectAttributes.Attributes + 1, 0, 20);
  ObjectAttributes.RootDirectory = 0LL;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&CmpPerflibPathString;
  ObjectAttributes.Attributes = 576;
  result = ZwOpenKey(&KeyHandle, 0x20006u, &ObjectAttributes);
  if ( result >= 0 )
  {
    CmpCreatePredefined(KeyHandle, L"009", -2147483568LL);
    CmpCreatePredefined(KeyHandle, L"CurrentLanguage", -2147483552LL);
    if ( PsDefaultSystemLocaleId != 1033 )
    {
      v1 = PsInstallUILanguageId;
      v2 = 4LL;
      v3 = PsInstallUILanguageId & 0x3FF;
      if ( v3 == 4 )
      {
        if ( (PsInstallUILanguageId & 0xFC00) != 0x800 )
          v1 = 1028;
      }
      else if ( v3 == 22 )
      {
        if ( (PsInstallUILanguageId & 0xFC00) != 0x400 )
          v1 = 2070;
      }
      else
      {
        v1 = PsInstallUILanguageId & 0x3FF;
        v2 = 3LL;
      }
      RtlStringCbPrintfW(pszDest, 0xAuLL, L"%0*X", v2, v1);
      CmpCreatePredefined(KeyHandle, pszDest, -2147483552LL);
    }
    return ZwClose(KeyHandle);
  }
  return result;
}
