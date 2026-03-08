/*
 * XREFs of Control_WdfEvtIoDefault @ 0x1C0005C60
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_DDqDq @ 0x1C00060E0 (WPP_RECORDER_SF_DDqDq.c)
 *     Control_Transfer_CompleteCancelable @ 0x1C0006FBC (Control_Transfer_CompleteCancelable.c)
 *     Control_TransferData_Initialize @ 0x1C00070AC (Control_TransferData_Initialize.c)
 *     Control_MapTransfer @ 0x1C00071B4 (Control_MapTransfer.c)
 *     Controller_LowerAndTrackIrql @ 0x1C00074BC (Controller_LowerAndTrackIrql.c)
 *     Controller_RaiseAndTrackIrql @ 0x1C0007558 (Controller_RaiseAndTrackIrql.c)
 *     WPP_RECORDER_SF_DDd @ 0x1C001BCB0 (WPP_RECORDER_SF_DDd.c)
 *     __security_check_cookie @ 0x1C001E820 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0020390 (_guard_dispatch_icall_nop.c)
 */

void __fastcall Control_WdfEvtIoDefault(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  char v4; // bp
  __int64 v5; // r14
  __int64 v6; // rsi
  int v7; // r9d
  KIRQL v8; // al
  __int64 v9; // rdx
  int v10; // eax
  KIRQL v11; // dl
  __int64 v12; // rdx
  char v13; // r8
  _OWORD v14[2]; // [rsp+50h] [rbp-58h] BYREF
  __int64 v15; // [rsp+70h] [rbp-38h]

  v3 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
         WdfDriverGlobals,
         a1,
         off_1C0063388);
  v4 = 0;
  if ( KeGetCurrentIrql() != 2 )
    v4 = Controller_RaiseAndTrackIrql(*(_QWORD *)(v3 + 40));
  v15 = 0LL;
  memset(v14, 0, sizeof(v14));
  LOWORD(v14[0]) = 40;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _OWORD *))(WdfFunctions_01023 + 2128))(
    WdfDriverGlobals,
    a2,
    v14);
  v5 = *((_QWORD *)&v14[0] + 1);
  v6 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
         WdfDriverGlobals,
         a2,
         off_1C0063090);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_DDqDq(
      *(_QWORD *)(*(_QWORD *)(v3 + 56) + 80LL),
      *(_DWORD *)(v5 + 36),
      *(unsigned __int8 *)(*(_QWORD *)(v3 + 48) + 135LL),
      v7);
  Control_TransferData_Initialize(v3, a2, v5, v6);
  v8 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v3 + 96));
  *(_QWORD *)(v3 + 344) = v6;
  *(_BYTE *)(v3 + 104) = v8;
  v9 = *(_QWORD *)(v6 + 24);
  *(_QWORD *)(v6 + 128) = 0LL;
  *(_DWORD *)(v6 + 112) = 1;
  v10 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64 (__fastcall *)()))(WdfFunctions_01023 + 3144))(
          WdfDriverGlobals,
          v9,
          Control_WdfEvtRequestCancel);
  if ( v10 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v12 = *(_QWORD *)(v3 + 48);
      v13 = *(_BYTE *)(v12 + 135);
      LOBYTE(v12) = 3;
      WPP_RECORDER_SF_DDd(
        *(_QWORD *)(*(_QWORD *)(v3 + 56) + 80LL),
        v12,
        14,
        38,
        (__int64)&WPP_1132998d7a983e6252cacd8244985166_Traceguids,
        v13,
        *(_DWORD *)(*(_QWORD *)(v3 + 56) + 144LL),
        v10);
    }
    *(_DWORD *)(v6 + 112) = 3;
    Control_Transfer_CompleteCancelable(v3);
    v11 = *(_BYTE *)(v3 + 104);
  }
  else
  {
    v11 = *(_BYTE *)(v3 + 104);
    if ( *(_DWORD *)(v3 + 108) == 2 )
    {
      *(_DWORD *)(v3 + 108) = 3;
      KeReleaseSpinLock((PKSPIN_LOCK)(v3 + 96), v11);
      Control_MapTransfer(v3);
      goto LABEL_8;
    }
  }
  KeReleaseSpinLock((PKSPIN_LOCK)(v3 + 96), v11);
LABEL_8:
  if ( v4 )
  {
    if ( KeGetCurrentIrql() == 2 )
      Controller_LowerAndTrackIrql(*(_QWORD *)(v3 + 40));
  }
}
