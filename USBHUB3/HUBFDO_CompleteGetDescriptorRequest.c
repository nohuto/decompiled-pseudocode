/*
 * XREFs of HUBFDO_CompleteGetDescriptorRequest @ 0x1C000EA68
 * Callers:
 *     HUBSM_FindAndSetTargetState @ 0x1C000A96C (HUBSM_FindAndSetTargetState.c)
 *     HUBDTX_GetDeviceDescriptorComplete @ 0x1C002D8C0 (HUBDTX_GetDeviceDescriptorComplete.c)
 *     HUBDTX_GetDescriptorForFdoRequestUsingPreformattedUrb @ 0x1C002D9F4 (HUBDTX_GetDescriptorForFdoRequestUsingPreformattedUrb.c)
 *     HUBFDO_IoctlGetDescriptorFromNodeConnection @ 0x1C007A918 (HUBFDO_IoctlGetDescriptorFromNodeConnection.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0002034 (WPP_RECORDER_SF_d.c)
 *     McTemplateK0pqq_EtwWriteTransfer @ 0x1C000CE90 (McTemplateK0pqq_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C0044920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0044C50 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HUBFDO_CompleteGetDescriptorRequest(__int64 a1, int a2, __int64 a3, int a4, unsigned int a5)
{
  __int64 v9; // rcx
  int v10; // eax
  const GUID *v11; // r8
  __int64 v13; // [rsp+20h] [rbp-58h]
  __int64 v14; // [rsp+28h] [rbp-50h]
  __int128 v15; // [rsp+30h] [rbp-48h] BYREF

  v15 = 0LL;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_d(
      *(_QWORD *)(a1 + 2520),
      4u,
      3u,
      0x40u,
      (__int64)&WPP_440221f57c503424f19abf9386554ba7_Traceguids,
      a4,
      v15);
  if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 4) != 0 )
  {
    v9 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2280))(WdfDriverGlobals, a3);
    v10 = *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters
        ? (*(__int64 (__fastcall **)(__int64, __int128 *))&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters)(v9, &v15)
        : -1073741275;
    if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 4) != 0 )
    {
      v11 = (const GUID *)&v15;
      LODWORD(v14) = a4;
      LODWORD(v13) = a2;
      if ( v10 < 0 )
        v11 = 0LL;
      McTemplateK0pqq_EtwWriteTransfer(
        v9,
        &USBHUB3_ETW_EVENT_HUB_IOCTL_USB_GET_DESCRIPTOR_FROM_NODE_CONNECTION_COMPLETE,
        v11,
        *(_QWORD *)(a1 + 248),
        v13,
        v14);
    }
  }
  if ( a4 >= 0 )
    return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD, __int64))(WdfFunctions_01015 + 2120))(
             WdfDriverGlobals,
             a3,
             (unsigned int)a4,
             a5 + 12LL);
  else
    return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2104))(
             WdfDriverGlobals,
             a3,
             (unsigned int)a4);
}
