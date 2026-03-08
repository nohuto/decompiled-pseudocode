/*
 * XREFs of Control_Transfer_Complete @ 0x1C0005E64
 * Callers:
 *     Control_Transfer_CompleteCancelable @ 0x1C0006FBC (Control_Transfer_CompleteCancelable.c)
 *     Control_WdfDpcForCanceledOnQueueTransferCompletion @ 0x1C0042E30 (Control_WdfDpcForCanceledOnQueueTransferCompletion.c)
 * Callees:
 *     TR_GetUsbdStatusFromTrbCompletionCode @ 0x1C0005FE4 (TR_GetUsbdStatusFromTrbCompletionCode.c)
 *     Control_TransferData_Free @ 0x1C0006034 (Control_TransferData_Free.c)
 *     WPP_RECORDER_SF_DDqdDD @ 0x1C00061BC (WPP_RECORDER_SF_DDqdDD.c)
 *     _guard_dispatch_icall_nop @ 0x1C0020390 (_guard_dispatch_icall_nop.c)
 */

KIRQL __fastcall Control_Transfer_Complete(__int64 a1, __int64 a2)
{
  int v4; // r8d
  int UsbdStatusFromTrbCompletionCode; // r9d
  __int64 v6; // rdx
  __int64 v7; // r10
  int v8; // eax
  __int64 v9; // rbp
  int v10; // r14d
  KIRQL v11; // bl
  KIRQL result; // al
  int v13; // ecx
  unsigned int v14; // eax

  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), *(_BYTE *)(a1 + 104));
  v6 = *(unsigned int *)(a2 + 124);
  v7 = *(_QWORD *)(a2 + 48);
  if ( (_DWORD)v6 )
  {
    UsbdStatusFromTrbCompletionCode = TR_GetUsbdStatusFromTrbCompletionCode(a1, v6, 0xFFFFFFFFLL);
    *(_DWORD *)(v7 + 4) = UsbdStatusFromTrbCompletionCode;
    if ( UsbdStatusFromTrbCompletionCode <= -1073737728 )
    {
      switch ( UsbdStatusFromTrbCompletionCode )
      {
        case -1073737728:
          v8 = -1073741670;
          goto LABEL_7;
        case -2147483136:
        case -2147482880:
        case -2147482112:
        case -1073739264:
          v8 = -1073741811;
          goto LABEL_7;
        case -1073738240:
          v8 = -1073741637;
          goto LABEL_7;
      }
    }
    else
    {
      if ( UsbdStatusFromTrbCompletionCode == -1073713152 )
      {
        v8 = -1073741810;
        goto LABEL_7;
      }
      if ( UsbdStatusFromTrbCompletionCode == -1073676288 )
      {
        v8 = -1073741536;
        goto LABEL_7;
      }
      if ( (unsigned int)UsbdStatusFromTrbCompletionCode <= 1 )
      {
        v8 = 0;
LABEL_7:
        *(_DWORD *)(a2 + 120) = v8;
        goto LABEL_8;
      }
    }
    v8 = -1073741823;
    goto LABEL_7;
  }
  if ( *(_DWORD *)(a2 + 112) == 3 || *(_DWORD *)(a2 + 116) == 3 )
    *(_DWORD *)(a2 + 120) = -1073741536;
  v13 = *(_DWORD *)(a2 + 120);
  switch ( v13 )
  {
    case -1073741810:
      v14 = -1073713152;
      break;
    case -1073741670:
      v14 = -1073737728;
      break;
    case -1073741637:
      v14 = -1073738240;
      break;
    case -1073741536:
      v14 = -1073676288;
      break;
    default:
      v14 = v13 != 0 ? 0x80000300 : 0;
      break;
  }
  *(_DWORD *)(v7 + 4) = v14;
LABEL_8:
  v9 = *(unsigned int *)(a2 + 108);
  v10 = *(_DWORD *)(a2 + 120);
  *(_DWORD *)(v7 + 36) = v9;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_DDqdDD(
      *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
      *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL),
      v4,
      UsbdStatusFromTrbCompletionCode);
  Control_TransferData_Free(a1, a2);
  v11 = KfRaiseIrql(2u);
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01023 + 2104))(
    WdfDriverGlobals,
    *(_QWORD *)(a2 + 24),
    (unsigned int)v10);
  KeLowerIrql(v11);
  result = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
  ++*(_DWORD *)(a1 + 240);
  *(_QWORD *)(a1 + 248) += v9;
  *(_BYTE *)(a1 + 104) = result;
  if ( v10 < 0 )
    ++*(_DWORD *)(a1 + 244);
  return result;
}
