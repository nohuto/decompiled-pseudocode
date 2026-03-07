__int64 __fastcall IoCreateDeviceSecure(
        struct _DRIVER_OBJECT *a1,
        ULONG a2,
        UNICODE_STRING *a3,
        ULONG a4,
        ULONG a5,
        BOOLEAN a6,
        const void **a7,
        unsigned int *a8,
        PDEVICE_OBJECT DeviceObject)
{
  PDEVICE_OBJECT v9; // r13
  struct _DEVICE_OBJECT *v10; // rdi
  _WORD *v11; // r14
  int SecureDeviceClassSettings; // ebx
  char v13; // si
  unsigned __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rax
  ULONG v17; // r9d
  ULONG DeviceCharacteristics; // edx
  NTSTATUS v20; // eax
  _WORD *Pool2; // rax
  __int64 v23; // [rsp+48h] [rbp-38h] BYREF
  ULONG DeviceType[4]; // [rsp+50h] [rbp-30h] BYREF
  ULONG v25[2]; // [rsp+60h] [rbp-20h]
  _QWORD v26[3]; // [rsp+68h] [rbp-18h] BYREF

  v9 = DeviceObject;
  v23 = 0LL;
  *(_QWORD *)&DeviceObject->Type = 0LL;
  v10 = 0LL;
  v11 = 0LL;
  DeviceObject = 0LL;
  *(_QWORD *)v25 = 0LL;
  *(_OWORD *)DeviceType = 0LL;
  if ( !a3 && (a5 & 0x80u) == 0 )
  {
    SecureDeviceClassSettings = -1073741811;
LABEL_33:
    v13 = DeviceType[0];
    goto LABEL_20;
  }
  if ( a8 )
  {
    SecureDeviceClassSettings = IopCreateSecureDeviceClassSettings(a8, (__int64)a1, DeviceType);
    if ( SecureDeviceClassSettings < 0 )
      goto LABEL_33;
  }
  v13 = DeviceType[0];
  if ( (DeviceType[0] & 2) != 0 )
    goto LABEL_9;
  v14 = *(unsigned __int16 *)a7;
  if ( *((unsigned __int16 *)a7 + 1) != v14 + 2 || (v15 = (__int64)a7[1], *(_WORD *)(v15 + 2 * (v14 >> 1))) )
  {
    Pool2 = (_WORD *)ExAllocatePool2(256LL, v14 + 2, 1665560393LL);
    v11 = Pool2;
    if ( !Pool2 )
    {
      SecureDeviceClassSettings = -1073741670;
      goto LABEL_20;
    }
    memmove(Pool2, a7[1], *(unsigned __int16 *)a7);
    v11[(unsigned __int64)*(unsigned __int16 *)a7 >> 1] = 0;
    v15 = (__int64)v11;
  }
  SecureDeviceClassSettings = SeConvertStringSecurityDescriptorToSecurityDescriptor(v15, 1, (__int64)&v23, 0LL);
  if ( SecureDeviceClassSettings >= 0 )
  {
    v16 = v23;
    v13 = 2;
    DeviceType[0] = 2;
    *(_QWORD *)&DeviceType[2] = v23;
    *(_WORD *)(v23 + 2) |= 8u;
    if ( !a8
      || (v26[0] = 2LL,
          v26[2] = 0LL,
          v26[1] = v16,
          SecureDeviceClassSettings = IopUpdateSecureDeviceClassState(a8, (__int64)v26),
          SecureDeviceClassSettings >= 0) )
    {
LABEL_9:
      v17 = a4;
      DeviceCharacteristics = a5;
      if ( (DeviceType[0] & 1) != 0 )
        v17 = DeviceType[1];
      if ( (DeviceType[0] & 4) != 0 )
        DeviceCharacteristics = v25[0];
      if ( (DeviceType[0] & 8) != 0 )
        a6 = v25[1];
      v20 = IoCreateDevice(a1, a2, a3, v17, DeviceCharacteristics, a6, &DeviceObject);
      v10 = DeviceObject;
      SecureDeviceClassSettings = v20;
      if ( v20 >= 0 )
      {
        if ( (v13 & 2) == 0
          || (SecureDeviceClassSettings = IopGetSecurityDescriptorInformation(*(PSECURITY_DESCRIPTOR *)&DeviceType[2]),
              SecureDeviceClassSettings >= 0)
          && (SecureDeviceClassSettings = ObSetSecurityObjectByPointer((__int64)v10, 0, *(__int64 *)&DeviceType[2]),
              SecureDeviceClassSettings >= 0) )
        {
          *(_QWORD *)&v9->Type = v10;
          v10 = 0LL;
        }
      }
    }
  }
LABEL_20:
  if ( (v13 & 2) != 0 )
    ExFreePoolWithTag(*(PVOID *)&DeviceType[2], 0);
  if ( v10 )
    IoDeleteDevice(v10);
  if ( v11 )
    ExFreePoolWithTag(v11, 0);
  return (unsigned int)SecureDeviceClassSettings;
}
