NTSTATUS __fastcall HUBMISC_LogDeviceReEnumeration(__int64 a1)
{
  NTSTATUS result; // eax
  int v3; // [rsp+28h] [rbp-10h]

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v3 = *(_DWORD *)(a1 + 1356);
    WPP_RECORDER_SF_d(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
      2u,
      5u,
      0xFu,
      (__int64)&WPP_f96a94952a6932bc87af489d3d93d325_Traceguids,
      v3);
  }
  result = *(_DWORD *)(a1 + 2436);
  if ( (result & 0x40) != 0 )
    result = HUBMISC_VerifierDbgBreak("DeviceHwVerifierBusRenumeration", a1 + 504);
  if ( (BYTE2(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 0x40) != 0 )
    return McTemplateK0p_EtwWriteTransfer(
             a1,
             &USBHUB3_ETW_EVENT_BUS_RENUMERATION,
             (const GUID *)(a1 + 1516),
             *(_QWORD *)(a1 + 24));
  return result;
}
