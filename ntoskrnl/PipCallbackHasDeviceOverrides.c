/*
 * XREFs of PipCallbackHasDeviceOverrides @ 0x14094EB88
 * Callers:
 *     PipFindDeviceOverrideEntry @ 0x14068092C (PipFindDeviceOverrideEntry.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     ZwClose @ 0x1404124F0 (ZwClose.c)
 *     ZwOpenKey @ 0x140412550 (ZwOpenKey.c)
 *     ZwQueryKey @ 0x1404125D0 (ZwQueryKey.c)
 */

bool __fastcall PipCallbackHasDeviceOverrides(void *a1, __int64 a2)
{
  NTSTATUS v3; // ebx
  NTSTATUS v4; // eax
  int v5; // ecx
  HANDLE KeyHandle; // [rsp+30h] [rbp-29h] BYREF
  ULONG ResultLength; // [rsp+38h] [rbp-21h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-19h] BYREF
  __int128 KeyInformation; // [rsp+70h] [rbp+17h] BYREF
  __int128 v11; // [rsp+80h] [rbp+27h]
  __int128 v12; // [rsp+90h] [rbp+37h]

  ResultLength = 0;
  memset(&ObjectAttributes.Attributes + 1, 0, 20);
  KeyHandle = 0LL;
  ObjectAttributes.RootDirectory = a1;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)a2;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  KeyInformation = 0LL;
  ObjectAttributes.Attributes = 576;
  v11 = 0LL;
  v12 = 0LL;
  v3 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  if ( v3 >= 0 )
  {
    v4 = ZwQueryKey(KeyHandle, KeyFullInformation, &KeyInformation, 0x30u, &ResultLength);
    v3 = v4;
    if ( v4 == -2147483643 )
    {
      v3 = 0;
    }
    else if ( v4 < 0 )
    {
      goto LABEL_7;
    }
    v5 = DWORD1(v11);
    if ( DWORD1(v11) )
    {
      *(_QWORD *)(a2 + 16) = KeyHandle;
      *(_DWORD *)(a2 + 24) = v5;
      return v3 >= 0;
    }
LABEL_7:
    v3 = -1073741823;
    ZwClose(KeyHandle);
  }
  return v3 >= 0;
}
