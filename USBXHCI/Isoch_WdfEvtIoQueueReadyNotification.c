void __fastcall Isoch_WdfEvtIoQueueReadyNotification(__int64 a1, __int64 a2)
{
  char v3; // bp
  int v4; // edx
  int v5; // r8d
  int v6; // r9d
  __int64 v7; // rdi
  int v8; // edx
  int v9; // r8d
  int v10; // r9d
  KIRQL v11; // si
  ULONG CurrentProcessorNumber; // eax
  int v13; // edx
  int v14; // r8d
  int v15; // r9d
  __int64 v16; // rcx
  int v17; // esi
  int v18; // edx
  char i; // di
  int v20; // edx
  int v21; // eax
  __int64 v22; // rcx
  int v23; // eax
  __int64 v24; // rdx
  __int64 v25; // rcx
  int v26; // eax
  __int64 v27; // rbx
  __int64 v28; // rdi
  ULONG_PTR WdmPhysicalDeviceObject; // rax
  __int64 v30; // rax
  KIRQL v31; // cl
  ULONG_PTR v32; // rax
  KIRQL CurrentIrql; // al
  int v34; // edx
  int v35; // r8d
  int v36; // r9d
  int BugCheckParameter4; // [rsp+20h] [rbp-48h]
  int BugCheckParameter4a; // [rsp+20h] [rbp-48h]
  int BugCheckParameter4b; // [rsp+20h] [rbp-48h]
  int BugCheckParameter4c; // [rsp+20h] [rbp-48h]

  v3 = 0;
  if ( KeGetCurrentIrql() != 2 )
  {
    v7 = *(_QWORD *)(a2 + 40);
    if ( KeGetCurrentIrql() == 2 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        WPP_RECORDER_SF_(*(_QWORD *)(v7 + 72), 2, 4, 316, (__int64)&WPP_ac07559723993fb37d1c33c002d3118e_Traceguids);
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_sds(
            WPP_GLOBAL_Control->DeviceExtension,
            v8,
            v9,
            v10,
            BugCheckParameter4a,
            (__int64)"onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\controller.c",
            119,
            (__int64)"Not expected to be called at DISPATCH_LEVEL.");
      }
      if ( !KdRefreshDebuggerNotPresent() )
        __debugbreak();
      Controller_ReportFatalErrorEx(v7, 0, 4134, 0, 0LL, 0LL, 0LL, 0LL);
    }
    else
    {
      v3 = 1;
      v11 = KfRaiseIrql(2u);
      CurrentProcessorNumber = KeGetCurrentProcessorNumberEx(0LL);
      if ( CurrentProcessorNumber < *(_DWORD *)(v7 + 872) )
      {
        v16 = 2LL * CurrentProcessorNumber;
        *(_BYTE *)(v16 + *(_QWORD *)(v7 + 864)) = 1;
        *(_BYTE *)(*(_QWORD *)(v7 + 864) + v16 + 1) = v11;
      }
      else
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v4) = 2;
          WPP_RECORDER_SF_d(
            *(_QWORD *)(v7 + 72),
            v4,
            4,
            317,
            (__int64)&WPP_ac07559723993fb37d1c33c002d3118e_Traceguids,
            CurrentProcessorNumber);
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_sds(
              WPP_GLOBAL_Control->DeviceExtension,
              v13,
              v14,
              v15,
              BugCheckParameter4b,
              (__int64)"onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\controller.c",
              147,
              (__int64)"Processor index out of range.");
        }
        if ( !KdRefreshDebuggerNotPresent() )
          __debugbreak();
        Controller_ReportFatalErrorEx(v7, 0, 4135, 0, 0LL, 0LL, 0LL, 0LL);
        KeLowerIrql(v11);
        v3 = 0;
      }
    }
  }
  if ( *(_DWORD *)(*(_QWORD *)(a2 + 56) + 1360LL) == 2 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_sds(
        WPP_GLOBAL_Control->DeviceExtension,
        v4,
        v5,
        v6,
        BugCheckParameter4,
        (__int64)"onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\isoch.c",
        137,
        (__int64)"IO Received on an endpoint that has been offloaded");
    if ( !KdRefreshDebuggerNotPresent() )
      __debugbreak();
    goto LABEL_59;
  }
  if ( _InterlockedCompareExchange((volatile signed __int32 *)(a2 + 108), 3, 2) != 2 )
  {
    _InterlockedExchange((volatile __int32 *)(a2 + 344), 1);
    if ( _InterlockedCompareExchange((volatile signed __int32 *)(a2 + 108), 3, 2) == 2 )
      Isoch_MapTransfers(a2);
    goto LABEL_59;
  }
  v17 = 0;
  while ( 2 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      v18 = *(unsigned __int8 *)(*(_QWORD *)(a2 + 48) + 135LL);
      LOBYTE(v18) = 5;
      WPP_RECORDER_SF_DDD(
        *(_QWORD *)(*(_QWORD *)(a2 + 56) + 80LL),
        v18,
        14,
        67,
        (__int64)&WPP_393df0ddb70a3b662b6ac53bc5b55086_Traceguids,
        *(_BYTE *)(*(_QWORD *)(a2 + 48) + 135LL),
        *(_DWORD *)(*(_QWORD *)(a2 + 56) + 144LL),
        v17);
    }
    for ( i = 0; ; ++i )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        v20 = *(unsigned __int8 *)(*(_QWORD *)(a2 + 48) + 135LL);
        LOBYTE(v20) = 5;
        WPP_RECORDER_SF_DDD(
          *(_QWORD *)(*(_QWORD *)(a2 + 56) + 80LL),
          v20,
          14,
          66,
          (__int64)&WPP_393df0ddb70a3b662b6ac53bc5b55086_Traceguids,
          *(_BYTE *)(*(_QWORD *)(a2 + 48) + 135LL),
          *(_DWORD *)(*(_QWORD *)(a2 + 56) + 144LL),
          i);
      }
      *(_QWORD *)(a2 + 344) = 0LL;
      if ( !(unsigned __int8)Isoch_RetrieveNextStage(a2) )
      {
        if ( _InterlockedCompareExchange((volatile signed __int32 *)(a2 + 108), 2, 3) == 3 )
          goto LABEL_49;
LABEL_45:
        if ( _InterlockedCompareExchange((volatile signed __int32 *)(a2 + 108), 0, 1) == 1 )
        {
          v24 = *(_QWORD *)(a2 + 56);
          if ( !*(_BYTE *)(v24 + 37)
            || (v25 = *(_QWORD *)(v24 + 136),
                _InterlockedIncrement((volatile signed __int32 *)(v25 + 20)) == *(_DWORD *)(v25 + 8)) )
          {
            ESM_AddEvent((PVOID)(v24 + 296));
          }
        }
        goto LABEL_49;
      }
      v21 = Isoch_PrepareStage(a2);
      if ( v21 != 1 )
        break;
