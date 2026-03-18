/*
 * XREFs of ExpReadComPlusPackage @ 0x1409F7590
 * Callers:
 *     ExpQuerySystemInformation @ 0x1407268C0 (ExpQuerySystemInformation.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D7680 (__security_check_cookie.c)
 *     ZwClose @ 0x14041A880 (ZwClose.c)
 *     ZwOpenKey @ 0x14041A8E0 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x14041A980 (ZwQueryValueKey.c)
 */

__int64 ExpReadComPlusPackage()
{
  signed __int32 v0; // edi
  NTSTATUS v1; // ebx
  ULONG ResultLength; // [rsp+30h] [rbp-30h] BYREF
  HANDLE KeyHandle; // [rsp+38h] [rbp-28h] BYREF
  __int128 KeyValueInformation; // [rsp+40h] [rbp-20h] BYREF
  int v6; // [rsp+50h] [rbp-10h]

  ResultLength = 0;
  KeyHandle = 0LL;
  KeyValueInformation = 0LL;
  v6 = 0;
  v0 = 0;
  v1 = ZwOpenKey(&KeyHandle, 1u, &stru_140C09410);
  if ( v1 >= 0 )
  {
    v1 = ZwQueryValueKey(
           KeyHandle,
           &stru_140C09470,
           KeyValuePartialInformation,
           &KeyValueInformation,
           0x14u,
           &ResultLength);
    if ( v1 >= 0 && *(_QWORD *)((char *)&KeyValueInformation + 4) == 0x400000004LL )
      v0 = HIDWORD(KeyValueInformation);
    ZwClose(KeyHandle);
  }
  _InterlockedCompareExchange((volatile signed __int32 *)(MmWriteableSharedUserData + 736), v0, -1);
  if ( (int)(v1 + 0x80000000) < 0 || v1 == -1073741772 )
    return 0;
  return (unsigned int)v1;
}
