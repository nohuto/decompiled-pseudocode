__int64 __fastcall HUBDTX_ValidateAndCacheMSOSContainerIdDescriptorHeader(__int64 a1)
{
  unsigned int v2; // esi
  __int64 v3; // r15
  char v4; // al
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v8; // [rsp+28h] [rbp-20h]
  __int64 v9; // [rsp+30h] [rbp-18h]

  v2 = 4077;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
    WdfDriverGlobals,
    WdfDriverGlobals->Driver,
    off_1C006A1E8);
  v3 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL);
  v4 = 1;
  if ( *(_DWORD *)(a1 + 256) == 8 )
  {
    if ( *(_WORD *)(a1 + 1736) != 256 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_DD(
          v3,
          2u,
          5u,
          0x107u,
          (__int64)&WPP_f469c93bdbd23e392266c2e57c8e9931_Traceguids,
          *(unsigned __int16 *)(a1 + 1736),
          256);
      HUBMISC_LogDescriptorValidationErrorForDevice(a1, 115LL);
      v4 = 0;
    }
    if ( *(_WORD *)(a1 + 1738) != 6 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v9) = 6;
        LODWORD(v8) = *(unsigned __int16 *)(a1 + 1738);
        WPP_RECORDER_SF_DD(v3, 2u, 5u, 0x108u, (__int64)&WPP_f469c93bdbd23e392266c2e57c8e9931_Traceguids, v8, v9);
      }
      HUBMISC_LogDescriptorValidationErrorForDevice(a1, 116LL);
      v4 = 0;
    }
    v6 = *(unsigned int *)(a1 + 1732);
    if ( (_DWORD)v6 == 24 )
    {
      if ( v4 )
        return v2;
      goto LABEL_19;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v9) = 24;
      LODWORD(v8) = *(_DWORD *)(a1 + 1732);
      WPP_RECORDER_SF_DD(v3, 2u, 5u, 0x109u, (__int64)&WPP_f469c93bdbd23e392266c2e57c8e9931_Traceguids, v8, v9);
    }
    v5 = 118LL;
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_d(
        v3,
        2u,
        5u,
        0x106u,
        (__int64)&WPP_f469c93bdbd23e392266c2e57c8e9931_Traceguids,
        *(_DWORD *)(a1 + 256));
    v5 = 117LL;
  }
  HUBMISC_LogDescriptorValidationErrorForDevice(a1, v5);
LABEL_19:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(v3, 2u, 5u, 0x10Au, (__int64)&WPP_f469c93bdbd23e392266c2e57c8e9931_Traceguids);
  *(_DWORD *)(a1 + 2432) = 1073807381;
  v2 = 4065;
  if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 2) != 0 )
    McTemplateK0p_EtwWriteTransfer(
      v6,
      &USBHUB3_ETW_EVENT_INVALID_MSOS_CONTAINER_ID_DESCRIPTOR_HEADER,
      (const GUID *)(a1 + 1516),
      *(_QWORD *)(a1 + 24));
  return v2;
}
