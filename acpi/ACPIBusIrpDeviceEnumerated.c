__int64 __fastcall ACPIBusIrpDeviceEnumerated(PDEVICE_OBJECT DeviceObject, PIRP Irp)
{
  unsigned __int8 MinorFunction; // r13
  __int64 DeviceExtension; // rax
  char v6; // di
  const char *v7; // rbp
  ULONG_PTR v8; // rbx
  const signed __int64 *v9; // r14
  int v10; // esi
  __int64 v11; // rcx
  char *v12; // rax
  const char *v13; // r8
  __int64 v15; // r9
  char *IrpText; // rax
  const char *v17; // r8
  char v18; // r10
  const char *v19; // r11
  __int64 v20; // rcx
  char *v21; // rax
  const char *v22; // r8
  const char *v23; // r10
  __int64 v24; // rcx
  char *v25; // rax
  const char *v26; // r8
  struct _UNICODE_STRING Data; // [rsp+60h] [rbp-38h] BYREF

  Data = 0LL;
  MinorFunction = Irp->Tail.Overlay.CurrentStackLocation->MinorFunction;
  DeviceExtension = ACPIInternalGetDeviceExtension((ULONG_PTR)DeviceObject);
  v6 = 0;
  v7 = byte_1C00622D0;
  v8 = DeviceExtension;
  v9 = (const signed __int64 *)(DeviceExtension + 8);
  if ( !DeviceExtension )
  {
    v10 = -1073741823;
    goto LABEL_3;
  }
  ACPIQueryPhysicalDeviceLocation(DeviceExtension);
  if ( !_bittest64(v9, 0x33u) && (int)ACPIQueryDeviceBiosNameEx(*(_QWORD *)(v8 + 768), 1, &Data) >= 0 && Data.Buffer )
  {
    IoSetDevicePropertyData(
      *(PDEVICE_OBJECT *)(v8 + 784),
      &DEVPKEY_Device_BiosDeviceName,
      0,
      0,
      0x12u,
      Data.Length + 2,
      Data.Buffer);
    ExFreePoolWithTag(Data.Buffer, 0x53706341u);
  }
  if ( (*v9 & 0x102000000LL) != 0
    && (int)AcpiQueryPciDeviceChassisLabel(v8) < 0
    && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    IrpText = ACPIDebugGetIrpText(*v9, 0x19u);
    WPP_RECORDER_SF_qsLqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      5u,
      0x1Au,
      (__int64)&WPP_efe410a963c03a77fa130710cec25e42_Traceguids,
      (char)Irp,
      (__int64)IrpText,
      v18,
      v8,
      v19,
      v17);
  }
  if ( *(_QWORD *)(v8 + 792) == RootDeviceExtension )
  {
    v10 = ACPIQueryCacheCoherencyAttribute(v8);
    if ( v10 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v21 = ACPIDebugGetIrpText(v20, 0x19u);
      WPP_RECORDER_SF_qsLqss(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        5u,
        0x1Bu,
        (__int64)&WPP_efe410a963c03a77fa130710cec25e42_Traceguids,
        (char)Irp,
        (__int64)v21,
        v10,
        v8,
        v23,
        v22);
    }
  }
  else
  {
    v10 = 0;
  }
  if ( (*v9 & 0x40) != 0 )
  {
    v10 = ACPIIrpSetPagableCompletionRoutineAndForward(
            DeviceObject,
            Irp,
            (__int64)ACPIFilterIrpDeviceEnumeratedCompletion,
            v15,
            1,
            0,
            0);
    if ( v10 < 0 )
    {
      if ( (*v9 & 0x200000000000LL) != 0 )
        v7 = *(const char **)(v8 + 608);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v25 = ACPIDebugGetIrpText(v24, 0x19u);
        WPP_RECORDER_SF_qsLqss(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          2u,
          5u,
          0x1Cu,
          (__int64)&WPP_efe410a963c03a77fa130710cec25e42_Traceguids,
          (char)Irp,
          (__int64)v25,
          v10,
          v8,
          v7,
          v26);
      }
    }
    return (unsigned int)v10;
  }
  if ( (*v9 & 0x10) == 0 )
  {
LABEL_3:
    Irp->IoStatus.Status = v10;
    IofCompleteRequest(Irp, 0);
    if ( v8 )
    {
      v6 = v8;
      if ( (*v9 & 0x200000000000LL) != 0 )
        v7 = *(const char **)(v8 + 608);
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v12 = ACPIDebugGetIrpText(v11, MinorFunction);
      WPP_RECORDER_SF_qsLqss(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        4u,
        5u,
        0x1Du,
        (__int64)&WPP_efe410a963c03a77fa130710cec25e42_Traceguids,
        (char)Irp,
        (__int64)v12,
        v10,
        v6,
        v7,
        v13);
    }
    return (unsigned int)v10;
  }
  return ACPIDispatchForwardIrp((ULONG_PTR)DeviceObject, Irp);
}
