/*
 * XREFs of UsbhGetPdoRegistryParameter @ 0x1C0045000
 * Callers:
 *     UsbhExtPropDescSemaphorePresent @ 0x1C0032980 (UsbhExtPropDescSemaphorePresent.c)
 *     UsbhReadPdoRegistryKeys @ 0x1C0046364 (UsbhReadPdoRegistryKeys.c)
 *     UsbhRegPnpStart @ 0x1C0046820 (UsbhRegPnpStart.c)
 *     UsbhUpdateRegHubHardResetCount @ 0x1C0046F60 (UsbhUpdateRegHubHardResetCount.c)
 * Callees:
 *     memmove @ 0x1C0023580 (memmove.c)
 */

__int64 __fastcall UsbhGetPdoRegistryParameter(
        struct _DEVICE_OBJECT *a1,
        const WCHAR *a2,
        void *a3,
        unsigned int a4,
        _DWORD *a5,
        _DWORD *a6,
        ULONG ResultLength)
{
  bool v8; // cf
  NTSTATUS v11; // ebx
  _DWORD *Pool2; // rdi
  NTSTATUS v13; // eax
  unsigned int v14; // eax
  HANDLE KeyHandle; // [rsp+38h] [rbp-20h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-18h] BYREF

  KeyHandle = 0LL;
  v8 = (_BYTE)ResultLength != 0;
  LOBYTE(ResultLength) = -(char)ResultLength;
  v11 = IoOpenDeviceRegistryKey(a1, 2 - v8, 0x1F0000u, &KeyHandle);
  if ( v11 >= 0 )
  {
    ResultLength = 0;
    DestinationString = 0LL;
    RtlInitUnicodeString(&DestinationString, a2);
    Pool2 = (_DWORD *)ExAllocatePool2(256LL, a4 + 12, 1112885333LL);
    if ( !Pool2 )
    {
      v11 = -1073741670;
      goto LABEL_14;
    }
    v13 = ZwQueryValueKey(KeyHandle, &DestinationString, KeyValuePartialInformation, Pool2, a4 + 12, &ResultLength);
    v11 = v13;
    if ( v13 == -2147483643 )
    {
      v11 = 0;
    }
    else if ( v13 < 0 )
    {
LABEL_12:
      ExFreePoolWithTag(Pool2, 0);
LABEL_14:
      ZwClose(KeyHandle);
      return (unsigned int)v11;
    }
    v14 = Pool2[2];
    if ( a4 < v14 )
      v14 = a4;
    memmove(a3, Pool2 + 3, v14);
    if ( a5 )
      *a5 = Pool2[1];
    if ( a6 )
      *a6 = Pool2[2];
    goto LABEL_12;
  }
  return (unsigned int)v11;
}
