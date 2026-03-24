/*
 * XREFs of EtwTraceFocusedProcessChange @ 0x1C00A7E40
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0qqq_EtwWriteTransfer @ 0x1C01250D4 (McTemplateK0qqq_EtwWriteTransfer.c)
 */

char __fastcall EtwTraceFocusedProcessChange(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  int v5; // ecx
  int v6; // edx

  if ( (W32kEtwEnabledKeyword & 0x8000000000020000uLL) != 0 )
  {
    LOBYTE(v4) = byte_1C024A738 - 1;
    if ( (unsigned __int8)(byte_1C024A738 - 1) > 2u && (qword_1C024A720 & 0x8000000000020000uLL) != 0 )
    {
      LOBYTE(v4) = 0;
      if ( (qword_1C024A728 & 0x8000000000020000uLL) == qword_1C024A728 )
      {
        v5 = 0;
        if ( a1 )
        {
          v4 = *(_QWORD *)(a1 + 424);
          v6 = *(_DWORD *)(v4 + 56);
        }
        else
        {
          LOBYTE(v6) = 0;
        }
        if ( a2 )
        {
          v4 = *(_QWORD *)(a2 + 424);
          v5 = *(_DWORD *)(v4 + 56);
        }
        if ( (Microsoft_Windows_Win32kEnableBits & 0x20) != 0 )
          LOBYTE(v4) = McTemplateK0qqq_EtwWriteTransfer(
                         v5,
                         (unsigned int)&FocusedProcessChangeEvent,
                         a1,
                         gSessionId,
                         v5,
                         v6);
      }
    }
  }
  return v4;
}
