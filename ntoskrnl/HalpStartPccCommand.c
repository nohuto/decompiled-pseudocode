/*
 * XREFs of HalpStartPccCommand @ 0x140932CDC
 * Callers:
 *     HalpSendPccCommand @ 0x140932C70 (HalpSendPccCommand.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14030EBB0 (RtlInitUnicodeString.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     HalpUpdateCoolingPacket @ 0x140525350 (HalpUpdateCoolingPacket.c)
 *     HalpAcquirePccInterface @ 0x1409328F4 (HalpAcquirePccInterface.c)
 */

__int64 HalpStartPccCommand()
{
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-98h] BYREF
  _BYTE v2[136]; // [rsp+30h] [rbp-88h] BYREF

  DestinationString = 0LL;
  memset(v2, 0, 0x80uLL);
  RtlInitUnicodeString(&DestinationString, L"\\DosDevices\\ACPI_ROOT_OBJECT");
  if ( !HalpUpdateCoolingPacket(0LL) )
  {
    if ( (int)HalpAcquirePccInterface(*(_BYTE *)(HalpAcpiMpst + 36), &DestinationString, v2) < 0 )
      return 3221225488LL;
    HalpUpdateCoolingPacket((__int64)v2);
  }
  if ( qword_140C5FD00 )
    return (*((__int64 (__fastcall **)(_QWORD))&xmmword_140C5FCD0 + 1))(*((_QWORD *)&xmmword_140C5FCB0 + 1));
  return 3221225488LL;
}
