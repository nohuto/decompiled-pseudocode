/*
 * XREFs of CmpSetSystemValues @ 0x140B52A70
 * Callers:
 *     CmInitSystem1 @ 0x140B51500 (CmInitSystem1.c)
 * Callees:
 *     CmpSetSystemRegistryString @ 0x140388BB0 (CmpSetSystemRegistryString.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     ZwClose @ 0x1404124F0 (ZwClose.c)
 *     ZwOpenKey @ 0x140412550 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x1404125F0 (ZwQueryValueKey.c)
 *     ZwSetValueKey @ 0x140412F10 (ZwSetValueKey.c)
 */

__int64 __fastcall CmpSetSystemValues(__int64 *a1)
{
  int v2; // ebx
  int v4; // ecx
  HANDLE KeyHandle; // [rsp+38h] [rbp-D0h] BYREF
  int Data; // [rsp+40h] [rbp-C8h] BYREF
  int v7; // [rsp+44h] [rbp-C4h] BYREF
  ULONG ResultLength[2]; // [rsp+48h] [rbp-C0h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-B8h] BYREF
  _DWORD KeyValueInformation[64]; // [rsp+88h] [rbp-80h] BYREF

  Data = 0;
  v7 = 0;
  ResultLength[0] = 0;
  memset(&ObjectAttributes.Attributes + 1, 0, 20);
  KeyHandle = 0LL;
  ObjectAttributes.RootDirectory = 0LL;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)L"df";
  ObjectAttributes.Attributes = 576;
  v2 = ZwOpenKey(&KeyHandle, 0xF003Fu, &ObjectAttributes);
  if ( v2 >= 0 )
  {
    v2 = ZwSetValueKey(
           KeyHandle,
           (PUNICODE_STRING)&CmpSystemStartOptionsString,
           0,
           1u,
           CmpLoadOptions.Buffer,
           CmpLoadOptions.Length);
    if ( v2 >= 0 )
    {
      v2 = CmpSetSystemRegistryString(KeyHandle, (PUNICODE_STRING)&CmpSystemBootDeviceString, a1[23]);
      if ( v2 >= 0 )
      {
        v2 = CmpSetSystemRegistryString(KeyHandle, (PUNICODE_STRING)&CmpFirmwareBootDeviceString, a1[24]);
        if ( v2 >= 0 )
        {
          v2 = CmpSetSystemRegistryString(KeyHandle, (PUNICODE_STRING)&CmpWindowsSysPartString, a1[43]);
          if ( v2 >= 0 )
          {
            v2 = CmpSetSystemRegistryString(KeyHandle, (PUNICODE_STRING)&CmpOsBootstatPathString, a1[41]);
            if ( v2 >= 0 )
            {
              Data = *(_DWORD *)(a1[30] + 132) & 1;
              v2 = ZwSetValueKey(KeyHandle, (PUNICODE_STRING)&CmpLastBootSucceededString, 0, 4u, &Data, 4u);
              if ( v2 >= 0 )
              {
                Data = (*(_DWORD *)(a1[30] + 132) >> 1) & 1;
                v2 = ZwSetValueKey(KeyHandle, (PUNICODE_STRING)&CmpLastBootShutdownString, 0, 4u, &Data, 4u);
                if ( v2 >= 0 )
                {
                  if ( (*(_DWORD *)(a1[30] + 132) & 2) != 0
                    || (ZwQueryValueKey(
                          KeyHandle,
                          (PUNICODE_STRING)&CmpDirtyShutdownCountString,
                          KeyValueFullInformation,
                          KeyValueInformation,
                          0x100u,
                          ResultLength) < 0
                     || KeyValueInformation[1] != 4
                      ? (v4 = 1)
                      : (v4 = *(_DWORD *)((char *)KeyValueInformation + KeyValueInformation[2]) + 1),
                        v7 = v4,
                        v2 = ZwSetValueKey(KeyHandle, (PUNICODE_STRING)&CmpDirtyShutdownCountString, 0, 4u, &v7, 4u),
                        v2 >= 0) )
                  {
                    v2 = 0;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return (unsigned int)v2;
}
