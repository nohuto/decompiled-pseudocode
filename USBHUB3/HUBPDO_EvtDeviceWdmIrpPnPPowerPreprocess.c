__int64 __fastcall HUBPDO_EvtDeviceWdmIrpPnPPowerPreprocess(__int64 a1, IRP *a2)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // r14
  __int64 v3; // rbp
  int Status; // r15d
  int v7; // edi
  unsigned int MinorFunction; // ecx
  unsigned int v9; // ecx
  unsigned int v10; // ecx
  unsigned int v11; // ecx
  unsigned int v13; // ecx
  unsigned int v14; // ecx
  unsigned int v15; // ecx
  __int64 v16; // rax
  __int64 v17; // rdi
  __int64 v18; // rax
  int v19; // edi
  unsigned int v20; // edi
  int v21; // eax
  __int64 v22; // rax
  int LowPart; // eax
  _IO_STACK_LOCATION *v24; // rax
  _IO_STACK_LOCATION *v25; // rax
  __int64 v27; // [rsp+28h] [rbp-20h]

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v3 = 0LL;
  Status = a2->IoStatus.Status;
  v7 = 2;
  if ( CurrentStackLocation->MajorFunction == 22 )
  {
    if ( CurrentStackLocation->MinorFunction != 2 || CurrentStackLocation->Parameters.Create.Options != 1 )
      goto LABEL_52;
    v3 = *(_QWORD *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
                       WdfDriverGlobals,
                       a1,
                       off_1C006A0F8)
                   + 24);
    if ( CurrentStackLocation->Parameters.Read.ByteOffset.LowPart == 4 && *(_DWORD *)(v3 + 2460) == 3 )
    {
      v21 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64))(WdfFunctions_01015 + 688))(
              WdfDriverGlobals,
              a1,
              3221226195LL);
      if ( v21 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_d(
          *(_QWORD *)(*(_QWORD *)(v3 + 8) + 1432LL),
          3u,
          5u,
          0x33u,
          (__int64)&WPP_89394142541e3c268d3f106ce98d6cb5_Traceguids,
          v21);
      v22 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
              WdfDriverGlobals,
              a1,
              off_1C006A0F8);
      HUBIDLE_AddEvent(v22 + 72, 6008LL, 0LL);
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v27) = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(*(_QWORD *)(v3 + 8) + 1432LL),
        4u,
        5u,
        0x34u,
        (__int64)&WPP_89394142541e3c268d3f106ce98d6cb5_Traceguids,
        v27);
    }
    LowPart = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
    if ( LowPart > 1 )
      *(_DWORD *)(v3 + 2708) = LowPart;
    *(_DWORD *)(v3 + 2460) = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
