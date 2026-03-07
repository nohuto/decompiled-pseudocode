// write access to const memory has been detected, the output may be wrong!
int InitClipFormatExceptionList()
{
  _DWORD *v0; // rbx
  int result; // eax
  NTSTATUS v2; // eax
  int v3; // r8d
  int v4; // r9d
  unsigned int v5; // eax
  __int64 v6; // rcx
  _DWORD *v7; // rdi
  ULONG v8; // esi
  int v9; // eax
  bool v10; // r14
  unsigned __int16 v11; // ax
  int v12; // edx
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-40h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-30h] BYREF
  ULONG Length; // [rsp+B0h] [rbp+30h] BYREF
  void *KeyHandle; // [rsp+B8h] [rbp+38h] BYREF

  Length = 0;
  KeyHandle = 0LL;
  v0 = 0LL;
  *(&ObjectAttributes.Length + 1) = 0;
  DestinationString = 0LL;
  *(&ObjectAttributes.Attributes + 1) = 0;
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
    v2 = ZwQueryKey(KeyHandle, KeyFullInformation, 0LL, 0, &Length);
    if ( (v2 == -1073741789 || v2 == -2147483643)
      && (v0 = (_DWORD *)Win32AllocPoolZInit(Length, 1650684757LL)) != 0LL
      && ZwQueryKey(KeyHandle, KeyFullInformation, v0, Length, &Length) >= 0
      && (v5 = v0[8]) != 0
      && (gcClipFormatExceptionList = v0[8], v5 <= 0x1FFF)
      && (gpClipFormatExceptionList = Win32AllocPoolZInit(4LL * v5, 1650684757LL)) != 0LL
      && (v6 = (unsigned int)v0[10], (unsigned int)v6 < 0xFFFFFFF0)
      && (v7 = (_DWORD *)Win32AllocPoolZInit(v6 + 16, 1650684757LL)) != 0LL )
    {
      v8 = 0;
      if ( gcClipFormatExceptionList )
      {
        while ( ZwEnumerateValueKey(KeyHandle, v8, KeyValuePartialInformation, v7, v0[10] + 16, &Length) >= 0 )
        {
          v9 = v7[1];
          if ( v9 == 4 )
          {
            *(_DWORD *)(gpClipFormatExceptionList + 4LL * v8) = v7[3];
          }
          else if ( v9 == 1 )
          {
            *((_WORD *)v7 + (unsigned int)v7[2] + 6) = 0;
            v11 = UserAddAtomEx(v7 + 3, 1LL, 2LL);
            if ( !v11 )
              break;
            *(_DWORD *)(gpClipFormatExceptionList + 4LL * v8) = v11;
          }
          if ( ++v8 >= gcClipFormatExceptionList )
            goto LABEL_15;
        }
        gcClipFormatExceptionList = v8;
      }
LABEL_15:
      Win32FreePool(v7);
    }
    else
    {
      v10 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
         && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10000) != 0
         && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
      if ( v10 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v12 = 11;
        LOBYTE(v12) = v10;
        LOBYTE(v3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_(
          WPP_GLOBAL_Control->AttachedDevice,
          v12,
          v3,
          v4,
          4,
          17,
          11,
          (__int64)&WPP_2022ffaa14ad37fd89760c5b6529d075_Traceguids);
      }
      if ( gpClipFormatExceptionList )
      {
        Win32FreePool(gpClipFormatExceptionList);
        gpClipFormatExceptionList = 0LL;
      }
      gcClipFormatExceptionList = 0;
    }
    if ( v0 )
      Win32FreePool(v0);
    return ZwClose(KeyHandle);
  }
  return result;
}
