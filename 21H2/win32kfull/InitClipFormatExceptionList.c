/*
 * XREFs of InitClipFormatExceptionList @ 0x1C012E960
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C004DA78 (WPP_RECORDER_SF_.c)
 */

// write access to const memory has been detected, the output may be wrong!
int InitClipFormatExceptionList()
{
  _DWORD *v0; // rdi
  _DWORD *v1; // rsi
  int result; // eax
  NTSTATUS v3; // eax
  int v4; // edx
  __int64 v5; // rcx
  unsigned int v6; // eax
  __int64 v7; // rax
  ULONG v8; // ebx
  int v9; // eax
  unsigned __int16 v10; // ax
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-40h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-30h] BYREF
  ULONG Length; // [rsp+90h] [rbp+20h] BYREF
  void *KeyHandle; // [rsp+98h] [rbp+28h] BYREF

  Length = 0;
  KeyHandle = 0LL;
  v0 = 0LL;
  *(&ObjectAttributes.Length + 1) = 0;
  DestinationString = 0LL;
  *(&ObjectAttributes.Attributes + 1) = 0;
  v1 = 0LL;
  RtlInitUnicodeString(
    &DestinationString,
    L"\\Registry\\Machine\\Software\\Microsoft\\Windows\\CurrentVersion\\Policies\\System\\UIPI\\Clipboard\\ExceptionFormats");
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  result = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  if ( result >= 0 )
  {
    v3 = ZwQueryKey(KeyHandle, KeyFullInformation, 0LL, 0, &Length);
    if ( v3 != -1073741789 && v3 != -2147483643 )
      goto LABEL_22;
    v0 = (_DWORD *)Win32AllocPool(Length, 1650684757LL);
    if ( !v0 )
      goto LABEL_22;
    if ( ZwQueryKey(KeyHandle, KeyFullInformation, v0, Length, &Length) >= 0
      && (v6 = v0[8]) != 0
      && (gcClipFormatExceptionList = v0[8], v6 <= 0x1FFF)
      && (v7 = Win32AllocPool(4LL * v6, 1650684757LL),
          LODWORD(v5) = gpClipFormatExceptionList,
          (gpClipFormatExceptionList = v7) != 0LL)
      && (v5 = (unsigned int)v0[10], (unsigned int)v5 < 0xFFFFFFF0)
      && (v1 = (_DWORD *)Win32AllocPool(v5 + 16, 1650684757LL)) != 0LL )
    {
      v8 = 0;
      if ( gcClipFormatExceptionList )
      {
        while ( ZwEnumerateValueKey(KeyHandle, v8, KeyValuePartialInformation, v1, v0[10] + 16, &Length) >= 0 )
        {
          v9 = v1[1];
          if ( v9 == 4 )
          {
            *(_DWORD *)(gpClipFormatExceptionList + 4LL * v8) = v1[3];
          }
          else if ( v9 == 1 )
          {
            *((_WORD *)v1 + (unsigned int)v1[2] + 6) = 0;
            v10 = UserAddAtomEx(v1 + 3, 1LL, 2LL);
            if ( !v10 )
              break;
            *(_DWORD *)(gpClipFormatExceptionList + 4LL * v8) = v10;
          }
          if ( ++v8 >= gcClipFormatExceptionList )
            goto LABEL_15;
        }
        gcClipFormatExceptionList = v8;
      }
    }
    else
    {
LABEL_22:
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v4) = 4;
        WPP_RECORDER_SF_(v5, v4, 17, 11, (__int64)&WPP_163528e29d493e69e95520b3b68f976c_Traceguids);
      }
      if ( gpClipFormatExceptionList )
      {
        Win32FreePool(gpClipFormatExceptionList);
        gpClipFormatExceptionList = 0LL;
      }
      gcClipFormatExceptionList = 0;
    }
LABEL_15:
    if ( v1 )
      Win32FreePool(v1);
    if ( v0 )
      Win32FreePool(v0);
    return ZwClose(KeyHandle);
  }
  return result;
}
