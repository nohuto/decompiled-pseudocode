__int64 __fastcall HUBPDO_CompleteClientSerialRequestWithStatusFailed(__int64 a1)
{
  __int64 v1; // rbp
  __int64 v3; // rcx
  _QWORD *v4; // rdi
  unsigned __int16 *v5; // rsi
  unsigned __int16 v6; // ax
  __int64 v8; // [rsp+20h] [rbp-58h]
  __int64 v9; // [rsp+28h] [rbp-50h]
  __int128 v10; // [rsp+30h] [rbp-48h] BYREF
  __int128 v11; // [rsp+40h] [rbp-38h]
  __int64 v12; // [rsp+50h] [rbp-28h]

  v1 = *(_QWORD *)(a1 + 456);
  *(_QWORD *)(a1 + 456) = 0LL;
  v10 = 0LL;
  *(_DWORD *)(a1 + 148) = 0;
  *(_QWORD *)(a1 + 152) = 0LL;
  v11 = 0LL;
  v12 = 0LL;
  LOWORD(v10) = 40;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int128 *))(WdfFunctions_01015 + 2128))(
    WdfDriverGlobals,
    v1,
    &v10);
  if ( DWORD2(v11) == 2228227 )
  {
    v4 = (_QWORD *)*((_QWORD *)&v10 + 1);
    *(_DWORD *)(*((_QWORD *)&v10 + 1) + 4LL) = -2147482880;
    v5 = (unsigned __int16 *)v4 + 1;
    if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 4) != 0 )
      McTemplateK0pqq_EtwWriteTransfer(
        v3,
        &USBHUB3_ETW_EVENT_DEVICE_URB_COMPLETE,
        (const GUID *)(a1 + 1516),
        *(_QWORD *)(a1 + 24),
        *v5,
        -2147482880);
    if ( *v5 == 1 || *v5 == 59 )
      _InterlockedOr((volatile signed __int32 *)(a1 + 1636), 0x10u);
    v6 = *v5;
    if ( *v5 )
    {
      if ( v6 == 1 )
      {
        v4[5] = -1LL;
      }
      else if ( v6 == 59 )
      {
        v4[7] = -1LL;
      }
    }
    else
    {
      v4[4] = 0LL;
    }
  }
  if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 4) != 0 )
  {
    LODWORD(v9) = -1073741823;
    LODWORD(v8) = DWORD2(v11);
    McTemplateK0pqq_EtwWriteTransfer(
      v3,
      &USBHUB3_ETW_EVENT_DEVICE_INTERNAL_IOCTL_COMPLETE,
      (const GUID *)(a1 + 1516),
      *(_QWORD *)(a1 + 24),
      v8,
      v9);
  }
  if ( (*(_DWORD *)(a1 + 1636) & 0x40) != 0 )
  {
    *(_OWORD *)(a1 + 1516) = 0LL;
    _InterlockedAnd((volatile signed __int32 *)(a1 + 1636), 0xFFFFFFBF);
  }
  return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64))(WdfFunctions_01015 + 2104))(
           WdfDriverGlobals,
           v1,
           3221225473LL);
}
