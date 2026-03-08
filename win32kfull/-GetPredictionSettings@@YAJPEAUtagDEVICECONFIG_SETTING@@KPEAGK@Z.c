/*
 * XREFs of ?GetPredictionSettings@@YAJPEAUtagDEVICECONFIG_SETTING@@KPEAGK@Z @ 0x1C01026A0
 * Callers:
 *     ReadPointerDeviceSettingsFull @ 0x1C0106DA0 (ReadPointerDeviceSettingsFull.c)
 * Callees:
 *     ?RtlUnicodeStringCopyString@@YAJPEAU_UNICODE_STRING@@PEBG@Z @ 0x1C01031CC (-RtlUnicodeStringCopyString@@YAJPEAU_UNICODE_STRING@@PEBG@Z.c)
 *     ?RtlUnicodeStringCatString@@YAJPEAU_UNICODE_STRING@@PEBG@Z @ 0x1C0107898 (-RtlUnicodeStringCatString@@YAJPEAU_UNICODE_STRING@@PEBG@Z.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 */

__int64 __fastcall GetPredictionSettings(
        struct tagDEVICECONFIG_SETTING *a1,
        const unsigned __int16 *a2,
        unsigned __int16 *a3)
{
  NTSTATUS PointerDeviceCfgDWORDSetting; // ebx
  _DWORD *v5; // rdi
  __int64 v6; // r14
  void *KeyHandle; // [rsp+28h] [rbp-E0h] BYREF
  struct _UNICODE_STRING v9; // [rsp+30h] [rbp-D8h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-C8h] BYREF
  char v11; // [rsp+78h] [rbp-90h] BYREF

  *(_QWORD *)&v9.Length = 45875200LL;
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  KeyHandle = 0LL;
  v9.Buffer = (PWSTR)&v11;
  PointerDeviceCfgDWORDSetting = RtlUnicodeStringCopyString(&v9, a2);
  if ( PointerDeviceCfgDWORDSetting >= 0 )
  {
    PointerDeviceCfgDWORDSetting = RtlUnicodeStringCatString(&v9, L"\\Software\\Microsoft\\TouchPrediction");
    if ( PointerDeviceCfgDWORDSetting >= 0 )
    {
      ObjectAttributes.Length = 48;
      ObjectAttributes.ObjectName = &v9;
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.Attributes = 576;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      PointerDeviceCfgDWORDSetting = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
      if ( PointerDeviceCfgDWORDSetting >= 0 )
      {
        v5 = (_DWORD *)((char *)a1 + 12);
        v6 = 3LL;
        do
        {
          PointerDeviceCfgDWORDSetting = ReadPointerDeviceCfgDWORDSetting(KeyHandle, a1);
          if ( PointerDeviceCfgDWORDSetting < 0 )
            *v5 = -1;
          a1 = (struct tagDEVICECONFIG_SETTING *)((char *)a1 + 16);
          v5 += 4;
          --v6;
        }
        while ( v6 );
        ZwClose(KeyHandle);
      }
    }
  }
  return (unsigned int)PointerDeviceCfgDWORDSetting;
}
