/*
 * XREFs of DrvDbSetRegValueMappedProperty @ 0x1407FFCCC
 * Callers:
 *     DrvDbSetDriverDatabaseMappedProperty @ 0x1407FFABC (DrvDbSetDriverDatabaseMappedProperty.c)
 *     DrvDbSetDeviceIdMappedProperty @ 0x140A6A0FC (DrvDbSetDeviceIdMappedProperty.c)
 *     DrvDbSetDriverFileMappedProperty @ 0x140A6A2BC (DrvDbSetDriverFileMappedProperty.c)
 *     DrvDbSetDriverInfFileMappedProperty @ 0x140A6A3F0 (DrvDbSetDriverInfFileMappedProperty.c)
 *     DrvDbSetDriverPackageMappedProperty @ 0x140A6A524 (DrvDbSetDriverPackageMappedProperty.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x140246490 (RtlInitUnicodeStringEx.c)
 *     ZwDeleteValueKey @ 0x140413EB0 (ZwDeleteValueKey.c)
 *     _RegRtlSetValue @ 0x140784FE4 (_RegRtlSetValue.c)
 */

NTSTATUS __fastcall DrvDbSetRegValueMappedProperty(__int64 a1, void *a2, __int64 a3, int a4, int *a5, ULONG a6)
{
  int v6; // ebx
  int *v8; // r9
  ULONG v9; // eax
  NTSTATUS result; // eax
  const WCHAR *v11; // rdx
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF
  int v13; // [rsp+68h] [rbp+20h] BYREF

  v6 = 0;
  v13 = 0;
  if ( a4 )
  {
    if ( a4 == 5 )
    {
      if ( a6 == 2 )
      {
        v13 = *(unsigned __int16 *)a5;
        goto LABEL_11;
      }
    }
    else
    {
      if ( a4 != 17 )
      {
        v8 = a5;
        v9 = a6;
        return RegRtlSetValue(a2, *(const WCHAR **)(a3 + 16), *(_DWORD *)(a3 + 24), v8, v9);
      }
      if ( a6 == 1 )
      {
        LOBYTE(v6) = *(_BYTE *)a5 == 0xFF;
        v13 = v6;
LABEL_11:
        v9 = 4;
        v8 = &v13;
        return RegRtlSetValue(a2, *(const WCHAR **)(a3 + 16), *(_DWORD *)(a3 + 24), v8, v9);
      }
    }
    return -1073741811;
  }
  else
  {
    v11 = *(const WCHAR **)(a3 + 16);
    DestinationString = 0LL;
    result = RtlInitUnicodeStringEx(&DestinationString, v11);
    if ( result >= 0 )
      result = ZwDeleteValueKey(a2, &DestinationString);
    if ( result == -1073741772 )
      return -1073741275;
  }
  return result;
}
