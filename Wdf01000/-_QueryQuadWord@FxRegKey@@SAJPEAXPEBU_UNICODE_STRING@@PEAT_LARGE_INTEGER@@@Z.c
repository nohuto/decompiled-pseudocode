/*
 * XREFs of ?_QueryQuadWord@FxRegKey@@SAJPEAXPEBU_UNICODE_STRING@@PEAT_LARGE_INTEGER@@@Z @ 0x1C004CB30
 * Callers:
 *     RegistryReadLastLoggedTime @ 0x1C004DBC0 (RegistryReadLastLoggedTime.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0009B10 (__security_check_cookie.c)
 */

NTSTATUS __fastcall FxRegKey::_QueryQuadWord(void *Key, _UNICODE_STRING *ValueName, _LARGE_INTEGER *Value)
{
  NTSTATUS result; // eax
  unsigned int length; // [rsp+30h] [rbp-38h] BYREF
  unsigned __int8 buffer[20]; // [rsp+38h] [rbp-30h] BYREF

  length = 20;
  result = ZwQueryValueKey(Key, ValueName, KeyValuePartialInformation, buffer, 0x14u, &length);
  if ( (int)(result + 0x80000000) < 0 || result == -2147483643 )
  {
    if ( *(_DWORD *)&buffer[4] == 11 )
    {
      if ( result >= 0 )
        *Value = *(_LARGE_INTEGER *)&buffer[12];
    }
    else
    {
      return -1073741788;
    }
  }
  return result;
}
