/*
 * XREFs of ExpWnfDeletePermanentName @ 0x1407CA118
 * Callers:
 *     NtDeleteWnfStateName @ 0x1407C98C0 (NtDeleteWnfStateName.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D7680 (__security_check_cookie.c)
 *     ZwDeleteValueKey @ 0x14041C240 (ZwDeleteValueKey.c)
 *     ExpWnfGetNameStoreRegistryRoot @ 0x140710BFC (ExpWnfGetNameStoreRegistryRoot.c)
 *     ExpWnfComposeValueName @ 0x140710D70 (ExpWnfComposeValueName.c)
 */

int __fastcall ExpWnfDeletePermanentName(unsigned __int64 a1)
{
  int result; // eax
  HANDLE KeyHandle; // [rsp+20h] [rbp-58h] BYREF
  UNICODE_STRING ValueName; // [rsp+28h] [rbp-50h] BYREF
  __int64 v5; // [rsp+38h] [rbp-40h] BYREF

  KeyHandle = 0LL;
  *(_QWORD *)&ValueName.Length = 2228224LL;
  ValueName.Buffer = (wchar_t *)&v5;
  ExpWnfComposeValueName(a1, &ValueName);
  result = ExpWnfGetNameStoreRegistryRoot((a1 >> 4) & 3, (volatile signed __int64 *)&KeyHandle);
  if ( result >= 0 )
    return ZwDeleteValueKey(KeyHandle, &ValueName);
  return result;
}
