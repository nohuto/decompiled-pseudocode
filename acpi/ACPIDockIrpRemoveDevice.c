/*
 * XREFs of ACPIDockIrpRemoveDevice @ 0x1C0009590
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C000155C (ACPIInternalGetDeviceExtension.c)
 *     WPP_RECORDER_SF_qsLqss @ 0x1C00015BC (WPP_RECORDER_SF_qsLqss.c)
 *     ACPIGet @ 0x1C0029384 (ACPIGet.c)
 *     ACPIInitDereferenceDeviceExtensionUnlocked @ 0x1C002D0C0 (ACPIInitDereferenceDeviceExtensionUnlocked.c)
 */

__int64 __fastcall ACPIDockIrpRemoveDevice(PDEVICE_OBJECT DeviceObject, PIRP Irp)
{
  __int64 DeviceExtension; // rax
  _IO_STACK_LOCATION *CurrentStackLocation; // r8
  ULONG_PTR v6; // rbx
  unsigned int v7; // edi
  unsigned int MinorFunction; // r15d
  __int64 v10; // rbp
  __int64 v11; // rax
  const char *v12; // rcx
  const char *v13; // rdx
  __int64 v14; // rax
  KIRQL v15; // al
  __int64 v16; // [rsp+88h] [rbp+10h] BYREF

  DeviceExtension = ACPIInternalGetDeviceExtension((ULONG_PTR)DeviceObject);
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  v6 = DeviceExtension;
  v7 = 0;
  v16 = 0LL;
  MinorFunction = CurrentStackLocation->MinorFunction;
  if ( (*(_QWORD *)(DeviceExtension + 8) & 0x2000000000002LL) == 0 )
  {
    Irp->IoStatus.Status = 0;
LABEL_5:
    IofCompleteRequest(Irp, 0);
    return v7;
  }
  if ( *(_DWORD *)(DeviceExtension + 368) == 4 )
  {
    Irp->IoStatus.Status = -1073741810;
    v7 = -1073741810;
    goto LABEL_5;
  }
  if ( *(_DWORD *)(DeviceExtension + 192) == 2 )
  {
    v10 = *(_QWORD *)(DeviceExtension + 184);
    if ( *(_DWORD *)(DeviceExtension + 200) != 1 )
    {
      KdDisableDebugger();
      ACPIGet(v10, 1262699615, 277086210, 0, 4, 0LL, 0LL, (__int64)&v16, 0LL);
      KdEnableDebugger();
    }
  }
  *(_DWORD *)(v6 + 200) = 0;
  *(_DWORD *)(v6 + 368) = 4;
  Irp->IoStatus.Status = 0;
  Irp->IoStatus.Information = 0LL;
  IofCompleteRequest(Irp, 0);
  v11 = *(_QWORD *)(v6 + 8);
  v12 = (const char *)&unk_1C00622D0;
  v13 = (const char *)&unk_1C00622D0;
  if ( (v11 & 0x200000000000LL) != 0 )
  {
    v12 = *(const char **)(v6 + 608);
    if ( (v11 & 0x400000000000LL) != 0 )
      v13 = *(const char **)(v6 + 616);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v14 = MinorFunction;
    if ( MinorFunction >= 0x1A )
      v14 = 26LL;
    WPP_RECORDER_SF_qsLqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      5u,
      0x1Au,
      (__int64)&WPP_6625d3923c543510b1fa3235c3eeddfe_Traceguids,
      (char)Irp,
      (__int64)(&ACPIDispatchPnpTableNames)[v14],
      0,
      v6,
      v12,
      v13);
  }
  v15 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
  *(_QWORD *)(v6 + 776) = 0LL;
  *(_QWORD *)(v6 + 784) = 0LL;
  *(_QWORD *)(v6 + 768) = 0LL;
  _InterlockedAnd64((volatile signed __int64 *)(v6 + 8), 0xFFFFFFFFFFFFFC00uLL);
  _InterlockedOr64((volatile signed __int64 *)(v6 + 8), 8uLL);
  _InterlockedOr64((volatile signed __int64 *)(v6 + 8), 4uLL);
  KeReleaseSpinLock(&AcpiDeviceTreeLock, v15);
  ACPIInitDereferenceDeviceExtensionUnlocked(v6);
  IoDeleteDevice(DeviceObject);
  return 0LL;
}
