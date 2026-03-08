/*
 * XREFs of xxxSendSizeMessage @ 0x1C00FF5DC
 * Callers:
 *     ?xxxShowWindowEx@@YAHPEAUtagWND@@EW4MinMaxOptions@@@Z @ 0x1C002AE4C (-xxxShowWindowEx@@YAHPEAUtagWND@@EW4MinMaxOptions@@@Z.c)
 *     xxxRealDefWindowProc @ 0x1C00A8800 (xxxRealDefWindowProc.c)
 * Callees:
 *     xxxSendTransformableMessageTimeout @ 0x1C006E550 (xxxSendTransformableMessageTimeout.c)
 *     _GetClientRect @ 0x1C01016A4 (_GetClientRect.c)
 */

__int64 __fastcall xxxSendSizeMessage(struct tagWND *a1, unsigned int a2)
{
  __int128 v5; // [rsp+50h] [rbp-18h] BYREF

  v5 = 0LL;
  GetClientRect(a1, &v5);
  _InterlockedIncrement(&glSendMessage);
  return xxxSendTransformableMessageTimeout(
           a1,
           5u,
           a2,
           (__int128 *)((unsigned __int16)(WORD4(v5) - v5) | ((unsigned __int16)(WORD6(v5) - WORD2(v5)) << 16)),
           0,
           0,
           0LL,
           1,
           0);
}
