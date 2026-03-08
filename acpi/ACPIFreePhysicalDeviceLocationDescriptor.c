/*
 * XREFs of ACPIFreePhysicalDeviceLocationDescriptor @ 0x1C0097DB0
 * Callers:
 *     ACPIFreePhysicalDeviceLocationDescriptors @ 0x1C0097DF4 (ACPIFreePhysicalDeviceLocationDescriptors.c)
 *     ACPIProcessPhysicalDeviceLocation @ 0x1C0098134 (ACPIProcessPhysicalDeviceLocation.c)
 * Callees:
 *     <none>
 */

void __fastcall ACPIFreePhysicalDeviceLocationDescriptor(char *P)
{
  if ( *((_QWORD *)P + 16) )
    RtlFreeUnicodeString((PUNICODE_STRING)(P + 120));
  ExFreePoolWithTag(P, 0);
}
