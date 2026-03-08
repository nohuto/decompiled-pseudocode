/*
 * XREFs of _CmGetDeviceRelationsList @ 0x14084ECA4
 * Callers:
 *     _CmGetDeviceMappedPropertyFromComposite @ 0x1406CA2A4 (_CmGetDeviceMappedPropertyFromComposite.c)
 *     PiCMGetDeviceIdList @ 0x14077813C (PiCMGetDeviceIdList.c)
 *     _CmGetMatchingFilteredDeviceListWorker @ 0x140A62368 (_CmGetMatchingFilteredDeviceListWorker.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x140246490 (RtlInitUnicodeStringEx.c)
 *     _NtPlugPlayGetDeviceRelationsList @ 0x14084ED50 (_NtPlugPlayGetDeviceRelationsList.c)
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
