__int64 __fastcall HUBPDO_ValidateURB(__int64 a1, unsigned __int16 *a2, __int64 a3)
{
  unsigned int v5; // esi
  unsigned int v6; // edi
  unsigned int v7; // eax
  int v9; // [rsp+20h] [rbp-28h]
  unsigned int v10; // [rsp+28h] [rbp-20h]

  if ( *a2 < 0x18u )
  {
    if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 8) != 0 )
      McTemplateK0ppn_EtwWriteTransfer(
        a1,
        &USBHUB3_ETW_EVENT_DISPATCH_URB_INVALID_HEADER_LENGTH_WARNING,
        (const GUID *)(*(_QWORD *)(a1 + 24) + 1516LL),
        *(_QWORD *)(a1 + 24) + 24LL,
        a2);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_dqd(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 8LL) + 1432LL), *a2, a3, 0x2Du, v9);
  }
  v5 = a2[1];
  v6 = 0;
  *((_DWORD *)a2 + 1) = 0;
  *((_DWORD *)a2 + 4) = 0;
  if ( v5 <= 0x3C )
  {
    if ( v5 == 30 || (unsigned __int16)(v5 - 48) <= 1u )
    {
      v7 = *a2;
      if ( (_WORD)v7 != 40 )
      {
        *((_DWORD *)a2 + 1) = -2147483136;
        v6 = -1073741811;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_dqd(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 8LL) + 1432LL), v7, 40LL, 0x2Fu, v9);
        if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 8) != 0 )
          McTemplateK0ppn_EtwWriteTransfer(
            a1,
            &USBHUB3_ETW_EVENT_DISPATCH_URB_INVALID_HEADER_LENGTH_WARNING,
            (const GUID *)(*(_QWORD *)(a1 + 24) + 1516LL),
            *(_QWORD *)(a1 + 24) + 24LL,
            a2);
      }
    }
  }
  else
  {
    *((_DWORD *)a2 + 1) = -2147483136;
    v6 = -1073741811;
    if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 0x10) != 0 )
      McTemplateK0ppn_EtwWriteTransfer(
        a1,
        &USBHUB3_ETW_EVENT_DISPATCH_URB_INVALID_FUNCTION,
        (const GUID *)(*(_QWORD *)(a1 + 24) + 1516LL),
        *(_QWORD *)(a1 + 24) + 24LL,
        a2);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v10 = v5;
      WPP_RECORDER_SF_dq(
        *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 8LL) + 1432LL),
        3u,
        a3,
        0x2Eu,
        (__int64)&WPP_89394142541e3c268d3f106ce98d6cb5_Traceguids,
        v10,
        a2);
    }
  }
  return v6;
}
