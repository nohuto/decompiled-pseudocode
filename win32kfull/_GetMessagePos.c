/*
 * XREFs of _GetMessagePos @ 0x1C00E6844
 * Callers:
 *     xxxSysCommand @ 0x1C00DE67C (xxxSysCommand.c)
 *     NtUserGetMessagePos @ 0x1C00E6810 (NtUserGetMessagePos.c)
 *     ?xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAUMOVESIZEDATA@@@Z @ 0x1C01EFBFC (-xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAUMOVESIZEDATA@@@Z.c)
 *     ?xxxContScroll@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C022BFF0 (-xxxContScroll@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     xxxEndScroll @ 0x1C022CE90 (xxxEndScroll.c)
 *     xxxSendHelpMessage @ 0x1C023C5F8 (xxxSendHelpMessage.c)
 * Callees:
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C0047B70 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 */

__int64 __fastcall GetMessagePos(__int64 a1)
{
  struct tagTHREADINFO *v1; // rbx
  __int64 v2; // rcx
  unsigned int CurrentThreadDpiAwarenessContext; // edi
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  v1 = PtiCurrentShared(a1);
  LODWORD(v5) = *((_DWORD *)v1 + 191);
  v2 = *((unsigned int *)v1 + 192);
  HIDWORD(v5) = *((_DWORD *)v1 + 192);
  if ( *((_DWORD *)v1 + 193) )
  {
    CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(v2);
    if ( (((unsigned __int16)(CurrentThreadDpiAwarenessContext >> 8) ^ (unsigned __int16)(*((_DWORD *)v1 + 193) >> 8)) & 0x1FF) != 0 )
    {
      LogicalToPhysicalDPIPoint(&v5, &v5, *((unsigned int *)v1 + 193), 0LL);
      PhysicalToLogicalDPIPoint(&v5, &v5, CurrentThreadDpiAwarenessContext, 0LL);
    }
  }
  else
  {
    v5 = 0LL;
  }
  return (unsigned __int16)v5 | (WORD2(v5) << 16);
}
