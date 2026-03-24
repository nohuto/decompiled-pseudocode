/*
 * XREFs of HalpStartPccCommand @ 0x140866C78
 * Callers:
 *     HalpSendPccCommand @ 0x140866C0C (HalpSendPccCommand.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140345530 (RtlInitUnicodeString.c)
 *     _guard_dispatch_icall @ 0x140407C30 (_guard_dispatch_icall.c)
 *     memset @ 0x140413800 (memset.c)
 *     HalpUpdateCoolingPacket @ 0x1404DC940 (HalpUpdateCoolingPacket.c)
 *     HalpAcquirePccInterface @ 0x140866874 (HalpAcquirePccInterface.c)
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
  if ( qword_140C48D20 )
    return (*((__int64 (__fastcall **)(_QWORD))&xmmword_140C48CF0 + 1))(*((_QWORD *)&xmmword_140C48CD0 + 1));
  return 3221225488LL;
}
