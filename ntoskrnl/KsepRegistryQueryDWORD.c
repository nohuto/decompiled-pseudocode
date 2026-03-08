/*
 * XREFs of KsepRegistryQueryDWORD @ 0x1407FFF18
 * Callers:
 *     KsepEngineReadFlags @ 0x140B34F48 (KsepEngineReadFlags.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14030EBB0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     ZwQueryValueKey @ 0x1404125F0 (ZwQueryValueKey.c)
 *     RtlAssert @ 0x1405A7CA0 (RtlAssert.c)
 */

NTSTATUS __fastcall KsepRegistryQueryDWORD(HANDLE KeyHandle, PCWSTR SourceString, _DWORD *a3)
{
  NTSTATUS result; // eax
  __int64 v7; // rax
  __int64 v8; // rax
  ULONG ResultLength; // [rsp+30h] [rbp-68h] BYREF
  UNICODE_STRING DestinationString; // [rsp+38h] [rbp-60h] BYREF
  _BYTE KeyValueInformation[4]; // [rsp+48h] [rbp-50h] BYREF
  int v12; // [rsp+4Ch] [rbp-4Ch]
  int v13; // [rsp+50h] [rbp-48h]
  int v14; // [rsp+54h] [rbp-44h]

  DestinationString = 0LL;
  if ( !KeyHandle )
  {
    v7 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
    KsepHistoryErrors[2 * v7 + 1] = -1073740768;
    KsepHistoryErrors[2 * v7] = 262790;
    if ( (KsepDebugFlag & 4) != 0 )
      RtlAssert("KeyHandle != NULL", "minkernel\\ntos\\kshim\\kseregistry.c", 0x286u, 0LL);
  }
  if ( !a3 )
  {
    v8 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
    KsepHistoryErrors[2 * v8 + 1] = -1073740768;
    KsepHistoryErrors[2 * v8] = 262791;
    if ( (KsepDebugFlag & 4) != 0 )
      RtlAssert("Value != NULL", "minkernel\\ntos\\kshim\\kseregistry.c", 0x287u, 0LL);
  }
  *a3 = 0;
  ResultLength = 20;
  RtlInitUnicodeString(&DestinationString, SourceString);
  result = ZwQueryValueKey(
             KeyHandle,
             &DestinationString,
             KeyValuePartialInformation,
             KeyValueInformation,
             0x14u,
             &ResultLength);
  if ( !result )
  {
    if ( v13 == 4 && v12 == 4 )
      *a3 = v14;
    else
      return -1073741788;
  }
  return result;
}
