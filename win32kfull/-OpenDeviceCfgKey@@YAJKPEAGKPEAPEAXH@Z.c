__int64 __fastcall OpenDeviceCfgKey(unsigned int a1, unsigned __int16 *a2, ACCESS_MASK a3, void **a4, int a5)
{
  NTSTATUS v8; // ebx
  NTSTATUS v9; // eax
  bool v11; // zf
  ULONG Disposition; // [rsp+40h] [rbp-C0h] BYREF
  void *KeyHandle; // [rsp+48h] [rbp-B8h] BYREF
  struct _UNICODE_STRING v14; // [rsp+50h] [rbp-B0h] BYREF
  struct _UNICODE_STRING KeyPath; // [rsp+60h] [rbp-A0h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+70h] [rbp-90h] BYREF
  char v17; // [rsp+A0h] [rbp-60h] BYREF

  KeyHandle = 0LL;
  if ( a1 <= 0x15E )
  {
    *(_QWORD *)&v14.Length = 45875200LL;
    v14.Buffer = (PWSTR)&v17;
    if ( a1 == 122 )
    {
      v11 = RtlCompareMemory(L"\\Software\\Microsoft\\Windows\\CurrentVersion\\PrecisionTouchPad", a2, 0x7AuLL) == 122;
    }
    else
    {
      if ( a1 != 136 )
        goto LABEL_4;
      v11 = RtlCompareMemory(L"\\Software\\Microsoft\\Windows\\CurrentVersion\\PrecisionTouchPad\\Status", a2, 0x88uLL) == 136;
    }
    if ( v11 )
    {
      if ( grpWinStaList )
        v8 = RtlUnicodeStringCopy(&v14, (const struct _UNICODE_STRING *)(grpWinStaList + 200LL));
      else
        v8 = -1073741595;
      goto LABEL_6;
    }
LABEL_4:
    KeyPath = 0LL;
    v8 = RtlFormatCurrentUserKeyPath(&KeyPath);
    if ( v8 < 0 )
      return (unsigned int)v8;
    v8 = RtlUnicodeStringCopy(&v14, &KeyPath);
    RtlFreeUnicodeString(&KeyPath);
LABEL_6:
    if ( v8 >= 0 )
    {
      v8 = RtlUnicodeStringCatString(&v14, a2);
      if ( v8 >= 0 )
      {
        ObjectAttributes.ObjectName = &v14;
        *(_QWORD *)&ObjectAttributes.Length = 48LL;
        *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
        ObjectAttributes.RootDirectory = 0LL;
        if ( a5 )
        {
          Disposition = 0;
          v9 = ZwCreateKey(&KeyHandle, a3, &ObjectAttributes, 0, 0LL, 0, &Disposition);
        }
        else
        {
          v9 = ZwOpenKey(&KeyHandle, a3, &ObjectAttributes);
        }
        v8 = v9;
        if ( v9 >= 0 )
          *a4 = KeyHandle;
      }
    }
    return (unsigned int)v8;
  }
  return 2147483653LL;
}
