__int64 __fastcall ACPIDockIrpSetSystemPower(PDEVICE_OBJECT DeviceObject, PIRP *Irp)
{
  PIRP v2; // rbx
  __int64 DeviceExtension; // rax
  __int64 IrpCount; // r9
  __int64 v7; // rdi
  __int64 v8; // r15
  POWER_STATE v9; // ebp
  PIRP v10; // rcx
  __int64 v11; // r8
  void *v12; // rcx
  void *v13; // rdx
  __int64 result; // rax
  __int64 v15; // rdx
  void *v16; // rcx
  void *v17; // r8
  PIRP v18; // rax

  v2 = Irp[23];
  DeviceExtension = ACPIInternalGetDeviceExtension((ULONG_PTR)DeviceObject);
  IrpCount = v2->AssociatedIrp.IrpCount;
  v7 = DeviceExtension;
  v8 = *(_QWORD *)(DeviceExtension + 184);
  v9.SystemState = *(_SYSTEM_POWER_STATE *)(DeviceExtension + 4 * IrpCount + 508);
  *(_DWORD *)(v8 + 548) = IrpCount;
  if ( LODWORD(v2->ThreadListEntry.Flink) == 7 )
  {
    v10 = Irp[23];
    *((_DWORD *)Irp + 12) = 0;
    HIBYTE(v10->Size) |= 1u;
    _InterlockedIncrement((volatile signed __int32 *)(v8 + 728));
    v11 = *(_QWORD *)(DeviceExtension + 8);
    v12 = &unk_1C00622D0;
    v13 = &unk_1C00622D0;
    if ( (v11 & 0x200000000000LL) != 0 )
    {
      v12 = *(void **)(DeviceExtension + 608);
      if ( (v11 & 0x400000000000LL) != 0 )
        v13 = *(void **)(DeviceExtension + 616);
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qdqss(
        WPP_GLOBAL_Control->DeviceExtension,
        (_DWORD)v13,
        12,
        33,
        (__int64)&WPP_6625d3923c543510b1fa3235c3eeddfe_Traceguids,
        (char)Irp,
        IrpCount - 1,
        DeviceExtension,
        (__int64)v12,
        (__int64)v13);
    LOBYTE(IrpCount) = *(_DWORD *)(v7 + 192) == 4;
    result = ACPIDeviceIrpWarmEjectRequest(v8, Irp, &ACPIDeviceIrpCompleteRequest, IrpCount);
    if ( (_DWORD)result == -1073741802 )
      return 259LL;
  }
  else if ( *(_DWORD *)(DeviceExtension + 384) == v9.SystemState )
  {
    return ACPIDispatchPowerIrpSuccess((__int64)DeviceObject, (IRP *)Irp);
  }
  else
  {
    v15 = *(_QWORD *)(DeviceExtension + 8);
    v16 = &unk_1C00622D0;
    v17 = &unk_1C00622D0;
    if ( (v15 & 0x200000000000LL) != 0 )
    {
      v16 = *(void **)(DeviceExtension + 608);
      if ( (v15 & 0x400000000000LL) != 0 )
        v17 = *(void **)(DeviceExtension + 616);
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qdqss(
        WPP_GLOBAL_Control->DeviceExtension,
        v15,
        12,
        34,
        (__int64)&WPP_6625d3923c543510b1fa3235c3eeddfe_Traceguids,
        (char)Irp,
        LOBYTE(v9.SystemState) - 1,
        DeviceExtension,
        (__int64)v16,
        (__int64)v17);
    v18 = Irp[23];
    *((_DWORD *)Irp + 12) = 0;
    HIBYTE(v18->Size) |= 1u;
    _InterlockedIncrement((volatile signed __int32 *)(v7 + 728));
    PoRequestPowerIrp(DeviceObject, 2u, v9, ACPIBusIrpSetSystemPowerComplete, Irp, 0LL);
    return 259LL;
  }
  return result;
}
