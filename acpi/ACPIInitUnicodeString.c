/*
 * XREFs of ACPIInitUnicodeString @ 0x1C0087DD4
 * Callers:
 *     ACPIQueryDeviceBiosNameEx @ 0x1C0043BC4 (ACPIQueryDeviceBiosNameEx.c)
 *     ACPIDockIrpQueryID @ 0x1C007B410 (ACPIDockIrpQueryID.c)
 *     AcpiGetFullyQualifiedBiosName @ 0x1C0083FF0 (AcpiGetFullyQualifiedBiosName.c)
 *     ExternalRequestBiosNameDeviceAssociation @ 0x1C00842D4 (ExternalRequestBiosNameDeviceAssociation.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall ACPIInitUnicodeString(PUNICODE_STRING DestinationString, const char *a2)
{
  ULONG v3; // eax
  wchar_t *Pool2; // rax
  struct _STRING DestinationStringa; // [rsp+20h] [rbp-18h] BYREF

  DestinationStringa = 0LL;
  RtlInitAnsiString(&DestinationStringa, a2);
  v3 = RtlxAnsiStringToUnicodeSize(&DestinationStringa);
  if ( v3 > 0xFFFF )
    return -1073741584;
  DestinationString->MaximumLength = v3;
  Pool2 = (wchar_t *)ExAllocatePool2(256LL, v3, 1399874369LL);
  DestinationString->Buffer = Pool2;
  if ( Pool2 )
    return RtlAnsiStringToUnicodeString(DestinationString, &DestinationStringa, 0);
  else
    return -1073741670;
}
