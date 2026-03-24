/*
 * XREFs of ACPIFreePhysicalDeviceLocationDescriptor @ 0x1C009A20C
 * Callers:
 *     ACPIFreePhysicalDeviceLocationDescriptors @ 0x1C009A1C8 (ACPIFreePhysicalDeviceLocationDescriptors.c)
 *     ACPIProcessPhysicalDeviceLocation @ 0x1C009E538 (ACPIProcessPhysicalDeviceLocation.c)
 * Callees:
 *     <none>
 */

void __fastcall ACPIFreePhysicalDeviceLocationDescriptor(char *P)
{
  if ( *((_QWORD *)P + 16) )
    RtlFreeUnicodeString((PUNICODE_STRING)(P + 120));
  ExFreePoolWithTag(P, 0);
}
