/*
 * XREFs of xxxSendSizeMessage @ 0x1C00FF870
 * Callers:
 *     ?xxxShowWindowEx@@YAHPEAUtagWND@@EK@Z @ 0x1C00491B4 (-xxxShowWindowEx@@YAHPEAUtagWND@@EK@Z.c)
 *     xxxRealDefWindowProc @ 0x1C0049E28 (xxxRealDefWindowProc.c)
 *     xxxCreateWindowEx @ 0x1C0075140 (xxxCreateWindowEx.c)
 * Callees:
 *     xxxSendTransformableMessageTimeout @ 0x1C00598F0 (xxxSendTransformableMessageTimeout.c)
 *     _GetClientRect @ 0x1C00FF8F8 (_GetClientRect.c)
 */

__int64 __fastcall xxxSendSizeMessage(unsigned __int64 a1, unsigned int a2)
{
  __int128 v5; // [rsp+50h] [rbp-18h] BYREF

  v5 = 0LL;
  GetClientRect(a1, &v5);
  _InterlockedIncrement(&glSendMessage);
  return xxxSendTransformableMessageTimeout(
           a1,
           5u,
           a2,
           (struct _LARGE_STRING *)((unsigned __int16)(WORD4(v5) - v5) | ((unsigned __int16)(WORD6(v5) - WORD2(v5)) << 16)),
           0,
           0,
           0LL,
           1,
           0);
}
