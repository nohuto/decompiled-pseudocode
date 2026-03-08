/*
 * XREFs of UsbhRegCreateUsbflagsKey @ 0x1C004650C
 * Callers:
 *     UsbhGetMSOS_Descriptor @ 0x1C0032C40 (UsbhGetMSOS_Descriptor.c)
 *     UsbhRegDriverEntry @ 0x1C0046560 (UsbhRegDriverEntry.c)
 * Callees:
 *     <none>
 */

NTSTATUS UsbhRegCreateUsbflagsKey()
{
  NTSTATUS result; // eax

  result = RtlCheckRegistryKey(2u, (PWSTR)L"usbflags");
  if ( (result & 0xC0000000) == 0xC0000000 )
    return RtlCreateRegistryKey(2u, (PWSTR)L"usbflags");
  return result;
}
