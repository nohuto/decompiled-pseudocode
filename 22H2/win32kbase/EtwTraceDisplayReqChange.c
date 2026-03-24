/*
 * XREFs of EtwTraceDisplayReqChange @ 0x1C00B743C
 * Callers:
 *     UserPowerInfoCallout @ 0x1C004FC50 (UserPowerInfoCallout.c)
 * Callees:
 *     McTemplateK0qhq_EtwWriteTransfer @ 0x1C01265F8 (McTemplateK0qhq_EtwWriteTransfer.c)
 */

char __fastcall EtwTraceDisplayReqChange(int a1, __int64 a2, int a3)
{
  char result; // al

  if ( (W32kEtwEnabledKeyword & 0x2000000000008000LL) != 0 )
  {
    result = byte_1C0249748 - 1;
    if ( (unsigned __int8)(byte_1C0249748 - 1) > 2u && (qword_1C0249730 & 0x2000000000008000LL) != 0 )
    {
      result = 0;
      if ( (qword_1C0249738 & 0x2000000000008000LL) == qword_1C0249738 )
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
