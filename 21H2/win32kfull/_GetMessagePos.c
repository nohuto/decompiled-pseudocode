/*
 * XREFs of _GetMessagePos @ 0x1C0101D84
 * Callers:
 *     NtUserGetMessagePos @ 0x1C0101D50 (NtUserGetMessagePos.c)
 *     xxxSysCommand @ 0x1C011BA1C (xxxSysCommand.c)
 *     ?xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAUMOVESIZEDATA@@@Z @ 0x1C020E1A8 (-xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAUMOVESIZEDATA@@@Z.c)
 *     ?xxxContScroll@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C0240920 (-xxxContScroll@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     xxxEndScroll @ 0x1C0241878 (xxxEndScroll.c)
 *     xxxSendHelpMessage @ 0x1C024A834 (xxxSendHelpMessage.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 */

__int64 GetMessagePos()
{
  __int64 v0; // rdx
  _DWORD *ThreadWin32Thread; // rbx
  __int64 v2; // rcx
  unsigned int CurrentThreadDpiAwarenessContext; // edi
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  ThreadWin32Thread = (_DWORD *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  LODWORD(v5) = ThreadWin32Thread[191];
  v2 = (unsigned int)ThreadWin32Thread[192];
  HIDWORD(v5) = ThreadWin32Thread[192];
  if ( ThreadWin32Thread[193] )
  {
    CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(v2, v0);
    if ( (((unsigned __int16)(CurrentThreadDpiAwarenessContext >> 8) ^ (unsigned __int16)(ThreadWin32Thread[193] >> 8)) & 0x1FF) != 0 )
    {
      LogicalToPhysicalDPIPoint(&v5, &v5, (unsigned int)ThreadWin32Thread[193], 0LL);
      PhysicalToLogicalDPIPoint(&v5, &v5, CurrentThreadDpiAwarenessContext, 0LL);
    }
  }
  else
  {
    v5 = 0LL;
  }
  return (unsigned __int16)v5 | (WORD2(v5) << 16);
}
