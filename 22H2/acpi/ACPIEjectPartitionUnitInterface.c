/*
 * XREFs of ACPIEjectPartitionUnitInterface @ 0x1C00B0278
 * Callers:
 *     ACPIBusIrpQueryInterface @ 0x1C0010C50 (ACPIBusIrpQueryInterface.c)
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0002D40 (ACPIInternalGetDeviceExtension.c)
 */

__int64 __fastcall ACPIEjectPartitionUnitInterface(ULONG_PTR a1, __int64 a2)
{
  __int64 DeviceExtension; // rax
  __int64 v4; // rdx
  _QWORD *v5; // rcx

  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  v4 = *(_QWORD *)(a2 + 184);
  if ( *(_WORD *)(v4 + 16) < 0x38u
    || *(_WORD *)(v4 + 18) != 1
    || (*(_QWORD *)(DeviceExtension + 8) & 0x2000000000LL) == 0 )
  {
    return 3221225485LL;
  }
  v5 = *(_QWORD **)(v4 + 24);
  *v5 = 65592LL;
  v5[5] = 0LL;
  v5[6] = 0LL;
  v5[3] = PciConfigPinToLine;
  v5[2] = PciConfigPinToLine;
  v5[4] = &ACPIGetUniqueId;
  v5[1] = DeviceExtension;
  if ( (*(_DWORD *)(DeviceExtension + 8) & 0x4000LL) != 0 )
  {
    v5[6] = ACPIModuleIsValidSpare;
    v5[5] = ACPIModuleGetSpareProperties;
  }
  return 0LL;
}
