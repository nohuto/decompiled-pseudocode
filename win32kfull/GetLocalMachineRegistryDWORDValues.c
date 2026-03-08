/*
 * XREFs of GetLocalMachineRegistryDWORDValues @ 0x1C0102D80
 * Callers:
 *     EditionOverrideUserTouchGestureSettings @ 0x1C0102D30 (EditionOverrideUserTouchGestureSettings.c)
 *     ?_ReadSettingsFromRegKey@PalmRejection@@YAXXZ @ 0x1C01E8538 (-_ReadSettingsFromRegKey@PalmRejection@@YAXXZ.c)
 * Callees:
 *     ?RtlUnicodeStringCopyString@@YAJPEAU_UNICODE_STRING@@PEBG@Z @ 0x1C01031CC (-RtlUnicodeStringCopyString@@YAJPEAU_UNICODE_STRING@@PEBG@Z.c)
 *     ?RtlUnicodeStringCatString@@YAJPEAU_UNICODE_STRING@@PEBG@Z @ 0x1C0107898 (-RtlUnicodeStringCatString@@YAJPEAU_UNICODE_STRING@@PEBG@Z.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 */

__int64 __fastcall GetLocalMachineRegistryDWORDValues(__int64 a1, const unsigned __int16 *a2, __int128 *a3)
{
  __int128 v3; // xmm0
  NTSTATUS v6; // ebx
  void *KeyHandle; // [rsp+20h] [rbp-E0h] BYREF
  struct _UNICODE_STRING v9; // [rsp+28h] [rbp-D8h] BYREF
  __int128 v10; // [rsp+38h] [rbp-C8h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+48h] [rbp-B8h] BYREF
  char v12; // [rsp+80h] [rbp-80h] BYREF

  v3 = *a3;
  *(_QWORD *)&v9.Length = 45875200LL;
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  v10 = v3;
  KeyHandle = 0LL;
  v9.Buffer = (PWSTR)&v12;
  v6 = RtlUnicodeStringCopyString(&v9, a2);
  if ( v6 >= 0 )
  {
    v6 = RtlUnicodeStringCatString(&v9, a2);
    if ( v6 >= 0 )
    {
      ObjectAttributes.Length = 48;
      ObjectAttributes.ObjectName = &v9;
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.Attributes = 576;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      v6 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
      if ( v6 >= 0 )
      {
        v6 = ReadPointerDeviceCfgDWORDSetting(KeyHandle, &v10);
        if ( v6 >= 0 && HIDWORD(v10) != DWORD2(v10) )
        {
          *((_DWORD *)a3 + 3) = HIDWORD(v10);
          v6 = 0;
        }
        ZwClose(KeyHandle);
      }
    }
  }
  return (unsigned int)v6;
}
