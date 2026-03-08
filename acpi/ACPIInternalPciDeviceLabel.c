/*
 * XREFs of ACPIInternalPciDeviceLabel @ 0x1C0088180
 * Callers:
 *     AcpiQueryPciDeviceChassisLabel @ 0x1C0089EB4 (AcpiQueryPciDeviceChassisLabel.c)
 * Callees:
 *     <none>
 */

int __fastcall ACPIInternalPciDeviceLabel(__int64 a1, __int64 a2)
{
  int result; // eax
  ULONG Size; // ecx

  result = IoSetDevicePropertyData(
             *(PDEVICE_OBJECT *)(a1 + 784),
             &DEVPKEY_PciDevice_Label_Id,
             0,
             0,
             7u,
             4u,
             (PVOID)(a2 + 24));
  if ( result >= 0 && *(_DWORD *)a2 > 1u )
  {
    Size = *(_DWORD *)(a2 + 72);
    if ( Size )
    {
      if ( *(_QWORD *)(a2 + 80) )
      {
        if ( *(_WORD *)(a2 + 50) == 3 )
          return IoSetDevicePropertyData(
                   *(PDEVICE_OBJECT *)(a1 + 784),
                   &DEVPKEY_PciDevice_Label_String,
                   0,
                   0,
                   0x12u,
                   Size,
                   *(PVOID *)(a2 + 80));
      }
    }
  }
  return result;
}
