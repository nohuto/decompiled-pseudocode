/*
 * XREFs of xxxSendSizeMessage @ 0x1C00C3F18
 * Callers:
 *     ?xxxShowWindowEx@@YAHPEAUtagWND@@EW4MinMaxOptions@@@Z @ 0x1C002678C (-xxxShowWindowEx@@YAHPEAUtagWND@@EW4MinMaxOptions@@@Z.c)
 *     xxxCreateWindowEx @ 0x1C0035320 (xxxCreateWindowEx.c)
 *     xxxRealDefWindowProc @ 0x1C0108B10 (xxxRealDefWindowProc.c)
 * Callees:
 *     _GetClientRect @ 0x1C00C4608 (_GetClientRect.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C01271B0 (xxxSendTransformableMessageTimeout.c)
 */

__int64 __fastcall xxxSendSizeMessage(ULONG_PTR BugCheckParameter2)
{
  __int128 v3; // [rsp+50h] [rbp-18h] BYREF

  v3 = 0LL;
  GetClientRect(BugCheckParameter2, &v3);
  _InterlockedIncrement(&glSendMessage);
  return xxxSendTransformableMessageTimeout(BugCheckParameter2, 0, 0, 0LL, 1, 0);
}
