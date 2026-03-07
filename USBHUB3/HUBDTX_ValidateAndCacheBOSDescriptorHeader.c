__int64 __fastcall HUBDTX_ValidateAndCacheBOSDescriptorHeader(__int64 a1)
{
  __int64 v1; // r14
  unsigned int v3; // edi
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rbx
  int v7; // edx
  bool v8; // cf
  __int64 v9; // rdx
  bool v10; // zf
  __int64 v11; // rbx
  _OWORD v13[4]; // [rsp+40h] [rbp-69h] BYREF
  _OWORD v14[3]; // [rsp+80h] [rbp-29h] BYREF
  __int64 v15; // [rsp+B0h] [rbp+7h]
  __int64 v16; // [rsp+B8h] [rbp+Fh]
  __int64 v17; // [rsp+C0h] [rbp+17h]
  int v18; // [rsp+C8h] [rbp+1Fh]
  int v19; // [rsp+CCh] [rbp+23h]
  _OWORD *v20; // [rsp+D0h] [rbp+27h]
  int v21; // [rsp+D8h] [rbp+2Fh]
  __int16 v22; // [rsp+DCh] [rbp+33h]
  int v23; // [rsp+110h] [rbp+67h] BYREF

  v1 = a1 + 1732;
  v3 = 4077;
  v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         WdfDriverGlobals->Driver,
         off_1C006A1E8);
  v6 = *(_QWORD *)(a1 + 8);
  *((_QWORD *)&v13[0] + 1) = 0LL;
  *(_QWORD *)&v13[3] = 0LL;
  v7 = *(_DWORD *)(v4 + 4);
  LODWORD(v13[0]) = *(unsigned __int16 *)(a1 + 1990);
  DWORD1(v13[0]) = *(_DWORD *)(a1 + 172);
  *(_WORD *)((char *)v13 + 13) = (v7 & 0x20) != 0;
  DWORD1(v13[1]) = 0;
  HIBYTE(v13[0]) = (v7 & 0x2000) != 0;
  v8 = (v7 & 0x4000) != 0;
  v9 = *(unsigned int *)(a1 + 256);
  v10 = (*(_DWORD *)(a1 + 1644) & 0x200000) == 0;
  BYTE12(v13[0]) = v8;
  *((_QWORD *)&v13[2] + 1) = a1;
  *(_QWORD *)&v13[3] = !v10;
  LODWORD(v13[1]) = *(_DWORD *)(v6 + 220);
  *((_QWORD *)&v13[1] + 1) = HUBMISC_LogDescriptorValidationErrorForDevice;
  *(_QWORD *)&v13[2] = &HUBMISC_LogDescriptorValidationWarningForDevice;
  if ( (unsigned int)v9 >= 5 )
  {
    v11 = *(_QWORD *)(v6 + 1432);
    v19 = 0;
    v21 = 0;
    v22 = 0;
    v18 = v9;
    v14[0] = v13[0];
    v23 = 0;
    v14[1] = v13[1];
    v14[2] = v13[2];
    v15 = *(_QWORD *)&v13[3];
    v16 = v1;
    v17 = v1 + v9;
    memset(v13, 0, sizeof(v13));
    v20 = v13;
    if ( (unsigned __int8)HUBDESC_InternalValidateBOSDescriptor(v1, (unsigned int)v14, (unsigned int)&v23, 0, v11) )
      return v3;
    *(_DWORD *)(a1 + 2432) = 1073807378;
  }
  else
  {
    *(_DWORD *)(a1 + 2432) = 1073807378;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_DD(
        *(_QWORD *)(v6 + 1432),
        2u,
        5u,
        0x3Cu,
        (__int64)&WPP_84d33890ce5c36f044156420b7e16ac3_Traceguids,
        v9,
        5);
  }
  v3 = 4065;
  if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 1) != 0 )
    McTemplateK0p_EtwWriteTransfer(
      v5,
      &USBHUB3_ETW_EVENT_INVALID_BOS_DESCRIPTOR_HEADER,
      (const GUID *)(a1 + 1516),
      *(_QWORD *)(a1 + 24));
  return v3;
}