LABEL_39:
      ;
    }
    if ( v21 == 3 )
      goto LABEL_49;
    v22 = a2;
    if ( v21 == 2 )
      goto LABEL_41;
    if ( v21 == 4 )
    {
      TR_AttemptStateChange(a2, 3LL, 2LL);
      goto LABEL_49;
    }
    v23 = Isoch_MapStage(a2);
    if ( v23 == 2 )
      goto LABEL_49;
    if ( v23 != 4 )
    {
      if ( _InterlockedCompareExchange((volatile signed __int32 *)(a2 + 108), 3, 3) != 3 )
        goto LABEL_45;
      goto LABEL_39;
    }
    v22 = a2;
LABEL_41:
    if ( (unsigned int)TR_AttemptStateChange(v22, 3LL, 4LL) == 3 )
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64))(WdfFunctions_01023 + 2552))(
        WdfDriverGlobals,
        *(_QWORD *)(a2 + 320),
        -100000000LL);
LABEL_49:
    v26 = *(_DWORD *)(a2 + 108);
    if ( v26 == 2 )
    {
      if ( *(_DWORD *)(a2 + 344) && _InterlockedCompareExchange((volatile signed __int32 *)(a2 + 108), 3, 2) == 2 )
      {
        ++v17;
        continue;
      }
    }
    else if ( v26 == 4
           && *(_DWORD *)(a2 + 348)
           && _InterlockedCompareExchange((volatile signed __int32 *)(a2 + 108), 3, 4) == 4 )
    {
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01023 + 2560))(
        WdfDriverGlobals,
        *(_QWORD *)(a2 + 320),
        0LL);
      ++v17;
      continue;
    }
    break;
  }
LABEL_59:
  if ( v3 && KeGetCurrentIrql() == 2 )
  {
    v27 = *(_QWORD *)(a2 + 40);
    v28 = KeGetCurrentProcessorNumberEx(0LL);
    if ( KeGetCurrentIrql() == 2 )
    {
      if ( (unsigned int)v28 >= *(_DWORD *)(v27 + 872) )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_d(
            *(_QWORD *)(v27 + 72),
            2,
            4,
            318,
            (__int64)&WPP_ac07559723993fb37d1c33c002d3118e_Traceguids,
            v28);
        WdmPhysicalDeviceObject = Controller_GetWdmPhysicalDeviceObject(v27);
        KeBugCheckEx(0x144u, 4uLL, WdmPhysicalDeviceObject, 2uLL, 1uLL);
      }
      v30 = *(_QWORD *)(v27 + 864);
      v31 = *(_BYTE *)(v30 + 2 * v28 + 1);
      if ( !*(_BYTE *)(v30 + 2 * v28) )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_d(
            *(_QWORD *)(v27 + 72),
            2,
            4,
            319,
            (__int64)&WPP_ac07559723993fb37d1c33c002d3118e_Traceguids,
            v28);
        v32 = Controller_GetWdmPhysicalDeviceObject(v27);
        KeBugCheckEx(0x144u, 4uLL, v32, 2uLL, 2uLL);
      }
      *(_BYTE *)(v30 + 2 * v28) = 0;
      *(_BYTE *)(2 * v28 + *(_QWORD *)(v27 + 864) + 1) = -1;
      KeLowerIrql(v31);
    }
    else
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        CurrentIrql = KeGetCurrentIrql();
        WPP_RECORDER_SF_d(
          *(_QWORD *)(v27 + 72),
          2,
          4,
          320,
          (__int64)&WPP_ac07559723993fb37d1c33c002d3118e_Traceguids,
          CurrentIrql);
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_sds(
            WPP_GLOBAL_Control->DeviceExtension,
            v34,
            v35,
            v36,
            BugCheckParameter4c,
            (__int64)"onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\controller.c",
            237,
            (__int64)"Expected to be called at DISPATCH_LEVEL.");
      }
      if ( !KdRefreshDebuggerNotPresent() )
        __debugbreak();
      Controller_ReportFatalError(v27, 0, 4136, 0, 0LL, 0LL, 0LL);
    }
  }
}
