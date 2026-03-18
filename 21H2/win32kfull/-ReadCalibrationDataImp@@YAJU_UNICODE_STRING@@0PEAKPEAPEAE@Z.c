/*
 * XREFs of ?ReadCalibrationDataImp@@YAJU_UNICODE_STRING@@0PEAKPEAPEAE@Z @ 0x1C01CAF74
 * Callers:
 *     ReadTiltCalibrationData @ 0x1C01CBCFC (ReadTiltCalibrationData.c)
 * Callees:
 *     memset @ 0x1C0160540 (memset.c)
 *     ?RegQueryValueCal@@YAJPEAXU_UNICODE_STRING@@KPEAEKPEAK@Z @ 0x1C01CB670 (-RegQueryValueCal@@YAJPEAXU_UNICODE_STRING@@KPEAEKPEAK@Z.c)
 *     ValidateCalibrationData @ 0x1C01CC108 (ValidateCalibrationData.c)
 */

__int64 __fastcall ReadCalibrationDataImp(
        struct _UNICODE_STRING *a1,
        struct _UNICODE_STRING *a2,
        unsigned int *a3,
        unsigned __int8 **a4)
{
  NTSTATUS v7; // ebx
  unsigned int v8; // r8d
  unsigned int v9; // edx
  unsigned __int8 *v10; // rax
  unsigned int v11; // eax
  unsigned __int8 *v12; // r9
  unsigned int v13; // r8d
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
    if ( v7 == -1073741789 )
    {
      v9 = *a3;
      if ( *a3 - 40 <= 0xFFD7 )
      {
        if ( *a4 )
        {
          Win32FreePool(*a4);
          *a4 = 0LL;
          v9 = *a3;
        }
        v10 = (unsigned __int8 *)Win32AllocPoolZInit(v9, 2020635477LL);
        *a4 = v10;
        if ( v10 )
        {
          memset(v10, 0, *a3);
          v11 = *a3;
          v12 = *a4;
          ValueName = *a1;
          v7 = RegQueryValueCal(KeyHandle, &ValueName, v13, v12, v11, a3);
          if ( v7 >= 0 && !(unsigned int)ValidateCalibrationData(*a3, *a4, 3LL) )
            v7 = -1073741668;
        }
        else
        {
          v7 = -1073741670;
        }
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
