/*
 * XREFs of ?CreatePredictionSettings@@YAJPEAUtagDEVICECONFIG_SETTING@@KPEAGK@Z @ 0x1C00F2284
 * Callers:
 *     ReadPointerDeviceSettingsFull @ 0x1C0106DA0 (ReadPointerDeviceSettingsFull.c)
 * Callees:
 *     ?RtlUnicodeStringCopyString@@YAJPEAU_UNICODE_STRING@@PEBG@Z @ 0x1C01031CC (-RtlUnicodeStringCopyString@@YAJPEAU_UNICODE_STRING@@PEBG@Z.c)
 *     ?RtlUnicodeStringCatString@@YAJPEAU_UNICODE_STRING@@PEBG@Z @ 0x1C0107898 (-RtlUnicodeStringCatString@@YAJPEAU_UNICODE_STRING@@PEBG@Z.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 */

__int64 __fastcall CreatePredictionSettings(
        struct tagDEVICECONFIG_SETTING *a1,
        const unsigned __int16 *a2,
        unsigned __int16 *a3)
{
  NTSTATUS v4; // ebx
  _DWORD *v5; // rdi
  __int64 v6; // r14
  ULONG Disposition[2]; // [rsp+48h] [rbp-C0h] BYREF
  void *KeyHandle; // [rsp+50h] [rbp-B8h] BYREF
  struct _UNICODE_STRING v10; // [rsp+58h] [rbp-B0h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+68h] [rbp-A0h] BYREF
  char v12; // [rsp+98h] [rbp-70h] BYREF

  *(_QWORD *)&v10.Length = 45875200LL;
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  KeyHandle = 0LL;
  v10.Buffer = (PWSTR)&v12;
  v4 = RtlUnicodeStringCopyString(&v10, a2);
  if ( v4 >= 0 )
  {
    v4 = RtlUnicodeStringCatString(&v10, L"\\Software\\Microsoft\\TouchPrediction");
    if ( v4 >= 0 )
    {
      ObjectAttributes.Length = 48;
      ObjectAttributes.ObjectName = &v10;
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.Attributes = 576;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      Disposition[0] = 0;
      v4 = ZwCreateKey(&KeyHandle, 0x20019u, &ObjectAttributes, 0, 0LL, 0, Disposition);
      if ( v4 >= 0 )
      {
        v4 = 0;
        v5 = (_DWORD *)((char *)a1 + 12);
        v6 = 3LL;
        do
        {
          if ( (int)ReadPointerDeviceCfgDWORDSetting(KeyHandle, a1) < 0 )
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
  return (unsigned int)v4;
}
