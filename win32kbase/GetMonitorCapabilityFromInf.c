/*
 * XREFs of GetMonitorCapabilityFromInf @ 0x1C01902C4
 * Callers:
 *     GetMonitorCapability @ 0x1C0190204 (GetMonitorCapability.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00DA480 (__security_check_cookie.c)
 *     __report_rangecheckfailure @ 0x1C00DA4C0 (__report_rangecheckfailure.c)
 *     memset @ 0x1C00E1980 (memset.c)
 *     InsertModecapList @ 0x1C0190884 (InsertModecapList.c)
 *     ParseModeCap @ 0x1C0190A98 (ParseModeCap.c)
 */

__int64 __fastcall GetMonitorCapabilityFromInf(struct _DEVICE_OBJECT *a1, __int64 a2, char a3)
{
  unsigned int inserted; // esi
  ULONG v7; // edx
  ULONG v8; // r14d
  unsigned __int64 v9; // r9
  unsigned __int64 v10; // rax
  int v11; // edi
  unsigned int v12; // ebx
  ULONG ResultLength; // [rsp+30h] [rbp-D0h] BYREF
  void *KeyHandle; // [rsp+38h] [rbp-C8h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-C0h] BYREF
  ULONG v16; // [rsp+50h] [rbp-B0h]
  HANDLE Handle; // [rsp+58h] [rbp-A8h] BYREF
  void *DeviceRegKey; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v19; // [rsp+68h] [rbp-98h] BYREF
  unsigned __int64 v20; // [rsp+78h] [rbp-88h]
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+80h] [rbp-80h] BYREF
  _DWORD KeyInformation[64]; // [rsp+B0h] [rbp-50h] BYREF
  WCHAR SourceString[8]; // [rsp+1B0h] [rbp+B0h] BYREF
  wchar_t Dst[128]; // [rsp+1C0h] [rbp+C0h] BYREF

  DeviceRegKey = 0LL;
  KeyHandle = 0LL;
  Handle = 0LL;
  if ( IoOpenDeviceRegistryKey(a1, 2u, 0x20019u, &DeviceRegKey) < 0 )
    return 0LL;
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  inserted = 0;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, L"MODES");
  ObjectAttributes.RootDirectory = DeviceRegKey;
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) >= 0 )
  {
    memset(KeyInformation, 0, sizeof(KeyInformation));
    ResultLength = 0;
    v20 = 0LL;
    v19 = 0LL;
    v7 = 0;
    v8 = 0;
    while ( ZwEnumerateKey(KeyHandle, v7, KeyBasicInformation, KeyInformation, 0x100u, &ResultLength) >= 0 )
    {
      ++v8;
      DestinationString.Buffer = (PWSTR)&KeyInformation[4];
      v16 = v8;
      DestinationString.Length = KeyInformation[3];
      DestinationString.MaximumLength = KeyInformation[3];
      v9 = LOWORD(KeyInformation[3]);
      if ( LOWORD(KeyInformation[3]) >= 0x100u )
        v9 = 256LL;
      wcsncpy_s(Dst, 0x80uLL, (const wchar_t *)&KeyInformation[4], v9 >> 1);
      if ( DestinationString.Length < 0x100u )
      {
        v10 = DestinationString.Length & 0xFFFE;
        if ( v10 >= 0x100 )
          _report_rangecheckfailure();
        *(wchar_t *)((char *)Dst + v10) = 0;
      }
      Dst[127] = 0;
      if ( (unsigned int)ParseModeCap(Dst) )
      {
        ObjectAttributes.RootDirectory = KeyHandle;
        ObjectAttributes.Length = 48;
        ObjectAttributes.ObjectName = &DestinationString;
        ObjectAttributes.Attributes = 576;
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
        if ( ZwOpenKey(&Handle, 0x2000000u, &ObjectAttributes) >= 0 )
        {
          v11 = 0;
          v12 = 0;
          wcscpy(SourceString, L"Mode1");
          do
          {
            RtlInitUnicodeString(&DestinationString, SourceString);
            if ( ZwQueryValueKey(
                   Handle,
                   &DestinationString,
                   KeyValueFullInformation,
                   KeyInformation,
                   0x100u,
                   &ResultLength) < 0 )
            {
              if ( v11 )
                break;
            }
            else
            {
              wcsncpy_s(Dst, 0x80uLL, (const wchar_t *)((char *)KeyInformation + KeyInformation[2]), 0x7FuLL);
              v20 = 0xFFFFFFFF00000000uLL;
              DWORD2(v19) = -1;
              HIDWORD(v19) = a3 == 0 ? 0x38 : 0;
              if ( (unsigned int)ParseModeCap(Dst) )
                inserted = InsertModecapList(&v19, a2, inserted);
              v11 = 1;
            }
            ++SourceString[4];
            ++v12;
          }
          while ( v12 < 9 );
          ZwClose(Handle);
          v8 = v16;
        }
      }
      v7 = v8;
    }
    ZwClose(KeyHandle);
  }
  ZwClose(DeviceRegKey);
  return inserted;
}