LABEL_51:
    v24 = a2->Tail.Overlay.CurrentStackLocation;
    *(_OWORD *)&v24[-1].MajorFunction = *(_OWORD *)&v24->MajorFunction;
    *(_OWORD *)&v24[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&v24->Parameters.NotifyDirectoryEx.CompletionFilter;
    *(_OWORD *)(&v24[-1].Parameters.SetQuota + 6) = *(_OWORD *)(&v24->Parameters.SetQuota + 6);
    v24[-1].FileObject = v24->FileObject;
    v24[-1].Control = 0;
    v25 = a2->Tail.Overlay.CurrentStackLocation;
    v25[-1].CompletionRoutine = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *, void *))HUBPDO_WdmPnpPowerIrpCompletionRoutineForAsynchronousCompletion;
    v25[-1].Context = (void *)v3;
    v25[-1].Control = -32;
    return (unsigned int)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, IRP *))(WdfFunctions_01015 + 272))(
                           WdfDriverGlobals,
                           a1,
                           a2);
  }
  if ( CurrentStackLocation->MajorFunction != 27 )
  {
LABEL_52:
    ++a2->CurrentLocation;
    ++a2->Tail.Overlay.CurrentStackLocation;
    return (unsigned int)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, IRP *))(WdfFunctions_01015 + 272))(
                           WdfDriverGlobals,
                           a1,
                           a2);
  }
  MinorFunction = CurrentStackLocation->MinorFunction;
  if ( MinorFunction > 0xC )
  {
    v13 = MinorFunction - 19;
    if ( !v13 )
    {
      HUBPDO_EvtDeviceWdmIrpQueryIdPreprocess(a1);
      goto LABEL_33;
    }
    v14 = v13 - 1;
    if ( !v14 )
    {
      HUBPDO_DispatchWdmPnpPowerIrpSynchronously(a1);
      if ( a2->IoStatus.Information )
      {
        v18 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
                WdfDriverGlobals,
                a1,
                off_1C006A0F8);
        v3 = *(_QWORD *)(v18 + 24);
        if ( *(_DWORD *)(v3 + 2432) )
        {
          HUBREG_UpdateSqmEnumerationFailureCode(*(_QWORD *)(v18 + 24));
          HUBMISC_ReportPnPFailureProblem(a1);
        }
        goto LABEL_17;
      }
      goto LABEL_11;
    }
    v15 = v14 - 3;
    if ( v15 )
    {
      if ( v15 == 2 )
      {
        HUBPDO_DispatchWdmPnpPowerIrpSynchronously(a1);
        HUBPDO_QueryForD3ColdSupportInAcpi(a1);
        v16 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
                WdfDriverGlobals,
                a1,
                off_1C006A0F8);
        v17 = v16;
        if ( *(_QWORD *)(*(_QWORD *)(v16 + 24) + 2648LL) )
          HUBPDO_PublishBillboardDetails(v16);
        if ( (*(_DWORD *)(*(_QWORD *)(v17 + 24) + 1632LL) & 0x40000) != 0 )
          HUBPDO_PublishDualRoleFeaturesProperty(v17);
        a2->IoStatus.Status = 0;
        goto LABEL_17;
      }
      goto LABEL_33;
    }
LABEL_18:
    HUBPDO_DispatchWdmPnpPowerIrpSynchronously(a1);
    goto LABEL_17;
  }
  if ( MinorFunction == 12 )
    return (unsigned int)HUBPDO_EvtDeviceWdmIrpQueryDeviceTextPreprocess(a1);
  if ( !CurrentStackLocation->MinorFunction )
    goto LABEL_18;
  v9 = MinorFunction - 1;
  if ( v9 )
  {
    v10 = v9 - 1;
    if ( !v10 )
    {
      *(_QWORD *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
                    WdfDriverGlobals,
                    a1,
                    off_1C006A0F8)
                + 64) = 0LL;
      goto LABEL_33;
    }
    v11 = v10 - 6;
    if ( v11 )
    {
      if ( v11 != 3 )
        goto LABEL_33;
      HUBPDO_DispatchWdmPnpPowerIrpSynchronously(a1);
LABEL_11:
      a2->IoStatus.Status = Status;
LABEL_17:
      v7 = 0;
      goto LABEL_33;
    }
    return (unsigned int)HUBPDO_EvtDeviceWdmIrpQueryInterfacePreprocess(a1);
  }
  v3 = *(_QWORD *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
                     WdfDriverGlobals,
                     a1,
                     off_1C006A0F8)
                 + 24);
  if ( (*(_DWORD *)(v3 + 1644) & 0x4000000) != 0
    && *(_BYTE *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
                    WdfDriverGlobals,
                    a1,
                    off_1C006A0F8)
                + 536) == 1 )
  {
    a2->IoStatus.Status = -1073740537;
    goto LABEL_17;
  }
LABEL_33:
  if ( !v7 )
  {
    v20 = a2->IoStatus.Status;
    IofCompleteRequest(a2, 0);
    return v20;
  }
  v19 = v7 - 1;
  if ( !v19 )
    goto LABEL_51;
  if ( v19 == 1 )
    goto LABEL_52;
  return (unsigned int)-1073741823;
}
