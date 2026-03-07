__int64 __fastcall HUBDTX_ValidateAndCacheMSOSExtendedConfigDescriptor(__int64 a1)
{
  __int64 v2; // rax
  unsigned __int16 v3; // cx
  int v4; // ecx
  bool v5; // cf
  __int64 v6; // rcx
  bool v7; // zf
  __int64 v8; // rdx
  PVOID *v9; // rsi
  unsigned int v10; // ebx
  __int64 v12; // [rsp+30h] [rbp-40h] BYREF
  __int64 v13; // [rsp+38h] [rbp-38h]
  __int64 v14; // [rsp+40h] [rbp-30h]
  __int64 (__fastcall *v15)(_QWORD, _QWORD); // [rsp+48h] [rbp-28h]
  void *v16; // [rsp+50h] [rbp-20h]
  __int64 v17; // [rsp+58h] [rbp-18h]
  _BOOL8 v18; // [rsp+60h] [rbp-10h]

  v2 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         WdfDriverGlobals->Driver,
         off_1C006A1E8);
  v3 = *(_WORD *)(a1 + 1990);
  v13 = 0LL;
  LODWORD(v12) = v3;
  HIDWORD(v12) = *(_DWORD *)(a1 + 172);
  v4 = *(_DWORD *)(v2 + 4);
  v18 = 0LL;
  *(_WORD *)((char *)&v13 + 5) = (v4 & 0x20) != 0;
  HIBYTE(v13) = (v4 & 0x2000) != 0;
  v5 = (v4 & 0x4000) != 0;
  v6 = *(_QWORD *)(a1 + 8);
  v7 = (*(_DWORD *)(a1 + 1644) & 0x200000) == 0;
  BYTE4(v13) = v5;
  HIDWORD(v14) = 0;
  v8 = *(unsigned int *)(a1 + 256);
  v18 = !v7;
  LODWORD(v14) = *(_DWORD *)(v6 + 220);
  v15 = HUBMISC_LogDescriptorValidationErrorForDevice;
  v16 = &HUBMISC_LogDescriptorValidationWarningForDevice;
  v17 = a1;
  if ( (_DWORD)v8 == *(_DWORD *)(a1 + 1732) )
  {
    v9 = (PVOID *)(a1 + 2104);
    if ( (unsigned __int8)HUBDESC_ValidateMSOSExtendedConfigDescriptor(
                            *(_QWORD *)(a1 + 2104),
                            v8,
                            &v12,
                            *(_QWORD *)(v6 + 1432)) )
      return 4077;
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_d(
        *(_QWORD *)(v6 + 1432),
        2u,
        5u,
        0x57u,
        (__int64)&WPP_84d33890ce5c36f044156420b7e16ac3_Traceguids,
        v8,
        v12,
        v13,
        v14,
        v15,
        v16,
        v17,
        v18);
    v9 = (PVOID *)(a1 + 2104);
  }
  v10 = 4065;
  if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 2) != 0 )
    McTemplateK0p_EtwWriteTransfer(
      v6,
      &USBHUB3_ETW_EVENT_INVALID_MSOS_EXTENDED_CONFIGURATION_DESCRIPTOR,
      (const GUID *)(a1 + 1516),
      *(_QWORD *)(a1 + 24));
  if ( *v9 )
  {
    ExFreePoolWithTag(*v9, 0x64334855u);
    *v9 = 0LL;
  }
  return v10;
}
