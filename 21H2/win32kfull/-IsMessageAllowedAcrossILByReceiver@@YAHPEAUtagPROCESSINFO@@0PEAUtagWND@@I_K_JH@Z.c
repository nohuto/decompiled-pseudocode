/*
 * XREFs of ?IsMessageAllowedAcrossILByReceiver@@YAHPEAUtagPROCESSINFO@@0PEAUtagWND@@I_K_JH@Z @ 0x1C00A75A0
 * Callers:
 *     xxxInterSendMsgEx @ 0x1C00517B0 (xxxInterSendMsgEx.c)
 *     NtUserPostMessage @ 0x1C0054740 (NtUserPostMessage.c)
 *     ?xxxWrapRealDefWindowProc@@YA_JPEAUtagWND@@I_K_J1@Z @ 0x1C00673C0 (-xxxWrapRealDefWindowProc@@YA_JPEAUtagWND@@I_K_J1@Z.c)
 *     xxxRealDefWindowProc @ 0x1C0067528 (xxxRealDefWindowProc.c)
 *     _PostTransformableMessageIL @ 0x1C00A735C (_PostTransformableMessageIL.c)
 *     NtUserPostThreadMessage @ 0x1C00AAB70 (NtUserPostThreadMessage.c)
 *     ?CheckProcessIdentity@@YAHPEAUtagWND@@I_K_J@Z @ 0x1C0119178 (-CheckProcessIdentity@@YAHPEAUtagWND@@I_K_J@Z.c)
 *     _PostMessageCheckIL @ 0x1C01DD244 (_PostMessageCheckIL.c)
 * Callees:
 *     ?GetWindowMessageFilter@@YAPEAPEAXPEAUtagWND@@@Z @ 0x1C00A767C (-GetWindowMessageFilter@@YAPEAPEAXPEAUtagWND@@@Z.c)
 *     MSGSQMAddMessage @ 0x1C00A770C (MSGSQMAddMessage.c)
 *     ?IsMessageAllowedByFilterEx@@YAHPEBQEAXIPEAPEAPEAX1@Z @ 0x1C00FA678 (-IsMessageAllowedByFilterEx@@YAHPEBQEAXIPEAPEAPEAX1@Z.c)
 */

__int64 __fastcall IsMessageAllowedAcrossILByReceiver(
        struct tagPROCESSINFO *a1,
        void *const **a2,
        struct tagWND *a3,
        unsigned int a4,
        unsigned __int64 a5,
        __int64 a6,
        int a7)
{
  unsigned int v11; // ebx
  void *const *WindowMessageFilter; // rax

  v11 = IsMessageAllowedByFilterEx(a2[106], a4, 0LL, 0LL);
  if ( v11 )
  {
    MSGSQMAddMessage(a1, (struct tagPROCESSINFO *)a2, a6, a7, 3);
  }
  else if ( a3 )
  {
    WindowMessageFilter = GetWindowMessageFilter(a3);
    v11 = IsMessageAllowedByFilterEx(WindowMessageFilter, a4, 0LL, 0LL);
    if ( v11 )
      MSGSQMAddMessage(a1, (struct tagPROCESSINFO *)a2, a6, a7, 4);
  }
  return v11;
}
