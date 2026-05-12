/*
 * XREFs of RaidAdapterQueryInterfaceIrp @ 0x1C002DB10
 * Callers:
 *     RaidAdapterPnpIrp @ 0x1C0016854 (RaidAdapterPnpIrp.c)
 * Callees:
 *     RaidCompleteRequestEx @ 0x1C0009010 (RaidCompleteRequestEx.c)
 *     RaForwardIrp @ 0x1C001595C (RaForwardIrp.c)
 *     __security_check_cookie @ 0x1C001D5B0 (__security_check_cookie.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x1C002A418 (McTemplateK0pd_EtwWriteTransfer.c)
 *     RaidAdapterQueryCoolingInterface @ 0x1C003EB10 (RaidAdapterQueryCoolingInterface.c)
 *     PortQueryInterfaceFdoInfo @ 0x1C007D2D0 (PortQueryInterfaceFdoInfo.c)
 *     PortQueryInterfaceFdoQdr @ 0x1C007D310 (PortQueryInterfaceFdoQdr.c)
 */

NTSTATUS __fastcall RaidAdapterQueryInterfaceIrp(__int64 a1, IRP *a2)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rsi
  GUID *InterfaceType; // rcx
  GUID *v6; // rcx
  GUID *v7; // rcx
  signed int InterfaceFdoInfo; // eax
  __int64 v9; // rcx
  int Status; // [rsp+20h] [rbp-48h]
  GUID v12; // [rsp+30h] [rbp-38h] BYREF

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  InterfaceType = CurrentStackLocation->Parameters.QueryInterface.InterfaceType;
  if ( InterfaceType == &GUID_STORAGE_QUERY_FDO_INFO
    || RtlCompareMemory(InterfaceType, &GUID_STORAGE_QUERY_FDO_INFO, 0x10uLL) == 16 )
  {
    InterfaceFdoInfo = PortQueryInterfaceFdoInfo(InterfaceType, a2, *(_QWORD *)(a1 + 32));
LABEL_14:
    a2->IoStatus.Status = InterfaceFdoInfo;
    if ( InterfaceFdoInfo >= 0 )
      goto LABEL_8;
    return RaidCompleteRequestEx(a2, 0, InterfaceFdoInfo);
  }
  v6 = CurrentStackLocation->Parameters.QueryInterface.InterfaceType;
  if ( v6 == &GUID_STORAGE_QUERY_FDO_DEVICE_RELATIONS
    || RtlCompareMemory(v6, &GUID_STORAGE_QUERY_FDO_DEVICE_RELATIONS, 0x10uLL) == 16 )
  {
    InterfaceFdoInfo = PortQueryInterfaceFdoQdr(v6, a2, *(_QWORD *)(a1 + 4520));
    goto LABEL_14;
  }
  v7 = CurrentStackLocation->Parameters.QueryInterface.InterfaceType;
  if ( v7 == &GUID_THERMAL_COOLING_INTERFACE || RtlCompareMemory(v7, &GUID_THERMAL_COOLING_INTERFACE, 0x10uLL) == 16 )
  {
    InterfaceFdoInfo = RaidAdapterQueryCoolingInterface(a1, a2);
    if ( InterfaceFdoInfo >= 0 )
      return RaidCompleteRequestEx(a2, 0, InterfaceFdoInfo);
  }
LABEL_8:
  if ( StorEtwLoggingEnabled )
  {
    v12 = 0LL;
    IoGetActivityIdIrp(a2, &v12);
    if ( (byte_1C0069842 & 0x20) != 0 )
    {
      Status = a2->IoStatus.Status;
      McTemplateK0pd_EtwWriteTransfer(v9, &EventPnpRequestComplete, &v12, a2, Status);
    }
  }
  return RaForwardIrp(*(struct _DEVICE_OBJECT **)(a1 + 24), a2);
}
