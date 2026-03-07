_BOOL8 __fastcall WritePredictionSettings(
        struct tagDEVICECONFIG_SETTING *a1,
        const unsigned __int16 *a2,
        const unsigned __int16 *a3)
{
  unsigned int v3; // edi
  int v4; // ebx
  const unsigned __int16 **v5; // rsi
  void *KeyHandle; // [rsp+38h] [rbp-D0h] BYREF
  struct _UNICODE_STRING v8; // [rsp+40h] [rbp-C8h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-B8h] BYREF
  char v10; // [rsp+88h] [rbp-80h] BYREF

  *(_QWORD *)&v8.Length = 45875200LL;
  KeyHandle = 0LL;
  *(&ObjectAttributes.Length + 1) = 0;
  v3 = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  v8.Buffer = (PWSTR)&v10;
  v4 = RtlUnicodeStringCopyString(&v8, a2);
  if ( v4 >= 0 )
  {
    v4 = RtlUnicodeStringCatString(&v8, (wchar_t *)L"\\Software\\Microsoft\\TouchPrediction");
    if ( v4 >= 0 )
    {
      ObjectAttributes.Length = 48;
      ObjectAttributes.ObjectName = &v8;
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.Attributes = 576;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      v4 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
      if ( v4 >= 0 )
      {
        v5 = (const unsigned __int16 **)&gaPredictionSettings;
        do
        {
          v4 = WritePointerDeviceCfgSetting(KeyHandle, *v5, 4u, (unsigned __int8 *)&dword_1C035720C[4 * v3], 4u);
          if ( v4 < 0 )
            break;
          ++v3;
          v5 += 2;
        }
        while ( v3 < 3 );
        ZwClose(KeyHandle);
      }
    }
  }
  return v4 >= 0;
}
