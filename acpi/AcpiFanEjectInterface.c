/*
 * XREFs of AcpiFanEjectInterface @ 0x1C0027D10
 * Callers:
 *     ACPIBusIrpQueryInterface @ 0x1C00165F0 (ACPIBusIrpQueryInterface.c)
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C000155C (ACPIInternalGetDeviceExtension.c)
 */

__int64 __fastcall AcpiFanEjectInterface(ULONG_PTR a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 DeviceExtension; // rax
  __int64 result; // rax
  __int64 v5; // rcx

  v2 = *(_QWORD *)(a2 + 184);
  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  if ( *(_WORD *)(v2 + 16) < 0x38u || !*(_WORD *)(v2 + 18) )
    return 3221225485LL;
  v5 = *(_QWORD *)(v2 + 24);
  *(_QWORD *)(v5 + 8) = DeviceExtension;
  *(_QWORD *)(v5 + 16) = PciConfigPinToLine;
  *(_QWORD *)(v5 + 24) = PciConfigPinToLine;
  result = 0LL;
  *(_QWORD *)(v5 + 48) = 0LL;
  *(_DWORD *)v5 = 65592;
  *(_QWORD *)(v5 + 40) = ACPIFanControl;
  return result;
}
