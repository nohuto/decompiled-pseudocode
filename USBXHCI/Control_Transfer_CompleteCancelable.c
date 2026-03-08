/*
 * XREFs of Control_Transfer_CompleteCancelable @ 0x1C0006FBC
 * Callers:
 *     Control_WdfEvtIoDefault @ 0x1C0005C60 (Control_WdfEvtIoDefault.c)
 *     Control_ProcessTransferEventWithED1 @ 0x1C0006840 (Control_ProcessTransferEventWithED1.c)
 *     Control_MapTransfer @ 0x1C00071B4 (Control_MapTransfer.c)
 *     Control_ProcessTransferCompletion @ 0x1C0042704 (Control_ProcessTransferCompletion.c)
 * Callees:
 *     Control_Transfer_Complete @ 0x1C0005E64 (Control_Transfer_Complete.c)
 *     WPP_RECORDER_SF_DD @ 0x1C0007C90 (WPP_RECORDER_SF_DD.c)
 *     WPP_RECORDER_SF_DDd @ 0x1C001BCB0 (WPP_RECORDER_SF_DDd.c)
 *     _guard_dispatch_icall_nop @ 0x1C0020390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Control_Transfer_CompleteCancelable(_QWORD *a1)
{
  __int64 v1; // rbx
  int v3; // esi
  __int64 v5; // rdx
  char v6; // r8
  int v7; // edx

  v1 = a1[43];
  if ( *(_DWORD *)(v1 + 112) == 1 )
  {
    v3 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01023 + 2048))(
           WdfDriverGlobals,
           *(_QWORD *)(v1 + 24));
    if ( v3 < 0 )
    {
      *(_DWORD *)(v1 + 112) = 2;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v5 = a1[6];
        v6 = *(_BYTE *)(v5 + 135);
        LOBYTE(v5) = 4;
        WPP_RECORDER_SF_DDd(
          *(_QWORD *)(a1[7] + 80LL),
          v5,
          14,
          43,
          (__int64)&WPP_1132998d7a983e6252cacd8244985166_Traceguids,
          v6,
          *(_DWORD *)(a1[7] + 144LL),
          v3);
      }
      return (unsigned int)v3;
    }
    *(_DWORD *)(v1 + 112) = 0;
  }
  if ( *(_DWORD *)(v1 + 116) != 1 )
  {
LABEL_7:
    a1[43] = 0LL;
    Control_Transfer_Complete((__int64)a1, v1);
    return 0;
  }
  if ( (*(unsigned __int8 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01023 + 2560))(
         WdfDriverGlobals,
         a1[42],
         0LL) )
  {
    *(_DWORD *)(v1 + 116) = 0;
    goto LABEL_7;
  }
  v3 = -1073741536;
  *(_DWORD *)(v1 + 116) = 2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v7 = *(unsigned __int8 *)(a1[6] + 135LL);
    LOBYTE(v7) = 4;
    WPP_RECORDER_SF_DD(
      *(_QWORD *)(a1[7] + 80LL),
      v7,
      14,
      44,
      (__int64)&WPP_1132998d7a983e6252cacd8244985166_Traceguids,
      *(_BYTE *)(a1[6] + 135LL),
      *(_DWORD *)(a1[7] + 144LL));
  }
  return (unsigned int)v3;
}
