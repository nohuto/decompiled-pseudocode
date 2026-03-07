__int64 __fastcall PnpProfileUpdateHardwareProfile(__int64 a1)
{
  int v2; // eax
  __int64 Pool2; // rax
  char *v4; // rdi
  char *v5; // rbx
  __int64 *i; // rax
  __int64 v7; // rdx
  int v8; // ecx
  unsigned int v9; // ebx
  UNICODE_STRING ValueName; // [rsp+30h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-30h] BYREF
  HANDLE Handle; // [rsp+98h] [rbp+28h] BYREF
  HANDLE KeyHandle; // [rsp+A0h] [rbp+30h] BYREF
  HANDLE v15; // [rsp+A8h] [rbp+38h] BYREF

  v15 = 0LL;
  Handle = 0LL;
  *(_DWORD *)(&ValueName.MaximumLength + 1) = 0;
  ExAcquireFastMutex(&PiProfileDeviceListLock);
  memset(&ObjectAttributes.Attributes + 1, 0, 20);
  KeyHandle = 0LL;
  ObjectAttributes.RootDirectory = 0LL;
  ValueName.Buffer = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\IDConfigDB";
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  ObjectAttributes.ObjectName = &ValueName;
  *(_DWORD *)&ValueName.Length = 8126586;
  ObjectAttributes.Attributes = 576;
  if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) >= 0 )
  {
    memset(&ObjectAttributes.Attributes + 1, 0, 20);
    ValueName.Buffer = (wchar_t *)L"CurrentDockInfo";
    ObjectAttributes.RootDirectory = KeyHandle;
    *(_QWORD *)&ObjectAttributes.Length = 48LL;
    ObjectAttributes.ObjectName = &ValueName;
    *(_DWORD *)&ValueName.Length = 2097182;
    ObjectAttributes.Attributes = 576;
    if ( ZwOpenKey(&Handle, 0x2001Fu, &ObjectAttributes) >= 0 )
    {
      ValueName.Buffer = L"EjectableDocks";
      *(_DWORD *)&ValueName.Length = 1966108;
      ZwSetValueKey(Handle, &ValueName, 0, 4u, &PiProfileDeviceCount, 4u);
      ZwClose(Handle);
    }
    ZwClose(KeyHandle);
  }
  v2 = PiProfileDeviceCount;
  if ( !PiProfileDeviceCount )
    v2 = 1;
  Pool2 = ExAllocatePool2(64LL, (unsigned int)(8 * v2 + 8), 538996816LL);
  v4 = (char *)Pool2;
  if ( Pool2 )
  {
    v5 = (char *)Pool2;
    for ( i = (__int64 *)PiProfileDeviceListHead; i != &PiProfileDeviceListHead; i = (__int64 *)*i )
    {
      v7 = i[2];
      if ( v7 )
      {
        *(_QWORD *)v5 = v7;
        v5 += 8;
      }
    }
    ExReleaseFastMutex(&PiProfileDeviceListLock);
    if ( v5 == v4 )
    {
      *(_QWORD *)v5 = 0LL;
      v5 += 8;
    }
    *(_QWORD *)v5 = 0LL;
    v9 = IopExecuteHardwareProfileChange(v8, (_DWORD)v4, (v5 - v4) >> 3, (unsigned int)&v15, a1);
    if ( v15 )
      ZwClose(v15);
    ExFreePoolWithTag(v4, 0);
  }
  else
  {
    ExReleaseFastMutex(&PiProfileDeviceListLock);
    return (unsigned int)-1073741670;
  }
  return v9;
}
