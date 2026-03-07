__int64 __fastcall ACPIBusIrpQueryId(ULONG_PTR a1, IRP *a2)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rbx
  char v3; // si
  int Status; // r14d
  unsigned __int8 MinorFunction; // r13
  _QWORD *DeviceExtension; // rax
  unsigned int Length; // ebx
  const char *v9; // r12
  _QWORD *v10; // rdi
  char *IrpText; // rax
  __int64 v12; // rdx
  const char *v13; // r8
  char v14; // r10
  const char *v15; // r11
  int DeviceId; // eax
  _WORD *v17; // rcx
  __int64 v18; // rcx
  char *v19; // rax
  const char *v20; // r8
  int v22; // [rsp+A8h] [rbp+48h] BYREF
  PVOID P; // [rsp+B0h] [rbp+50h] BYREF
  __int64 v24; // [rsp+B8h] [rbp+58h] BYREF

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v3 = 0;
  Status = a2->IoStatus.Status;
  v22 = 0;
  v24 = 0LL;
  P = 0LL;
  MinorFunction = CurrentStackLocation->MinorFunction;
  DeviceExtension = (_QWORD *)ACPIInternalGetDeviceExtension(a1);
  Length = CurrentStackLocation->Parameters.Read.Length;
  v9 = byte_1C00622D0;
  v10 = DeviceExtension;
  switch ( Length )
  {
    case 0u:
      DeviceId = ACPIBusIrpQueryDeviceId((wchar_t **)&P, (size_t *)&v24, DeviceExtension);
      goto LABEL_13;
    case 1u:
      DeviceId = ACPIBusIrpQueryHardwareId((wchar_t **)&P, (size_t *)&v24, (__int64)DeviceExtension);
      goto LABEL_13;
    case 2u:
      DeviceId = ACPIBusIrpQueryCompatibleId((wchar_t **)&P, (size_t *)&v24, (__int64)DeviceExtension);
      goto LABEL_13;
    case 3u:
      DeviceId = ACPIBusIrpQueryInstanceId(&P, &v24, DeviceExtension);
      goto LABEL_13;
    case 5u:
      DeviceId = ACPIBusAndFilterIrpQueryContainerId(&P, &v24, (__int64)DeviceExtension);
LABEL_13:
      Status = DeviceId;
      goto LABEL_14;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    IrpText = ACPIDebugGetIrpText(Length - 3, MinorFunction);
    WPP_RECORDER_SF_qsdqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v12,
      (__int64)v13,
      0x2Au,
      (__int64)&WPP_efe410a963c03a77fa130710cec25e42_Traceguids,
      (char)a2,
      IrpText,
      Length,
      v14,
      v15,
      v13);
  }
LABEL_14:
  if ( (AcpiOverrideAttributes & 0x100000) == 0 || Length - 1 > 1 || Status < 0 )
  {
LABEL_21:
    v17 = P;
    goto LABEL_22;
  }
  v17 = P;
  if ( P )
  {
    if ( (int)ACPIEmQueryEnableD3ColdOnSurpriseRemovalRule(Length, P, &v22) >= 0 && v22 == 2 )
      ACPIInternalSetFlags(v10 + 126, 0x800000uLL);
    goto LABEL_21;
  }
LABEL_22:
  if ( (AcpiOverrideAttributes & 0x200000) != 0 && Length - 1 <= 1 )
  {
    if ( Status >= 0 )
    {
      if ( v17 )
      {
        if ( (int)ACPIEmQueryFailDeviceResetOnOpenHandles(Length, v17) >= 0 && v22 == 2 )
          ACPIInternalSetFlags(v10 + 126, 0x40000000uLL);
        v17 = P;
      }
      goto LABEL_31;
    }
  }
  else if ( Status >= 0 )
  {
LABEL_31:
    a2->IoStatus.Information = (unsigned __int64)v17;
    goto LABEL_34;
  }
  if ( v17 )
    ExFreePoolWithTag(v17, 0x53706341u);
LABEL_34:
  a2->IoStatus.Status = Status;
  IofCompleteRequest(a2, 0);
  if ( v10 )
  {
    v3 = (char)v10;
    if ( (v10[1] & 0x200000000000LL) != 0 )
      v9 = (const char *)v10[76];
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v19 = ACPIDebugGetIrpText(v18, MinorFunction);
    WPP_RECORDER_SF_qsdLqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      (__int64)v20,
      0x2Bu,
      (__int64)&WPP_efe410a963c03a77fa130710cec25e42_Traceguids,
      (char)a2,
      v19,
      Length,
      Status,
      v3,
      v9,
      v20);
  }
  return (unsigned int)Status;
}
