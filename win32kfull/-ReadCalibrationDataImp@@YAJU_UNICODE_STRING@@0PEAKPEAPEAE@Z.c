__int64 __fastcall ReadCalibrationDataImp(
        struct _UNICODE_STRING *a1,
        struct _UNICODE_STRING *a2,
        unsigned int *a3,
        unsigned __int8 **a4)
{
  NTSTATUS v7; // ebx
  unsigned int v8; // r8d
  unsigned __int8 *v9; // rax
  unsigned int v10; // eax
  unsigned __int8 *v11; // r9
  unsigned int v12; // r8d
  struct _UNICODE_STRING ValueName; // [rsp+30h] [rbp-40h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-30h] BYREF
  void *KeyHandle; // [rsp+98h] [rbp+28h] BYREF

  KeyHandle = 0LL;
  *(&ObjectAttributes.Length + 1) = 0;
  memset(&ObjectAttributes.Attributes + 1, 0, 20);
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = a2;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  v7 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  if ( v7 >= 0 )
  {
    ValueName = *a1;
    v7 = RegQueryValueCal(KeyHandle, &ValueName, v8, 0LL, 0, a3);
    if ( v7 == -1073741789 && *a3 - 40 <= 0xFFD7 )
    {
      if ( *a4 )
      {
        Win32FreePool(*a4);
        *a4 = 0LL;
      }
      v9 = (unsigned __int8 *)Win32AllocPoolZInit(*a3, 2020635477LL);
      *a4 = v9;
      if ( v9 )
      {
        memset_0(v9, 0, *a3);
        v10 = *a3;
        v11 = *a4;
        ValueName = *a1;
        v7 = RegQueryValueCal(KeyHandle, &ValueName, v12, v11, v10, a3);
        if ( v7 >= 0 && !(unsigned int)ValidateCalibrationData(*a3, *a4, 3LL) )
          v7 = -1073741668;
      }
      else
      {
        v7 = -1073741670;
      }
    }
    ZwClose(KeyHandle);
    if ( v7 < 0 )
    {
      *a3 = 0;
      if ( *a4 )
      {
        Win32FreePool(*a4);
        *a4 = 0LL;
      }
    }
  }
  return (unsigned int)v7;
}
