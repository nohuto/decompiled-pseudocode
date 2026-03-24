/*
 * XREFs of EtwTraceFocusChange @ 0x1C00A80F0
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0dq_EtwWriteTransfer @ 0x1C01253EC (McTemplateK0dq_EtwWriteTransfer.c)
 */

void __fastcall EtwTraceFocusChange(PETHREAD *a1, __int64 a2, __int64 a3)
{
  struct tagTHREADINFO *v4; // rcx
  unsigned int v5; // ebx
  unsigned int ThreadId; // esi

  if ( (W32kEtwEnabledKeyword & 0x8000000000002000uLL) != 0
    && (unsigned __int8)(byte_1C024A738 - 1) > 2u
    && (qword_1C024A720 & 0x8000000000002000uLL) != 0
    && (qword_1C024A728 & 0x8000000000002000uLL) == qword_1C024A728 )
  {
    v4 = gptiForeground;
    v5 = 0;
    if ( gptiForeground || a1 )
    {
      ThreadId = 0;
      if ( gptiForeground )
        ThreadId = (unsigned int)PsGetThreadId(*(PETHREAD *)gptiForeground);
      if ( a1 )
        v5 = (unsigned int)PsGetThreadId(*a1);
      if ( (Microsoft_Windows_Win32kEnableBits & 2) != 0 )
        McTemplateK0dq_EtwWriteTransfer(v4, &FocusEvent, a3, ThreadId, v5);
    }
  }
}
