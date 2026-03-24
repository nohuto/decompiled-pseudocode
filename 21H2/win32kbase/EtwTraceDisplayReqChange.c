/*
 * XREFs of EtwTraceDisplayReqChange @ 0x1C00B711C
 * Callers:
 *     UserPowerInfoCallout @ 0x1C004EC50 (UserPowerInfoCallout.c)
 * Callees:
 *     McTemplateK0qhq_EtwWriteTransfer @ 0x1C0126328 (McTemplateK0qhq_EtwWriteTransfer.c)
 */

char __fastcall EtwTraceDisplayReqChange(int a1, __int64 a2, int a3)
{
  char result; // al

  if ( (W32kEtwEnabledKeyword & 0x2000000000008000LL) != 0 )
  {
    result = byte_1C024A738 - 1;
    if ( (unsigned __int8)(byte_1C024A738 - 1) > 2u && (qword_1C024A720 & 0x2000000000008000LL) != 0 )
    {
      result = 0;
      if ( (qword_1C024A728 & 0x2000000000008000LL) == qword_1C024A728 )
      {
        result = 0;
        if ( (Microsoft_Windows_Win32kEnableBits & 8) != 0 )
          return McTemplateK0qhq_EtwWriteTransfer(
                   a1,
                   (unsigned int)&DisplayReqChangeEvent,
                   a3,
                   0x8000,
                   gProtocolType == 0,
                   a1);
      }
    }
  }
  return result;
}
