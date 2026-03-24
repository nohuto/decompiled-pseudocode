/*
 * XREFs of DrvDbSetRegValueMappedProperty @ 0x140728234
 * Callers:
 *     DrvDbSetDriverInfFileMappedProperty @ 0x140727B94 (DrvDbSetDriverInfFileMappedProperty.c)
 *     DrvDbSetDriverDatabaseMappedProperty @ 0x140727CD0 (DrvDbSetDriverDatabaseMappedProperty.c)
 *     DrvDbSetDriverPackageMappedProperty @ 0x140727E7C (DrvDbSetDriverPackageMappedProperty.c)
 *     DrvDbSetDeviceIdMappedProperty @ 0x14072847C (DrvDbSetDeviceIdMappedProperty.c)
 *     DrvDbSetDriverFileMappedProperty @ 0x14097E5F0 (DrvDbSetDriverFileMappedProperty.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x14032EB60 (RtlInitUnicodeStringEx.c)
 *     ZwDeleteValueKey @ 0x1403FB500 (ZwDeleteValueKey.c)
 *     _RegRtlSetValue @ 0x140768114 (_RegRtlSetValue.c)
 */

NTSTATUS __fastcall DrvDbSetRegValueMappedProperty(__int64 a1, void *a2, __int64 a3, int a4, __int64 a5, ULONG a6)
{
  ULONG v7; // eax
  NTSTATUS result; // eax
  const WCHAR *v9; // rdx
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF

  if ( a4 )
  {
    if ( a4 == 17 )
    {
      if ( a6 == 1 )
        goto LABEL_7;
    }
    else
    {
      if ( a4 != 5 )
      {
        v7 = a6;
        return RegRtlSetValue(a2, v7);
      }
      if ( a6 == 2 )
      {
LABEL_7:
        v7 = 4;
        return RegRtlSetValue(a2, v7);
      }
    }
    return -1073741811;
  }
  else
  {
    v9 = *(const WCHAR **)(a3 + 16);
    DestinationString = 0LL;
    result = RtlInitUnicodeStringEx(&DestinationString, v9);
    if ( result >= 0 )
      result = ZwDeleteValueKey(a2, &DestinationString);
    if ( result == -1073741772 )
      return -1073741275;
  }
  return result;
}
