/*
 * XREFs of HUBPDO_CompleteClientSerialRequestWithLastStatus @ 0x1C0014490
 * Callers:
 *     HUBDSM_CompletingClientRequestOnFailureInConfigured @ 0x1C001C860 (HUBDSM_CompletingClientRequestOnFailureInConfigured.c)
 *     HUBDSM_CompletingClientUnconfigureRequestWithFailure @ 0x1C001C900 (HUBDSM_CompletingClientUnconfigureRequestWithFailure.c)
 * Callees:
 *     McTemplateK0pqq_EtwWriteTransfer @ 0x1C000BCAC (McTemplateK0pqq_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C00428D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0042A60 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HUBPDO_CompleteClientSerialRequestWithLastStatus(__int64 a1)
{
  __int64 v1; // rbp
  int v2; // esi
  __int64 v4; // rcx
  __int64 v5; // rdi
  __int16 v6; // ax
  __int64 v8; // [rsp+20h] [rbp-58h]
  __int64 v9; // [rsp+28h] [rbp-50h]
  __int128 v10; // [rsp+30h] [rbp-48h] BYREF
  __int128 v11; // [rsp+40h] [rbp-38h]
  __int64 v12; // [rsp+50h] [rbp-28h]

  v1 = *(_QWORD *)(a1 + 456);
  v2 = *(_DWORD *)(a1 + 1560);
  v10 = 0LL;
  v11 = 0LL;
  v12 = 0LL;
  LOWORD(v10) = 40;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int128 *))(WdfFunctions_01015 + 2128))(
    WdfDriverGlobals,
    v1,
    &v10);
  if ( DWORD2(v11) == 2228227 )
  {
    v5 = *((_QWORD *)&v10 + 1);
    v4 = *(unsigned int *)(a1 + 1564);
    *(_DWORD *)(*((_QWORD *)&v10 + 1) + 4LL) = v4;
    if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 4) != 0 )
      McTemplateK0pqq_EtwWriteTransfer(
        v4,
        &USBHUB3_ETW_EVENT_DEVICE_URB_COMPLETE,
        (const GUID *)(a1 + 1516),
        *(_QWORD *)(a1 + 24),
        *(unsigned __int16 *)(v5 + 2),
        v4);
    v6 = *(_WORD *)(v5 + 2);
    if ( v6 == 1 || v6 == 59 )
    {
      _InterlockedOr((volatile signed __int32 *)(a1 + 1636), 0x10u);
      v6 = *(_WORD *)(v5 + 2);
    }
    if ( v6 )
    {
      if ( v6 == 1 )
      {
        *(_QWORD *)(v5 + 40) = -1LL;
      }
      else if ( v6 == 59 )
      {
        *(_QWORD *)(v5 + 56) = -1LL;
      }
    }
    else
    {
      *(_QWORD *)(v5 + 32) = 0LL;
    }
  }
  *(_QWORD *)(a1 + 456) = 0LL;
  *(_DWORD *)(a1 + 148) = 0;
  *(_QWORD *)(a1 + 152) = 0LL;
  *(_QWORD *)(a1 + 1560) = 0LL;
  if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 4) != 0 )
  {
    LODWORD(v9) = v2;
    LODWORD(v8) = DWORD2(v11);
    McTemplateK0pqq_EtwWriteTransfer(
      v4,
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
  if ( v2 >= 0 )
    v2 = -1073741823;
  return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2104))(
           WdfDriverGlobals,
           v1,
           (unsigned int)v2);
}
