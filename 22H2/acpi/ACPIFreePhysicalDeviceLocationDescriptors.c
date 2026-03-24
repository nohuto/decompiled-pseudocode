/*
 * XREFs of ACPIFreePhysicalDeviceLocationDescriptors @ 0x1C009A1C8
 * Callers:
 *     ACPIBusAndFilterIrpQueryContainerId @ 0x1C002E158 (ACPIBusAndFilterIrpQueryContainerId.c)
 *     ACPIQueryPhysicalDeviceLocation @ 0x1C0099B3C (ACPIQueryPhysicalDeviceLocation.c)
 * Callees:
 *     ACPIFreePhysicalDeviceLocationDescriptor @ 0x1C009A20C (ACPIFreePhysicalDeviceLocationDescriptor.c)
 */

void __fastcall ACPIFreePhysicalDeviceLocationDescriptors(_QWORD **a1)
{
  _QWORD *v2; // rcx
  _QWORD *v3; // rax

  while ( 1 )
  {
    v2 = *a1;
    if ( *a1 == a1 )
      break;
    if ( (_QWORD **)v2[1] != a1 || (v3 = (_QWORD *)*v2, *(_QWORD **)(*v2 + 8LL) != v2) )
      __fastfail(3u);
    *a1 = v3;
    v3[1] = a1;
    ACPIFreePhysicalDeviceLocationDescriptor(v2);
  }
}
