/*
 * XREFs of ?IsDeviceOnRegistryList@@YAHU_UNICODE_STRING@@0H@Z @ 0x1C0030DD8
 * Callers:
 *     IsMouseDeviceOnIgnoreList @ 0x1C0031278 (IsMouseDeviceOnIgnoreList.c)
 *     ?IsMouseDeviceOnWhiteList@@YAHPEAUDEVICEINFO@@PEAU_DEVICE_OBJECT@@H@Z @ 0x1C01C0568 (-IsMouseDeviceOnWhiteList@@YAHPEAUDEVICEINFO@@PEAU_DEVICE_OBJECT@@H@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_dd @ 0x1C00052A0 (WPP_RECORDER_AND_TRACE_SF_dd.c)
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1C000F0BC (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     Win32FreePool @ 0x1C0070430 (Win32FreePool.c)
 *     Win32AllocPoolZInit @ 0x1C0077C80 (Win32AllocPoolZInit.c)
 *     ?CompareDeviceVIDPID@@YAHU_UNICODE_STRING@@PEAU_KEY_VALUE_FULL_INFORMATION@@K@Z @ 0x1C01C001C (-CompareDeviceVIDPID@@YAHU_UNICODE_STRING@@PEAU_KEY_VALUE_FULL_INFORMATION@@K@Z.c)
 */

_BOOL8 __fastcall IsDeviceOnRegistryList(struct _UNICODE_STRING *a1, struct _UNICODE_STRING *a2, int a3)
{
  BOOL v5; // esi
  __int64 v6; // rdi
  ULONG v7; // r12d
  int v8; // edx
  int v9; // r8d
  NTSTATUS v10; // r14d
  struct _KEY_VALUE_FULL_INFORMATION *v11; // rdi
  int v12; // edx
  int v13; // r8d
  unsigned int v14; // r13d
  void *KeyHandle; // [rsp+50h] [rbp-29h] BYREF
  struct _UNICODE_STRING v17; // [rsp+60h] [rbp-19h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+70h] [rbp-9h] BYREF
  ULONG ResultLength; // [rsp+E0h] [rbp+67h] BYREF
  ULONG Length; // [rsp+F8h] [rbp+7Fh] BYREF

  ObjectAttributes.ObjectName = a1;
  KeyHandle = 0LL;
  ResultLength = 0;
  ObjectAttributes.RootDirectory = 0LL;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
  v5 = 0;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) >= 0 )
  {
    if ( ZwQueryValueKey(KeyHandle, a2, KeyValuePartialInformation, 0LL, 0, &ResultLength) == -1073741772
      || !ResultLength )
    {
      if ( a3 && a2->Length >= 0x2Au )
      {
        v7 = 0;
        Length = 0;
        while ( !v5 )
        {
          v10 = ZwEnumerateValueKey(KeyHandle, v7, KeyValueFullInformation, 0LL, 0, &Length);
          if ( v10 != -1073741789 )
          {
            if ( v10 != -2147483622 )
            {
              if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
                || (LOBYTE(v8) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 3u) )
              {
                LOBYTE(v8) = 0;
              }
              if ( (_BYTE)v8 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                LOBYTE(v9) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
                WPP_RECORDER_AND_TRACE_SF_D(
                  WPP_GLOBAL_Control->AttachedDevice,
                  v8,
                  v9,
                  (_DWORD)gRimLog,
                  3,
                  1,
                  17,
                  (__int64)&WPP_3ba5ca1bd3d034373d45e0ad3df26bc4_Traceguids,
                  v10);
              }
            }
            break;
          }
          v11 = (struct _KEY_VALUE_FULL_INFORMATION *)Win32AllocPoolZInit(Length, 2019914581LL);
          if ( v11 )
          {
            v10 = ZwEnumerateValueKey(KeyHandle, v7, KeyValueFullInformation, v11, Length, &Length);
            if ( v10 >= 0 )
            {
              v14 = *((unsigned __int8 *)&v11->TitleIndex + v11->DataOffset);
              if ( v14 - 1 <= 1
                && v11->Type == 4
                && v11->NameLength >= 0x2A
                && RtlCompareMemory(v11->Name, L"HID", 6uLL) == 6 )
              {
                v17 = *a2;
                v5 = CompareDeviceVIDPID(&v17, v11, v14) != 0;
              }
              else
              {
                LOBYTE(v12) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                           && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
                           && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
                if ( (_BYTE)v12 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                {
                  LOBYTE(v13) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
                  WPP_RECORDER_AND_TRACE_SF_dd(
                    WPP_GLOBAL_Control->AttachedDevice,
                    v12,
                    v13,
                    (_DWORD)gRimLog,
                    4,
                    1,
                    16,
                    (__int64)&WPP_3ba5ca1bd3d034373d45e0ad3df26bc4_Traceguids,
                    v14,
                    v11->NameLength);
                }
              }
            }
            Win32FreePool(v11);
          }
          ++v7;
          if ( v10 == -2147483622 )
            break;
        }
      }
    }
    else
    {
      v6 = Win32AllocPoolZInit(ResultLength, 2019914581LL);
      if ( v6 )
      {
        if ( ZwQueryValueKey(KeyHandle, a2, KeyValuePartialInformation, (PVOID)v6, ResultLength, &ResultLength) >= 0
          && *(_DWORD *)(v6 + 4) == 4 )
        {
          v5 = (unsigned __int8)(*(_BYTE *)(v6 + 12) - 1) <= 2u;
        }
        Win32FreePool((PVOID)v6);
      }
    }
    ZwClose(KeyHandle);
  }
  return v5;
}
