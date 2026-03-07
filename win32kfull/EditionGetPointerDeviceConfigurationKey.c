void *__fastcall EditionGetPointerDeviceConfigurationKey(int a1, ACCESS_MASK a2)
{
  const wchar_t *v3; // rbx
  int v4; // edx
  size_t v5; // rdx
  ULONG v6; // r8d
  NTSTATUS v7; // edi
  __int16 v8; // r10
  PWSTR Buffer; // r9
  unsigned __int64 v10; // rdx
  PWSTR v11; // r8
  unsigned __int64 v12; // rax
  size_t v13; // rdx
  ULONG v14; // r8d
  __int64 v15; // rcx
  int v16; // r11d
  __int16 v17; // r9
  unsigned __int64 v18; // r10
  WCHAR *v19; // r8
  unsigned __int64 v20; // rdx
  NTSTATUS v21; // eax
  bool v23; // zf
  UNICODE_STRING SourceString; // [rsp+40h] [rbp-C0h] BYREF
  ULONG Disposition; // [rsp+50h] [rbp-B0h] BYREF
  void *KeyHandle; // [rsp+58h] [rbp-A8h] BYREF
  struct _UNICODE_STRING KeyPath; // [rsp+60h] [rbp-A0h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+70h] [rbp-90h] BYREF
  char v29; // [rsp+A0h] [rbp-60h] BYREF

  v3 = 0LL;
  v4 = 0;
  if ( a1 == 6 )
  {
LABEL_2:
    v4 = 76;
    v3 = L"\\Software\\Policies\\Microsoft\\TabletPC";
  }
  else
  {
    switch ( a1 )
    {
      case 0:
        v3 = L"\\Software\\Microsoft\\Windows\\CurrentVersion\\PrecisionTouchPad";
        v4 = 122;
        break;
      case 1:
        v3 = L"\\Software\\Microsoft\\Windows\\CurrentVersion\\PrecisionTouchPad\\Status";
        v4 = 136;
        break;
      case 2:
        v3 = L"\\Software\\Microsoft\\Wisp\\Touch";
        v4 = 62;
        break;
      case 3:
        v3 = L"\\Software\\Microsoft\\Wisp\\MultiTouch";
        v4 = 72;
        break;
      case 4:
      case 7:
        v3 = L"\\Software\\Microsoft\\Wisp\\Pen\\SysEventParameters";
        v4 = 96;
        break;
      case 5:
        goto LABEL_2;
      case 8:
        v3 = L"\\Software\\Microsoft\\Input\\WakeableInputTypes";
        v4 = 90;
        break;
      default:
        break;
    }
  }
  KeyHandle = 0LL;
  *(_QWORD *)&SourceString.Length = 45875200LL;
  SourceString.Buffer = (PWSTR)&v29;
  if ( v4 == 122 )
  {
    v23 = RtlCompareMemory(L"\\Software\\Microsoft\\Windows\\CurrentVersion\\PrecisionTouchPad", v3, 0x7AuLL) == 122;
  }
  else
  {
    if ( v4 != 136 )
      goto LABEL_5;
    v23 = RtlCompareMemory(L"\\Software\\Microsoft\\Windows\\CurrentVersion\\PrecisionTouchPad\\Status", v3, 0x88uLL) == 136;
  }
  if ( v23 )
  {
    if ( grpWinStaList )
    {
      v7 = RtlUnicodeStringCopy(&SourceString, (const struct _UNICODE_STRING *)(grpWinStaList + 200LL));
      goto LABEL_18;
    }
    return 0LL;
  }
LABEL_5:
  KeyPath = 0LL;
  if ( RtlFormatCurrentUserKeyPath(&KeyPath) < 0 )
    return 0LL;
  v7 = RtlUnicodeStringValidateWorker(&SourceString, v5, v6);
  if ( v7 >= 0 )
  {
    v8 = 0;
    Buffer = SourceString.Buffer;
    v10 = (unsigned __int64)SourceString.MaximumLength >> 1;
    if ( (KeyPath.Length & 1) != 0
      || (KeyPath.MaximumLength & 1) != 0
      || KeyPath.Length > KeyPath.MaximumLength
      || KeyPath.MaximumLength == 0xFFFF
      || (v11 = KeyPath.Buffer) == 0LL && (KeyPath.Length || KeyPath.MaximumLength) )
    {
      v7 = -1073741811;
    }
    else
    {
      v7 = 0;
      v12 = (unsigned __int64)KeyPath.Length >> 1;
      if ( v10 )
      {
        while ( v12 )
        {
          --v12;
          *Buffer++ = *v11++;
          ++v8;
          if ( !--v10 )
            goto LABEL_46;
        }
      }
      else
      {
LABEL_46:
        if ( v12 )
          v7 = -2147483643;
      }
    }
    SourceString.Length = 2 * v8;
  }
  RtlFreeUnicodeString(&KeyPath);
LABEL_18:
  if ( v7 < 0 || RtlUnicodeStringValidateWorker(&SourceString, v13, v14) < 0 )
    return 0LL;
  v15 = 0x7FFFLL;
  v16 = 0;
  v17 = 0;
  v18 = (unsigned __int64)SourceString.Length >> 1;
  v19 = &SourceString.Buffer[v18];
  v20 = ((unsigned __int64)SourceString.MaximumLength >> 1) - v18;
  if ( v20 )
  {
    while ( v15 && *v3 )
    {
      *v19++ = *v3++;
      --v15;
      ++v17;
      if ( !--v20 )
      {
        if ( !v15 )
          break;
        goto LABEL_50;
      }
    }
  }
  else
  {
LABEL_50:
    if ( *v3 )
      v16 = -2147483643;
  }
  SourceString.Length = 2 * (v17 + v18);
  if ( v16 < 0 )
    return 0LL;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  ObjectAttributes.ObjectName = &SourceString;
  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
  ObjectAttributes.RootDirectory = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( a2 == 131078 )
  {
    Disposition = 0;
    v21 = ZwCreateKey(&KeyHandle, 0x20006u, &ObjectAttributes, 0, 0LL, 0, &Disposition);
  }
  else
  {
    v21 = ZwOpenKey(&KeyHandle, a2, &ObjectAttributes);
  }
  if ( v21 < 0 )
    return 0LL;
  return KeyHandle;
}
