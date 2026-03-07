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
