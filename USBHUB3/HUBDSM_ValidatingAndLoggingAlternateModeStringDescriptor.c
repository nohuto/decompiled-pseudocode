__int64 __fastcall HUBDSM_ValidatingAndLoggingAlternateModeStringDescriptor(__int64 a1)
{
  __int64 v1; // rdi
  unsigned int v2; // esi
  int v3; // ebx
  __int64 v4; // rax
  __int64 v5; // rcx
  int v6; // edx
  bool v7; // zf
  int v8; // r9d
  __int64 v9; // rcx
  _WORD v11[2]; // [rsp+30h] [rbp-40h] BYREF
  int v12; // [rsp+34h] [rbp-3Ch]
  __int64 v13; // [rsp+38h] [rbp-38h]
  int v14; // [rsp+40h] [rbp-30h]
  int v15; // [rsp+44h] [rbp-2Ch]
  __int64 (__fastcall *v16)(_QWORD, _QWORD); // [rsp+48h] [rbp-28h]
  void *v17; // [rsp+50h] [rbp-20h]
  __int64 v18; // [rsp+58h] [rbp-18h]
  _BOOL8 v19; // [rsp+60h] [rbp-10h]
  int v20; // [rsp+A0h] [rbp+30h] BYREF

  v1 = *(_QWORD *)(a1 + 960);
  v2 = 4077;
  v3 = *(_DWORD *)(v1 + 256);
  v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         WdfDriverGlobals->Driver,
         off_1C006A1E8);
  v5 = *(_QWORD *)(v1 + 8);
  v18 = v1;
  v13 = 0LL;
  v6 = *(_DWORD *)(v4 + 4);
  v11[0] = *(_WORD *)(v1 + 1990);
  v12 = *(_DWORD *)(v1 + 172);
  v19 = 0LL;
  *(_WORD *)((char *)&v13 + 5) = (v6 & 0x20) != 0;
  v11[1] = 0;
  HIBYTE(v13) = (v6 & 0x2000) != 0;
  v15 = 0;
  v7 = (*(_DWORD *)(v1 + 1644) & 0x200000) == 0;
  BYTE4(v13) = (v6 & 0x4000) != 0;
  v20 = 0;
  v19 = !v7;
  v14 = *(_DWORD *)(v5 + 220);
  v16 = HUBMISC_LogDescriptorValidationErrorForDevice;
  v17 = &HUBMISC_LogDescriptorValidationWarningForDevice;
  if ( (unsigned __int8)HUBDESC_InternalValidateStringDescriptor(
                          (int)v1 + 1732,
                          v3,
                          (unsigned int)&v20,
                          v8,
                          *(_QWORD *)(v5 + 1432),
                          (__int64)v11) )
  {
    HUBDTX_LogAlternateMode(v1, v1 + 1732);
  }
  else
  {
    *(_DWORD *)(v1 + 2432) = 1073807392;
    v2 = 4065;
    if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 2) != 0 )
      McTemplateK0p_EtwWriteTransfer(
        v9,
        &USBHUB3_ETW_EVENT_INVALID_ALTERNATE_MODE_STRING_DESCRIPTOR,
        (const GUID *)(v1 + 1516),
        *(_QWORD *)(v1 + 24));
  }
  ++*(_BYTE *)(*(_QWORD *)(v1 + 2648) + 8LL);
  return v2;
}
