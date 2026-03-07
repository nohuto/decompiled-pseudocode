__int64 __fastcall HUBDSM_ValidatingMSOSContainerIdDescriptor(__int64 a1)
{
  __int64 v1; // rbx
  unsigned int v2; // edi
  __int64 v3; // rbp
  __int64 v4; // rdx
  __int64 v5; // rcx
  int v7; // [rsp+28h] [rbp-20h]
  int v8; // [rsp+30h] [rbp-18h]

  v1 = *(_QWORD *)(a1 + 960);
  v2 = 4077;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
    WdfDriverGlobals,
    WdfDriverGlobals->Driver,
    off_1C006A1E8);
  v3 = *(_QWORD *)(*(_QWORD *)(v1 + 8) + 1432LL);
  if ( *(_DWORD *)(v1 + 256) == 24 )
  {
    if ( *(_QWORD *)(v1 + 1740) != *(_QWORD *)&GUID_NULL.Data1 || *(_QWORD *)(v1 + 1748) != *(_QWORD *)GUID_NULL.Data4 )
    {
      *(_OWORD *)(v1 + 2064) = *(_OWORD *)(v1 + 1740);
      _InterlockedOr((volatile signed __int32 *)(v1 + 1632), 8u);
      return v2;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(v3, 2u, 5u, 0x10Cu, (__int64)&WPP_f469c93bdbd23e392266c2e57c8e9931_Traceguids);
    v4 = 114LL;
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v8 = 24;
      v7 = *(_DWORD *)(v1 + 256);
      WPP_RECORDER_SF_DD(v3, 2u, 5u, 0x10Bu, (__int64)&WPP_f469c93bdbd23e392266c2e57c8e9931_Traceguids, v7, v8);
    }
    v4 = 117LL;
  }
  HUBMISC_LogDescriptorValidationErrorForDevice(v1, v4);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(v3, 2u, 5u, 0x10Du, (__int64)&WPP_f469c93bdbd23e392266c2e57c8e9931_Traceguids);
  v2 = 4065;
  if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 2) != 0 )
    McTemplateK0p_EtwWriteTransfer(
      v5,
      &USBHUB3_ETW_EVENT_INVALID_MSOS_CONTAINER_ID_DESCRIPTOR,
      (const GUID *)(v1 + 1516),
      *(_QWORD *)(v1 + 24));
  return v2;
}
