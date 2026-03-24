/*
 * XREFs of ACPIBusIrpStartDeviceWorker @ 0x1C00A2EE0
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0002D40 (ACPIInternalGetDeviceExtension.c)
 *     ACPIDebugGetIrpText @ 0x1C0002DA4 (ACPIDebugGetIrpText.c)
 *     WPP_RECORDER_SF_qsLqss @ 0x1C0003050 (WPP_RECORDER_SF_qsLqss.c)
 *     ACPIInternalEvaluateOST @ 0x1C0056CB4 (ACPIInternalEvaluateOST.c)
 *     EnableDisableRegions @ 0x1C009D934 (EnableDisableRegions.c)
 *     IsNsobjPciBus @ 0x1C009DA40 (IsNsobjPciBus.c)
 *     EnableDisableIPMIRegions @ 0x1C00B0090 (EnableDisableIPMIRegions.c)
 *     ACPIPepInitializePlatformNotificationSupport @ 0x1C00B0EE0 (ACPIPepInitializePlatformNotificationSupport.c)
 */

_UNKNOWN **__fastcall ACPIBusIrpStartDeviceWorker(__int64 a1)
{
  __int64 DeviceExtension; // rax
  IRP *v3; // rbx
  __int64 v4; // rdi
  int Status; // esi
  unsigned __int8 MinorFunction; // r15
  __int64 v7; // rbp
  char v8; // r14
  __int64 v9; // rdx
  __int64 v10; // rcx
  _UNKNOWN **result; // rax
  char *IrpText; // rax
  const char *v13; // r8
  const char *v14; // r10

  DeviceExtension = ACPIInternalGetDeviceExtension(*(_QWORD *)(a1 + 32));
  v3 = *(IRP **)(a1 + 40);
  v4 = DeviceExtension;
  Status = v3->IoStatus.Status;
  MinorFunction = v3->Tail.Overlay.CurrentStackLocation->MinorFunction;
  if ( Status >= 0 )
  {
    v7 = *(_QWORD *)(DeviceExtension + 960) & 0x8000LL;
    v8 = (*(_QWORD *)(DeviceExtension + 960) & 0x8000) != 0;
    if ( IsNsobjPciBus(*(volatile signed __int32 **)(DeviceExtension + 720)) || v7 )
      EnableDisableRegions(*(__int64 **)(v4 + 720), 1, v8);
    if ( (*(_DWORD *)(v4 + 8) & 0x1000LL) != 0 )
    {
      LOBYTE(v9) = 1;
      EnableDisableIPMIRegions(*(_QWORD *)(v4 + 720), v9);
    }
    if ( (*(_QWORD *)(v4 + 960) & 0x10000000000LL) != 0 )
      ACPIPepInitializePlatformNotificationSupport((PVOID)v4);
  }
  if ( (*(_QWORD *)(v4 + 8) & 0x2000000000LL) != 0 && Status < 0 )
    ACPIInternalEvaluateOST(v4, 0, 163);
  v3->IoStatus.Information = 0LL;
  v3->IoStatus.Status = Status;
  IofCompleteRequest(v3, 0);
  v10 = 0x200000000000LL;
  if ( (*(_QWORD *)(v4 + 8) & 0x200000000000LL) != 0 )
    v10 = 0x400000000000LL;
  result = &WPP_RECORDER_INITIALIZED;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    IrpText = ACPIDebugGetIrpText(v10, MinorFunction);
    return (_UNKNOWN **)WPP_RECORDER_SF_qsLqss(
                          (__int64)WPP_GLOBAL_Control->DeviceExtension,
                          4u,
                          5u,
                          0x3Eu,
                          (__int64)&WPP_aa0188d95df637fd68421574d89cc32b_Traceguids,
                          (char)v3,
                          IrpText,
                          Status,
                          v4,
                          v13,
                          v14);
  }
  return result;
}
