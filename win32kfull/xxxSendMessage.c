__int64 __fastcall xxxSendMessage(struct tagWND *a1, unsigned int a2)
{
  _InterlockedAdd(&glSendMessage, 1u);
  return xxxSendTransformableMessageTimeout(a1, a2, 0, 0, 0LL, 1, 1);
}
