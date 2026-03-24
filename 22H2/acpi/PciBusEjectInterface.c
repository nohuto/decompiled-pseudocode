/*
 * XREFs of PciBusEjectInterface @ 0x1C009895C
 * Callers:
 *     ACPIBusIrpQueryInterface @ 0x1C0010C50 (ACPIBusIrpQueryInterface.c)
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0002D40 (ACPIInternalGetDeviceExtension.c)
 *     PciConfigPinToLine @ 0x1C000CA40 (PciConfigPinToLine.c)
 */

__int64 __fastcall PciBusEjectInterface(ULONG_PTR a1, __int64 a2)
{
  __int64 DeviceExtension; // rax
  __int64 v4; // r8
  __int64 v5; // rdx
  unsigned __int16 v6; // ax

  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  v4 = *(_QWORD *)(a2 + 184);
  if ( *(_WORD *)(v4 + 16) < 0x40u )
    return 3221225485LL;
  if ( *(_WORD *)(v4 + 18) > 2u )
    return 3221225659LL;
  v5 = *(_QWORD *)(v4 + 24);
  *(_QWORD *)(v5 + 16) = PciConfigPinToLine;
  *(_QWORD *)(v5 + 24) = PciConfigPinToLine;
  *(_QWORD *)(v5 + 32) = AcpiWrapperReadConfig;
  *(_QWORD *)(v5 + 40) = AcpiWrapperWriteConfig;
  *(_QWORD *)(v5 + 48) = PciConfigPinToLine;
  *(_QWORD *)(v5 + 56) = PciConfigPinToLine;
  *(_DWORD *)v5 = 131136;
  *(_QWORD *)(v5 + 8) = DeviceExtension;
  v6 = *(_WORD *)(v4 + 16);
  if ( v6 >= 0x48u )
  {
    *(_WORD *)v5 = 72;
    *(_QWORD *)(v5 + 64) = PciGetRootBusCapability;
    v6 = *(_WORD *)(v4 + 16);
  }
  if ( v6 >= 0x50u )
  {
    if ( (*(_DWORD *)(*((_QWORD *)AcpiInformation + 1) + 112LL) & 0x4000) != 0 )
    {
      *(_WORD *)v5 = 88;
      *(_QWORD *)(v5 + 72) = PciExpressWakeControl;
    }
    else
    {
      *(_QWORD *)(v5 + 72) = 0LL;
    }
  }
  if ( *(_WORD *)(v4 + 16) >= 0x58u )
    *(_QWORD *)(v5 + 80) = PciConfigPinToLine;
  PciConfigPinToLine();
  return 0LL;
}
