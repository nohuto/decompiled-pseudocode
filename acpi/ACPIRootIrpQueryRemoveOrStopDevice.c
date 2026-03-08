/*
 * XREFs of ACPIRootIrpQueryRemoveOrStopDevice @ 0x1C00946F0
 * Callers:
 *     <none>
 * Callees:
 *     ACPIDebugGetIrpText @ 0x1C000153C (ACPIDebugGetIrpText.c)
 *     ACPIInternalGetDeviceExtension @ 0x1C000155C (ACPIInternalGetDeviceExtension.c)
 *     WPP_RECORDER_SF_qsLqss @ 0x1C00015BC (WPP_RECORDER_SF_qsLqss.c)
 *     ACPIThermalReleaseCoolingInterfaces @ 0x1C0041C30 (ACPIThermalReleaseCoolingInterfaces.c)
 */

__int64 __fastcall ACPIRootIrpQueryRemoveOrStopDevice(ULONG_PTR a1, IRP *a2)
{
  __int64 DeviceExtension; // rax
  __int64 v4; // rbx
  unsigned __int8 MinorFunction; // bp
  unsigned int v6; // esi
  __int64 v7; // rcx
  char *IrpText; // rax
  const char *v9; // r8
  const char *v10; // r10

  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  v4 = DeviceExtension;
  MinorFunction = a2->Tail.Overlay.CurrentStackLocation->MinorFunction;
  if ( (*(_DWORD *)(DeviceExtension + 8) & 0x200000) != 0 )
  {
    v6 = -1073741808;
    a2->IoStatus.Status = -1073741808;
    IofCompleteRequest(a2, 0);
  }
  else
  {
    ACPIThermalReleaseCoolingInterfaces(DeviceExtension);
    *(_DWORD *)(v4 + 372) = *(_DWORD *)(v4 + 368);
    *(_DWORD *)(v4 + 368) = 1;
    ++a2->CurrentLocation;
    ++a2->Tail.Overlay.CurrentStackLocation;
    v6 = IofCallDriver(*(PDEVICE_OBJECT *)(v4 + 776), a2);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    IrpText = ACPIDebugGetIrpText(v7, MinorFunction);
    WPP_RECORDER_SF_qsLqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      5u,
      0x16u,
      (__int64)&WPP_751107becb7a3b7b48760ac4afe26340_Traceguids,
      (char)a2,
      (__int64)IrpText,
      v6,
      v4,
      v9,
      v10);
  }
  return v6;
}
