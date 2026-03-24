/*
 * XREFs of EtwTraceDisplayChange @ 0x1C00B7E00
 * Callers:
 *     ?UpdateDisplayState@@YAXW4_MONITOR_DISPLAY_STATE@@W4POWER_MONITOR_REQUEST_REASON@@HH@Z @ 0x1C0078BE4 (-UpdateDisplayState@@YAXW4_MONITOR_DISPLAY_STATE@@W4POWER_MONITOR_REQUEST_REASON@@HH@Z.c)
 *     ?UpdateSessionPowerState@@YAXHW4POWER_MONITOR_REQUEST_REASON@@@Z @ 0x1C0118FDC (-UpdateSessionPowerState@@YAXHW4POWER_MONITOR_REQUEST_REASON@@@Z.c)
 * Callees:
 *     McTemplateK0qqhhh_EtwWriteTransfer @ 0x1C01265A8 (McTemplateK0qqhhh_EtwWriteTransfer.c)
 */

char __fastcall EtwTraceDisplayChange(int a1, __int64 a2, int a3)
{
  char result; // al

  if ( (W32kEtwEnabledKeyword & 0x2000000000008000LL) != 0 )
  {
    result = byte_1C024A738 - 1;
    if ( (unsigned __int8)(byte_1C024A738 - 1) > 2u && (qword_1C024A720 & 0x2000000000008000LL) != 0 )
    {
      result = 0;
      if ( (qword_1C024A728 & 0x2000000000008000LL) == qword_1C024A728 && (Microsoft_Windows_Win32kEnableBits & 8) != 0 )
        return McTemplateK0qqhhh_EtwWriteTransfer(
                 a1,
                 0x8000,
                 a3,
                 gPowerDisplayState,
                 qword_1C0252168,
                 dword_1C025219C,
                 dword_1C02521A0,
                 word_1C02521A4);
    }
  }
  return result;
}
