/*
 * XREFs of EtwTraceFocusedProcessChange @ 0x1C00B6F00
 * Callers:
 *     ??1ForegroundChangeTracker@CActivationObjectManager@@QEAA@XZ @ 0x1C0091630 (--1ForegroundChangeTracker@CActivationObjectManager@@QEAA@XZ.c)
 * Callees:
 *     McTemplateK0qqq_EtwWriteTransfer @ 0x1C00E5834 (McTemplateK0qqq_EtwWriteTransfer.c)
 */

char __fastcall EtwTraceFocusedProcessChange(int a1, char a2, int a3)
{
  char result; // al

  if ( (W32kEtwEnabledKeyword & 0x8000000000020000uLL) != 0 )
  {
    result = byte_1C028DB38 - 1;
    if ( (unsigned __int8)(byte_1C028DB38 - 1) > 2u && (qword_1C028DB20 & 0x8000000000020000uLL) != 0 )
    {
      result = 0;
      if ( (qword_1C028DB28 & 0x8000000000020000uLL) == qword_1C028DB28
        && (Microsoft_Windows_Win32kEnableBits & 0x20) != 0 )
      {
        return McTemplateK0qqq_EtwWriteTransfer(a1, (unsigned int)&FocusedProcessChangeEvent, a3, gSessionId, a1, a2);
      }
    }
  }
  return result;
}
