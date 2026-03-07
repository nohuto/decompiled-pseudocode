__int64 __fastcall FWUPDATE_EvtDeviceD0Exit(__int64 a1, int a2)
{
  __int64 v4; // rax
  __int64 v5; // rdi
  int v6; // eax
  __int64 v7; // rcx
  int v9; // [rsp+28h] [rbp-20h]
  int v10; // [rsp+30h] [rbp-18h]

  v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         a1,
         off_1C006A170);
  v5 = *(_QWORD *)v4;
  *(_DWORD *)(v4 + 28) = a2;
  v6 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 3104))(WdfDriverGlobals, a1);
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 4) != 0 )
  {
    v10 = v6;
    v9 = a2;
    McTemplateK0ppqq_EtwWriteTransfer(
      v7,
      &USBHUB3_ETW_EVENT_FIRMWARE_UPDATE_D0_EXIT,
      (const GUID *)(v5 + 2276),
      *(_QWORD *)(v5 + 248),
      *(_QWORD *)(v5 + 2656),
      v9,
      v10);
  }
  return 0LL;
}
