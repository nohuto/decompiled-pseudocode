__int64 __fastcall xxxWrapSendMessage(struct tagWND *a1, unsigned int a2)
{
  return xxxSendTransformableMessageTimeout(a1, a2, 0, 0, 0LL, 0, 1);
}
