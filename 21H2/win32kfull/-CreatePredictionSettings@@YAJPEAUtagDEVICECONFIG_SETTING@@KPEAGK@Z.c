/*
 * XREFs of ?CreatePredictionSettings@@YAJPEAUtagDEVICECONFIG_SETTING@@KPEAGK@Z @ 0x1C0112E5C
 * Callers:
 *     ReadPointerDeviceSettingsFull @ 0x1C00A08E4 (ReadPointerDeviceSettingsFull.c)
 * Callees:
 *     ?RtlUnicodeStringCatString@@YAJPEAU_UNICODE_STRING@@PEBG@Z @ 0x1C00A1014 (-RtlUnicodeStringCatString@@YAJPEAU_UNICODE_STRING@@PEBG@Z.c)
 *     ?RtlUnicodeStringCopyString@@YAJPEAU_UNICODE_STRING@@PEBG@Z @ 0x1C00A1108 (-RtlUnicodeStringCopyString@@YAJPEAU_UNICODE_STRING@@PEBG@Z.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 */

__int64 __fastcall CreatePredictionSettings(
        struct tagDEVICECONFIG_SETTING *a1,
        const unsigned __int16 *a2,
        unsigned __int16 *a3)
{
  int v4; // ebx
  ULONG v5; // r8d
  _DWORD *v6; // rdi
  __int64 v7; // r14
  ULONG Disposition[2]; // [rsp+48h] [rbp-C0h] BYREF
  void *KeyHandle; // [rsp+50h] [rbp-B8h] BYREF
  struct _UNICODE_STRING v11; // [rsp+58h] [rbp-B0h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+68h] [rbp-A0h] BYREF
  char v13; // [rsp+98h] [rbp-70h] BYREF

  *(_QWORD *)&v11.Length = 45875200LL;
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  KeyHandle = 0LL;
  v11.Buffer = (PWSTR)&v13;
  v4 = RtlUnicodeStringCopyString(&v11, a2);
  if ( v4 >= 0 )
  {
    v4 = RtlUnicodeStringCatString(&v11, L"\\Software\\Microsoft\\TouchPrediction", v5);
    if ( v4 >= 0 )
    {
      ObjectAttributes.Length = 48;
      ObjectAttributes.ObjectName = &v11;
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.Attributes = 576;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      Disposition[0] = 0;
      v4 = ZwCreateKey(&KeyHandle, 0x20019u, &ObjectAttributes, 0, 0LL, 0, Disposition);
      if ( v4 >= 0 )
      {
        v4 = 0;
        v6 = (_DWORD *)((char *)a1 + 12);
        v7 = 3LL;
        do
        {
          if ( (int)ReadPointerDeviceCfgDWORDSetting(KeyHandle, a1) < 0 )
            *v6 = -1;
          a1 = (struct tagDEVICECONFIG_SETTING *)((char *)a1 + 16);
          v6 += 4;
          --v7;
        }
        while ( v7 );
        ZwClose(KeyHandle);
      }
    }
  }
  return (unsigned int)v4;
}
