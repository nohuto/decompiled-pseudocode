__int64 __fastcall ACPIBusIrpSetSystemPower(PDEVICE_OBJECT DeviceObject, PIRP *Irp, __int64 a3)
{
  __int64 DeviceExtension; // rax
  __int64 v7; // r8
  __int64 v8; // rbx
  __int64 v9; // rdx
  POWER_STATE v10; // r14d
  PIRP v11; // rax
  __int64 v12; // r9
  const char *v13; // rcx
  const char *v14; // rdx
  __int64 result; // rax
  const char *v16; // rcx
  const char *v17; // r8
  PIRP v18; // rax

  DeviceExtension = ACPIInternalGetDeviceExtension((ULONG_PTR)DeviceObject);
  v7 = *(int *)(a3 + 24);
  v8 = DeviceExtension;
  v9 = *(_QWORD *)(DeviceExtension + 8);
  v10.SystemState = *(_SYSTEM_POWER_STATE *)(DeviceExtension + 4 * v7 + 508);
  if ( (v9 & 0x2000000) != 0 && (_DWORD)v7 == 1 )
    *(_DWORD *)(DeviceExtension + 244) = *(_WORD *)(a3 + 10) & 0xF;
  if ( *(_DWORD *)(a3 + 32) == 7 )
  {
    v11 = Irp[23];
    *((_DWORD *)Irp + 12) = 0;
    HIBYTE(v11->Size) |= 1u;
    _InterlockedIncrement((volatile signed __int32 *)(v8 + 728));
    v12 = *(_QWORD *)(v8 + 8);
    v13 = (const char *)&unk_1C00622D0;
    v14 = (const char *)&unk_1C00622D0;
    if ( (v12 & 0x200000000000LL) != 0 )
    {
      v13 = *(const char **)(v8 + 608);
      if ( (v12 & 0x400000000000LL) != 0 )
        v14 = *(const char **)(v8 + 616);
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qdqss(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        (__int64)v14,
        0xCu,
        0x3Au,
        (__int64)&WPP_efe410a963c03a77fa130710cec25e42_Traceguids,
        (char)Irp,
        v7 - 1,
        v8,
        v13,
        v14);
    result = ACPIDeviceIrpWarmEjectRequest(v8, Irp, ACPIDeviceIrpCompleteRequest, 0LL);
    if ( (_DWORD)result == -1073741802 )
      return 259LL;
  }
  else if ( (v9 & 0x20000) == 0
         || (*(_DWORD *)(DeviceExtension + 1008) & 0x400LL) != 0
         || *(_DWORD *)(DeviceExtension + 384) == v10.SystemState )
  {
    return ACPIDispatchPowerIrpSuccess((__int64)DeviceObject, (IRP *)Irp);
  }
  else
  {
    v16 = (const char *)&unk_1C00622D0;
    v17 = (const char *)&unk_1C00622D0;
    if ( (v9 & 0x200000000000LL) != 0 )
    {
      v16 = *(const char **)(DeviceExtension + 608);
      if ( (v9 & 0x400000000000LL) != 0 )
        v17 = *(const char **)(DeviceExtension + 616);
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qdqss(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        v9,
        0xAu,
        0x3Bu,
        (__int64)&WPP_efe410a963c03a77fa130710cec25e42_Traceguids,
        (char)Irp,
        LOBYTE(v10.SystemState) - 1,
        DeviceExtension,
        v16,
        v17);
    v18 = Irp[23];
    *((_DWORD *)Irp + 12) = 0;
    HIBYTE(v18->Size) |= 1u;
    _InterlockedIncrement((volatile signed __int32 *)(v8 + 728));
    PoRequestPowerIrp(DeviceObject, 2u, v10, (PREQUEST_POWER_COMPLETE)ACPIBusIrpSetSystemPowerComplete, Irp, 0LL);
    return 259LL;
  }
  return result;
}
