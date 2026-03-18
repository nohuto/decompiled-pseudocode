/*
 * XREFs of _CmGetDeviceRelationsList @ 0x1408520E4
 * Callers:
 *     _CmGetDeviceMappedPropertyFromComposite @ 0x1406CA46C (_CmGetDeviceMappedPropertyFromComposite.c)
 *     PiCMGetDeviceIdList @ 0x1407C7F0C (PiCMGetDeviceIdList.c)
 *     _CmGetMatchingFilteredDeviceListWorker @ 0x140A65068 (_CmGetMatchingFilteredDeviceListWorker.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x14022B6E0 (RtlInitUnicodeStringEx.c)
 *     _NtPlugPlayGetDeviceRelationsList @ 0x140852190 (_NtPlugPlayGetDeviceRelationsList.c)
 */

NTSTATUS __fastcall CmGetDeviceRelationsList(int a1, const WCHAR *a2, int a3, int a4, int a5, __int64 a6)
{
  int v6; // ebx
  NTSTATUS result; // eax
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-18h] BYREF

  v6 = 4;
  DestinationString = 0LL;
  switch ( a3 )
  {
    case 4:
      v6 = 0;
      break;
    case 8:
      v6 = 1;
      break;
    case 16:
      v6 = 2;
      break;
    case 32:
      v6 = 3;
      break;
    case 64:
      break;
    default:
      return -1073741811;
  }
  result = RtlInitUnicodeStringEx(&DestinationString, a2);
  if ( result >= 0 )
    return NtPlugPlayGetDeviceRelationsList(a1, (unsigned int)&DestinationString, v6, a4, a5, a6);
  return result;
}
