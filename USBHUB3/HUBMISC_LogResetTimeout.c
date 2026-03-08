/*
 * XREFs of HUBMISC_LogResetTimeout @ 0x1C0033E44
 * Callers:
 *     HUBDSM_LoggingResetTimeoutInResettingFor30 @ 0x1C0020C50 (HUBDSM_LoggingResetTimeoutInResettingFor30.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0002594 (WPP_RECORDER_SF_.c)
 *     McTemplateK0p_EtwWriteTransfer @ 0x1C00071D0 (McTemplateK0p_EtwWriteTransfer.c)
 *     HUBMISC_VerifierDbgBreak @ 0x1C0032FCC (HUBMISC_VerifierDbgBreak.c)
 */

char __fastcall HUBMISC_LogResetTimeout(__int64 a1)
{
  _UNKNOWN **v2; // rax
  _BYTE *v3; // rdx

  if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 1) != 0 )
    McTemplateK0p_EtwWriteTransfer(
      a1,
      &USBHUB3_ETW_EVENT_DEVICE_ENUMERATION_RESET_TIMEOUT,
      (const GUID *)(a1 + 1516),
      *(_QWORD *)(a1 + 24));
  v2 = &WPP_RECORDER_INITIALIZED;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    LOBYTE(v2) = WPP_RECORDER_SF_(
                   *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
                   2u,
                   5u,
                   0x77u,
                   (__int64)&WPP_f96a94952a6932bc87af489d3d93d325_Traceguids);
  v3 = *(_BYTE **)(a1 + 8);
  *(_DWORD *)(a1 + 2432) = 1073807362;
  if ( (v3[184] & 1) != 0 )
  {
    v2 = *(_UNKNOWN ***)v3;
    if ( (*(_DWORD *)(*(_QWORD *)v3 + 2592LL) & 0x40) != 0 )
      LOBYTE(v2) = HUBMISC_VerifierDbgBreak("HubHwVerifierPortResetTimeout", (__int64)(v3 + 272));
  }
  return (char)v2;
}
