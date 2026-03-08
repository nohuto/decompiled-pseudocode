/*
 * XREFs of HUBPDO_ReEnumerationCallback @ 0x1C001D680
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0002034 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1C0002594 (WPP_RECORDER_SF_.c)
 *     McTemplateK0pthhhtq_EtwWriteTransfer @ 0x1C00148B8 (McTemplateK0pthhhtq_EtwWriteTransfer.c)
 *     WPP_RECORDER_SF__guid_dd @ 0x1C0014D74 (WPP_RECORDER_SF__guid_dd.c)
 *     EventWriteUSBHUB3_ETW_EVENT_CLIENT_INITIATED_RECOVERY_ACTION_Wrapper @ 0x1C001D0E0 (EventWriteUSBHUB3_ETW_EVENT_CLIENT_INITIATED_RECOVERY_ACTION_Wrapper.c)
 *     _guard_dispatch_icall_nop @ 0x1C0044C50 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HUBPDO_ReEnumerationCallback(
        __int64 SettingGuid,
        unsigned __int8 *Value,
        __int64 ValueLength,
        _QWORD *Context)
{
  int v4; // r14d
  int v5; // esi
  int v6; // edi
  int v9; // eax
  __int64 v10; // r9
  __int64 v12; // [rsp+20h] [rbp-58h]
  __int64 v13; // [rsp+28h] [rbp-50h]
  int v14; // [rsp+30h] [rbp-48h]
  int v15; // [rsp+38h] [rbp-40h]

  v4 = *Value;
  v5 = 0;
  v6 = 0;
  if ( !(_BYTE)v4 )
  {
    Value = (unsigned __int8 *)Context[2];
    v6 = 1;
    if ( *((_DWORD *)Value + 100) != 1 )
    {
      v5 = -1073741811;
      v6 = 0;
      goto LABEL_14;
    }
    if ( !_InterlockedCompareExchange((volatile signed __int32 *)Value + 1, 1, 0) )
    {
      LOBYTE(ValueLength) = 1;
      v9 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64, _QWORD, int, const char *))(WdfFunctions_01015 + 3504))(
             WdfDriverGlobals,
             *(_QWORD *)(*Context + 16LL),
             ValueLength,
             0LL,
             11675,
             "onecore\\drivers\\wdm\\usb\\usb3\\hub\\src\\hubpdo.c");
      v5 = v9;
      if ( v9 < 0 )
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
LABEL_10:
          EventWriteUSBHUB3_ETW_EVENT_CLIENT_INITIATED_RECOVERY_ACTION_Wrapper((__int64)Context, 2228255LL, 0);
          (*(void (__fastcall **)(_QWORD, __int64))(Context[1] + 1240LL))(Context[1], 3011LL);
          if ( v5 >= 0 )
            (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD, __int64, const char *))(WdfFunctions_01015
                                                                                               + 3512))(
              WdfDriverGlobals,
              *(_QWORD *)(*Context + 16LL),
              0LL,
              11700LL,
              "onecore\\drivers\\wdm\\usb\\usb3\\hub\\src\\hubpdo.c");
          goto LABEL_14;
        }
        LODWORD(v13) = v9;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(*Context + 2520LL),
          2u,
          3u,
          0xA6u,
          (__int64)&WPP_89394142541e3c268d3f106ce98d6cb5_Traceguids,
          v13);
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_(
          *(_QWORD *)(Context[1] + 1432LL),
          4u,
          2u,
          0xA7u,
          (__int64)&WPP_89394142541e3c268d3f106ce98d6cb5_Traceguids);
      goto LABEL_10;
    }
    v6 = 0;
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_16;
    WPP_RECORDER_SF_(
      *(_QWORD *)(Context[1] + 1432LL),
      3u,
      5u,
      0xA8u,
      (__int64)&WPP_89394142541e3c268d3f106ce98d6cb5_Traceguids);
  }
LABEL_14:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    HIWORD(v15) = HIWORD(v5);
    HIWORD(v14) = HIWORD(v4);
    WPP_RECORDER_SF__guid_dd(*(_QWORD *)(Context[1] + 1432LL), (__int64)Value, ValueLength, 0xA9u, v12, SettingGuid);
  }
LABEL_16:
  if ( (BYTE3(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 0x20) != 0 )
  {
    v10 = *(_QWORD *)(Context[2] + 24LL);
    LOWORD(v15) = *(_WORD *)(v10 + 2000);
    LOWORD(v14) = *(_WORD *)(v10 + 1998);
    LOWORD(v13) = *(_WORD *)(v10 + 1996);
    LODWORD(v12) = v6;
    McTemplateK0pthhhtq_EtwWriteTransfer(
      SettingGuid,
      (__int64)Value,
      (const GUID *)(v10 + 1516),
      *(_QWORD *)(v10 + 24),
      v12,
      v13,
      v14,
      v15,
      v4,
      v5);
  }
  return (unsigned int)v5;
}
