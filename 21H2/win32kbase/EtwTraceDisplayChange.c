/*
 * XREFs of EtwTraceDisplayChange @ 0x1C00D0BC0
 * Callers:
 *     ?UpdateDisplayState@@YAXW4_MONITOR_DISPLAY_STATE@@W4POWER_MONITOR_REQUEST_REASON@@HH@Z @ 0x1C00D0788 (-UpdateDisplayState@@YAXW4_MONITOR_DISPLAY_STATE@@W4POWER_MONITOR_REQUEST_REASON@@HH@Z.c)
 *     ?UpdateSessionPowerState@@YAXHW4POWER_MONITOR_REQUEST_REASON@@@Z @ 0x1C014747C (-UpdateSessionPowerState@@YAXHW4POWER_MONITOR_REQUEST_REASON@@@Z.c)
 * Callees:
 *     McTemplateK0qqhhh_EtwWriteTransfer @ 0x1C0150BB4 (McTemplateK0qqhhh_EtwWriteTransfer.c)
 */

char __fastcall EtwTraceDisplayChange(int a1, __int64 a2, int a3)
{
  char result; // al

  if ( (W32kEtwEnabledKeyword & 0x2000000000008000LL) != 0 )
  {
    result = byte_1C028DB38 - 1;
    if ( (unsigned __int8)(byte_1C028DB38 - 1) > 2u && (qword_1C028DB20 & 0x2000000000008000LL) != 0 )
    {
      result = 0;
      if ( (qword_1C028DB28 & 0x2000000000008000LL) == qword_1C028DB28 && (Microsoft_Windows_Win32kEnableBits & 8) != 0 )
        return McTemplateK0qqhhh_EtwWriteTransfer(
                 a1,
                 0x8000,
                 a3,
                 gPowerDisplayState,
                 qword_1C0296F38,
                 dword_1C0296F6C,
                 dword_1C0296F70,
                 word_1C0296F74);
    }
  }
  return result;
}
