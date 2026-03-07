__int64 __fastcall InteractiveControlSettings::_OpenDeviceKey(
        InteractiveControlSettings *this,
        ACCESS_MASK a2,
        __int64 a3,
        void **a4)
{
  NTSTATUS v6; // ecx
  __int16 v7; // r10
  const wchar_t *v8; // r9
  __int64 v9; // r8
  wchar_t *v10; // r11
  __int16 v11; // ax
  size_t v12; // rdx
  PUNICODE_STRING Class; // [rsp+20h] [rbp-E0h]
  ULONG CreateOptions; // [rsp+28h] [rbp-D8h]
  void *KeyHandle; // [rsp+40h] [rbp-C0h] BYREF
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-B8h] BYREF
  size_t pcchDest; // [rsp+58h] [rbp-A8h] BYREF
  size_t pcchDestLength; // [rsp+60h] [rbp-A0h] BYREF
  wchar_t *ppszDest; // [rsp+68h] [rbp-98h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+70h] [rbp-90h] BYREF
  char v22; // [rsp+A0h] [rbp-60h] BYREF

  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  KeyHandle = 0LL;
  *(_DWORD *)(&DestinationString.MaximumLength + 1) = 0;
  if ( grpWinStaList )
  {
    *(_DWORD *)&DestinationString.Length = 45875200;
    DestinationString.Buffer = (PWSTR)&v22;
    v6 = RtlUnicodeStringCopy(&DestinationString, (const struct _UNICODE_STRING *)(grpWinStaList + 200LL));
    if ( v6 >= 0 )
    {
      ppszDest = 0LL;
      pcchDest = 0LL;
      pcchDestLength = 0LL;
      v6 = RtlUnicodeStringValidateDestWorker(
             &DestinationString,
             &ppszDest,
             &pcchDest,
             &pcchDestLength,
             (const size_t)Class,
             CreateOptions);
      if ( v6 >= 0 )
      {
        v7 = pcchDestLength;
        v8 = L"\\Software\\Microsoft\\Windows NT\\CurrentVersion\\Windows\\InteractiveControl";
        v9 = 0x7FFFLL;
        v6 = 0;
        v10 = &ppszDest[pcchDestLength];
        v11 = 0;
        v12 = pcchDest - pcchDestLength;
        if ( pcchDest == pcchDestLength )
        {
LABEL_18:
          v6 = -2147483643;
        }
        else
        {
          while ( v9 )
          {
            if ( *v8 )
            {
              *v10++ = *v8++;
              --v9;
              ++v11;
              if ( --v12 )
                continue;
            }
            if ( v12 || !v9 || !*v8 )
              break;
            goto LABEL_18;
          }
        }
        DestinationString.Length = 2 * (v7 + v11);
      }
      if ( v6 >= 0 )
      {
        ObjectAttributes.Length = 48;
        ObjectAttributes.ObjectName = &DestinationString;
        ObjectAttributes.RootDirectory = 0LL;
        ObjectAttributes.Attributes = 576;
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
        v6 = ZwOpenKey(&KeyHandle, a2, &ObjectAttributes);
        if ( v6 < 0 )
          v6 = ZwCreateKey(&KeyHandle, a2, &ObjectAttributes, 0, 0LL, 0, 0LL);
        *a4 = KeyHandle;
      }
    }
  }
  else
  {
    return (unsigned int)-1073741595;
  }
  return (unsigned int)v6;
}
