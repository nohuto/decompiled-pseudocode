__int64 __fastcall ACPIBusIrpQueryResources(ULONG_PTR a1, IRP *a2)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  char v3; // si
  unsigned __int8 MinorFunction; // r13
  _QWORD *DeviceExtension; // rbx
  const char *v8; // r12
  int Status; // edi
  __int64 v10; // rax
  const char *v11; // rdx
  const char *v12; // rcx
  int DeviceResourceList; // eax
  unsigned __int64 v14; // r8
  _DWORD *v15; // r14
  __int64 v16; // rax
  _DWORD *v17; // rcx
  unsigned int i; // r8d
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rdx
  __int64 v21; // rax
  const char *v22; // rdx
  const char *v23; // rcx
  unsigned __int16 v24; // r9
  void *v25; // rcx
  __int64 v26; // rax
  unsigned __int64 v27; // rax
  __int64 v28; // rcx
  char *IrpText; // rax
  const char *v30; // r8
  unsigned __int64 v32; // [rsp+60h] [rbp-20h] BYREF
  __int64 v33; // [rsp+68h] [rbp-18h] BYREF
  __int128 v34; // [rsp+70h] [rbp-10h] BYREF
  int v35; // [rsp+C8h] [rbp+48h] BYREF
  PVOID P; // [rsp+D0h] [rbp+50h] BYREF
  __int128 *v37; // [rsp+D8h] [rbp+58h] BYREF

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v3 = 0;
  v33 = 0LL;
  v35 = 0;
  v34 = 0LL;
  v37 = 0LL;
  MinorFunction = CurrentStackLocation->MinorFunction;
  v32 = 0LL;
  P = 0LL;
  DeviceExtension = (_QWORD *)ACPIInternalGetDeviceExtension(a1);
  ACPIInitDosDeviceName((__int64)DeviceExtension);
  v8 = byte_1C00622D0;
  Status = ACPIGet((__int64)DeviceExtension, 0x4154535Fu, -1878783998, 0LL, 0, 0LL, 0LL, (__int64)&v33, 0LL);
  if ( Status < 0 )
    goto LABEL_55;
  v10 = DeviceExtension[1];
  if ( (v10 & 0x40000000000000LL) == 0 )
  {
    v11 = byte_1C00622D0;
    v12 = byte_1C00622D0;
    if ( (v10 & 0x200000000000LL) != 0 )
    {
      v11 = (const char *)DeviceExtension[76];
      if ( (v10 & 0x400000000000LL) != 0 )
        v12 = (const char *)DeviceExtension[77];
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qqss(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        5u,
        0x2Eu,
        (__int64)&WPP_efe410a963c03a77fa130710cec25e42_Traceguids,
        (char)a2,
        (char)DeviceExtension,
        v11,
        v12);
    Status = -1073741436;
    goto LABEL_56;
  }
  DeviceResourceList = PnpBiosGetDeviceResourceList(a1, 0LL, &P);
  v15 = P;
  Status = DeviceResourceList;
  if ( P )
  {
    if ( (DeviceExtension[1] & 0x2000000) == 0 )
    {
      *(_QWORD *)&v34 = DeviceExtension[95];
      DWORD2(v34) = 8;
      v37 = &v34;
      if ( (int)EmClientRuleEvaluate(&GUID_EM_RULE_ACPI_SWALLOW_OBJECT_CRS, &v37, 1LL, &v35) >= 0 && v35 == 2 )
      {
        ExFreePoolWithTag(v15, 0);
        v15 = 0LL;
      }
    }
    if ( v15 )
    {
      v16 = DeviceExtension[1];
      if ( (v16 & 0x2000000) != 0 )
      {
        ACPIRangeValidatePciResources((ULONG_PTR)DeviceExtension, (ULONG_PTR)v15, v14);
      }
      else if ( (v16 & 0x200000000LL) != 0 )
      {
        Status = ACPIRangeFilterPICInterrupt((__int64)v15);
        if ( Status < 0 )
        {
          v21 = DeviceExtension[1];
          v22 = byte_1C00622D0;
          v23 = byte_1C00622D0;
          if ( (v21 & 0x200000000000LL) != 0 )
          {
            v22 = (const char *)DeviceExtension[76];
            if ( (v21 & 0x400000000000LL) != 0 )
              v23 = (const char *)DeviceExtension[77];
          }
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_28;
          v24 = 47;
          goto LABEL_27;
        }
      }
      if ( (DeviceExtension[1] & 0x8000LL) != 0 )
      {
        v17 = v15 + 8;
        for ( i = 0; i < v15[7]; v17 += 8 * (unsigned int)v17[1] + 2 )
        {
          v19 = (unsigned __int64)(v17 + 2);
          v20 = (unsigned __int64)&v17[8 * v17[1] + 2];
          while ( v19 < v20 )
          {
            if ( *(_BYTE *)(v19 + 1) == 2 )
              *(_WORD *)(v19 + 4) |= 8u;
            v19 += 32LL;
          }
          ++i;
        }
      }
      Status = ACPIInternalInterruptPolarityCacheStorePolaritiesFromList((__int64)DeviceExtension, (__int64)v15);
      if ( Status >= 0 )
      {
        Status = PnpIoResourceListToCmResourceList(v15, &v32);
        v25 = v15;
        if ( Status >= 0 )
        {
          ExFreePoolWithTag(v15, 0);
          goto LABEL_43;
        }
        goto LABEL_29;
      }
      v26 = DeviceExtension[1];
      v22 = byte_1C00622D0;
      v23 = byte_1C00622D0;
      if ( (v26 & 0x200000000000LL) != 0 )
      {
        v22 = (const char *)DeviceExtension[76];
        if ( (v26 & 0x400000000000LL) != 0 )
          v23 = (const char *)DeviceExtension[77];
      }
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
LABEL_28:
        v25 = v15;
LABEL_29:
        ExFreePoolWithTag(v25, 0);
        goto LABEL_55;
      }
      v24 = 48;
LABEL_27:
      WPP_RECORDER_SF_qLqss(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        5u,
        v24,
        (__int64)&WPP_efe410a963c03a77fa130710cec25e42_Traceguids,
        (char)a2,
        Status,
        (char)DeviceExtension,
        v22,
        v23);
      goto LABEL_28;
    }
  }
  if ( Status < 0 )
  {
LABEL_55:
    if ( Status == -1073741670 )
      goto LABEL_43;
    goto LABEL_56;
  }
  if ( (DeviceExtension[1] & 0x2000000) == 0 )
  {
    Status = a2->IoStatus.Status;
    if ( Status >= 0 )
      goto LABEL_43;
    goto LABEL_55;
  }
  Status = -1073741823;
LABEL_56:
  if ( (DeviceExtension[1] & 0x2000000) != 0 )
    KeBugCheckEx(0xA5u, 2uLL, (ULONG_PTR)DeviceExtension, 0LL, (ULONG_PTR)a2);
LABEL_43:
  a2->IoStatus.Status = Status;
  v27 = 0LL;
  if ( Status >= 0 )
    v27 = v32;
  a2->IoStatus.Information = v27;
  IofCompleteRequest(a2, 0);
  if ( DeviceExtension )
  {
    v3 = (char)DeviceExtension;
    if ( (DeviceExtension[1] & 0x200000000000LL) != 0 )
      v8 = (const char *)DeviceExtension[76];
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    IrpText = ACPIDebugGetIrpText(v28, MinorFunction);
    WPP_RECORDER_SF_qsLqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      5u,
      0x31u,
      (__int64)&WPP_efe410a963c03a77fa130710cec25e42_Traceguids,
      (char)a2,
      (__int64)IrpText,
      Status,
      v3,
      v8,
      v30);
  }
  return (unsigned int)Status;
}
