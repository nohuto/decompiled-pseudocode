__int64 __fastcall HUBDTX_ValidateInterfaceStatusForRemoteWakeCapability(__int64 a1)
{
  unsigned int v2; // edi
  int v3; // edx
  __int64 v4; // rcx
  __int64 v6; // [rsp+20h] [rbp-28h]
  __int64 v7; // [rsp+28h] [rbp-20h]
  __int16 v8; // [rsp+30h] [rbp-18h]

  v2 = 4077;
  if ( *(_DWORD *)(a1 + 256) != 2 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_d(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
        2u,
        5u,
        0x1Fu,
        (__int64)&WPP_84d33890ce5c36f044156420b7e16ac3_Traceguids,
        *(_DWORD *)(a1 + 256));
    return 4065;
  }
  v3 = *(_DWORD *)(a1 + 1632);
  if ( (v3 & 0x100) != 0 || (*(_BYTE *)(a1 + 1732) & 1) == 0 )
  {
    if ( (v3 & 4) == 0 && (v3 & 0x100) != 0 && (*(_BYTE *)(a1 + 1732) & 1) == 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_q(
          *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
          3u,
          5u,
          0x21u,
          (__int64)&WPP_84d33890ce5c36f044156420b7e16ac3_Traceguids,
          a1);
      if ( (*(_DWORD *)(a1 + 2436) & 0x10) != 0 )
        HUBMISC_VerifierDbgBreak("DeviceHwVerifierInterfaceWakeCapabilityMismatch", a1 + 504);
      if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 2) != 0 )
      {
        v4 = (*(_DWORD *)(a1 + 1632) >> 8) & 1;
        v8 = *(_WORD *)(a1 + 1732) & 1;
        LODWORD(v7) = (*(_DWORD *)(a1 + 1632) >> 8) & 1;
        LODWORD(v6) = (*(_DWORD *)(a1 + 1632) >> 2) & 1;
        goto LABEL_22;
      }
    }
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_q(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
        3u,
        5u,
        0x20u,
        (__int64)&WPP_84d33890ce5c36f044156420b7e16ac3_Traceguids,
        a1);
    if ( (*(_DWORD *)(a1 + 2436) & 0x10) != 0 )
      HUBMISC_VerifierDbgBreak("DeviceHwVerifierInterfaceWakeCapabilityMismatch", a1 + 504);
    if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 2) != 0 )
    {
      v4 = *(unsigned __int16 *)(a1 + 1732);
      LOWORD(v4) = *(_WORD *)(a1 + 1732) & 1;
      v8 = v4;
      LODWORD(v7) = (*(_DWORD *)(a1 + 1632) >> 8) & 1;
      LODWORD(v6) = (*(_DWORD *)(a1 + 1632) >> 2) & 1;
LABEL_22:
      McTemplateK0pqqh_EtwWriteTransfer(
        v4,
        &USBHUB3_ETW_EVENT_INTERFACE_WAKE_CAPABILITY_MISMATCH,
        (const GUID *)(a1 + 1516),
        *(_QWORD *)(a1 + 24),
        v6,
        v7,
        v8);
    }
  }
  return v2;
}
