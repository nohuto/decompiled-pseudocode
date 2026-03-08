/*
 * XREFs of WriteTiltCalibrationData @ 0x1C01A6CF4
 * Callers:
 *     _SetCalibrationData @ 0x1C01AB99C (_SetCalibrationData.c)
 * Callees:
 *     ?RtlUnicodeStringCatString@@YAJPEAU_UNICODE_STRING@@PEBG@Z @ 0x1C0107898 (-RtlUnicodeStringCatString@@YAJPEAU_UNICODE_STRING@@PEBG@Z.c)
 *     ?RtlUnicodeStringCopy@@YAJPEAU_UNICODE_STRING@@PEBU1@@Z @ 0x1C0107950 (-RtlUnicodeStringCopy@@YAJPEAU_UNICODE_STRING@@PEBU1@@Z.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     ?GetTiltKeyName@@YAJU_UNICODE_STRING@@PEAPEAGH@Z @ 0x1C01A590C (-GetTiltKeyName@@YAJU_UNICODE_STRING@@PEAPEAGH@Z.c)
 */

_BOOL8 __fastcall WriteTiltCalibrationData(struct _UNICODE_STRING *a1, unsigned int a2, ULONG a3, void *a4)
{
  __int64 v4; // rdi
  int TiltKeyName; // ebx
  struct _UNICODE_STRING v9; // [rsp+40h] [rbp-C0h] BYREF
  ULONG Disposition; // [rsp+50h] [rbp-B0h] BYREF
  void *KeyHandle; // [rsp+58h] [rbp-A8h] BYREF
  PCWSTR SourceString; // [rsp+60h] [rbp-A0h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+68h] [rbp-98h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+78h] [rbp-88h] BYREF
  char v15; // [rsp+B0h] [rbp-50h] BYREF

  v4 = a2;
  v9 = *a1;
  SourceString = 0LL;
  DestinationString = 0LL;
  KeyHandle = 0LL;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  TiltKeyName = GetTiltKeyName(&v9, (unsigned __int16 **)&SourceString);
  if ( TiltKeyName >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, SourceString);
    *(_QWORD *)&v9.Length = 91750400LL;
    v9.Buffer = (PWSTR)&v15;
    TiltKeyName = RtlUnicodeStringCopy(&v9, (const struct _UNICODE_STRING *)(grpWinStaList + 200LL));
    if ( TiltKeyName >= 0 )
    {
      TiltKeyName = RtlUnicodeStringCatString(&v9, off_1C030D898[v4]);
      if ( TiltKeyName >= 0 )
      {
        Disposition = 0;
        ObjectAttributes.ObjectName = &v9;
        ObjectAttributes.Length = 48;
        ObjectAttributes.RootDirectory = 0LL;
        ObjectAttributes.Attributes = 576;
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
        TiltKeyName = ZwCreateKey(&KeyHandle, 0x20006u, &ObjectAttributes, 0, 0LL, 0, &Disposition);
        if ( TiltKeyName >= 0 )
        {
          TiltKeyName = ZwSetValueKey(KeyHandle, &DestinationString, 0, 3u, a4, a3);
          ZwClose(KeyHandle);
        }
      }
    }
    Win32FreePool((void *)SourceString);
  }
  return TiltKeyName >= 0;
}
