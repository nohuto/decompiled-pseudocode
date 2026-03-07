__int64 __fastcall FWUPDATE_EvtDeviceD0Entry(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rdi
  int v4; // eax
  __int64 v5; // rcx
  int v7; // [rsp+28h] [rbp-20h]
  int v8; // [rsp+30h] [rbp-18h]

  v2 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         a1,
         off_1C006A170);
  v3 = *(_QWORD *)v2;
  *(_DWORD *)(v2 + 28) = 1;
  v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 3104))(WdfDriverGlobals, a1);
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 4) != 0 )
  {
    v8 = v4;
    v7 = 1;
    McTemplateK0ppqq_EtwWriteTransfer(
      v5,
      &USBHUB3_ETW_EVENT_FIRMWARE_UPDATE_D0_ENTRY,
      (const GUID *)(v3 + 2276),
      *(_QWORD *)(v3 + 248),
      *(_QWORD *)(v3 + 2656),
      v7,
      v8);
  }
  return 0LL;
}
