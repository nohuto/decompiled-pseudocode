/*
 * XREFs of Control_Transfer_Complete @ 0x1C0004260
 * Callers:
 *     Control_Transfer_CompleteCancelable @ 0x1C00041A4 (Control_Transfer_CompleteCancelable.c)
 *     Control_WdfDpcForCanceledOnQueueTransferCompletion @ 0x1C0040050 (Control_WdfDpcForCanceledOnQueueTransferCompletion.c)
 * Callees:
 *     Control_TransferData_Free @ 0x1C00043F8 (Control_TransferData_Free.c)
 *     WPP_RECORDER_SF_DDqdDD @ 0x1C00044A4 (WPP_RECORDER_SF_DDqdDD.c)
 *     TR_GetUsbdStatusFromTrbCompletionCode @ 0x1C0004588 (TR_GetUsbdStatusFromTrbCompletionCode.c)
 *     _guard_dispatch_icall_nop @ 0x1C001AFF0 (_guard_dispatch_icall_nop.c)
 */

KIRQL __fastcall Control_Transfer_Complete(__int64 a1, __int64 a2)
{
  int v4; // r8d
  __int64 v5; // rdx
  __int64 v6; // r9
  int UsbdStatusFromTrbCompletionCode; // eax
  int v8; // ebp
  __int64 v9; // r14
  KIRQL v10; // di
  KIRQL result; // al
  int v12; // eax
  unsigned int v13; // ecx

  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), *(_BYTE *)(a1 + 104));
  v5 = *(unsigned int *)(a2 + 124);
  v6 = *(_QWORD *)(a2 + 48);
  if ( (_DWORD)v5 )
  {
    UsbdStatusFromTrbCompletionCode = TR_GetUsbdStatusFromTrbCompletionCode(a1, v5, 0xFFFFFFFFLL, v6);
    *(_DWORD *)(v6 + 4) = UsbdStatusFromTrbCompletionCode;
    if ( !UsbdStatusFromTrbCompletionCode )
    {
LABEL_3:
      v8 = 0;
LABEL_4:
      *(_DWORD *)(a2 + 120) = v8;
      goto LABEL_5;
    }
    if ( UsbdStatusFromTrbCompletionCode > -1073738240 )
    {
      switch ( UsbdStatusFromTrbCompletionCode )
      {
        case -1073737728:
          v8 = -1073741670;
          goto LABEL_4;
        case -1073713152:
          v8 = -1073741810;
          goto LABEL_4;
        case -1073676288:
          v8 = -1073741536;
          goto LABEL_4;
        case 1:
          goto LABEL_3;
      }
    }
    else
    {
      if ( UsbdStatusFromTrbCompletionCode == -1073738240 )
      {
        v8 = -1073741637;
        goto LABEL_4;
      }
      if ( UsbdStatusFromTrbCompletionCode == -2147483136
        || UsbdStatusFromTrbCompletionCode == -2147482880
        || UsbdStatusFromTrbCompletionCode == -2147482112
        || UsbdStatusFromTrbCompletionCode == -1073739264 )
      {
        v8 = -1073741811;
        goto LABEL_4;
      }
    }
    v8 = -1073741823;
    goto LABEL_4;
  }
  if ( *(_DWORD *)(a2 + 112) == 3 || *(_DWORD *)(a2 + 116) == 3 )
  {
    *(_DWORD *)(a2 + 120) = -1073741536;
    goto LABEL_29;
  }
  v12 = *(_DWORD *)(a2 + 120);
  switch ( v12 )
  {
    case -1073741810:
      v13 = -1073713152;
      goto LABEL_30;
    case -1073741670:
      v13 = -1073737728;
      goto LABEL_30;
    case -1073741637:
      v13 = -1073738240;
      goto LABEL_30;
    case -1073741536:
LABEL_29:
      v13 = -1073676288;
      goto LABEL_30;
  }
  v13 = v12 != 0 ? 0x80000300 : 0;
LABEL_30:
  *(_DWORD *)(v6 + 4) = v13;
  v8 = *(_DWORD *)(a2 + 120);
LABEL_5:
  v9 = *(unsigned int *)(a2 + 108);
  *(_DWORD *)(v6 + 36) = v9;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_DDqdDD(
      *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
      *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL),
      v4,
      v6);
  Control_TransferData_Free(a1, a2);
  v10 = KfRaiseIrql(2u);
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01023 + 2104))(
    WdfDriverGlobals,
    *(_QWORD *)(a2 + 24),
    (unsigned int)v8);
  KeLowerIrql(v10);
  result = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
  ++*(_DWORD *)(a1 + 240);
  *(_QWORD *)(a1 + 248) += v9;
  *(_BYTE *)(a1 + 104) = result;
  if ( v8 < 0 )
    ++*(_DWORD *)(a1 + 244);
  return result;
}
