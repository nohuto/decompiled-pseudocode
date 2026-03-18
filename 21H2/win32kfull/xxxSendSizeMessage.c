/*
 * XREFs of xxxSendSizeMessage @ 0x1C00F2578
 * Callers:
 *     xxxCreateWindowEx @ 0x1C0043E80 (xxxCreateWindowEx.c)
 *     xxxRealDefWindowProc @ 0x1C0067528 (xxxRealDefWindowProc.c)
 *     ?xxxShowWindowEx@@YAHPEAUtagWND@@EW4MinMaxOptions@@@Z @ 0x1C00699A0 (-xxxShowWindowEx@@YAHPEAUtagWND@@EW4MinMaxOptions@@@Z.c)
 * Callees:
 *     xxxSendTransformableMessageTimeout @ 0x1C0050D70 (xxxSendTransformableMessageTimeout.c)
 *     _GetClientRect @ 0x1C00F2600 (_GetClientRect.c)
 */

__int64 __fastcall xxxSendSizeMessage(unsigned __int64 *BugCheckParameter2, unsigned int a2)
{
  __int128 v5; // [rsp+50h] [rbp-18h] BYREF

  v5 = 0LL;
  GetClientRect(BugCheckParameter2, &v5);
  _InterlockedIncrement(&glSendMessage);
  return xxxSendTransformableMessageTimeout(
           BugCheckParameter2,
           5u,
           a2,
           (unsigned __int16)(WORD4(v5) - v5) | ((unsigned __int16)(WORD6(v5) - WORD2(v5)) << 16),
           0,
           0,
           0LL,
           1,
           0);
}
