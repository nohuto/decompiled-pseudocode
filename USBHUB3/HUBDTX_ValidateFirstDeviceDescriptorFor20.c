/*
 * XREFs of HUBDTX_ValidateFirstDeviceDescriptorFor20 @ 0x1C002C21C
 * Callers:
 *     HUBDSM_ValidatingDeviceDescriptorInReEnumAtZero @ 0x1C0020ED0 (HUBDSM_ValidatingDeviceDescriptorInReEnumAtZero.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0002034 (WPP_RECORDER_SF_d.c)
 *     McTemplateK0p_EtwWriteTransfer @ 0x1C00071D0 (McTemplateK0p_EtwWriteTransfer.c)
 *     HUBDESC_ValidateDeviceDescriptor @ 0x1C003C5E8 (HUBDESC_ValidateDeviceDescriptor.c)
 *     _guard_dispatch_icall_nop @ 0x1C0044C50 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HUBDTX_ValidateFirstDeviceDescriptorFor20(__int64 a1)
{
  unsigned int v1; // edx
  __int64 v2; // rsi
  unsigned int v4; // edi
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rcx
  int v8; // edx
  bool v9; // cf
  int v10; // edx
  bool v11; // zf
  _WORD v13[2]; // [rsp+30h] [rbp-40h] BYREF
  int v14; // [rsp+34h] [rbp-3Ch]
  __int64 v15; // [rsp+38h] [rbp-38h]
  int v16; // [rsp+40h] [rbp-30h]
  int v17; // [rsp+44h] [rbp-2Ch]
  __int64 (__fastcall *v18)(_QWORD, _QWORD); // [rsp+48h] [rbp-28h]
  void *v19; // [rsp+50h] [rbp-20h]
  __int64 v20; // [rsp+58h] [rbp-18h]
  _BOOL8 v21; // [rsp+60h] [rbp-10h]

  v1 = *(_DWORD *)(a1 + 256);
  v2 = a1 + 1732;
  v4 = 4077;
  if ( v1 < 8 )
  {
    v5 = v1 != 0 ? 1073807365 : 1073807360;
    *(_DWORD *)(a1 + 2432) = v5;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_d(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
        2u,
        5u,
        0x51u,
        (__int64)&WPP_84d33890ce5c36f044156420b7e16ac3_Traceguids,
        v1);
    goto LABEL_6;
  }
  v6 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         WdfDriverGlobals->Driver,
         off_1C006A1E8);
  v7 = *(_QWORD *)(a1 + 8);
  v20 = a1;
  v15 = 0LL;
  v8 = *(_DWORD *)(v6 + 4);
  v13[0] = *(_WORD *)(a1 + 1990);
  v14 = *(_DWORD *)(a1 + 172);
  v21 = 0LL;
  *(_WORD *)((char *)&v15 + 5) = (v8 & 0x20) != 0;
  v13[1] = 0;
  HIBYTE(v15) = (v8 & 0x2000) != 0;
  v9 = (v8 & 0x4000) != 0;
  v10 = *(_DWORD *)(a1 + 256);
  v11 = (*(_DWORD *)(a1 + 1644) & 0x200000) == 0;
  BYTE4(v15) = v9;
  v17 = 0;
  v21 = !v11;
  v16 = *(_DWORD *)(v7 + 220);
  v18 = HUBMISC_LogDescriptorValidationErrorForDevice;
  v19 = &HUBMISC_LogDescriptorValidationWarningForDevice;
  if ( !(unsigned __int8)HUBDESC_ValidateDeviceDescriptor(v2, v10, (unsigned int)v13, 0, *(_QWORD *)(v7 + 1432)) )
  {
    *(_DWORD *)(a1 + 2432) = 1073807365;
LABEL_6:
    v4 = 4065;
    if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 1) != 0 )
      McTemplateK0p_EtwWriteTransfer(
        v5,
        &USBHUB3_ETW_EVENT_INVALID_DEVICE_DESCRIPTOR,
        (const GUID *)(a1 + 1516),
        *(_QWORD *)(a1 + 24));
    return v4;
  }
  *(_DWORD *)(a1 + 160) = *(unsigned __int8 *)(v2 + 7);
  *(_QWORD *)(a1 + 1988) = *(_QWORD *)v2;
  if ( *(_WORD *)(v2 + 8) == 5118 && *(_WORD *)(v2 + 10) == 20992 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 1644), 0x400000u);
  return v4;
}
