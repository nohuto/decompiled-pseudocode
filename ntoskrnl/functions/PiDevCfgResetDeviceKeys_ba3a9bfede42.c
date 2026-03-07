__int64 __fastcall PiDevCfgResetDeviceKeys(__int64 a1, __int64 a2, void *a3)
{
  NTSTATUS v5; // eax
  unsigned int v6; // ebx
  _DWORD v8[2]; // [rsp+40h] [rbp-40h] BYREF
  const wchar_t *v9; // [rsp+48h] [rbp-38h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-30h] BYREF
  HANDLE KeyHandle; // [rsp+A0h] [rbp+20h] BYREF

  v8[1] = 0;
  memset(&ObjectAttributes.Attributes + 1, 0, 20);
  KeyHandle = 0LL;
  v9 = L"Configuration\\Reset";
  ObjectAttributes.RootDirectory = a3;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)v8;
  v8[0] = 2621478;
  ObjectAttributes.Attributes = 576;
  v5 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  v6 = v5;
  if ( v5 == -1073741772 )
  {
    v6 = 0;
  }
  else if ( v5 >= 0 )
  {
    v6 = PiDevCfgEnumDeviceKeys(
           a1,
           a2,
           KeyHandle,
           -1,
           0,
           (__int64 (__fastcall *)(__int64, __int64, int *, HANDLE))PiDevCfgResetDeviceKeyCallback,
           0LL);
  }
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return v6;
}
