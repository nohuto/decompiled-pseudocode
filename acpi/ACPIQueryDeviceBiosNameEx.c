/*
 * XREFs of ACPIQueryDeviceBiosNameEx @ 0x1C0043BC4
 * Callers:
 *     ACPIIoctlQueryDeviceBiosNameEx @ 0x1C00311E0 (ACPIIoctlQueryDeviceBiosNameEx.c)
 *     ACPIBusIrpDeviceEnumerated @ 0x1C007E480 (ACPIBusIrpDeviceEnumerated.c)
 *     ACPIInternalNotifyAvailableDeviceObject @ 0x1C008310C (ACPIInternalNotifyAvailableDeviceObject.c)
 *     ACPIIoctlQueryDeviceBiosName @ 0x1C00885E4 (ACPIIoctlQueryDeviceBiosName.c)
 *     PnpBiosGetDeviceResourceList @ 0x1C008ED68 (PnpBiosGetDeviceResourceList.c)
 *     AcpiIsDeviceSecure @ 0x1C0094C68 (AcpiIsDeviceSecure.c)
 *     ACPIIsDebuggingDevice @ 0x1C0098070 (ACPIIsDebuggingDevice.c)
 *     ACPIQueryDeviceBiosName @ 0x1C0098A0C (ACPIQueryDeviceBiosName.c)
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C000155C (ACPIInternalGetDeviceExtension.c)
 *     ACPIAmliBuildObjectPathname @ 0x1C000B0E0 (ACPIAmliBuildObjectPathname.c)
 *     ACPIInitUnicodeString @ 0x1C0087DD4 (ACPIInitUnicodeString.c)
 */

__int64 __fastcall ACPIQueryDeviceBiosNameEx(ULONG_PTR a1, char a2, struct _UNICODE_STRING *a3)
{
  __int64 v5; // rcx
  int v6; // ebx
  PVOID P; // [rsp+30h] [rbp+8h] BYREF

  *a3 = 0LL;
  P = 0LL;
  v5 = *(_QWORD *)(ACPIInternalGetDeviceExtension(a1) + 760);
  if ( v5 )
  {
    v6 = ACPIAmliBuildObjectPathname(v5, &P, a2);
    if ( v6 >= 0 )
    {
      v6 = ACPIInitUnicodeString(a3);
      if ( v6 >= 0 )
        v6 = 0;
    }
    if ( P )
      ExFreePoolWithTag(P, 0);
  }
  else
  {
    return (unsigned int)-1073741810;
  }
  return (unsigned int)v6;
}
